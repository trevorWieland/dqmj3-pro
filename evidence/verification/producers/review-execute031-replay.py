import hashlib
import json
from pathlib import Path
import re

ROOT=Path.cwd()

def read(path):return json.loads(Path(path).read_text(encoding="utf-8"))
def pin(path):
    path=Path(path)
    return {"path":path.relative_to(ROOT).as_posix(),"bytes":path.stat().st_size,"sha256":hashlib.sha256(path.read_bytes()).hexdigest()}

raw_path=ROOT/"evidence/verification/execute031-isolated-a4f8f85.json"
raw=read(raw_path);assert raw["status"]=="passed" and all(step["returncode"]==0 for step in raw["steps"])
fresh=Path(raw["replayRoot"]);primary=ROOT/"work/squirrel-execute031/qualified314/report.json";secondary=fresh/primary.relative_to(ROOT)
assert primary.read_bytes()==secondary.read_bytes()
assert pin(primary)["sha256"]=="60514b04ecf6bdd1750c991eec53403f56cce3bdee352a2b1c4ce2959013109d"
a=read(primary)
assert all(a[key]==314 for key in ["originalReturns","sourceReturns","windowsReturns","a64ModelReturns"])
assert len(a["negativeControls"])==22 and all(all(row[key] for key in ["armActuallyReturned","windowsActuallyReturned","a64ActuallyReturned","rejectedByIndependentModels"]) for row in a["negativeControls"])
assert sum(row["sameFinalArmArena"] for row in a["negativeControls"])==4
assert len(a["baseline028Preserved"])==108 and all(row["newSourcePrefixIdentical"] and row["wholeSourceArenaIdentical"] for row in a["baseline028Preserved"])
assert sum(row["comparison"]["wholeInitializedArenaEqual"] for row in a["cases"])==286
artifacts=[]
for relative,key in [("arm/execute031.elf","armElfSha256"),("windows/execute031.exe","windowsExeSha256"),("android/android-model.elf","a64ElfSha256"),("frozen028-arm/execute028.elf","frozen028ArmElfSha256")]:
    path=primary.parent/relative;assert pin(path)["sha256"]==a[key]
    assert hashlib.sha256((fresh/path.relative_to(ROOT)).read_bytes()).hexdigest()==a[key]
    artifacts.append(pin(path))
ready_path=ROOT/"evidence/lanes/squirrel-execute031/ready.json";ready=read(ready_path)
assert pin(ready_path)["sha256"]=="97e26b14a4a6d1a3ee61b04826787dcf827e3f334d7860e259972d5905082041"
for row in ready["files"]:
    assert pin(ROOT/row["path"])==row
    assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
assert ready["measuredOpcodeEntries"]==37 and ready["rootInstructionPCsExercised"]==1006 and ready["observedRootInstructionBytes"]==4024
compiled=read(fresh/"work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"]==306 and len(compiled["results"])==854 and all(row["status"]=="compiled" for row in compiled["results"])
counts=[]
for step in raw["steps"]:
    log=fresh/step["log"];assert hashlib.sha256(log.read_bytes()).hexdigest()==step["logSha256"]
    if step["name"].endswith("-tests"):
        value=log.read_text();assert value.strip().endswith("OK");counts.append(int(re.search(r"Ran (\d+) tests",value)[1]))
assert sorted(counts)==[10,13,15,21,22] and sum(counts)==81
receipt={"schemaVersion":1,"status":"qualified-independent-bounded-partial-execute031",
    "sourceRevision":raw["sourceRevision"],"completeUnmodifiedBatchReplayPassed":True,
    "rawReplay":pin(raw_path),"driver":pin(ROOT/"toolscripts/isolated_component_replay.py"),
    "plan":pin(ROOT/"config/replays/execute031.json"),"ready":pin(ready_path),
    "primaryPrivateExecution":pin(primary),"independentPrivateExecution":pin(secondary),"allReportAndLinkedArtifactBytesIdentical":True,
    "artifacts":artifacts,"cases":314,"fourTargetObservations":1256,"returningControls":22,"sameFinalArenaControls":4,
    "tests":81,"publicUnits":306,"publicCompilations":854,"baseline028ProgramsPreserved":108,
    "all108StructuredPrefixesAndEntireDefinedSourceArenasIdentical":True,"wholeOriginalSourceArenaEqualSets":286,
    "nativeInactiveFrameDifferenceSets":28,"observedOpcodeEntries":37,"rootInstructionPcsExercised":1006,
    "rootInstructionBytesObserved":4024,"rootInstructionBytesTotal":13184,"classifiedDataBytes":628,
    "wholeExecuteHelperVmGameAndroidOsOrPhysicalDeviceClaimed":False,"sourceAdmissionGranted":False,"newWholeFunctionCredit":0,
    "producer":pin(Path(__file__))}
(ROOT/"evidence/verification/execute031-coordinator-a4f8f85.json").write_text(json.dumps(receipt,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"cases":314,"tests":81,"observedRootInstructionBytes":4024,"wholeFunctionCredit":0}))
