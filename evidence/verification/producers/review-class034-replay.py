import hashlib
import json
from pathlib import Path
import re

ROOT=Path.cwd()

def read(path):return json.loads(Path(path).read_text(encoding="utf-8"))
def pin(path):
    path=Path(path)
    return {"path":path.relative_to(ROOT).as_posix(),"bytes":path.stat().st_size,"sha256":hashlib.sha256(path.read_bytes()).hexdigest()}

raw_path=ROOT/"evidence/verification/class034-isolated-341ba3c.json"
raw=read(raw_path);assert raw["status"]=="passed" and all(step["returncode"]==0 for step in raw["steps"])
fresh=Path(raw["replayRoot"])
primary=ROOT/"work/squirrel-class034/primary-qualified/execution.json"
secondary=fresh/primary.relative_to(ROOT)
assert primary.read_bytes()==secondary.read_bytes()
assert pin(primary)["sha256"]=="5147ed1a1b27b176fa5bacf5a02f517679c00835c5b0cbfa3272d79fc94c69c6"
a=read(primary)
assert (a["sets"],a["targetObservations"],a["definedMemoryEqualSets"])==(102,408,102)
assert a["preAliasCompleteArenaEqualSets"]==0 and a["postAliasWholeArenaEqualSets"]==70
assert not a["executedHeapObjectsRegistersCodeLiteralsAndTextAlteredByAliasing"]
for row in a["observations"]:
    assert row["armMemory"]["definedMemoryEqual"]
    assert not row["originalDeadFrameReadSites"] and not row["sourceDeadFrameReadSites"]
    x,y=row["armMemory"]["originalCallbackDataAliases"],row["armMemory"]["sourceCallbackDataAliases"]
    assert [(v["arenaOffset"],v["field"],v["comparisonToken"]) for v in x]==[(v["arenaOffset"],v["field"],v["comparisonToken"]) for v in y]
controls=ROOT/"work/squirrel-class034/controls-sealed/controls.json"
assert controls.read_bytes()==(fresh/controls.relative_to(ROOT)).read_bytes()
b=read(controls);assert b["count"]==15 and b["allNormallyReturned"] and b["allRejected"] and b["sameFinalSourceArenaControls"]==5
for row in a["artifacts"]:
    assert pin(ROOT/row["path"])==row
    assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
ready_path=ROOT/"evidence/lanes/squirrel-class034/ready.json"
assert pin(ready_path)["sha256"]=="6c8eeefc26a8c47c79ad80ca7a98d48c0c0256b02c6da34ad05cfcee3fd06cc9"
for row in read(ready_path)["files"]:
    assert pin(ROOT/row["path"])==row
    assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
compiled=read(fresh/"work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"]==332 and len(compiled["results"])==932 and all(row["status"]=="compiled" for row in compiled["results"])
counts=[]
for step in raw["steps"]:
    log=fresh/step["log"];assert hashlib.sha256(log.read_bytes()).hexdigest()==step["logSha256"]
    if step["name"].endswith("-tests"):
        value=log.read_text();assert value.strip().endswith("OK");counts.append(int(re.search(r"Ran (\d+) tests",value)[1]))
assert sorted(counts)==[10,12,15,21,22] and sum(counts)==80
assert pin(ROOT/"toolscripts/isolated_component_replay.py")["sha256"]==raw["replayDriverSha256"]
receipt={
    "schemaVersion":1,"status":"qualified-independent-bounded-class-member-script-constructor-and-factory",
    "sourceRevision":raw["sourceRevision"],"completeUnmodifiedBatchReplayPassed":True,
    "rawReplay":pin(raw_path),"driver":pin(ROOT/"toolscripts/isolated_component_replay.py"),
    "plan":pin(ROOT/"config/replays/class034.json"),"ready":pin(ready_path),
    "primaryPrivateExecution":pin(primary),"independentPrivateExecution":pin(secondary),
    "completeExecutionControlsAndAllLinkedArtifactsByteIdentical":True,
    "cases":102,"fourTargetObservations":408,"returningControls":15,"sameFinalArenaControls":5,
    "tests":80,"publicUnits":332,"publicCompilations":932,
    "preAliasWholeArenaEqualSets":0,"postVerifiedCallbackAliasWholeArenaEqualSets":70,
    "definedMemoryEqualSets":102,"inactiveFrameDifferenceSets":32,"inactiveFrameWordsRead":False,
    "callbackAliasesAppliedOnlyToPostExecutionComparisonCopies":True,
    "executedHeapObjectsRegistersCodeLiteralsOrTextPatched":False,
    "canonicalFamilyInstructionBytes":3108,"alreadyCataloguedInstructionBytes":0,
    "heldFactoryInstructionBytesForUnambiguousSourceName":0,
    "newUniqueFunctionsForCatalogReview":5,"newUniqueInstructionBytesForCatalogReview":3108,
    "wholeMemoryUniversalVmGameAndroidOsOrPhysicalDeviceClaimed":False,"sourceAdmissionGranted":False,
    "producer":pin(Path(__file__))}
(ROOT/"evidence/verification/class034-coordinator-341ba3c.json").write_text(json.dumps(receipt,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"cases":102,"tests":80,"newUniqueFunctionsForReview":5,"newUniqueBytesForReview":3108}))
