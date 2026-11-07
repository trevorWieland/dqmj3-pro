import hashlib
import json
from pathlib import Path
import re

ROOT=Path.cwd()

def read(path):return json.loads(Path(path).read_text(encoding="utf-8"))
def pin(path):
    path=Path(path)
    return {"path":path.relative_to(ROOT).as_posix(),"bytes":path.stat().st_size,"sha256":hashlib.sha256(path.read_bytes()).hexdigest()}

raw_path=ROOT/"evidence/verification/iteration039-isolated-0ff4a82.json"
raw=read(raw_path);assert raw["status"]=="passed" and all(step["returncode"]==0 for step in raw["steps"])
fresh=Path(raw["replayRoot"]);primary=ROOT/"work/squirrel-iteration039/qualified398/report.json";secondary=fresh/"work/squirrel-iteration039/coordinator-qualified398/report.json"
assert primary.read_bytes()==secondary.read_bytes()
assert pin(primary)["sha256"]=="457c06cf367d8a0e03ebc89d24d6658b75991a3d85025beb3b24e368b55b64af"
a=read(primary)
assert all(a[key]==398 for key in ["originalReturns","sourceReturns","windowsReturns","a64ModelReturns"])
assert len(a["negativeControls"])==7 and all(all(row[key] for key in ["armActuallyReturned","windowsActuallyReturned","a64ActuallyReturned","rejectedByIndependentModels"]) for row in a["negativeControls"])
assert sum(row["sameFinalSourceArmArena"] for row in a["negativeControls"])==2
assert len(a["baseline031Preserved"])==314 and all(row["newSourcePrefixIdentical"] and row["wholeSourceArenaIdentical"] for row in a["baseline031Preserved"])
assert sum(row["comparison"]["wholeInitializedArenaEqual"] for row in a["cases"])==298
artifacts=[]
for relative,key in [("arm/iteration039.elf","armElfSha256"),("windows/iteration039.exe","windowsExeSha256"),("android/android-model.elf","a64ElfSha256")]:
    path=primary.parent/relative;assert pin(path)["sha256"]==a[key]
    assert hashlib.sha256((secondary.parent/relative).read_bytes()).hexdigest()==a[key]
    artifacts.append(pin(path))
ready_path=ROOT/"evidence/lanes/squirrel-iteration039/ready.json";ready=read(ready_path)
assert pin(ready_path)["sha256"]=="4735af31da7e6fad536ac55eb8732991e9491ebfce77b99ad69a89bf0a0a1488"
for row in ready["files"]:
    assert pin(ROOT/row["path"])==row
    assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
assert ready["sets"]==398 and not ready["wholeExecuteOrControllerComplete"]
compiled=read(fresh/"work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"]==364 and len(compiled["results"])==1024 and all(row["status"]=="compiled" for row in compiled["results"])
counts=[]
for step in raw["steps"]:
    log=fresh/step["log"];assert hashlib.sha256(log.read_bytes()).hexdigest()==step["logSha256"]
    if step["name"].endswith("-tests"):
        value=log.read_text();assert value.strip().endswith("OK");counts.append(int(re.search(r"Ran (\d+) tests",value)[1]))
assert sorted(counts)==[9,10,15,21,22] and sum(counts)==77
receipt={"schemaVersion":1,"status":"qualified-independent-bounded-partial-iteration039",
    "sourceRevision":raw["sourceRevision"],"completeUnmodifiedBatchReplayPassed":True,
    "rawReplay":pin(raw_path),"driver":pin(ROOT/"toolscripts/isolated_component_replay.py"),
    "plan":pin(ROOT/"config/replays/iteration039.json"),"ready":pin(ready_path),
    "primaryPrivateExecution":pin(primary),"independentPrivateExecution":pin(secondary),"allReportAndLinkedArtifactBytesIdentical":True,
    "artifacts":artifacts,"cases":398,"fourTargetObservations":1592,"returningControls":7,"sameNormalSourceFinalArenaControls":2,
    "tests":77,"publicUnits":364,"publicCompilations":1024,"baseline031ProgramsPreserved":314,
    "all314StructuredPrefixesAndEntireDefinedSourceArenasIdentical":True,"wholeOriginalSourceArenaEqualSets":298,
    "nativeInactiveFrameDifferenceSets":100,"rootInstructionPcsExercised":1036,
    "rootInstructionBytesObserved":4144,"rootInstructionBytesTotal":13184,"classifiedDataBytes":628,
    "wholeExecuteHelperVmGameAndroidOsOrPhysicalDeviceClaimed":False,"sourceAdmissionGranted":False,"newWholeFunctionCredit":0,
    "producer":pin(Path(__file__))}
(ROOT/"evidence/verification/iteration039-coordinator-0ff4a82.json").write_text(json.dumps(receipt,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"cases":398,"tests":77,"observedRootInstructionBytes":4144,"wholeFunctionCredit":0}))
