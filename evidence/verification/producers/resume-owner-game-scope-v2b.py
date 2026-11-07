import hashlib
import json
from pathlib import Path
import subprocess
import sys


ROOT = Path.cwd()
DEST = ROOT / "work/clean-replay/owner-game-da119c5"
OUT = ROOT / "evidence/verification/owner-game-scope-repair-da119c5.json"


def digest(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def save(value):
    OUT.write_text(json.dumps(value, indent=2) + "\n", encoding="utf-8")


raw = json.loads((ROOT / "evidence/verification/owner-game-isolated-da119c5.json").read_text())
assert raw["status"] == "failed" and raw["steps"][-1]["name"] == "compile_sources-tests"
assert [row["name"] for row in raw["steps"] if row["returncode"]] == ["compile_sources-tests"]
old = (DEST / "tests/test_compile_sources.py").read_text()
path = ROOT / "tests/test_compile_sources.py"
new = path.read_text()
addition = '            "source/squirrel-wave025/native_fixture.c",\n'
assert new.count(addition) == 1 and new.replace(addition, "", 1) == old
pins = json.loads((ROOT / "evidence/lanes/wave013-native/file/owner/game/frozen-manifest.json").read_text())["files"]
outputs = {"evidence/lanes/wave013-native/file/owner/game/packet.json", "evidence/lanes/wave013-native/file/owner/game/verification.json"}
snapshot_before = {row["path"]: digest(DEST / row["path"]) for row in pins}
for row in pins:
    assert digest(ROOT / row["path"]) == row["sha256"]
    if row["path"] not in outputs:
        assert snapshot_before[row["path"]] == row["sha256"]
runner = "import sys,types,unittest;from pathlib import Path;m=types.ModuleType('corrected_scope_tests');m.__file__=str(Path.cwd()/'tests/test_compile_sources.py');sys.modules[m.__name__]=m;exec(compile(sys.stdin.read(),m.__file__,'exec'),m.__dict__);r=unittest.TextTestRunner(stream=sys.stdout,verbosity=2).run(unittest.defaultTestLoader.loadTestsFromModule(m));raise SystemExit(not r.wasSuccessful())"
commands = [("corrected-explicit-fixture-tests", ["-c", runner], new.encode("utf-8"))]
for name in ["functional_report", "native_census_overlay"]:
    commands.append((name + "-tests", ["-m", "unittest", "discover", "-s", "tests", "-p", "test_" + name + ".py", "-v"], None))
commands += [("reporting-objects", ["toolscripts/objdiff_objects.py"], None),
    ("report-configuration", ["toolscripts/configure_objdiff.py", "--version", "update-content0", "--output", "objdiff.json"], None),
    ("stock-report", ["tools/objdiff-3.8.3/objdiff-cli.exe", "report", "generate", "-o", "build/update-content0/report.raw.json"], None),
    ("normalized-report", ["toolscripts/finalize_objdiff_report.py", "--input", "build/update-content0/report.raw.json"], None),
    ("functional-companion", ["toolscripts/functional_report.py"], None)]
receipt = {"schemaVersion": 1, "status": "running", "originalDriverPassed": False,
    "originalRuntimeProducerAndNativeTestsAndPublicCompilationPassed": True,
    "originalFailure": "Explicit Windows-only fixture allowlist lacked the newly registered025 fixture",
    "repairChangesSourceOrOldSnapshot": False, "externalTestSource": {"path": path.relative_to(ROOT).as_posix(), "sha256": digest(path)},
    "externalTestSourceRevision": "9989f5dbe1f80be8b823eea556b7f0025744cc86",
    "oldTestSourceSha256": digest(DEST / "tests/test_compile_sources.py"),
    "onlyTestChangeIsOneAdditionalExplicitFixture": True, "steps": [], "driverSha256": digest(__file__)}
save(receipt)
for name, args, stdin in commands:
    log = DEST / (name + ".scope-repair.log")
    executable = DEST / args[0] if args[0].endswith(".exe") else DEST / "tools/python/Scripts/python.exe"
    argv = [str(executable), *(args[1:] if args[0].endswith(".exe") else args)]
    with log.open("wb") as stream:
        code = subprocess.run(argv, cwd=DEST, input=stdin, stdout=stream, stderr=subprocess.STDOUT, timeout=1200).returncode
    receipt["steps"].append({"name": name, "argv": argv, "returncode": code,
        "log": log.relative_to(DEST).as_posix(), "logSha256": digest(log)})
    save(receipt)
    print(name + ": " + str(code), flush=True)
    if code:
        break
for row in pins:
    assert digest(ROOT / row["path"]) == row["sha256"]
    assert digest(DEST / row["path"]) == snapshot_before[row["path"]]
assert digest(path) == receipt["externalTestSource"]["sha256"]
receipt["allFrozenInputsUnchangedBeforeAndAfter"] = True
receipt["twoRegeneratedRuntimeOutputsAlsoUnchangedDuringRepair"] = {path: snapshot_before[path] for path in sorted(outputs)}
receipt["oldSnapshotTestFileUnchanged"] = digest(DEST / "tests/test_compile_sources.py") == receipt["oldTestSourceSha256"]
receipt["status"] = "passed" if len(receipt["steps"]) == len(commands) and all(row["returncode"] == 0 for row in receipt["steps"]) else "failed"
save(receipt)
raise SystemExit(receipt["status"] != "passed")
