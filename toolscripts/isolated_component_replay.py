import argparse
import hashlib
import io
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys
import zipfile


ROOT = Path(__file__).resolve().parents[1]
DEFAULT_TESTS = ["compile_sources", "functional_report", "native_census_overlay"]


def digest(path):
    with Path(path).open("rb") as stream:
        return hashlib.file_digest(stream, "sha256").hexdigest()


def contained(root, value):
    if not isinstance(value, str) or not value or "\\" in value:
        raise ValueError("Replay paths must be nonempty slash-separated strings")
    relative = Path(value)
    target = (root / relative).resolve()
    if relative.is_absolute() or ".." in relative.parts or not target.is_relative_to(root.resolve()) or target == root.resolve():
        raise ValueError("Replay path escapes its owned root")
    return target


def validate_plan(plan):
    if plan.get("schemaVersion") != 1 or not re.fullmatch(r"[a-z0-9]+(?:-[a-z0-9]+)*", plan.get("name", "")):
        raise ValueError("Invalid replay plan identity")
    steps = plan.get("producerSteps", [])
    if not steps or len({row["name"] for row in steps}) != len(steps):
        raise ValueError("Replay producer step names must be nonempty and unique")
    reserved = {"offline-dependencies", "fresh-original-intake", "public-compilation", "reporting-objects", "report-configuration", "stock-report", "normalized-report", "functional-companion"}
    if any(row["name"] in reserved or row["name"].endswith("-tests") for row in steps):
        raise ValueError("Producer names collide with standard replay phases")
    for row in steps:
        if not re.fullmatch(r"[a-z0-9-]+", row["name"]) or not isinstance(row.get("args"), list) or not row["args"] or not all(isinstance(arg, str) for arg in row["args"]):
            raise ValueError("Replay commands need explicit names and argument arrays")
    tests = plan.get("tests", [])
    if not tests or len(tests) != len(set(tests)) or any(not re.fullmatch(r"[a-z0-9_]+", name) for name in tests):
        raise ValueError("Replay test modules must be explicit and unique")
    packets = plan.get("packets", [])
    if not packets or len(packets) != len(set(packets)):
        raise ValueError("Replay output packets must be explicit and unique")
    for value in packets:
        contained(ROOT, value)
        if Path(value).parts[0] not in ["work", "evidence", "build"]:
            raise ValueError("Replay packet is outside owned output folders")
    return plan


def extract_archive(archive, destination):
    with zipfile.ZipFile(io.BytesIO(archive)) as source:
        names = [row.filename for row in source.infolist()]
        if len(names) != len({name.casefold() for name in names}):
            raise ValueError("Duplicate replay archive member")
        for row in source.infolist():
            contained(destination, row.filename.rstrip("/"))
            if row.external_attr >> 16 & 0o170000 == 0o120000:
                raise ValueError("Linked replay archive member")
        source.extractall(destination)


def save(path, packet):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(packet, indent=2) + "\n", encoding="utf-8")


def run_steps(destination, python, commands, receipt, receipt_path, packets):
    stage = "commands"
    try:
        for name, arguments in commands:
            log = destination / (name + ".log")
            executable = contained(destination, arguments[0]) if arguments[0].endswith(".exe") else python
            argv = [str(executable), *(arguments[1:] if arguments[0].endswith(".exe") else arguments)]
            argv = [arg.replace("{REPLAY_ROOT}", str(destination)) for arg in argv]
            try:
                with log.open("wb") as stream:
                    result = subprocess.run(argv, cwd=destination, stdout=stream, stderr=subprocess.STDOUT, timeout=2400)
            except Exception as error:
                receipt["steps"].append({"name": name, "argv": argv, "returncode": None,
                    "errorType": type(error).__name__, "log": log.relative_to(destination).as_posix(),
                    "logSha256": digest(log)})
                raise
            receipt["steps"].append({"name": name, "argv": argv, "returncode": result.returncode,
                "log": log.relative_to(destination).as_posix(), "logSha256": digest(log)})
            save(receipt_path, receipt)
            print(name + ": " + str(result.returncode), flush=True)
            if result.returncode:
                raise RuntimeError("Replay command failed: " + name)
            if name == "offline-dependencies":
                for row in receipt.get("nativeLibraries", []):
                    if digest(contained(destination, row["path"])) != row["sha256"]:
                        raise ValueError("Installed native runtime differs from its pin")
        stage = "collect-packets"
        receipt["packets"] = [{"path": value, "sha256": digest(contained(destination, value)),
            "bytes": contained(destination, value).stat().st_size} for value in packets]
        receipt["status"] = "passed"
    except Exception as error:
        receipt.update(status="failed", failedStage=stage, errorType=type(error).__name__, error=str(error))
        raise
    finally:
        save(receipt_path, receipt)
    return receipt


def replay(root, plan_path, revision):
    root = root.resolve()
    plan = validate_plan(json.loads(plan_path.read_text(encoding="utf-8")))
    revision = subprocess.check_output(["git", "-C", str(root), "rev-parse", "--verify", revision + "^{commit}"], text=True).strip()
    if not re.fullmatch(r"[0-9a-f]{40}", revision):
        raise ValueError("Replay revision did not resolve to a commit")
    destination = contained(root, "work/clean-replay/" + plan["name"] + "-" + revision[:7])
    if destination.exists():
        raise ValueError("Replay requires a new immutable output directory")
    receipt_path = contained(root, "evidence/verification/" + plan["name"] + "-isolated-" + revision[:7] + ".json")
    archive = subprocess.check_output(["git", "-C", str(root), "archive", "--format=zip", revision])
    destination.mkdir(parents=True)
    extract_archive(archive, destination)
    subprocess.run([sys.executable, "-c", 'import sys;from pathlib import Path;sys.path.insert(0,"toolscripts");import compile_sources;compile_sources.read_config(Path.cwd())'], cwd=destination, check=True)
    for row in plan["producerSteps"]:
        if not row["args"][0].startswith("-"):
            if not contained(destination, row["args"][0]).is_file():
                raise ValueError("Replay producer does not exist in committed source")
    lock = json.loads((destination / "tools.lock.json").read_text())
    project = json.loads((destination / "project.json").read_text())
    items = [row for row in lock["files"] if row["path"].startswith(("tools/clang-21/", "tools/ctrtool-1.3.0/", "tools/android-r30-minimal/", "tools/objdiff-3.8.3/"))]
    items += [{"path": "tools/wheels/" + row["filename"], "sha256": row["sha256"]} for row in lock["wheels"]]
    items += [{"path": value, "sha256": project[name + "CiaSha256"]} for name, value in project["inputs"].items()]
    receipt = {"schemaVersion": 1, "status": "materializing", "sourceRevision": revision,
        "sourceArchiveSha256": hashlib.sha256(archive).hexdigest(), "replayRoot": str(destination),
        "plan": plan, "planSha256": digest(plan_path), "replayDriverSha256": digest(Path(__file__)), "nativeLibraries": lock["nativeLibraries"],
        "freshEnvironment": True, "sharedGeneratedOrWorkInputs": False, "copiedToolAndWheelFiles": [], "steps": [],
        "sourceAdmissionGranted": False, "wholeGameClaimed": False}
    save(receipt_path, receipt)
    try:
        for row in items:
            source, target = contained(root, row["path"]), contained(destination, row["path"])
            if not source.is_file() or digest(source) != row["sha256"]:
                raise ValueError("Replay pinned input differs: " + row["path"])
            target.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(source, target)
            if digest(target) != row["sha256"]:
                raise ValueError("Replay copied input differs")
            receipt["copiedToolAndWheelFiles"].append({"path": row["path"], "sha256": row["sha256"]})
        subprocess.run([sys.executable, "-m", "venv", str(destination / "tools/python")], check=True, timeout=120)
        python = destination / "tools/python/Scripts/python.exe"
        commands = [("offline-dependencies", ["-m", "pip", "install", "--no-index", "--no-deps", *[str(destination / "tools/wheels" / row["filename"]) for row in lock["wheels"]]]),
            ("fresh-original-intake", ["-c", 'import sys;from pathlib import Path;sys.path.insert(0,"toolscripts");import ci_native_build as ci;ci.extract_inputs(Path.cwd(),Path("work/component-intake"))'])]
        commands += [(row["name"], row["args"]) for row in plan["producerSteps"]]
        commands.append(("public-compilation", ["toolscripts/compile_sources.py", "--output", "work/source-compile-ci/committed-replay"]))
        for name in dict.fromkeys([*plan["tests"], *DEFAULT_TESTS]):
            commands.append((name + "-tests", ["-m", "unittest", "discover", "-s", "tests", "-p", "test_" + name + ".py", "-v"]))
        commands += [("reporting-objects", ["toolscripts/objdiff_objects.py"]),
            ("report-configuration", ["toolscripts/configure_objdiff.py", "--version", "update-content0", "--output", "objdiff.json"]),
            ("stock-report", ["tools/objdiff-3.8.3/objdiff-cli.exe", "report", "generate", "-o", "build/update-content0/report.raw.json"]),
            ("normalized-report", ["toolscripts/finalize_objdiff_report.py", "--input", "build/update-content0/report.raw.json"]),
            ("functional-companion", ["toolscripts/functional_report.py"])]
        receipt["status"] = "running"
        return run_steps(destination, python, commands, receipt, receipt_path,
            [*plan["packets"], "build/update-content0/report.json", "build/update-content0/functional.json"])
    except Exception as error:
        if receipt["status"] != "failed":
            receipt.update(status="failed", failedStage="materialization", errorType=type(error).__name__, error=str(error))
            save(receipt_path, receipt)
        raise


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--plan", type=Path, required=True)
    parser.add_argument("--revision", required=True)
    parser.add_argument("--root", type=Path, default=ROOT)
    args = parser.parse_args()
    replay(args.root, args.plan.resolve(), args.revision)
