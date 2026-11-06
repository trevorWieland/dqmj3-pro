import argparse
import concurrent.futures
import hashlib
import importlib.util
import io
import json
import re
import struct
import subprocess
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile


ROOT = Path(__file__).resolve().parents[1]
PLATFORM = ROOT / "platform/memory-wave001"
WORK = ROOT / "work/platform-memory-wave001"
EVIDENCE = ROOT / "evidence/lanes/platform-memory-wave001"
CLANG = ROOT / "tools/clang-21/clang.exe"
LINKER = ROOT / "tools/clang-21/ld.lld.exe"
LIB = ROOT / "tools/android-r30-minimal/toolchains/llvm/prebuilt/windows-x86_64/sysroot/usr/lib/aarch64-linux-android/29"
VALUES = [0, 1, 0x7F, 0x80, 0xFF, 0x7FFF, 0x8000, 0xFFFF, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF, 0xA55A91C3]
HELPERS = {}


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + "\n", encoding="utf-8")


def pin(path):
    return {"path": Path(path).relative_to(ROOT).as_posix(), "sha256": sha(path)}


def command(argv, log, data=None):
    result = subprocess.run([str(x) for x in argv], input=data, capture_output=True, timeout=120)
    save(log, {"argv": [str(x) for x in argv], "exitCode": result.returncode,
        "stdout": result.stdout.decode(errors="replace") if data is None else None,
        "stdoutSha256": hashlib.sha256(result.stdout).hexdigest(), "stderr": result.stderr.decode(errors="replace")})
    if result.returncode:
        raise RuntimeError("Build/execution failed; see " + str(log))
    return result.stdout


def load_inputs(path=None):
    path = Path(path or PLATFORM / "inputs.json")
    spec = json.loads(path.read_text())
    for item in spec["inputs"] + spec["toolPins"]:
        target = (ROOT / item["path"]).resolve(strict=True)
        if not target.is_relative_to(ROOT) or sha(target) != item["sha256"]:
            raise RuntimeError("Pinned source/tool input changed: " + item["path"])
    if sha(ROOT / spec["modulePath"]) != spec["moduleSha256"]:
        raise RuntimeError("Original ARM module changed")
    functions = spec["functions"]
    counts = {kind: sum(row["kind"] == kind for row in functions) for kind in ("getter", "setter")}
    if counts != {"getter": 257, "setter": 58} or len({x["symbol"] for x in functions}) != 315:
        raise RuntimeError("Missing/duplicate platform memory function")
    sources = sorted({row["sourcePath"] for row in functions})
    defined = set()
    for source in sources:
        defined.update(re.findall(r"\b(fn_[0-9a-f]+)\([^;{}]*\)\s*\{", (ROOT / source).read_text()))
    if defined != {x["symbol"] for x in functions} | set(spec["compiledUnqualifiedFunctions"]):
        raise RuntimeError("Compiled source symbol inventory changed")
    return spec


def helper(name):
    if name not in HELPERS:
        spec = importlib.util.spec_from_file_location("readonly_" + name, ROOT / ("toolscripts/" + name + ".py"))
        module = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(module)
        HELPERS[name] = module
    return HELPERS[name]


def capture_function(job):
    row, code = job
    cases = []
    for index, (value, geometry) in enumerate((value, geometry) for value in VALUES for geometry in (0, 1)):
        if row["kind"] == "getter":
            observed = helper("native_wave002").execute(code, row["address"], row["nativeLayout"], value,
                0x503300 + index, 0 if geometry == 0 else 0xFC)
            result = observed["result"]
        else:
            observed = helper("native_wave003_abi").execute(code, row["nativeLayout"], value, 0x503300 + index, fixed=True)
            if observed["observedReturnPointer"] != observed["expectedReturnPointer"]:
                raise RuntimeError("Native setter return-pointer contract failed")
            result = value & ((1 << (8 * row["width"])) - 1)
        cases.append({"value": value, "geometry": geometry, "originalU32": result,
            "nativeObservationSha256": hashlib.sha256(json.dumps(observed, sort_keys=True).encode()).hexdigest(),
            "actualOriginalReturn": True})
    return {"symbol": row["symbol"], "kind": row["kind"], "cases": cases}


def capture_native(spec, workers=3):
    raw = (ROOT / spec["modulePath"]).read_bytes()
    jobs = [(row, raw[row["address"] - 0x100000:row["address"] - 0x100000 + row["size"]]) for row in spec["functions"]]
    output = {}
    with concurrent.futures.ProcessPoolExecutor(max_workers=workers) as pool:
        futures = [pool.submit(capture_function, job) for job in jobs]
        for count, future in enumerate(concurrent.futures.as_completed(futures), 1):
            result = future.result()
            output[result["symbol"]] = result
            if count % 32 == 0 or count == len(jobs):
                print(json.dumps({"originalMemoryFunctionsCaptured": count, "total": len(jobs)}), flush=True)
    corpus = {"schemaVersion": 1, "inputsSha256": sha(PLATFORM / "inputs.json"),
        "modulePath": spec["modulePath"], "moduleSha256": spec["moduleSha256"],
        "scope": "getter result or setter field-memory effect after original ARM actual return",
        "setterObservation": "original full-snapshot/footprint oracle establishes truncated stored field value and returned pointer equals the original logical record pointer",
        "functions": [output[row["symbol"]] for row in spec["functions"]]}
    save(EVIDENCE / "corpus.json", corpus)
    return corpus


def generate_glue(spec, output):
    headers = sorted({row["headerPath"] for row in spec["functions"]})
    files = []
    functions = spec["functions"]
    for chunk in range((len(functions) + 39) // 40):
        subset = functions[chunk * 40:(chunk + 1) * 40]
        lines = ['#include "test_api.h"'] + ['#include "' + header + '"' for header in headers]
        for local, row in enumerate(subset):
            token = str(chunk) + "_" + str(local)
            h, r, f = row["handleType"], row["recordType"], row["fieldName"]
            if row["kind"] == "getter":
                lines.append("extern " + row["returnType"] + " " + row["symbol"] + "(const " + h + " *handle);")
                invocation = "return (u32)" + row["symbol"] + "((const " + h + " *)h);"
            else:
                lines.append("extern " + r + " *" + row["symbol"] + "(" + h + " *handle, u32 value);")
                invocation = "return " + row["symbol"] + "((" + h + " *)h, value) == ((" + h + " *)h)->record;"
            lines.append("static void prepare_" + token + "(void *h, void *r) { ((" + h + " *)h)->record = (" + r + " *)r; }")
            lines.append("static u32 invoke_" + token + "(void *h, u32 value) { " + invocation + " }")
            lines.append('_Static_assert(__builtin_offsetof(' + r + ', ' + f + ') == ' + str(row["fieldOffset"]) + ', "field offset");')
            lines.append('_Static_assert(sizeof(((' + r + ' *)0)->' + f + ') == ' + str(row["width"]) + ', "field width");')
        lines.append("static const TestSpec specs[] = {")
        for local, row in enumerate(subset):
            token = str(chunk) + "_" + str(local)
            h, r, f = row["handleType"], row["recordType"], row["fieldName"]
            lines.append("    {sizeof(" + h + "), sizeof(" + r + "), __builtin_offsetof(" + h + ", record), __builtin_offsetof(" + r + ", " + f + "), _Alignof(" + h + "), _Alignof(" + r + "), " + str(row["width"]) + ", " + str(int(row["kind"] == "setter")) + ", prepare_" + token + ", invoke_" + token + "},")
        lines.extend(["};", "const TestSpec *memory_chunk_" + str(chunk) + "(u32 id) { return id < " + str(len(subset)) + " ? &specs[id] : (const TestSpec *)0; }"])
        path = output / ("glue_" + str(chunk) + ".c")
        path.write_text("\n".join(lines) + "\n", encoding="utf-8")
        files.append(path)
    lines = ['#include "test_api.h"']
    lines += ["extern const TestSpec *memory_chunk_" + str(i) + "(u32 id);" for i in range(len(files))]
    lines += ["u32 memory_test_count(void) { return " + str(len(functions)) + "; }", "const TestSpec *memory_test_lookup(u32 id) {", "    switch (id / 40) {"]
    lines += ["    case " + str(i) + ": return memory_chunk_" + str(i) + "(id % 40);" for i in range(len(files))]
    lines += ["    default: return (const TestSpec *)0;", "    }", "}"]
    lookup = output / "lookup.c"
    lookup.write_text("\n".join(lines) + "\n", encoding="utf-8")
    return files + [lookup]


def build(spec, glue, output, android=False, wrong=False):
    output.mkdir(parents=True, exist_ok=True)
    game = [ROOT / p for p in sorted({row["sourcePath"] for row in spec["functions"]})]
    sources = [PLATFORM / "memory_test.c", *glue, *game]
    objects = []
    flags = ["--target=aarch64-linux-android29", "-fPIC"] if android else ["--target=x86_64-pc-windows-msvc"]
    common = ["-O2", "-ffreestanding", "-fno-builtin", "-fno-stack-protector", "-I", ROOT, "-I", PLATFORM]
    for index, source in enumerate(sources + [PLATFORM / "runner.c"]):
        actual = source
        if wrong and source in game:
            actual = output / ("wrong_" + source.name)
            text = source.read_text()
            text = re.sub(r"return (handle->record->field_[0-9a-f]+);", r"return \1 ^ 1;", text) if "wave002" in str(source) else text.replace("= value;", "= value ^ 1;")
            actual.write_text(text, encoding="utf-8")
        target = output / ("unit_" + str(index) + (".o" if android else ".obj"))
        command([CLANG, *flags, *common, "-I", source.parent, "-c", actual, "-o", target], output / ("compile_" + str(index) + ".json"))
        objects.append(target)
    if android:
        executable = output / "dqmj3_memory_probe"
        base = [CLANG, *flags, "--ld-path=" + str(LINKER), "-nostdlib", "-Wl,-z,max-page-size=16384"]
        command([*base, "-Wl,-pie,--dynamic-linker=/system/bin/linker64", LIB / "crtbegin_dynamic.o", *objects,
            LIB / "libc.so", LIB / "libdl.so", LIB / "crtend_android.o", "-o", executable], output / "link-executable.json")
        library = output / "libdqmj3_memory_probe.so"
        command([*base, "-shared", "-Wl,-z,defs,-soname,libdqmj3_memory_probe.so", *objects[:-1],
            LIB / "libc.so", "-o", library], output / "link-library.json")
        return executable, library
    imports = output / "kernel32.lib"
    command([LINKER, "-flavor", "link", "/lib", "/machine:x64", "/def:" + str(PLATFORM / "kernel32.def"), "/out:" + str(imports)], output / "imports.json")
    executable = output / "dqmj3_memory_probe.exe"
    command([LINKER, "-flavor", "link", "/machine:x64", "/entry:mainCRTStartup", "/nodefaultlib",
        "/timestamp:0", "/subsystem:console", "/out:" + str(executable), *objects, imports], output / "link.json")
    return executable


def elf_info(path, symbols):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    loads = [s["p_align"] for s in elf.iter_segments() if s["p_type"] == "PT_LOAD"]
    if elf["e_machine"] != "EM_AARCH64" or not loads or min(loads) < 16384:
        raise RuntimeError("Android architecture/page alignment mismatch")
    defined = {s.name for s in elf.get_section_by_name(".dynsym").iter_symbols() if s.name and s["st_shndx"] != "SHN_UNDEF"}
    if symbols and not symbols.issubset(defined):
        raise RuntimeError("Android library missing compiled native functions")
    return {"sha256": sha(path), "path": path.relative_to(ROOT).as_posix(), "machine": elf["e_machine"],
        "loadAlignments": loads, "definedFunctionCount": len(symbols & defined),
        "interpreters": [s.get_interp_name() for s in elf.iter_segments() if s["p_type"] == "PT_INTERP"]}


def case_rows(spec, corpus):
    if corpus["inputsSha256"] != sha(PLATFORM / "inputs.json"):
        raise RuntimeError("Native corpus input closure changed")
    table = {row["symbol"]: row for row in corpus["functions"]}
    if set(table) != {row["symbol"] for row in spec["functions"]}:
        raise RuntimeError("Native corpus missing declared functions")
    rows = []
    for index, function in enumerate(spec["functions"]):
        cases = table[function["symbol"]]["cases"]
        if len(cases) != len(VALUES) * 2 or {case["geometry"] for case in cases} != {0, 1}:
            raise RuntimeError("Incomplete memory/geometry corpus")
        rows.extend((index, case["value"], case["geometry"], case["originalU32"]) for case in cases)
    return rows


def execute_windows(executable, rows, spec, output, wrong=False):
    data = b"".join(struct.pack("<III", *row[:3]) for row in rows)
    actual = command([executable], output / "execution.json", data)
    if len(actual) != len(rows) * 20:
        raise RuntimeError("Windows source test did not return every fixture")
    results = list(struct.iter_unpack("<IIIII", actual))
    mismatches = []
    offset_changes = set()
    geometries = set()
    for row, observed in zip(rows, results):
        function = spec["functions"][row[0]]
        value, guard, host_offset, pointer_width, geometry = observed
        if (guard != 15 if not wrong else guard & 13 != 13) or pointer_width != 8 or geometry != row[2]:
            raise RuntimeError("Host memory/pointer/alignment/return guard failed")
        if host_offset != function["pointerOffset"]:
            offset_changes.add(function["symbol"])
        geometries.add(geometry)
        if value != row[3] or not guard & 2:
            mismatches.append({"symbol": function["symbol"], "actual": value, "original": row[3], "geometry": geometry})
    if (not wrong and mismatches) or (wrong and not mismatches):
        raise RuntimeError("Native Windows semantic comparison/control failed")
    for name, payload in (("unknown-function", struct.pack("<III", 0xFFFFFFFF, 0, 0)),
                          ("invalid-geometry", struct.pack("<III", 0, 0, 2)), ("truncated", b"\x01")):
        result = subprocess.run([str(executable)], input=payload, capture_output=True, timeout=15)
        if result.returncode != 2 or result.stdout:
            raise RuntimeError("Runner invalid-input control failed: " + name)
    return {"actuallyExecuted": True, "actualSourceFixtureReturns": len(rows),
        "allMemoryGuardsPassed": all(item[1] & 2 for item in results),
        "memoryMismatchCount": sum(not item[1] & 2 for item in results),
        "logicalRecordReturnGuardsPassed": True,
        "semanticMismatchCount": len(mismatches), "mismatchingSymbols": sorted({x["symbol"] for x in mismatches}),
        "hostPointerWidth": 8, "geometries": sorted(geometries), "hostOffsetChangedFunctions": sorted(offset_changes),
        "observationsSha256": hashlib.sha256(actual).hexdigest(), "executableSha256": sha(executable),
        "executablePath": executable.relative_to(ROOT).as_posix(), "guardControlsPassed": True}


def run_build(output=None, capture=False, workers=3):
    output = Path(output or WORK / "build").resolve()
    if not output.is_relative_to(WORK):
        raise RuntimeError("Work path escapes platform-memory lane")
    output.mkdir(parents=True, exist_ok=True)
    spec = load_inputs()
    platform_pins = [pin(path) for path in sorted(PLATFORM.glob("*")) if path.is_file()]
    corpus = capture_native(spec, workers) if capture else json.loads((EVIDENCE / "corpus.json").read_text())
    rows = case_rows(spec, corpus)
    glue = generate_glue(spec, output)
    windows = build(spec, glue, output / "windows")
    windows_proof = execute_windows(windows, rows, spec, output / "windows")
    android_executable, android_library = build(spec, glue, output / "android", android=True)
    symbols = {row["symbol"] for row in spec["functions"]}
    android = {"abi": "arm64-v8a", "minimumApi": 29, "actuallyExecuted": False, "apkPackaged": False,
        "executable": elf_info(android_executable, set()), "library": elf_info(android_library, symbols)}
    wrong = build(spec, glue, output / "wrong-windows", wrong=True)
    wrong_proof = execute_windows(wrong, rows, spec, output / "wrong-windows", wrong=True)
    load_inputs()
    for item in platform_pins:
        if pin(ROOT / item["path"]) != item:
            raise RuntimeError("Platform test source changed during proof")
    report = {"status": "native-host64-memory-components-passed", "fullGameBuild": False,
        "acceptedSourceCredit": 0, "getterFunctions": 257, "qualifiedSetterFunctions": 58,
        "compiledUnqualifiedFunctions": spec["compiledUnqualifiedFunctions"],
        "excludedDiagnosticFunctions": spec["excludedDiagnosticFunctions"],
        "setterLogicalPointerReturnCases": 58 * len(VALUES) * 2,
        "setterReturnAbi": spec["setterReturnAbi"], "caseCount": len(rows), "windows": windows_proof,
        "android": android, "compiledWrongSource": wrong_proof, "inputs": pin(PLATFORM / "inputs.json"),
        "sourceAndOracleInputs": spec["inputs"], "toolInputs": spec["toolPins"], "platformTestSources": platform_pins,
        "corpus": pin(EVIDENCE / "corpus.json"), "script": pin(Path(__file__)),
        "generatedTestGlue": [pin(path) for path in glue], "python": {"version": sys.version, "path": str(Path(sys.executable).relative_to(ROOT))},
        "sourceDefinitionPolicy": "all original C definitions compiled unchanged; generated glue constructs typed host layouts; wrong control is a separately compiled private source variant",
        "limitations": ["Partial source components, not full game", "Setter returns compare logical record identity, not raw ARM32 addresses",
            "Three indirect setter candidates not dispatched/admitted", "Android crosscompile and ELF inspection only; no device or APK validation",
            "Bounded data/geometry corpus is not universal equivalence"],
        "reproductionArgv": ["tools/python/Scripts/python.exe", "toolscripts/platform_memory_build.py", "--output", output.relative_to(ROOT).as_posix()]}
    save(output / "report.json", report)
    if output == WORK / "build":
        save(EVIDENCE / "report.json", report)
    return report


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--output", type=Path)
    parser.add_argument("--capture-native", action="store_true")
    parser.add_argument("--workers", type=int, choices=(1, 2, 3), default=3)
    args = parser.parse_args()
    report = run_build(args.output, args.capture_native, args.workers)
    print(json.dumps({"status": report["status"], "functions": 315, "windowsCases": report["caseCount"],
        "wrongSourceRejectedCases": report["compiledWrongSource"]["semanticMismatchCount"], "androidExecuted": False}))


if __name__ == "__main__":
    main()
