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

raw_path = ROOT / "evidence/verification/generator044-isolated-cc26e77.json"
raw = read(raw_path)
assert raw["status"] == "passed" and all(row["returncode"] == 0 for row in raw["steps"])
fresh = Path(raw["replayRoot"])
ready_path = ROOT / "evidence/lanes/squirrel-generator044/ready.json"
assert pin(ready_path)["sha256"] == "697c044d9897da2b2a6e7e0856f8cbdfeddbec10de5c520e0114fe9da9384d94"
for row in read(ready_path)["files"]:
    assert pin(ROOT / row["path"]) == row
    assert hashlib.sha256((fresh / row["path"]).read_bytes()).hexdigest() == row["sha256"]
relative = "work/squirrel-generator044/stage-a/primary-closed-lifetime/execution.json"
primary, secondary = ROOT / relative, fresh / relative
assert primary.read_bytes() == secondary.read_bytes()
assert pin(primary)["sha256"] == "b3bf7d183e165b83194cd3afd1a5ae21d1ecbda8ba0a26cb48ba8db2140bf1bb"
report = read(primary)
assert report["caseSets"] == 34 and report["targetObservations"] == 136
assert report["allOriginalSourceWholeArenasEqual"] and report["comparisonArenaBytes"] == 458752
assert [len(row["unobservedPCs"]) for row in report["coverage"]] == [6, 0, 0]
controls_relative = "work/squirrel-generator044/stage-a/controls-closed-lifetime/controls.json"
controls_path = ROOT / controls_relative
assert controls_path.read_bytes() == (fresh / controls_relative).read_bytes()
controls = read(controls_path)
assert controls["allNormallyReturned"] and len(controls["controls"]) == 4
assert controls["sameFinalArenaControls"] == 3
for row in report["artifacts"]:
    assert pin(ROOT / row["path"]) == row
    assert hashlib.sha256((fresh / row["path"]).read_bytes()).hexdigest() == row["sha256"]
compiled = read(fresh / "work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 393 and len(compiled["results"]) == 1109
assert all(row["status"] == "compiled" for row in compiled["results"])
counts = []
for step in raw["steps"]:
    log = fresh / step["log"]
    assert hashlib.sha256(log.read_bytes()).hexdigest() == step["logSha256"]
    if step["name"].endswith("-tests"):
        text = log.read_text(encoding="utf-8")
        assert text.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", text)[1]))
assert sorted(counts) == [11, 11, 15, 21, 24] and sum(counts) == 82
receipt = {"schemaVersion": 1, "status": "qualified-independent-generator044-stage-a",
    "sourceRevision": raw["sourceRevision"], "completeUnmodifiedBatchReplayPassed": True,
    "rawReplay": pin(raw_path), "ready": pin(ready_path),
    "primaryExecution": pin(primary), "independentExecution": pin(secondary),
    "primaryControls": pin(controls_path), "allReportsControlsAndFourArtifactsByteIdentical": True,
    "caseSets": 34, "fourTargetObservations": 136, "returningControls": 4,
    "sameFinalArenaControls": 3, "tests": 82, "publicUnits": 393, "publicCompilations": 1109,
    "factoryInstructionsVisited": 61, "factoryInstructionsTotal": 67,
    "factoryInstructionBytesHeld": 268, "lifetimeInstructionBytesAlreadyCreditedBy008": 304,
    "newWholeFunctionCredit": 0, "sourceAdmissionGranted": False,
    "wholeExecuteVmGameAndroidOsOrPhysicalDeviceClaimed": False, "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/generator044-coordinator-cc26e77.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"cases": 34, "tests": 82, "newWholeFunctionCredit": 0}))
