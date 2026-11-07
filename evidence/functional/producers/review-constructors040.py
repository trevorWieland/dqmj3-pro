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

coordinator_path="evidence/verification/constructors040-coordinator-6dca03b.json"
coordinator=read(coordinator_path)
assert coordinator["completeUnmodifiedBatchReplayPassed"] and coordinator["tests"]==80
assert coordinator["all32CaseRowsByteIdentical"] and coordinator["originalInstructionsVisited"]==129
execution_path="evidence/lanes/squirrel-state040/constructors-v1/packet.json"
execution=read(execution_path)
assert pin(execution_path)["sha256"]=="bb5aa24989d4bd5f97c3871323c5186ea79527a868d60e4bbd29e8feef74abfd"
registry=read("config/functional-functions.json")
census,unused=native_census_overlay.compose(ROOT,read(registry["census"]["path"]))
canonical={row["address"]:row for row in census["functions"]}
inventory=read("evidence/inventory/update-content0.json")
functions=[]
for candidate in execution["functions"]:
    address=candidate["entry"];original=canonical[address]
    assert address in [0x14c4c8,0x15467c] and original["textBodyBytes"]==candidate["instructionBytes"]
    assert not candidate["unobservedInstructionAddresses"]
    functions.append({"symbol":candidate["symbol"],"canonicalIdentity":{"address":address,"mode":"ARM",
        "moduleSha256":inventory["codeSha256"],"programId":inventory["programId"]},
        "source":candidate["source"]["objectOrigin"]["source"],"functionalConfidence":"medium","exactObjectSpan":False,"exactLinkedSpan":False,
        "originalInstructionBytes":original["textBodyBytes"],"originalInstructionRanges":original["ranges"],
        "reportEntryBytes":original["textBodyBytes"],"behavior":{"allPassed":True,"boundedNotUniversalEquivalence":True,
            "execution":pin(execution_path),"independentSourceComponentReplay":pin(coordinator_path),
            "batchCases":32,"fourProfileObservations":128,"returningControls":6,"returningControlExecutions":18,
            "originalInstructions":original["textBodyBytes"]//4,"originalInstructionsVisited":original["textBodyBytes"]//4,
            "targetSharedBytes":180,"nativeSharedBytes":448,"targetVmBytes":168,"nativeVmBytes":264,
            "actualWindowsAndAarch64Model":True,"constructorUnwrittenStoragePreserved":True,
            "startupTemplateEstablishedByActualOriginalInitializer":True,"nativeLegacyVmViewsCast":False,
            "provisionalStorageNamesAreNotInitializationRoleClaims":True,"wholeMemoryEquivalenceClaimed":False,
            "limits":["allocation failure", "engine callback or VM method execution", "shared/VM postconstruction initialization",
                "factory or destructor", "full interpreter/game", "Android OS or physical handheld"]}})
assert len(functions)==2 and sum(row["originalInstructionBytes"] for row in functions)==516
dependencies={}
pending=["source/squirrel-wave040/"+name for name in ["bindings.c","shared_constructor.c","vm_constructor.c"]]
while pending:
    name=pending.pop()
    if name in dependencies:continue
    dependencies[name]=pin(name);path=ROOT/name
    for header in re.findall(r'^#include "([^"\n]+)"',path.read_text(encoding="utf-8"),re.M):
        pending.append((path.parent/header).resolve().relative_to(ROOT).as_posix())
packet={"schemaVersion":1,"status":"coordinator-reviewed-bounded-complete-startup040-constructors",
    "moduleSha256":inventory["codeSha256"],"acceptedSourceCreditGranted":0,"functions":functions,
    "headers":[row for path,row in dependencies.items() if path.endswith(".h")],"sourceDependencies":list(dependencies.values()),
    "recoveredPhysicalFunctionBytes":516,"grossCodeByteDenominatorChanged":False,"wholeGameCreditGranted":0,
    "producer":pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT/"evidence/functional/constructors040.json").write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"functions":2,"boundedBodyBytes":516,"sdkCredit":0,"completeVmCredit":0}))
