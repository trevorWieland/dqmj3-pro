import hashlib
import json
from pathlib import Path
import re

ROOT = Path.cwd()

def read(path):
    return json.loads(Path(path).read_text(encoding="utf-8"))

def pin(path):
    path = Path(path)
    return {"path": path.relative_to(ROOT).as_posix(), "bytes": path.stat().st_size,
            "sha256": hashlib.sha256(path.read_bytes()).hexdigest()}

raw_path = ROOT / "evidence/verification/generator046-isolated-81d3189.json"
raw = read(raw_path)
assert raw["status"] == "passed" and all(row["returncode"] == 0 for row in raw["steps"])
fresh = Path(raw["replayRoot"])
ready_path = ROOT / "evidence/lanes/squirrel-generator046/ready.json"
assert pin(ready_path)["sha256"] == "3edc8a082724484c8c064493b37904f35d3df3bd3dba6243ef204fd2cbcaab6c"
for row in read(ready_path)["files"]:
    assert pin(ROOT / row["path"]) == row
    assert hashlib.sha256((fresh / row["path"]).read_bytes()).hexdigest() == row["sha256"]
relative = "work/squirrel-generator046/primary-actual-suspended/execution.json"
primary, secondary = ROOT / relative, fresh / relative
assert primary.read_bytes() == secondary.read_bytes()
assert pin(primary)["sha256"] == "02994a47e46803271efd603e06fa5520098ef466dbc5d32a314ad7e0d9cfb963"
report = read(primary)
assert report["caseSets"] == 88 and report["targetObservations"] == 352
assert report["allOriginalSourceWholeArenasEqual"] and report["comparisonArenaBytes"] == 458752
assert [len(row["unobservedPCs"]) for row in report["coverage"]] == [11, 16, 4]
controls_relative = "work/squirrel-generator046/controls-actual-suspended/controls.json"
controls_path = ROOT / controls_relative
assert controls_path.read_bytes() == (fresh / controls_relative).read_bytes()
controls = read(controls_path)
assert controls["allNormallyReturned"] and len(controls["controls"]) == 6
assert controls["sameFinalArenaControls"] == 2
for row in report["artifacts"]:
    assert pin(ROOT / row["path"]) == row
    assert hashlib.sha256((fresh / row["path"]).read_bytes()).hexdigest() == row["sha256"]
compiled = read(fresh / "work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 400 and len(compiled["results"]) == 1130
assert all(row["status"] == "compiled" for row in compiled["results"])
counts = []
for step in raw["steps"]:
    log = fresh / step["log"]
    assert hashlib.sha256(log.read_bytes()).hexdigest() == step["logSha256"]
    if step["name"].endswith("-tests"):
        text = log.read_text(encoding="utf-8")
        assert text.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", text)[1]))
assert sorted(counts) == [11, 13, 15, 21, 24] and sum(counts) == 84
validation_path = ROOT / "work/squirrel-generator046/native-model-validation.json"
assert validation_path.read_bytes() == (fresh / validation_path.relative_to(ROOT)).read_bytes()
validation = read(validation_path)
assert validation["allPassed"] and validation["validatedObservations"] == 176
receipt = {"schemaVersion": 1, "status": "qualified-independent-generator046-scoped-yield-resume",
    "sourceRevision": raw["sourceRevision"], "completeUnmodifiedBatchReplayPassed": True,
    "rawReplay": pin(raw_path), "ready": pin(ready_path), "primaryExecution": pin(primary),
    "independentExecution": pin(secondary), "primaryControls": pin(controls_path),
    "nativeModelValidation": pin(validation_path), "conditionProof": pin(ROOT / "evidence/lanes/squirrel-generator046/qualification-conditions.json"),
    "allReportsControlsAndFourArtifactsByteIdentical": True, "strengthenedNativeObservations": 176,
    "caseSets": 88, "fourTargetObservations": 352, "returningControls": 6, "sameFinalArenaControls": 2,
    "tests": 84, "publicUnits": 400, "publicCompilations": 1130,
    "yieldInstructionPcsVisited": 156, "yieldInstructionPcsTotal": 167,
    "resumeInstructionPcsVisited": 280, "resumeInstructionPcsTotal": 300,
    "validDomainInvariantPcsUnexecuted": 27, "unqualifiedDebugCallPcs": 4,
    "newWholeFunctionCredit": 0, "sourceAdmissionGranted": False,
    "wholeExecuteVmGameAndroidOsOrPhysicalDeviceClaimed": False, "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/generator046-coordinator-81d3189.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"cases": 88, "tests": 84, "newWholeFunctionCredit": 0}))
