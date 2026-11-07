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


raw_path = ROOT / "evidence/verification/coercion026-isolated-58008cd.json"
raw = read(raw_path)
assert raw["status"] == "passed" and all(step["returncode"] == 0 for step in raw["steps"])
fresh = Path(raw["replayRoot"])
primary_path = ROOT / "evidence/lanes/squirrel-coercion026/execution.json"
secondary_path = fresh / "work/squirrel-coercion026/primary-final-raw/execution.json"
assert primary_path.read_bytes() == secondary_path.read_bytes()
assert pin(primary_path)["sha256"] == "921e6a8cc53de04ef7a78002ee369dfccba55d638293b40dbc8de127a065c790"
a = read(primary_path)
assert a["sets"] == 302 and a["targetObservations"] == 1208 and a["definedMemoryEqualSets"] == 302
assert a["preAliasCompleteArenaEqualSets"] == 0 and a["rawWholeArenaEqualSets"] == 286
assert not a["executedHeapObjectsRegistersCodeLiteralsAndTextAlteredByAliasing"]
assert a["nativePointerTextNeverTruncatedOrNormalized"] and a["emptyOriginalExecutableSourceImage"]
assert all(row["armMemory"]["definedMemoryEqual"] and row["armMemory"]["excludedWordsWereNotRead"] for row in a["observations"])
assert sum(not row["armMemory"]["rawWholeArenaEqual"] for row in a["observations"]) == 16
for row in a["observations"]:
    memory = row["armMemory"]
    assert memory["preAliasDifferentByteOffsets"] and memory["preAliasOriginalArenaSha256"] != memory["preAliasSourceArenaSha256"]
    first, second = memory["originalCallbackDataAliases"], memory["sourceCallbackDataAliases"]
    assert [(v["arenaOffset"], v["field"], v["comparisonToken"]) for v in first] == [(v["arenaOffset"], v["field"], v["comparisonToken"]) for v in second]
controls_path = ROOT / "evidence/lanes/squirrel-coercion026/returning-controls.json"
controls = read(controls_path)
assert controls == read(fresh / "work/squirrel-coercion026/primary-v2/controls/controls.json")
assert controls["count"] == 14 and controls["allRejected"] and controls["allNormallyReturned"]
for row in a["artifacts"] + [a["floatHostReference"]]:
    assert pin(ROOT / row["path"]) == row and pin(fresh / row["path"])["sha256"] == row["sha256"]
compiled = read(fresh / "work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 271 and len(compiled["results"]) == 753 and all(row["status"] == "compiled" for row in compiled["results"])
counts = []
for step in raw["steps"]:
    if step["name"].endswith("-tests"):
        log = (fresh / step["log"]).read_text()
        assert log.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", log)[1]))
assert sorted(counts) == [12, 15, 21, 22] and sum(counts) == 70
ready_path = ROOT / "evidence/lanes/squirrel-coercion026/ready.json"
assert pin(ready_path)["sha256"] == "fb4f593dd0d263ecbc9d1c38be9dbf559de7845b5127d56887c44f7ad3923ed3"
for row in read(ready_path)["files"]:
    assert pin(ROOT / row["path"]) == row
driver = ROOT / "evidence/verification/producers/coercion026-58008cd-replay.py"
shutil.copyfile(ROOT / "work/replay-coercion026.py", driver)
assert pin(driver)["sha256"] == raw["replayDriverSha256"]
receipt = {"schemaVersion": 1, "status": "qualified-independent-scalar-metamethod-and-stack-coercion",
    "sourceRevision": raw["sourceRevision"], "completeUnmodifiedBatchReplayPassed": True,
    "rawReplay": pin(raw_path), "executedDriver": pin(driver), "primaryExecution": pin(primary_path),
    "independentExecution": pin(secondary_path), "ready": pin(ready_path), "returningControls": pin(controls_path),
    "allPrivateReportBytesLinkedArtifactsFloatReferenceAndControlsIdentical": True,
    "cases": 302, "fourTargetObservations": 1208, "returningControlCount": 14,
    "tests": 70, "publicUnits": 271, "publicCompilations": 753, "boundedCanonicalInstructionBytesForReview": 660,
    "preAliasWholeArenaEqualSets": 0, "postVerifiedCallbackAliasWholeArenaEqualSets": 286,
    "definedMemoryEqualSets": 302, "uninitializedFrameDifferenceSets": 16,
    "allPreAliasRawHashesAndMismatchOffsetsAndTypedAliasActualValuesRetained": True,
    "callbackAliasesAppliedOnlyToPostExecutionComparisonCopies": True,
    "executedHeapObjectsRegistersCodeLiteralsOrRawTextPatched": False,
    "inactiveFrameExcludedWordsObservedByAnyProvider": False,
    "nativePointerTextTruncatedOrNormalized": False, "wholeMemoryUniversalVmGameAndroidOsOrPhysicalDeviceClaimed": False,
    "sourceAdmissionGranted": False, "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/coercion026-coordinator-58008cd.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"cases": 302, "tests": 70, "fullReportByteIdentical": True, "preAliasWholeArenasEqual": 0}))
