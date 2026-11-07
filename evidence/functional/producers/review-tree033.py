import hashlib
import json
from pathlib import Path

ROOT=Path.cwd()
def read(path):return json.loads((ROOT/path).read_text(encoding="utf-8"))
def pin(path):
    data=(ROOT/path).read_bytes();return {"path":path,"bytes":len(data),"sha256":hashlib.sha256(data).hexdigest()}

coordinator_path="evidence/verification/tree033-coordinator-dea2bdf.json"
coordinator=read(coordinator_path)
assert coordinator["completeUnmodifiedBatchReplayPassed"] and coordinator["immutableReplayUniqueTests"]==85
ready_path="evidence/lanes/tree-erase033/ready.json"
for row in read(ready_path)["files"]:assert pin(row["path"])==row
execution_path="evidence/lanes/tree-erase033/execution.json";execution=read(execution_path)
claim=read("evidence/lanes/tree-erase033/claim.json");exclusions=read("evidence/lanes/tree-erase033/abi-and-exclusions.json")
module=read("evidence/inventory/update-content0.json")
rows=[]
for candidate in claim["functions"]:
    address=candidate["entry"]
    excluded=next(row for row in exclusions["functions"] if row["entry"]==address)
    rows.append({"symbol":"fn_"+format(address,"08x"),"canonicalIdentity":{"address":address,"mode":"ARM",
        "moduleSha256":module["codeSha256"],"programId":module["programId"]},
        "source":pin("src/native/wave033/tree_erase.c"),"sourceName":"tree_erase033","symbolNames":pin("include/bytematch_names.h"),
        "functionalConfidence":"medium","exactObjectSpan":False,"exactLinkedSpan":False,
        "originalInstructionBytes":1632,"originalInstructionRanges":candidate["ranges"],"reportEntryBytes":1632,
        "behavior":{"allPassed":True,"boundedNotUniversalEquivalence":True,"execution":pin(execution_path),
            "independentSourceComponentReplay":pin(coordinator_path),"fixtureCasesEachCanonicalBody":2048,
            "familyOriginalCalls":14336,"sourceCallsEachBackend":2048,"returningControls":6,"testsPassed":85,
            "originalInstructions":408,"originalInstructionsVisited":406,"unvisitedInvariantExclusions":excluded["exclusions"],
            "sourceArmWhole4096ByteCallerArenasEqual":True,"nativeTypedFieldsAndUnmodifiedCallerBytesChecked":True,
            "rawNativeByteEqualityAcrossPointerWidthsClaimed":False,"originalOrExecutedSourceHeapCodeRegistersPatched":False,
            "sourceOriginalModuleMapped":False,"actualWindowsAndAarch64Model":True,
            "wholeGameAndroidOsOrPhysicalDeviceClaimed":False,
            "limits":["Owned coherent acyclic ordered graphs with0-48 active nodes and0/1 color flags;0-2 preexisting recycled nodes.",
                "Non-NULL caller iterator/control; output may alias input, otherwise iterator/control/node storage is disjoint.",
                "No volatile/concurrent graph mutation, corrupt parents, cycles, arbitrary aliases or universal balancing invariant claim."]}})
dependencies=[pin("src/native/wave033/"+name) for name in ["tree_erase.c","tree_rebalance.c","tree_erase.h"]]
packet={"schemaVersion":1,"status":"coordinator-reviewed-bounded-seven-clone-typed-tree-erase",
    "moduleSha256":module["codeSha256"],"acceptedSourceCreditGranted":0,"functions":rows,"sourceDependencies":dependencies,
    "headers":[pin("src/native/wave033/tree_erase.h")],"frozenReady":pin(ready_path),"recoveredPhysicalFunctionBytes":11424,
    "grossCodeByteDenominatorChanged":False,"wholeGameCreditGranted":0,"producer":pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT/"evidence/functional/tree033.json").write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"functions":7,"boundedBytes":11424,"excludedUnexecutedBytes":56}))
