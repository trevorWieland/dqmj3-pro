import argparse
import hashlib
import json
import lzma
import shutil
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import bootstrap_public_compiler as compiler


ROOT = Path(__file__).resolve().parents[1]
LANES = ("wave001-native", "wave002-native", "wave003-abi", "wave004-native", "wave005-native", "wave006-native",
         "wave007-native", "wave008-native")
FLAGS = {"--target=arm-none-eabi", "-mcpu=mpcore", "-marm", "-O2", "-ffreestanding", "-ffunction-sections",
         "-fno-unwind-tables", "-fno-asynchronous-unwind-tables", "-fomit-frame-pointer", "-fno-optimize-sibling-calls"}


def read(path):
    return json.loads(path.read_text(encoding="utf-8"))


def verify(path, expected, size=None):
    if not path.is_file() or compiler.digest(path) != expected or size is not None and path.stat().st_size != size:
        raise RuntimeError("Input identity mismatch: " + path.name)


def materialize_inputs(root, private):
    project = read(root / "project.json")
    manifest = read(private / "inputs-manifest.json")
    expected = {Path(project["inputs"][label]).name: (project["inputs"][label], project[label + "CiaSha256"])
                for label in ("base", "update")}
    if manifest["schemaVersion"] != 1 or len(manifest["files"]) != 2 or {row["path"] for row in manifest["files"]} != set(expected):
        raise RuntimeError("Private manifest must identify exactly the two measured CIA inputs")
    rows = []
    for row in manifest["files"]:
        relative, wanted = expected[row["path"]]
        if row["compression"] != "xz" or row["sha256"] != wanted or row["bytes"] <= 0 or not row["parts"]:
            raise RuntimeError("Private manifest differs from pinned input contract")
        parts = []
        for part in row["parts"]:
            if Path(part["path"]).name != part["path"] or part["bytes"] <= 0:
                raise RuntimeError("Invalid private input part")
            source = compiler.contained(private, part["path"])
            verify(source, part["sha256"], part["bytes"])
            if source in parts:
                raise RuntimeError("Duplicated private input part")
            parts.append(source)
        target = compiler.contained(root, relative)
        if target.exists():
            verify(target, wanted, row["bytes"])
        else:
            target.parent.mkdir(parents=True, exist_ok=True)
            temporary = target.with_suffix(".download")
            decoder = lzma.LZMADecompressor(format=lzma.FORMAT_XZ)
            total = 0
            with temporary.open("wb") as output:
                for part in parts:
                    with part.open("rb") as source:
                        while block := source.read(1024 * 1024):
                            if decoder.eof:
                                raise RuntimeError("Trailing input after compressed CIA")
                            decoded = decoder.decompress(block, max_length=1024 * 1024)
                            while True:
                                total += len(decoded)
                                if total > row["bytes"]:
                                    raise RuntimeError("Decompressed private input exceeds measured extent")
                                output.write(decoded)
                                if decoder.needs_input or decoder.eof:
                                    break
                                decoded = decoder.decompress(b"", max_length=1024 * 1024)
                if not decoder.eof or decoder.unused_data:
                    raise RuntimeError("Truncated or trailing compressed private input")
            verify(temporary, wanted, row["bytes"])
            temporary.replace(target)
        rows.append({"path": relative, "sha256": wanted, "bytes": row["bytes"]})
    return rows


def extract_inputs(root, output, *, source_root=None):
    import inventory
    project = read(root / "project.json")
    previous = inventory.ROOT
    inventory.ROOT = output / "private"
    try:
        results = {}
        for label in ("base", "update"):
            source = compiler.contained(root if source_root is None else source_root, project["inputs"][label])
            verify(source, project[label + "CiaSha256"])
            try:
                results[label] = inventory.inspect_cia(source, label)
            finally:
                verify(source, project[label + "CiaSha256"])
        for label in ("base-content0", "update-content0"):
            generated = inventory.ROOT / "generated" / label
            frozen = read(root / "evidence/inventory" / (label + ".json"))
            verify(generated / "code.bin", frozen["codeSha256"])
            verify(generated / "exheader.bin", frozen["exheaderSha256"])
            target = root / "generated" / label
            target.mkdir(parents=True, exist_ok=True)
            for name in ("code.bin", "exheader.bin"):
                if (target / name).exists():
                    verify(target / name, compiler.digest(generated / name))
                else:
                    shutil.copyfile(generated / name, target / name)
        return {label: {"sha256": value["sha256"], "titleId": value["titleId"], "titleVersionRaw": value["titleVersionRaw"]}
                for label, value in results.items()}
    finally:
        inventory.ROOT = previous


def native_path(root, raw):
    normalized = raw.replace("\\", "/")
    marker = "src/native/"
    position = normalized.find(marker)
    if position < 0:
        raise RuntimeError("Packet source is outside native reconstruction")
    relative = normalized[position:]
    if ".." in Path(relative).parts:
        raise RuntimeError("Packet source path traverses native ownership")
    return compiler.contained(root, relative)


def accepted_functions(root):
    recovery = read(root / "recovery.json")
    functions = []
    for item in recovery["acceptedCohorts"]:
        path = compiler.contained(root, item["path"])
        verify(path, item["sha256"])
        cohort = read(path)
        if cohort["status"] != "accepted":
            raise RuntimeError("Recovery includes an unaccepted cohort")
        functions.extend(cohort["functions"])
    if len(functions) != recovery["acceptedRecoveredFunctions"] or sum(row["instructionBytes"] for row in functions) != recovery["acceptedRecoveredBytes"]:
        raise RuntimeError("Recovery ledger count or extent changed")
    if len({row["symbol"] for row in functions}) != len(functions) or len({row["address"] for row in functions}) != len(functions):
        raise RuntimeError("Duplicate admitted function identity")
    return functions


def compile_accepted(root, output):
    import module_link
    compiler.bootstrap(root, verify_only=True)
    accepted = accepted_functions(root)
    profiles = {}
    frozen_inputs = []
    for lane in LANES:
        packet = read(root / "evidence/lanes" / lane / "packet.json")
        flags = packet["configuration"]
        if set(flags) - FLAGS or len(set(flags)) != len(flags) or not {"--target=arm-none-eabi", "-marm", "-O2"} <= set(flags):
            raise RuntimeError("Unreviewed frozen packet compiler profile")
        for item in packet.get("sourceInputs", packet.get("sources", [])) + packet.get("headers", []):
            path = native_path(root, item["path"])
            verify(path, item["sha256"])
            frozen_inputs.append((path, item["sha256"]))
            if path.suffix == ".c":
                profiles[path] = flags
    objects = {}
    output.mkdir(parents=True, exist_ok=True)
    for row in accepted:
        source = native_path(root, row["sourcePath"])
        verify(source, row["sourceSha256"])
        if source in objects:
            continue
        if source not in profiles:
            raise RuntimeError("Accepted source lacks a frozen compiler profile")
        obj = output / (source.relative_to(root).as_posix().replace("/", "--") + ".o")
        command = [str(root / "tools/clang-21/clang.exe"), *profiles[source], "-c", str(source), "-o", str(obj)]
        done = subprocess.run(command, capture_output=True, timeout=120)
        (obj.with_suffix(".log")).write_bytes(done.stdout + done.stderr)
        if done.returncode:
            raise RuntimeError("Accepted source compilation failed; diagnostics remain private")
        objects[source] = obj
    image = (root / "generated/update-content0/code.bin").read_bytes()
    frozen = read(root / "evidence/inventory/update-content0.json")
    base = frozen["layout"]["segments"][0]["address"]
    entries = []
    for row in accepted:
        if row["programId"] != frozen["programId"] or row["moduleSha256"] != frozen["codeSha256"] or row["poolBytes"]:
            raise RuntimeError("Accepted source belongs to another module or unsupported extent")
        size = row["instructionBytes"]
        original = image[row["address"] - base:row["address"] - base + size]
        if len(original) != size or hashlib.sha256(original).hexdigest() != row["originalSpanSha256"]:
            raise RuntimeError("Original admitted span differs from measured input")
        obj = objects[native_path(root, row["sourcePath"])]
        entries.append({"symbol": row["symbol"], "address": row["address"], "size": size, "mode": row["mode"],
                        "objectPath": str(obj), "objectSha256": compiler.digest(obj)})
    previous = module_link.ROOT
    module_link.ROOT = root
    try:
        integration = module_link.integrate(entries, output / "integration", "update-content0")
    finally:
        module_link.ROOT = previous
    for path, expected in frozen_inputs:
        verify(path, expected)
    return {"status": integration["status"], "sourceLinkedFunctionCount": integration["sourceLinkedFunctionCount"],
            "sourceLinkedBytes": integration["sourceLinkedBytes"], "sourceOnlyModule": False,
            "wholeGameExecution": False, "boundedBehaviorRerun": False, "compiledSourceUnits": len(objects)}


def reporting_ready(root):
    config = read(root / "config/objdiff-units.json")
    value = config.get("readyForProgress")
    if not isinstance(value, bool):
        raise RuntimeError("Objdiff progress readiness must be explicit")
    return value


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--private-inputs", type=Path)
    parser.add_argument("--output", default="work/native-ci")
    args = parser.parse_args()
    output = compiler.contained(ROOT, args.output)
    if not output.is_relative_to((ROOT / "work").resolve()):
        raise RuntimeError("Private build output must remain under work/")
    output.mkdir(parents=True, exist_ok=True)
    try:
        if args.private_inputs:
            materialize_inputs(ROOT, args.private_inputs.resolve())
        inputs = extract_inputs(ROOT, output)
        built = compile_accepted(ROOT, output / "objects")
        ready = reporting_ready(ROOT)
        report = {"status": "verified", "inputs": inputs, "nativeBuild": built, "reportingReady": ready,
                  "scope": "Accepted native source replay and exact hybrid link; executable inventory remains a separate gate"}
        (output / "summary.json").write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
        print(json.dumps({"status": "verified", **built, "reportingReady": ready}))
        if not ready:
            print("ByteMatch report pending reviewed executable inventory; no whole-game report is uploaded.")
        return 0
    except Exception as error:
        (output / "failure.txt").write_text(type(error).__name__ + ": " + str(error), encoding="utf-8")
        print("Trusted native verification failed; private diagnostics were not uploaded.", file=sys.stderr)
        return 1


if __name__ == "__main__":
    sys.exit(main())
