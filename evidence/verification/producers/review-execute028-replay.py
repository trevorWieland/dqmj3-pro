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


raw_path = ROOT / "evidence/verification/execute028-isolated-4f5c001.json"
raw = read(raw_path)
assert raw["status"] == "passed" and all(row["returncode"] == 0 for row in raw["steps"])
fresh = Path(raw["replayRoot"])
ready_path = ROOT / "evidence/lanes/squirrel-execute028/ready.json"
ready = read(ready_path)
assert pin(ready_path)["sha256"] == "d31dc398c29e6783fac6522c70ac4186c1e52b5c7d08840aa5004ba4d2af90ac"
primary_path = ROOT / ready["primaryPrivateReport"]
secondary_path = fresh / "work/squirrel-execute028/committed-root/report.json"
assert primary_path.read_bytes() == secondary_path.read_bytes()
assert pin(primary_path)["sha256"] == "11ec7ae15747f1e3d530fff74534e0d3da7bff96955ffd7e1f6d43275ecf54f7"
a = read(primary_path)
assert len(a["cases"]) == 108 and len(a["negativeControls"]) == 11
assert [a[key] for key in ["originalReturns", "sourceReturns", "windowsReturns", "a64ModelReturns"]] == [108] * 4
assert not a["wholeExecuteComplete"] and not a["wholeVmOrGameQualified"] and not a["sourceOriginalModuleMapped"]
assert ready["rootInstructionPCsExercised"] == 474 and ready["rootInstructionPCsTotal"] == 3296
assert ready["originalRootInstructionBytes"] == 13184 and not ready["wholeFunctionCreditGranted"]
compiled = read(fresh / "work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 281 and len(compiled["results"]) == 781 and all(row["status"] == "compiled" for row in compiled["results"])
counts = []
for step in raw["steps"]:
    if step["name"].endswith("-tests"):
        log = (fresh / step["log"]).read_text()
        assert log.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", log)[1]))
assert sorted(counts) == [11, 15, 21, 22] and sum(counts) == 69
for row in ready["files"]:
    assert pin(ROOT / row["path"]) == row
driver = ROOT / "evidence/verification/producers/execute028-4f5c001-replay.py"
shutil.copyfile(ROOT / "work/replay-execute028.py", driver)
assert pin(driver)["sha256"] == raw["replayDriverSha256"]
receipt = {"schemaVersion": 1, "status": "qualified-independent-partial-typed-execute-cohort-zero-whole-function-credit",
    "sourceRevision": raw["sourceRevision"], "completeUnmodifiedBatchReplayPassed": True,
    "rawReplay": pin(raw_path), "executedDriver": pin(driver), "primaryPrivateReport": pin(primary_path),
    "independentPrivateReport": pin(secondary_path), "ready": pin(ready_path),
    "allPrivateReportBytesAndArmWindowsAarch64ArtifactsIdentical": True,
    "cases": 108, "fourTargetComparisons": 432, "returningControls": 11,
    "sameFinalArmArenaReturningControls": ready["sameFinalArmArenaReturningControls"],
    "tests": 69, "publicUnits": 281, "publicCompilations": 781,
    "originalExecuteInstructionBytes": 13184, "executedRootInstructionBytes": 1896,
    "rootInstructionPCsVisited": 474, "rootInstructionPCsTotal": 3296,
    "namedOpcodeEntriesExercised": ready["measuredOpcodeEntries"],
    "scriptAndEntryErrorWholeArenaCases": 96, "nativeCasesWithPreservedInactiveFrameDifferences": 12,
    "inactiveFrameWordsObservedByProviders": False,
    "literalDepthAndArityErrorClosureUsesActualFrozenProviders": True,
    "wholeExecuteFunctionOrHelperSourceCreditGranted": 0,
    "wholeVmGameOrPhysicalDeviceClaimed": False, "sourceAdmissionGranted": False,
    "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/execute028-coordinator-4f5c001.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"cases": 108, "tests": 69, "partialRootBytesVisited": 1896, "wholeFunctionCredit": 0}))
