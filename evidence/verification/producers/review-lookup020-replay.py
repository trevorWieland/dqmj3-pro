import copy
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
    return {"path": path.relative_to(ROOT).as_posix(), "sha256": hashlib.sha256(data).hexdigest(), "bytes": len(data)}


def normalize(packet, base):
    result = copy.deepcopy(packet)
    log = result["nativeTests"].pop("log")
    actual = base / log["path"]
    assert hashlib.sha256(actual.read_bytes()).hexdigest() == log["sha256"] and actual.stat().st_size == log["bytes"]
    tests = read(actual)
    assert tests["exitCode"] == 0 and "Ran 30 tests" in tests["stdout"] and tests["stdout"].strip().endswith("OK")
    return result


raw_path = ROOT / "evidence/verification/lookup020-isolated-7ae88bf.json"
raw = read(raw_path)
assert raw["status"] == "passed" and all(row["returncode"] == 0 for row in raw["steps"])
fresh = Path(raw["replayRoot"])
primary_path = ROOT / "evidence/lanes/squirrel-lookup020/execution.json"
secondary_path = fresh / "evidence/lanes/squirrel-lookup020/execution.json"
a, b = read(primary_path), read(secondary_path)
assert normalize(a, ROOT) == normalize(b, fresh)
assert a["cases"] == 132 and a["comparisonsAgainstOriginal"] == 396 and a["wholeArmArenaComparisons"] == 132
assert a["androidReturnedApis"] == 528 and a["actualWindowsExecuted"]
assert a["actualOriginalSdkFormattingExecutedForReference"] and not a["sourceModeOriginalImageCodeDataSdkServicesMapped"]
assert not a["fullVmCall17ffacQualified"] and not a["wholeVmOrGameExecuted"]
assert a["returningControls"]["allReturnedNormallyAndRejected"] and len(a["returningControls"]["controls"]) == 18
assert sum(row["finalNormalizedArmHeapStillEqual"] for row in a["returningControls"]["controls"]) == 6
compiled = read(fresh / "work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 214 and len(compiled["results"]) == 586
assert all(row["status"] == "compiled" for row in compiled["results"])
counts = []
for step in raw["steps"]:
    if step["name"].endswith("-tests"):
        content = (fresh / step["log"]).read_text()
        count = re.search(r"Ran ([0-9]+) tests", content)
        assert count and content.strip().endswith("OK")
        counts.append(int(count[1]))
assert sorted(counts) == [15, 21, 22, 30] and sum(counts) == 88
report = read(fresh / "build/update-content0/report.json")
assert report["measures"]["total_functions"] == 26626
assert int(report["measures"]["total_code"]) == 7051280 and int(report["measures"]["matched_code"]) == 5128
assert len(read(fresh / "build/update-content0/functional.json")["functions"]) == 218
ready_path = ROOT / "evidence/lanes/squirrel-lookup020/ready.json"
assert pin(ready_path)["sha256"] == "a48bda1f2ed39c1f7b49ead8b6d250a3d841a5e21a57c1c40940bac7b15d1884"
for row in read(ready_path)["files"]:
    assert pin(ROOT / row["path"]) == row
driver = ROOT / "evidence/verification/producers/lookup020-7ae88bf-replay.py"
shutil.copyfile(ROOT / "work/replay-lookup020.py", driver)
assert pin(driver)["sha256"] == raw["replayDriverSha256"]
receipt = {"schemaVersion": 1, "status": "qualified-independent-opaque-lookup-batch", "sourceRevision": raw["sourceRevision"],
    "completeUnmodifiedBatchReplayPassed": True, "rawReplay": pin(raw_path), "executedDriver": pin(driver),
    "primaryExecution": pin(primary_path), "secondaryExecution": pin(secondary_path), "frozenReady": pin(ready_path),
    "allExecutionFieldsExceptIndependentTestLogIdentityIdentical": True, "independentNativeTestsPassed": 30,
    "caseSets": 132, "comparisonsAgainstOriginal": 396, "wholeArmArenaBytes": 262144,
    "caseDigest": a["orderedCaseDigest"], "returningControls": 18, "controlsWithSameFinalHeap": 6,
    "tests": 88, "publicUnits": 214, "publicCompilations": 586,
    "existingFunctionalFunctions": 218, "discoveredEntries": 26626,
    "grossCodeByteDenominatorUnchanged": 7051280, "matchingSourceBytesUnchanged": 5128,
    "partialBodiesReceiveNoWholeFunctionCredit": True, "sourceAdmissionGranted": False,
    "wholeVmGameOrPhysicalDeviceClaimed": False, "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/lookup020-coordinator-7ae88bf.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"tests": 88, "publicCompilations": 586, "cases": 132, "sourceAdmissionGranted": False}))
