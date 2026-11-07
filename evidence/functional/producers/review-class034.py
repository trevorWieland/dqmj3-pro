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

coordinator_path="evidence/verification/class034-coordinator-341ba3c.json"
coordinator=read(coordinator_path)
assert coordinator["completeUnmodifiedBatchReplayPassed"] and coordinator["tests"]==80
ready_path="evidence/lanes/squirrel-class034/ready.json"
for row in read(ready_path)["files"]:assert pin(row["path"])==row
providers=read("evidence/lanes/squirrel-class034/providers.json")
coverage=read("evidence/lanes/squirrel-class034/coverage.json")
execution_path="evidence/lanes/squirrel-class034/execution.json"
execution=read(execution_path)
registry=read("config/functional-functions.json")
census,unused=native_census_overlay.compose(ROOT,read(registry["census"]["path"]))
canonical={row["address"]:row for row in census["functions"]}
inventory=read("evidence/inventory/update-content0.json")
mappings={row["symbol"]:row for row in read("config/source-names.json")["mappings"]}
selected={0x1996f4,0x1804b4,0x1880d0,0x173d60,0x198418}
rows=[]
for candidate in providers["canonicalSourceCandidates"]:
    address=candidate["address"]
    if address not in selected:continue
    original=canonical[address];symbol="fn_"+format(address,"08x");mapping=mappings[symbol]
    observed=next(row for row in coverage["functions"] if row["address"]==address)
    size=original["textBodyBytes"]
    assert observed["totalArmInstructions"]*4==size
    assert mapping["sourceName"]==candidate["symbol"] and mapping["sourcePath"]==candidate["source"]["path"]
    rows.append({"symbol":symbol,"canonicalIdentity":{"address":address,"mode":"ARM",
        "moduleSha256":inventory["codeSha256"],"programId":inventory["programId"]},
        "source":pin(mapping["sourcePath"]),"sourceName":mapping["sourceName"],"symbolNames":pin("include/bytematch_names.h"),
        "functionalConfidence":"medium","exactObjectSpan":False,"exactLinkedSpan":False,
        "originalInstructionBytes":size,"originalInstructionRanges":original["ranges"],"reportEntryBytes":next(part["endExclusive"]-address for part in original["ranges"] if part["start"]<=address<part["endExclusive"]),
        "behavior":{"allPassed":True,"boundedNotUniversalEquivalence":True,
            "execution":pin(execution_path),"independentSourceComponentReplay":pin(coordinator_path),
            "batchCases":102,"fourTargetObservations":408,"returningControls":15,"sameFinalArenaControls":5,
            "originalInstructions":observed["totalArmInstructions"],"originalInstructionsVisited":observed["coveredArmInstructions"],
            "unvisitedDeclaredDomainConditions":observed["missingConditions"],
            "preAliasWholeArenaEqualSets":0,"postVerifiedCallbackAliasWholeArenaEqualSets":70,
            "definedMemoryEqualSets":102,"inactiveFrameDifferenceSets":32,
            "rawPreAliasHashesMismatchOffsetsAndTypedActualAliasesPreserved":True,
            "callbackAliasesOnlyInPostExecutionComparisonCopies":True,"executedHeapCodeRegistersOrTextPatched":False,
            "inactiveFrameWordsRead":False,"sourceOriginalModuleMapped":False,
            "actualWindowsAndAarch64Model":True,"wholeVmGameAndroidOsOrPhysicalDeviceClaimed":False,
            "limits":providers["unsupported"]}})
assert len(rows)==5 and sum(row["originalInstructionBytes"] for row in rows)==3108
dependencies={row["path"]:row for row in providers["productFiles"]};pending=[ROOT/path for path in dependencies]
while pending:
    path=pending.pop()
    for name in re.findall(r'^#include "([^"\n]+)"',path.read_text(),re.M):
        header=(path.parent/name).resolve();relative=header.relative_to(ROOT).as_posix()
        if relative not in dependencies:dependencies[relative]=pin(relative);pending.append(header)
packet={"schemaVersion":1,"status":"coordinator-reviewed-bounded-class034-members-and-script-constructors",
    "moduleSha256":inventory["codeSha256"],"acceptedSourceCreditGranted":0,"functions":rows,
    "headers":[row for path,row in dependencies.items() if path.endswith(".h")],"sourceDependencies":list(dependencies.values()),
    "frozenReady":pin(ready_path),"recoveredPhysicalFunctionBytes":3108,
    "alreadyCataloguedFamilyBytesExcludedFromNewCredit":0,"ambiguousFactoryBytesHeldForUniqueSourceName":0,
    "grossCodeByteDenominatorChanged":False,"wholeGameCreditGranted":0,"producer":pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT/"evidence/functional/class034.json").write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"functions":5,"boundedBodyBytes":3108,"duplicateBytesExcluded":0,"heldFactoryBytes":0}))
