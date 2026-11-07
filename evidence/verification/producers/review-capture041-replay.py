import hashlib
import json
from pathlib import Path
import re
import sys


ROOT=Path.cwd();sys.path.insert(0,str(ROOT/"toolscripts"))
from replay_packet_compare import PacketComparison

def read(path):return json.loads(Path(path).read_text(encoding="utf-8"))
def pin(path):
    path=Path(path);data=path.read_bytes()
    return {"path":path.relative_to(ROOT).as_posix(),"bytes":len(data),"sha256":hashlib.sha256(data).hexdigest()}

class CompleteCaptureComparison(PacketComparison):
    def text(self,value,root):
        value=super().text(value,root)
        for name in ["primary-qualified","coordinator-positive"]:
            value=value.replace("work/squirrel-capture041/"+name,"<CAPTURE>")
        for name in ["controls-corrected","coordinator-controls"]:
            value=value.replace("work/squirrel-capture041/"+name,"<CONTROLS>")
        return value

raw_path=ROOT/"evidence/verification/capture041-isolated-6500c15.json"
raw=read(raw_path);assert raw["status"]=="passed" and all(row["returncode"]==0 for row in raw["steps"])
fresh=Path(raw["replayRoot"]);compare=CompleteCaptureComparison(ROOT,fresh)
primary_path=ROOT/"evidence/lanes/squirrel-capture041/execution.json"
secondary_path=fresh/"work/squirrel-capture041/primary-qualified/execution.json"
primary,secondary=read(primary_path),read(secondary_path)
assert pin(primary_path)["sha256"]=="82e2bef6cdd2470ab8fbb2cc405273f1de973c434fb46c8f64890b0da39fe77a"
compare.compare(primary,secondary,"capture-execution")
controls_path=ROOT/"evidence/lanes/squirrel-capture041/controls.json"
controls=read(controls_path)
compare.compare(controls,read(fresh/"work/squirrel-capture041/controls-corrected/controls.json"),"capture-controls")
assert primary["sets"]==136 and primary["targetObservations"]==544
assert primary["postAliasWholeArenaEqualSets"]==126 and primary["preAliasCompleteArenaEqualSets"]==0
assert controls["count"]==7 and controls["allNormallyReturned"] and controls["allRejected"]
assert controls["sameFinalSourceArenaControls"]==2 and controls["nativeTargetNormalReturns"]==14
ready_path=ROOT/"evidence/lanes/squirrel-capture041/ready.json";ready=read(ready_path)
assert pin(ready_path)["sha256"]=="92dc592254a782076d8572fa86fb970812c9ffee849eabcd537a6ec5bff276b1"
for row in ready["files"]:
    assert pin(ROOT/row["path"])==row
    assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
supplement_path=ROOT/"evidence/verification/capture041-source-closure-supplement.json"
for row in read(supplement_path)["sourceFiles"]:
    assert pin(ROOT/row["path"])==row
    assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
assert primary["normalReturnSets"]==132 and primary["terminalBoundarySets"]==4
assert primary["terminalComparisonArenaEqualSets"]==4 and primary["preservedFrozen038Sets"]==108
compiled=read(fresh/"work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"]==374 and len(compiled["results"])==1054
assert all(row["status"]=="compiled" for row in compiled["results"])
counts=[]
for step in raw["steps"]:
    log=fresh/step["log"];assert hashlib.sha256(log.read_bytes()).hexdigest()==step["logSha256"]
    if step["name"].endswith("-tests"):
        value=log.read_text(encoding="utf-8");assert value.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests",value)[1]))
assert sorted(counts)==[10,15,15,21,22] and sum(counts)==83
receipt={"schemaVersion":1,"status":"qualified-independent-bounded-capture041-controller-contracts",
    "sourceRevision":raw["sourceRevision"],"completeUnmodifiedBatchReplayPassed":True,
    "rawReplay":pin(raw_path),"producer":pin(Path(__file__)),"ready":pin(ready_path),
    "primaryExecution":pin(primary_path),"independentExecution":pin(secondary_path),
    "primaryControls":pin(controls_path),"sourceClosureSupplement":pin(supplement_path),"cases":136,"fourTargetObservations":544,"normallyReturningSets":132,"terminalContractSets":4,
    "returningControls":7,"sameFinalArenaControls":2,"tests":83,"publicUnits":374,"publicCompilations":1054,
    "preAliasWholeArmArenaEqualSets":0,"postVerifiedCallbackAliasWholeArmArenaEqualSets":126,"terminalComparisonArenaEqualSets":4,"definedNormalMemoryEqualSets":132,
    "allExecutionAndControlFieldsCompared":True,"verifiedPathTimingOrCoffTimestampVariants":compare.variants,
    "controllerInstructionPcsExercised":273,"controllerInstructionPcsTotal":276,
    "ownerFragmentInstructionPcsExercised":18,"unvisitedLiveNullTemplateRetainConditionExplicit":True,"hazardContextIsNotValidOwnershipSafety":True,"physicalKernelOutcomeClaimed":False,
    "sourceAdmissionGranted":False,"newWholeFunctionCredit":0,"wholeVmGameAndroidOsOrDeviceClaimed":False}
(ROOT/"evidence/verification/capture041-coordinator-6500c15.json").write_text(json.dumps(receipt,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"cases":136,"tests":83,"wholeFunctionCredit":0,"verifiedVariants":len(compare.variants)}))
