import hashlib
import json
from pathlib import Path
import re

ROOT=Path.cwd()

def read(path):return json.loads(Path(path).read_text(encoding="utf-8"))
def pin(path):
    path=Path(path)
    return {"path":path.relative_to(ROOT).as_posix(),"bytes":path.stat().st_size,"sha256":hashlib.sha256(path.read_bytes()).hexdigest()}

raw_path=ROOT/"evidence/verification/exception035-isolated-b335f7a.json"
raw=read(raw_path);assert raw["status"]=="passed" and all(step["returncode"]==0 for step in raw["steps"])
fresh=Path(raw["replayRoot"]);primary=ROOT/"work/squirrel-exception035/final-countbound818/report.json";secondary=fresh/"work/squirrel-exception035/qualified818/report.json"
assert primary.read_bytes()==secondary.read_bytes()
assert pin(primary)["sha256"]=="3a9f6ec0294260942f66a8cedfcd19acec2bc0c96aeef863c525a65edef6bfb6"
a=read(primary)
assert all(a[key]==818 for key in ["originalReturns","sourceReturns","windowsReturns","a64ModelReturns"])
assert len(a["negativeControls"])==7 and all(all(row[key] for key in ["armActuallyReturned","windowsActuallyReturned","a64ActuallyReturned","rejectedByIndependentModels"]) for row in a["negativeControls"])
assert sum(row["sameFinalSourceArmArena"] for row in a["negativeControls"])==2
assert len(a["baseline031Preserved"])==314 and all(row["newSourcePrefixIdentical"] and row["wholeSourceArenaIdentical"] for row in a["baseline031Preserved"])
assert sum(row["comparison"]["wholeInitializedArenaEqual"] for row in a["cases"])==632
assert set(range(0x198320,0x198410,4)).issubset(set(a["originalVisitedInstructions"]))
artifacts=[]
for relative,key in [("arm/exception035.elf","armElfSha256"),("windows/exception035.exe","windowsExeSha256"),("android/android-model.elf","a64ElfSha256")]:
    path=primary.parent/relative;assert pin(path)["sha256"]==a[key]
    assert hashlib.sha256((secondary.parent/relative).read_bytes()).hexdigest()==a[key]
    artifacts.append(pin(path))
ready_path=ROOT/"evidence/lanes/squirrel-exception035/ready.json";ready=read(ready_path)
assert pin(ready_path)["sha256"]=="9e9ed012b159f8e5a5431102c9666cc3fbe2e45f909ca7014d7071635c5fcf4e"
for row in ready["files"]:
    assert pin(ROOT/row["path"])==row
    assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
assert ready["sets"]==818 and not ready["wholeExecuteComplete"]
compiled=read(fresh/"work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"]==342 and len(compiled["results"])==960 and all(row["status"]=="compiled" for row in compiled["results"])
counts=[]
for step in raw["steps"]:
    log=fresh/step["log"];assert hashlib.sha256(log.read_bytes()).hexdigest()==step["logSha256"]
    if step["name"].endswith("-tests"):
        value=log.read_text();assert value.strip().endswith("OK");counts.append(int(re.search(r"Ran (\d+) tests",value)[1]))
assert sorted(counts)==[10,10,15,21,22] and sum(counts)==78
receipt={"schemaVersion":1,"status":"qualified-independent-bounded-partial-exception035",
    "sourceRevision":raw["sourceRevision"],"completeUnmodifiedBatchReplayPassed":True,
    "rawReplay":pin(raw_path),"driver":pin(ROOT/"toolscripts/isolated_component_replay.py"),
    "plan":pin(ROOT/"config/replays/exception035.json"),"ready":pin(ready_path),
    "primaryPrivateExecution":pin(primary),"independentPrivateExecution":pin(secondary),"allReportAndLinkedArtifactBytesIdentical":True,
    "artifacts":artifacts,"cases":818,"fourTargetObservations":3272,"returningControls":7,"sameNormalSourceFinalArenaControls":2,
    "tests":78,"publicUnits":342,"publicCompilations":960,"baseline031ProgramsPreserved":314,
    "all314StructuredPrefixesAndEntireDefinedSourceArenasIdentical":True,"wholeOriginalSourceArenaEqualSets":632,
    "nativeInactiveFrameDifferenceSets":186,"observedOpcodeEntries":40,"rootInstructionPcsExercised":1306,
    "errorHandlerInstructionCount":60,"errorHandlerInstructionsVisited":60,"rootInstructionBytesObserved":5224,"rootInstructionBytesTotal":13184,"classifiedDataBytes":628,
    "wholeExecuteHelperVmGameAndroidOsOrPhysicalDeviceClaimed":False,"sourceAdmissionGranted":False,"newWholeFunctionCredit":0,
    "producer":pin(Path(__file__))}
(ROOT/"evidence/verification/exception035-coordinator-b335f7a.json").write_text(json.dumps(receipt,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"cases":818,"tests":78,"observedRootInstructionBytes":5224,"wholeFunctionCredit":0}))
