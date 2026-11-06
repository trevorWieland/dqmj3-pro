import argparse
import json
import re
import struct
import subprocess
import sys
from pathlib import Path


sys.path.insert(0, str(Path(__file__).resolve().parent))
import bootstrap_public_compiler as public_compiler


ROOT = Path(__file__).resolve().parents[1]
CONFIG = "config/build-units.json"
TARGETS = {
    "arm32-mpcore": {"flags": ["--target=arm-none-eabi", "-mcpu=mpcore", "-marm", "-mfloat-abi=soft"], "format": "ELF32", "machine": 40},
    "windows-x64": {"flags": ["--target=x86_64-pc-windows-msvc"], "format": "COFF", "machine": 0x8664},
    "android-arm64-api29": {"flags": ["--target=aarch64-linux-android29", "-fPIC"], "format": "ELF64", "machine": 183},
}
FLAGS = ["-std=c11", "-O2", "-ffreestanding", "-fno-builtin", "-ffunction-sections", "-fdata-sections",
         "-Wall", "-Wextra", "-Werror", "-fno-color-diagnostics", "-fno-caret-diagnostics"]


def read_config(root):
    data = json.loads(public_compiler.contained(root, CONFIG).read_text(encoding="utf-8"))
    if data["schemaVersion"] != 1 or data["scope"]["root"] != "src/native":
        raise RuntimeError("Unsupported source-build configuration")
    waves = data["scope"]["waves"]
    if not waves or len(set(waves)) != len(waves) or any(not re.fullmatch(r"wave\d{3}", wave) for wave in waves):
        raise RuntimeError("Invalid explicit native wave scope")
    actual = {p.relative_to(root).as_posix() for wave in waves for p in (root / "src/native" / wave).rglob("*.c")}
    active = [unit["source"] for unit in data["units"]]
    excluded = [unit["source"] for unit in data["excludedSources"]]
    if len(active) != len(set(active)) or len(excluded) != len(set(excluded)) or set(active) & set(excluded):
        raise RuntimeError("Duplicated or conflicting active/historical source entry")
    if actual != set(active) | set(excluded):
        raise RuntimeError("Source census differs from explicit build units: " + str(sorted(actual ^ (set(active) | set(excluded)))))
    for unit in data["units"]:
        path = public_compiler.contained(root, unit["source"])
        dependencies = set()
        pending = [path]
        while pending:
            item = pending.pop()
            text = item.read_text(encoding="utf-8")
            logical = re.sub(r"\\\r?\n", "", text)
            if re.search(r"^\s*#\s*include\s*<", text, re.M):
                raise RuntimeError("System headers require a reviewed public header configuration")
            directives = re.findall(r"^\s*#\s*(include\w*|import)\s+([^\n]+)", logical, re.M)
            includes = []
            for directive, operand in directives:
                literal = re.fullmatch(r'"([^"]+)"\s*', operand)
                if directive != "include" or literal is None:
                    raise RuntimeError("Only explicit literal quoted header inputs are supported")
                includes.append(literal[1])
            for name in includes:
                header = (item.parent / name).resolve()
                if not header.is_relative_to((root / "src/native").resolve()):
                    raise RuntimeError("Source dependency escapes native source tree")
                key = header.relative_to(root.resolve()).as_posix()
                if key not in dependencies:
                    dependencies.add(key)
                    pending.append(header)
        if dependencies != set(unit["headers"]) or len(unit["headers"]) != len(dependencies):
            raise RuntimeError("Explicit header dependency list changed: " + unit["source"])
    for excluded_unit in data["excludedSources"]:
        if excluded_unit.get("activeLinking") is not False or excluded_unit.get("replacement") not in active:
            raise RuntimeError("Historical source lacks an explicit active replacement")
    return data


def object_identity(content, target):
    expected = TARGETS[target]
    if expected["format"] == "COFF":
        if len(content) < 20 or content[:4] == b"\x7fELF":
            raise RuntimeError("Expected a Windows x64 COFF object")
        machine, sections = struct.unpack_from("<HH", content)
        if machine != expected["machine"] or sections == 0:
            raise RuntimeError("Wrong COFF object architecture")
        return {"format": "COFF", "machine": machine, "sections": sections}
    minimum = 52 if expected["format"] == "ELF32" else 64
    if len(content) < minimum or content[:4] != b"\x7fELF" or content[5] != 1:
        raise RuntimeError("Expected a little-endian ELF relocatable object")
    object_type, machine = struct.unpack_from("<HH", content, 16)
    elf_class = {"ELF32": 1, "ELF64": 2}[expected["format"]]
    if object_type != 1 or machine != expected["machine"] or content[4] != elf_class:
        raise RuntimeError("Wrong ELF object architecture/class/type")
    return {"format": expected["format"], "machine": machine, "type": object_type}


def warning_check(root, unit, stdout, stderr):
    if stdout:
        raise RuntimeError("Unexpected compiler standard output")
    allowed = unit.get("allowedUnusedParameters", [])
    expected = {(item["function"], item["parameter"]) for item in allowed}
    source = public_compiler.contained(root, unit["source"]).read_text(encoding="utf-8")
    observed = []
    for line in stderr.splitlines():
        if re.fullmatch(r"\d+ warnings? generated\.", line):
            continue
        match = re.fullmatch(r"(.+):(\d+):(\d+): warning: unused parameter '([^']+)' \[-Wunused-parameter\]", line)
        if not match or match[1].replace("\\", "/") != unit["source"]:
            raise RuntimeError("Unapproved compiler diagnostic: " + line)
        located = []
        for function, parameter in expected:
            declaration = re.search(r"\b" + re.escape(function) + r"\s*\([^)]*\)", source)
            if declaration and parameter == match[4]:
                first = source.count("\n", 0, declaration.start()) + 1
                last = source.count("\n", 0, declaration.end()) + 1
                if first <= int(match[2]) <= last:
                    located.append((function, parameter))
        if len(located) != 1 or located[0] in observed:
            raise RuntimeError("Unused-parameter diagnostic is outside the reviewed ABI declaration")
        observed.extend(located)
    if set(observed) != expected:
        raise RuntimeError("Reviewed ABI warning exception list is stale")
    return [{"function": function, "parameter": parameter, "option": "-Wunused-parameter"} for function, parameter in observed]


def run_unit(root, unit, target, output):
    name = unit["source"].replace("/", "--").removesuffix(".c")
    object_path = output / "objects" / target / (name + ".o")
    log_path = output / "diagnostics" / (target + "--" + name + ".txt")
    object_path.parent.mkdir(parents=True, exist_ok=True)
    log_path.parent.mkdir(parents=True, exist_ok=True)
    argv = ["tools/clang-21/clang.exe", *TARGETS[target]["flags"], *FLAGS]
    if unit.get("allowedUnusedParameters"):
        argv.append("-Wno-error=unused-parameter")
    argv += ["-c", unit["source"], "-o", object_path.relative_to(root).as_posix()]
    row = {"source": unit["source"], "role": unit["role"], "target": target, "argv": argv,
           "inputs": [{"path": item, "sha256": public_compiler.digest(public_compiler.contained(root, item))} for item in [unit["source"], *unit["headers"]]],
           "diagnostics": log_path.relative_to(root).as_posix(), "status": "failed"}
    try:
        done = subprocess.run([str(root / argv[0]), *argv[1:]], cwd=root, capture_output=True, text=True, encoding="utf-8", errors="replace", timeout=120)
        log_path.write_text(done.stdout + done.stderr, encoding="utf-8")
        row["exitCode"] = done.returncode
        if done.returncode:
            raise RuntimeError("Clang exited with status " + str(done.returncode))
        row["reviewedWarnings"] = warning_check(root, unit, done.stdout, done.stderr)
        row["object"] = {"path": object_path.relative_to(root).as_posix(), "bytes": object_path.stat().st_size,
                         "sha256": public_compiler.digest(object_path), **object_identity(object_path.read_bytes(), target)}
        row["status"] = "compiled"
    except (OSError, RuntimeError, subprocess.SubprocessError) as error:
        row["error"] = str(error)
        if not log_path.exists():
            log_path.write_text(str(error) + "\n", encoding="utf-8")
    row["diagnosticsSha256"] = public_compiler.digest(log_path)
    return row


def compile_all(root, targets, output):
    config = read_config(root)
    compiler = public_compiler.bootstrap(root, verify_only=True)
    versions = {}
    for tool in ("clang.exe", "ld.lld.exe"):
        done = subprocess.run([str(root / public_compiler.TOOL_ROOT / tool), "--version"], capture_output=True, text=True, timeout=30)
        if done.returncode:
            raise RuntimeError("Cannot execute pinned public compiler: " + tool)
        versions[tool] = done.stdout.strip()
    rows = [run_unit(root, unit, target, output) for target in targets for unit in config["units"]]
    return {"schemaVersion": 1, "status": "compiled" if all(row["status"] == "compiled" for row in rows) else "failed",
            "purpose": "source-only target compilation; no linking, original comparison or game execution",
            "originalInputsRead": False, "sourceCredit": 0, "config": {"path": CONFIG, "sha256": public_compiler.digest(root / CONFIG)},
            "producers": [{"path": item, "sha256": public_compiler.digest(root / item)} for item in ["toolscripts/compile_sources.py", "toolscripts/bootstrap_public_compiler.py"]],
            "compiler": compiler, "toolVersions": versions, "targets": {target: TARGETS[target] for target in targets},
            "unitCount": len(config["units"]), "excludedHistoricalSources": config["excludedSources"], "results": rows}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--target", action="append", choices=list(TARGETS))
    parser.add_argument("--output", default="work/source-compile-ci")
    args = parser.parse_args()
    output = public_compiler.contained(ROOT, args.output)
    if not output.is_relative_to((ROOT / "work").resolve()):
        raise RuntimeError("Compile diagnostics must stay under work/")
    report_path = output / "manifests/compilation.json"
    try:
        report = compile_all(ROOT, args.target or list(TARGETS), output)
    except (OSError, RuntimeError, ValueError, KeyError, TypeError, subprocess.SubprocessError) as error:
        report = {"schemaVersion": 1, "status": "failed", "error": str(error), "sourceCredit": 0, "originalInputsRead": False}
    report_path.parent.mkdir(parents=True, exist_ok=True)
    report_path.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"status": report["status"], "manifest": report_path.relative_to(ROOT).as_posix(),
                      "compilations": len(report.get("results", [])), "failed": sum(row["status"] != "compiled" for row in report.get("results", [])),
                      "error": report.get("error")}))
    return 0 if report["status"] == "compiled" else 1


if __name__ == "__main__":
    sys.exit(main())
