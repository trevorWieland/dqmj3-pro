import hashlib
import json
from pathlib import Path
import re

ROOT=Path.cwd()

def read(path):return json.loads(Path(path).read_text(encoding="utf-8"))
def pin(path):
    path=Path(path)
    return {"path":path.relative_to(ROOT).as_posix(),"bytes":path.stat().st_size,"sha256":hashlib.sha256(path.read_bytes()).hexdigest()}

raw_path=ROOT/"evidence/verification/class030-isolated-a4f8f85.json"
raw=read(raw_path);assert raw["status"]=="passed" and all(step["returncode"]==0 for step in raw["steps"])
fresh=Path(raw["replayRoot"])
primary=ROOT/"work/squirrel-class-call030/primary-qualified/execution.json"
secondary=fresh/primary.relative_to(ROOT)
assert primary.read_bytes()==secondary.read_bytes()
assert pin(primary)["sha256"]=="c5563caa5ebebca53fc0f33cc58ea2d52eed4dce134e27bc7186a39e598fb1d8"
a=read(primary)
assert (a["sets"],a["targetObservations"],a["definedMemoryEqualSets"])==(54,216,54)
assert a["preAliasCompleteArenaEqualSets"]==0 and a["postAliasWholeArenaEqualSets"]==12
assert not a["executedHeapObjectsRegistersCodeLiteralsAndTextAlteredByAliasing"]
for row in a["observations"]:
    assert row["armMemory"]["definedMemoryEqual"]
    assert not row["originalDeadFrameReadSites"] and not row["sourceDeadFrameReadSites"]
    x,y=row["armMemory"]["originalCallbackDataAliases"],row["armMemory"]["sourceCallbackDataAliases"]
    assert [(v["arenaOffset"],v["field"],v["comparisonToken"]) for v in x]==[(v["arenaOffset"],v["field"],v["comparisonToken"]) for v in y]
controls=ROOT/"work/squirrel-class-call030/controls-final/controls.json"
assert controls.read_bytes()==(fresh/controls.relative_to(ROOT)).read_bytes()
b=read(controls);assert b["count"]==13 and b["allNormallyReturned"] and b["allRejected"] and b["sameFinalSourceArenaControls"]==5
for row in a["artifacts"]:
    assert pin(ROOT/row["path"])==row
    assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
ready_path=ROOT/"evidence/lanes/squirrel-class-call030/ready.json"
assert pin(ready_path)["sha256"]=="f4f1e6682f51d59e9e679aa0576cd39bdf993cc984ac29e94f1e761d661ac818"
for row in read(ready_path)["files"]:
    assert pin(ROOT/row["path"])==row
    assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
compiled=read(fresh/"work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"]==306 and len(compiled["results"])==854 and all(row["status"]=="compiled" for row in compiled["results"])
counts=[]
for step in raw["steps"]:
    log=fresh/step["log"];assert hashlib.sha256(log.read_bytes()).hexdigest()==step["logSha256"]
    if step["name"].endswith("-tests"):
        value=log.read_text();assert value.strip().endswith("OK");counts.append(int(re.search(r"Ran (\d+) tests",value)[1]))
assert sorted(counts)==[10,11,15,21,22] and sum(counts)==79
assert pin(ROOT/"toolscripts/isolated_component_replay.py")["sha256"]==raw["replayDriverSha256"]
receipt={
    "schemaVersion":1,"status":"qualified-independent-bounded-native-constructor-and-class-instance-lifetime",
    "sourceRevision":raw["sourceRevision"],"completeUnmodifiedBatchReplayPassed":True,
    "rawReplay":pin(raw_path),"driver":pin(ROOT/"toolscripts/isolated_component_replay.py"),
    "plan":pin(ROOT/"config/replays/class030.json"),"ready":pin(ready_path),
    "primaryPrivateExecution":pin(primary),"independentPrivateExecution":pin(secondary),
    "completeExecutionControlsAndAllLinkedArtifactsByteIdentical":True,
    "cases":54,"fourTargetObservations":216,"returningControls":13,"sameFinalArenaControls":5,
    "tests":79,"publicUnits":306,"publicCompilations":854,
    "preAliasWholeArenaEqualSets":0,"postVerifiedCallbackAliasWholeArenaEqualSets":12,
    "definedMemoryEqualSets":54,"inactiveFrameDifferenceSets":42,"inactiveFrameWordsRead":False,
    "callbackAliasesAppliedOnlyToPostExecutionComparisonCopies":True,
    "executedHeapObjectsRegistersCodeLiteralsOrTextPatched":False,
    "canonicalFamilyInstructionBytes":4624,"alreadyCataloguedInstructionBytes":1516,
    "heldFactoryInstructionBytesForUnambiguousSourceName":344,
    "newUniqueFunctionsForCatalogReview":8,"newUniqueInstructionBytesForCatalogReview":2764,
    "wholeMemoryUniversalVmGameAndroidOsOrPhysicalDeviceClaimed":False,"sourceAdmissionGranted":False,
    "producer":pin(Path(__file__))}
(ROOT/"evidence/verification/class030-coordinator-a4f8f85.json").write_text(json.dumps(receipt,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"cases":54,"tests":79,"newUniqueFunctionsForReview":8,"newUniqueBytesForReview":2764}))
