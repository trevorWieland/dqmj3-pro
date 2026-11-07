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

coordinator_path="evidence/verification/exception035-coordinator-b335f7a.json"
coordinator=read(coordinator_path)
assert coordinator["completeUnmodifiedBatchReplayPassed"] and coordinator["tests"]==78
assert coordinator["errorHandlerInstructionCount"]==coordinator["errorHandlerInstructionsVisited"]==60
ready_path="evidence/lanes/squirrel-exception035/ready.json"
for row in read(ready_path)["files"]:assert pin(row["path"])==row
providers=read("evidence/lanes/squirrel-exception035/providers.json")
execution_path="evidence/lanes/squirrel-exception035/execution.json"
registry=read("config/functional-functions.json")
census,unused=native_census_overlay.compose(ROOT,read(registry["census"]["path"]))
original=next(row for row in census["functions"] if row["address"]==0x198320)
assert original["textBodyBytes"]==240
inventory=read("evidence/inventory/update-content0.json")
mapping=next(row for row in read("config/source-names.json")["mappings"] if row["symbol"]=="fn_00198320")
assert mapping["sourceName"]=="sq_exception_handler035" and mapping["sourcePath"]=="source/squirrel-wave035/handler.c"
row={"symbol":"fn_00198320","canonicalIdentity":{"address":0x198320,"mode":"ARM",
    "moduleSha256":inventory["codeSha256"],"programId":inventory["programId"]},
    "source":pin(mapping["sourcePath"]),"sourceName":mapping["sourceName"],"symbolNames":pin("include/bytematch_names.h"),
    "functionalConfidence":"medium","exactObjectSpan":False,"exactLinkedSpan":False,
    "originalInstructionBytes":240,"originalInstructionRanges":original["ranges"],"reportEntryBytes":240,
    "behavior":{"allPassed":True,"boundedNotUniversalEquivalence":True,
        "execution":pin(execution_path),"independentSourceComponentReplay":pin(coordinator_path),
        "batchCases":818,"fourTargetObservations":3272,"returningControls":7,
        "sameNormalSourceFinalArmArenaControls":2,"originalInstructions":60,"originalInstructionsVisited":60,
        "wholeOriginalSourceArenaEqualSets":632,"inactiveFrameDifferenceSets":186,
        "allOtherArenaBytesCompared":True,"inactiveFrameWordsRead":False,
        "executedHeapCodeRegistersOrTextPatched":False,"sourceOriginalModuleMapped":False,
        "actualWindowsAndAarch64Model":True,"wholeVmGameAndroidOsOrPhysicalDeviceClaimed":False,
        "limits":providers["unsupported"]}}
dependencies={path:pin(path) for path in providers["productFiles"]};pending=list(dependencies)
while pending:
    path=ROOT/pending.pop()
    for name in re.findall(r'^#include "([^"\n]+)"',path.read_text(encoding="utf-8"),re.M):
        header=(path.parent/name).resolve();relative=header.relative_to(ROOT).as_posix()
        if relative not in dependencies:dependencies[relative]=pin(relative);pending.append(relative)
packet={"schemaVersion":1,"status":"coordinator-reviewed-bounded-exception035-error-handler",
    "moduleSha256":inventory["codeSha256"],"acceptedSourceCreditGranted":0,"functions":[row],
    "headers":[value for path,value in dependencies.items() if path.endswith(".h")],
    "sourceDependencies":list(dependencies.values()),"frozenReady":pin(ready_path),
    "recoveredPhysicalFunctionBytes":240,"alreadyCataloguedErrorRaiserBytesExcluded":92,
    "wholeExecuteCreditGranted":0,"grossCodeByteDenominatorChanged":False,"wholeGameCreditGranted":0,
    "producer":pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT/"evidence/functional/exception035.json").write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"functions":1,"boundedBodyBytes":240,"duplicateRaiserBytesExcluded":92}))
