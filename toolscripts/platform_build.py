import argparse
import hashlib
import io
import json
import re
import struct
import subprocess
import sys
from pathlib import Path

import elftools
from elftools.elf.elffile import ELFFile


ROOT = Path(__file__).resolve().parents[1]
CLANG = ROOT / "tools/clang-21/clang.exe"
LINKER = ROOT / "tools/clang-21/ld.lld.exe"
WORK = ROOT / "work/platform-wave001"
EVIDENCE = ROOT / "evidence/lanes/platform-wave001"
NDK = ROOT / "tools/android-r30-minimal"
API_LIB = NDK / "toolchains/llvm/prebuilt/windows-x86_64/sysroot/usr/lib/aarch64-linux-android/29"


def sha(path):
    with Path(path).open("rb") as stream:
        return hashlib.file_digest(stream, "sha256").hexdigest()


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + "\n", encoding="utf-8")


def command(argv, log, data=None):
    process = subprocess.run([str(x) for x in argv], input=data, capture_output=True, timeout=90)
    save(log, {"argv": [str(x) for x in argv], "exitCode": process.returncode,
        "stdout": process.stdout.decode("utf-8", errors="replace") if data is None else None,
        "stdoutSha256": hashlib.sha256(process.stdout).hexdigest(),
        "stderr": process.stderr.decode("utf-8", errors="replace")})
    if process.returncode:
        raise RuntimeError("Command failed; see " + str(log))
    return process.stdout


def qualified_path(relative):
    path = (ROOT / relative).resolve(strict=True)
    if ROOT not in path.parents:
        raise RuntimeError("Input escapes project")
    return path


def load_packet(manifest):
    spec = json.loads(manifest.read_text(encoding="utf-8"))
    source = qualified_path(spec["sourcePath"])
    corpus_path = qualified_path(spec["corpusPath"])
    module = qualified_path(spec["modulePath"])
    for path, field in ((source, "sourceSha256"), (corpus_path, "corpusSha256"), (module, "moduleSha256")):
        if sha(path) != spec[field]:
            raise RuntimeError("Input hash mismatch: " + str(path))
    corpus = json.loads(corpus_path.read_text(encoding="utf-8"))
    if corpus["source"]["sha256"] != spec["sourceSha256"] or corpus["moduleSha256"] != spec["moduleSha256"]:
        raise RuntimeError("Corpus source/module identity mismatch")
    functions = corpus["functions"]
    if not functions or any(not item.get("cases") for item in functions):
        raise RuntimeError("Empty native corpus")
    declarations = {}
    for match in re.finditer(r"\b(u32|s32)\s+(fn_[0-9a-f]+)\(([^)]*)\)\s*\{", source.read_text()):
        args = [part.strip().split()[0] for part in match[3].split(",") if part.strip()]
        if any(arg not in ("u32", "s32") for arg in args) or len(args) not in (1, 2):
            raise RuntimeError("Unsupported native interface")
        declarations[match[2]] = (match[1], args)
    names = [item["name"] for item in functions]
    if set(names) != set(spec["functionNames"]) or len(names) != len(spec["functionNames"]):
        raise RuntimeError("Native corpus omits or adds a declared function")
    if len(set(names)) != len(names) or any(name not in declarations for name in names):
        raise RuntimeError("Corpus/source interface mismatch")
    rows = []
    for index, item in enumerate(functions):
        for case in item["cases"]:
            row = (index, case["x"], case["y"], case["originalU32"])
            if any(not isinstance(value, int) or not 0 <= value <= 0xFFFFFFFF for value in row):
                raise RuntimeError("Invalid raw uint32 corpus value")
            rows.append(row)
    return spec, source, functions, declarations, rows


def dispatch_source(functions, declarations):
    lines = ["typedef unsigned int u32;", "typedef signed int s32;",
             '_Static_assert(sizeof(u32) == 4 && sizeof(s32) == 4, "integer width");']
    for item in functions:
        result, args = declarations[item["name"]]
        lines.append("extern " + result + " " + item["name"] + "(" + ", ".join(args) + ");")
    lines.extend(["u32 platform_function_count(void) { return " + str(len(functions)) + "u; }",
                  "u32 platform_dispatch(u32 id, u32 x, u32 y) {", "    switch (id) {"])
    for index, item in enumerate(functions):
        _, args = declarations[item["name"]]
        call = ", ".join("(" + kind + ")" + value for kind, value in zip(args, ("x", "y")))
        lines.append("    case " + str(index) + "u: return (u32)" + item["name"] + "(" + call + ");")
    lines.extend(["    default: return 0;", "    }", "}"])
    return "\n".join(lines) + "\n"


def build_windows(source, dispatch, output):
    output.mkdir(parents=True, exist_ok=True)
    imports = output / "kernel32.lib"
    command([LINKER, "-flavor", "link", "/lib", "/machine:x64",
        "/def:" + str(ROOT / "platform/kernel32.def"), "/out:" + str(imports)], output / "imports.json")
    objects = []
    for name, path in (("runner", ROOT / "platform/runner.c"), ("dispatch", dispatch), ("leaves", source)):
        target = output / (name + ".obj")
        command([CLANG, "--target=x86_64-pc-windows-msvc", "-O2", "-ffreestanding",
            "-fno-builtin", "-fno-stack-protector", "-c", path, "-o", target], output / (name + "-compile.json"))
        objects.append(target)
    executable = output / "dqmj3_native_probe.exe"
    command([LINKER, "-flavor", "link", "/machine:x64", "/entry:mainCRTStartup",
        "/subsystem:console", "/nodefaultlib", "/timestamp:0", "/out:" + str(executable),
        *objects, imports], output / "link.json")
    return executable


def execute_windows(executable, rows, output):
    payload = b"".join(struct.pack("<III", *row[:3]) for row in rows)
    observed = command([executable], output / "execution.json", payload)
    expected = b"".join(struct.pack("<I", row[3]) for row in rows)
    (output / "inputs.bin").write_bytes(payload)
    (output / "actual.bin").write_bytes(observed)
    (output / "expected.bin").write_bytes(expected)
    if observed != expected:
        raise RuntimeError("Windows source output differs from frozen original ARM corpus")
    controls = {}
    for name, invalid in (("unknownFunction", struct.pack("<III", 0xFFFFFFFF, 0, 0)),
                          ("truncatedRecord", b"\x01\x02")):
        result = subprocess.run([str(executable)], input=invalid, capture_output=True, timeout=15)
        if result.returncode != 2 or result.stdout:
            raise RuntimeError("Input guard failed: " + name)
        controls[name] = {"exitCode": result.returncode, "stdoutBytes": len(result.stdout)}
    return {"actuallyExecuted": True, "comparedCases": len(rows), "allOutputsEqual": True,
        "comparison": "captured original ARM uint32 outputs in hash-pinned native corpus",
        "outputSha256": hashlib.sha256(observed).hexdigest(), "guardControls": controls}


def elf_info(path):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    if elf["e_machine"] != "EM_AARCH64" or elf.elfclass != 64 or not elf.little_endian:
        raise RuntimeError("Wrong Android ELF target")
    segments = [segment for segment in elf.iter_segments() if segment["p_type"] == "PT_LOAD"]
    if not segments or any(segment["p_align"] < 16384 for segment in segments):
        raise RuntimeError("Android ELF lacks 16KB load alignment")
    interpreters = [segment.get_interp_name() for segment in elf.iter_segments()
                    if segment["p_type"] == "PT_INTERP"]
    return {"machine": elf["e_machine"], "type": elf["e_type"],
        "loadAlignments": [segment["p_align"] for segment in segments], "interpreters": interpreters,
        "definedDynamicSymbols": sorted(symbol.name for symbol in elf.get_section_by_name(".dynsym").iter_symbols()
            if symbol.name and symbol["st_shndx"] != "SHN_UNDEF")}


def build_android(source, dispatch, output):
    output.mkdir(parents=True, exist_ok=True)
    base = [CLANG, "--target=aarch64-linux-android29", "--ld-path=" + str(LINKER),
        "-O2", "-fPIC", "-ffreestanding", "-fno-builtin", "-fno-stack-protector",
        "-nostdlib", "-Wl,-z,max-page-size=16384"]
    executable = output / "dqmj3_native_probe"
    command([*base, "-Wl,-pie,--dynamic-linker=/system/bin/linker64",
        API_LIB / "crtbegin_dynamic.o", ROOT / "platform/runner.c", dispatch, source,
        API_LIB / "libc.so", API_LIB / "libdl.so", API_LIB / "crtend_android.o",
        "-o", executable], output / "executable-build.json")
    library = output / "libdqmj3_native_probe.so"
    command([*base, "-shared", "-Wl,-z,defs,-soname,libdqmj3_native_probe.so",
        source, dispatch, "-o", library], output / "library-build.json")
    return {"executable": {"path": str(executable), "sha256": sha(executable), **elf_info(executable)},
        "library": {"path": str(library), "sha256": sha(library), **elf_info(library)},
        "actuallyExecuted": False, "apkPackaged": False, "abi": "arm64-v8a", "minimumApi": 29}


def validate_tools():
    provenance = json.loads((NDK / "provenance.json").read_text())
    pins = []
    for item in provenance["files"]:
        if "android-platform-tools" in item["path"]:
            continue
        path = qualified_path(item["path"])
        if sha(path) != item["sha256"]:
            raise RuntimeError("Android dependency hash mismatch")
        pins.append({"path": str(path), "sha256": item["sha256"]})
    for path in (CLANG, LINKER, *sorted(CLANG.parent.glob("*.dll"))):
        pins.append({"path": str(path), "sha256": sha(path)})
    return pins


def run_build(manifest=None, output=None):
    manifest = Path(manifest or ROOT / "platform/native-inputs.json").resolve(strict=True)
    output = Path(output or WORK / "build").resolve()
    if output != WORK and WORK not in output.parents:
        raise RuntimeError("Build output escapes platform work root")
    output.mkdir(parents=True, exist_ok=True)
    pins = validate_tools()
    spec, source, functions, declarations, rows = load_packet(manifest)
    dispatch = output / "dispatch.c"
    dispatch.write_text(dispatch_source(functions, declarations), encoding="utf-8")
    executable = build_windows(source, dispatch, output / "windows-x64")
    windows = execute_windows(executable, rows, output / "windows-x64")
    windows.update({"path": str(executable), "sha256": sha(executable), "architecture": "x86_64"})
    android = build_android(source, dispatch, output / "android-arm64")
    if any(item["name"] not in android["library"]["definedDynamicSymbols"] for item in functions):
        raise RuntimeError("Android library is missing native packet symbols")
    wrong_source = output / "wrong-leaves.c"
    text = source.read_text()
    if text.count("x * 500u") != 1:
        raise RuntimeError("Wrong-source control no longer applies to frozen input")
    wrong_source.write_text(text.replace("x * 500u", "x * 501u"), encoding="utf-8")
    wrong_executable = build_windows(wrong_source, dispatch, output / "wrong-windows-x64")
    payload = b"".join(struct.pack("<III", *row[:3]) for row in rows)
    wrong_result = command([wrong_executable], output / "wrong-windows-x64/execution.json", payload)
    if len(wrong_result) != len(rows) * 4:
        raise RuntimeError("Wrong-source control did not complete corpus")
    wrong_values = struct.unpack("<" + "I" * len(rows), wrong_result)
    wrong_rejections = sum(value != row[3] for value, row in zip(wrong_values, rows))
    if not wrong_rejections:
        raise RuntimeError("Wrong-source semantic control escaped rejection")
    adb = ROOT / "tools/android-platform-tools-37.0.1/adb.exe"
    devices = {"status": "not-installed", "queried": False}
    if adb.exists():
        try:
            adb_pins = json.loads((NDK / "provenance.json").read_text())["files"]
            for item in adb_pins:
                if "android-platform-tools" in item["path"] and sha(ROOT / item["path"]) != item["sha256"]:
                    raise RuntimeError("Optional adb dependency hash mismatch")
            listing = command([adb, "devices", "-l"], output / "adb-devices.json").decode("utf-8")
            devices = {"status": "queried", "queried": True, "listing": listing}
        except (RuntimeError, OSError, subprocess.TimeoutExpired) as error:
            devices = {"status": "query-unavailable", "queried": False, "reason": str(error)}
    load_packet(manifest)
    report = {"status": "native-subset-platform-builds-passed", "fullGameBuild": False,
        "acceptedSourceCredit": 0, "sourceCreditOwner": "native lane and coordinator",
        "manifestPath": str(manifest), "manifestSha256": sha(manifest), "packet": spec,
        "functionNames": [item["name"] for item in functions], "caseCount": len(rows),
        "windows": windows, "android": android, "adbDevices": devices,
        "nativeLaneExactArmFunctions": spec.get("nativeLaneExactArmFunctions", []),
        "boundedBehaviorOnlyFunctions": [item["name"] for item in functions
            if item["name"] not in spec.get("nativeLaneExactArmFunctions", [])],
        "wrongSourceControl": {"sourceSha256": sha(wrong_source), "actuallyExecuted": True,
            "completedCases": len(rows), "semanticRejections": wrong_rejections},
        "toolPins": pins, "harnessSha256": sha(__file__),
        "python": {"path": sys.executable, "sha256": sha(sys.executable), "version": sys.version},
        "pyelftoolsVersion": elftools.__version__,
        "runnerSha256": sha(ROOT / "platform/runner.c"), "dispatchSha256": sha(dispatch),
        "kernel32DefinitionSha256": sha(ROOT / "platform/kernel32.def"),
        "reproductionArgv": [sys.executable, str(Path(__file__).resolve()), "--manifest", str(manifest), "--output", str(output)],
        "unsupported": ["whole-game source build", "graphics/audio/input/services port",
            "Android device execution", "APK activity/dual-display lifecycle behavior",
            "AYN Thor hardware validation", "universal equivalence beyond declared corpus"]}
    save(output / "report.json", report)
    return report


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--manifest", type=Path)
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    report = run_build(args.manifest, args.output)
    EVIDENCE.mkdir(parents=True, exist_ok=True)
    save(EVIDENCE / "report.json", report)
    print(json.dumps({"status": report["status"], "functions": len(report["functionNames"]),
        "windowsComparedCases": report["windows"]["comparedCases"],
        "androidExecuted": report["android"]["actuallyExecuted"], "fullGameBuild": False}, indent=2))


if __name__ == "__main__":
    main()
