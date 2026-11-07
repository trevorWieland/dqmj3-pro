import hashlib
import json
from pathlib import Path
import re
import shutil


ROOT = Path.cwd()


def read(path):
    return json.loads(Path(path).read_text(encoding="utf-8"))


def pin(path):
    path = Path(path)
    data = path.read_bytes()
    return {"path": path.relative_to(ROOT).as_posix(), "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()}


raw_path = ROOT / "evidence/verification/type-error025-isolated-da119c5.json"
repair_path = ROOT / "evidence/verification/type-error025-scope-repair-da119c5.json"
raw, repair = read(raw_path), read(repair_path)
fresh = Path(raw["replayRoot"])
assert raw["status"] == "failed" and repair["status"] == "passed"
assert not repair["originalDriverPassed"] and repair["allFrozenInputsUnchangedBeforeAndAfter"] and repair["oldSnapshotTestFileUnchanged"]
assert [step["name"] for step in raw["steps"] if step["returncode"]] == ["compile_sources-tests"]
primary_path = ROOT / "work/squirrel-type-error025/qualified-fastfixture/report.json"
secondary_path = fresh / "work/squirrel-type-error025/committed-root/report.json"
assert pin(primary_path)["sha256"] == pin(secondary_path)["sha256"] == "ad7657fd1a637a89359e1f637bcd6462fb8fd5f825edf4caefd8fb33777fa56f"
a = read(primary_path)
assert a == read(secondary_path)
assert len(a["cases"]) == 108 and len(a["negativeControls"]) == 13
assert [a[key] for key in ["originalReturns", "sourceReturns", "windowsReturns", "a64ModelReturns"]] == [108] * 4
assert a["wholeInitializedArenaCompared"] and not a["sourceOriginalModuleMapped"] and not a["wholeVmOrGameQualified"]
compiled = read(fresh / "work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 258 and len(compiled["results"]) == 714 and all(row["status"] == "compiled" for row in compiled["results"])
counts = []
for step in raw["steps"] + repair["steps"]:
    if step["returncode"] == 0 and (step["name"].endswith("-tests") or step["name"] == "corrected-explicit-fixture-tests"):
        log = (fresh / step["log"]).read_text()
        assert log.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", log)[1]))
assert sorted(counts) == [10, 15, 21, 22] and sum(counts) == 68
ready_path = ROOT / "evidence/lanes/squirrel-type-error025/ready.json"
assert pin(ready_path)["sha256"] == "bf38c5d70aff179448dd5fa312f8765ce29c2689d40f49992e9237e34dbca44f"
for row in read(ready_path)["files"]:
    assert pin(ROOT / row["path"]) == row
copied = []
for name in ["replay-type-error025.py", "resume-type-error025-scope-v2.py"]:
    destination = ROOT / "evidence/verification/producers" / name
    shutil.copyfile(ROOT / "work" / name, destination)
    copied.append(pin(destination))
assert copied[0]["sha256"] == raw["replayDriverSha256"] and copied[1]["sha256"] == repair["driverSha256"]
receipt = {"schemaVersion": 1, "status": "qualified-independent-actual-native-type-error-controller",
    "sourceRevision": raw["sourceRevision"], "originalDriverPassed": False,
    "completeUnmodifiedBatchReplayPassed": False, "immutableRuntimeAndNativeTestsAndCompilationPassed": True,
    "externalExplicitFixtureScopeTestRepairAndRemainingIntegrationPassed": True,
    "rawReplay": pin(raw_path), "scopeRepair": pin(repair_path), "executedDrivers": copied,
    "primaryPrivateReport": pin(primary_path), "independentPrivateReport": pin(secondary_path),
    "allPrivateReportBytesAndArmWindowsAarch64ArtifactsIdentical": True,
    "ready": pin(ready_path), "cases": 108, "fourTargetObservations": 432, "returningControls": 13,
    "tests": 68, "publicUnits": 258, "publicCompilations": 714,
    "controllerInstructionBytesForBoundedReview": 480, "visitedControllerInstructions": 118,
    "allocationFailureTwoInstructionsRemainExcluded": True,
    "stringOnlyConcatDependencyFullStandaloneFunctionCredit": 0,
    "wholeVmGameAndroidOsOrPhysicalDeviceClaimed": False, "sourceAdmissionGranted": False,
    "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/type-error025-coordinator-da119c5.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"cases": 108, "tests": 68, "byteIdenticalPrivateReport": True, "originalDriverPassed": False}))
