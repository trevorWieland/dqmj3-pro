import hashlib
import json
from pathlib import Path
import re
import sys

ROOT=Path.cwd();sys.path.insert(0,str(ROOT/"toolscripts"))
import native_census_overlay

def read(path):return json.loads((ROOT/path).read_text(encoding="utf-8"))
def pin(path):
    data=(ROOT/path).read_bytes()
    return {"path":path,"bytes":len(data),"sha256":hashlib.sha256(data).hexdigest()}

coordinator_path="evidence/verification/capture041-coordinator-6500c15.json"
coordinator=read(coordinator_path)
assert coordinator["completeUnmodifiedBatchReplayPassed"] and coordinator["tests"]==83
assert coordinator["normallyReturningSets"]==132 and coordinator["terminalContractSets"]==4
execution_path="evidence/lanes/squirrel-capture041/execution.json"
execution=read(execution_path)
assert pin(execution_path)["sha256"]=="82e2bef6cdd2470ab8fbb2cc405273f1de973c434fb46c8f64890b0da39fe77a"
providers=read("evidence/lanes/squirrel-capture041/providers.json")
registry=read("config/functional-functions.json")
census,unused=native_census_overlay.compose(ROOT,read(registry["census"]["path"]))
original=next(row for row in census["functions"] if row["address"]==0x196b08)
assert original["textBodyBytes"]==1104
inventory=read("evidence/inventory/update-content0.json")
mapping=next(row for row in read("config/source-names.json")["mappings"] if row["symbol"]=="fn_00196b08")
assert mapping["sourceName"]=="sq_script_create041" and mapping["sourcePath"]=="source/squirrel-wave041/script_create.c"
coverage=execution["coverage"][0]
assert coverage["totalArmInstructions"]==276 and coverage["coveredArmInstructions"]==273
function={"symbol":"fn_00196b08","canonicalIdentity":{"address":0x196b08,"mode":"ARM",
    "moduleSha256":inventory["codeSha256"],"programId":inventory["programId"]},
    "source":pin(mapping["sourcePath"]),"sourceName":mapping["sourceName"],"symbolNames":pin("include/bytematch_names.h"),
    "functionalConfidence":"medium","exactObjectSpan":False,"exactLinkedSpan":False,
    "originalInstructionBytes":1104,"originalInstructionRanges":original["ranges"],"reportEntryBytes":1104,
    "behavior":{"allPassed":True,"boundedNotUniversalEquivalence":True,
        "execution":pin(execution_path),"independentSourceComponentReplay":pin(coordinator_path),
        "batchSets":136,"fourTargetObservations":544,"normallyReturningSets":132,"terminalContractSets":4,
        "returningControls":7,"sameFinalSourceArenaControls":2,"preservedFrozen038Cases":108,
        "originalInstructions":276,"originalInstructionsVisited":273,
        "unvisitedInstructionAddresses":coverage["missingInstructionAddresses"],
        "unvisitedCondition":providers["nullTemplate"],"postAliasWholeNormalArenaEqualSets":126,
        "terminalComparisonArenaEqualSets":4,"definedNormalMemoryEqualSets":132,
        "preAliasWholeNormalArenaEqualSets":0,"typedAliasesOnlyInPostExecutionComparisonCopies":True,
        "executedStateChangedByAliases":False,"physicalKernelOutcomeClaimed":False,
        "hazardContextDoesNotEstablishValidOwnershipSafety":providers["hazardContext"],
        "terminalContexts":providers["terminalContexts"],"frameAndObjectContracts":providers["frameAndObjectContracts"],
        "actualWindowsAndAarch64Model":True,"wholeVmGameAndroidOsOrPhysicalDeviceClaimed":False}}
dependencies={};pending=[row["path"] for row in execution["sourceFiles"]]
while pending:
    name=pending.pop()
    if name in dependencies:continue
    dependencies[name]=pin(name);path=ROOT/name
    for header in re.findall(r'^#include "([^"\n]+)"',path.read_text(encoding="utf-8"),re.M):
        pending.append((path.parent/header).resolve().relative_to(ROOT).as_posix())
packet={"schemaVersion":1,"status":"coordinator-reviewed-bounded-complete-capture041-controller-contracts",
    "moduleSha256":inventory["codeSha256"],"acceptedSourceCreditGranted":0,"functions":[function],
    "headers":[row for path,row in dependencies.items() if path.endswith(".h")],"sourceDependencies":list(dependencies.values()),
    "sourceClosureSupplement":pin("evidence/verification/capture041-source-closure-supplement.json"),
    "recoveredPhysicalFunctionBytes":1104,"duplicateClosureProviderCredit":0,
    "wholeExecuteCreditGranted":0,"grossCodeByteDenominatorChanged":False,"wholeGameCreditGranted":0,
    "producer":pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT/"evidence/functional/capture041.json").write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"functions":1,"boundedBodyBytes":1104,"visitedInstructions":273,"liveNullConditionInstructions":3}))
