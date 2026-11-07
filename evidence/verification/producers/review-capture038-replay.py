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

class CaptureComparison(PacketComparison):
    def text(self,value,root):
        value=super().text(value,root)
        for name in ["primary-qualified","coordinator-positive"]:
            value=value.replace("work/squirrel-capture038/"+name,"<CAPTURE>")
        for name in ["controls-sealed","coordinator-controls"]:
            value=value.replace("work/squirrel-capture038/"+name,"<CONTROLS>")
        return value

raw_path=ROOT/"evidence/verification/capture038-isolated-19d06af.json"
raw=read(raw_path);assert raw["status"]=="passed" and all(row["returncode"]==0 for row in raw["steps"])
fresh=Path(raw["replayRoot"]);compare=CaptureComparison(ROOT,fresh)
primary_path=ROOT/"evidence/lanes/squirrel-capture038/execution.json"
secondary_path=fresh/"work/squirrel-capture038/primary-qualified/execution.json"
primary,secondary=read(primary_path),read(secondary_path)
assert pin(primary_path)["sha256"]=="4a651bd0559b6ebaf2e6a0616e549fe75712c716858f1f181bbf6ada65bd1ec2"
compare.compare(primary,secondary,"capture-execution")
controls_path=ROOT/"evidence/lanes/squirrel-capture038/controls.json"
controls=read(controls_path)
compare.compare(controls,read(fresh/"work/squirrel-capture038/controls-sealed/controls.json"),"capture-controls")
assert primary["sets"]==108 and primary["targetObservations"]==432
assert primary["postAliasWholeArenaEqualSets"]==108 and primary["preAliasCompleteArenaEqualSets"]==0
assert controls["count"]==7 and controls["allNormallyReturned"] and controls["allRejected"]
assert controls["sameFinalSourceArenaControls"]==2 and controls["nativeTargetNormalReturns"]==14
ready_path=ROOT/"evidence/lanes/squirrel-capture038/ready.json";ready=read(ready_path)
assert pin(ready_path)["sha256"]=="970446171bf8aabfb185b021623a12a455770d417651104ee40e9c58220ac6c1"
for row in ready["files"]:
    assert pin(ROOT/row["path"])==row
    assert hashlib.sha256((fresh/row["path"]).read_bytes()).hexdigest()==row["sha256"]
compiled=read(fresh/"work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"]==355 and len(compiled["results"])==999
assert all(row["status"]=="compiled" for row in compiled["results"])
counts=[]
for step in raw["steps"]:
    log=fresh/step["log"];assert hashlib.sha256(log.read_bytes()).hexdigest()==step["logSha256"]
    if step["name"].endswith("-tests"):
        value=log.read_text(encoding="utf-8");assert value.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests",value)[1]))
assert sorted(counts)==[10,12,15,21,22] and sum(counts)==80
receipt={"schemaVersion":1,"status":"qualified-independent-bounded-partial-capture038",
    "sourceRevision":raw["sourceRevision"],"completeUnmodifiedBatchReplayPassed":True,
    "rawReplay":pin(raw_path),"producer":pin(Path(__file__)),"ready":pin(ready_path),
    "primaryExecution":pin(primary_path),"independentExecution":pin(secondary_path),
    "primaryControls":pin(controls_path),"cases":108,"fourTargetObservations":432,
    "returningControls":7,"sameFinalArenaControls":2,"tests":80,"publicUnits":355,"publicCompilations":999,
    "preAliasWholeArmArenaEqualSets":0,"postVerifiedCallbackAliasWholeArmArenaEqualSets":108,
    "allExecutionAndControlFieldsCompared":True,"verifiedPathTimingOrCoffTimestampVariants":compare.variants,
    "controllerInstructionPcsExercised":248,"controllerInstructionPcsTotal":276,
    "ownerFragmentInstructionPcsExercised":18,"unqualifiedContextsRemainExplicit":True,
    "sourceAdmissionGranted":False,"newWholeFunctionCredit":0,"wholeVmGameAndroidOsOrDeviceClaimed":False}
(ROOT/"evidence/verification/capture038-coordinator-19d06af.json").write_text(json.dumps(receipt,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"cases":108,"tests":80,"wholeFunctionCredit":0,"verifiedVariants":len(compare.variants)}))
