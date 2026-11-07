import hashlib
import json
from pathlib import Path


ROOT=Path.cwd()
def read(path):return json.loads((ROOT/path).read_text(encoding="utf-8"))
def pin(path):
    data=(ROOT/path).read_bytes()
    return {"path":path,"bytes":len(data),"sha256":hashlib.sha256(data).hexdigest()}

coordinator_path="evidence/verification/gzip036-coordinator-ccb6f6f.json"
coordinator=read(coordinator_path)
assert coordinator["completeUnmodifiedBatchReplayPassed"] and coordinator["uniqueTests"]==97
assert coordinator["all141CaseRowsByteIdentical"] and coordinator["originalInstructionsVisited"]==124
manifest_path="evidence/lanes/native-archive032/gzip/frozen-manifest.json"
assert pin(manifest_path)["sha256"]=="efc55300ebb4b4878056e6d43d9297d692e8291070dc51c2c83f353b3e2e2f01"
for row in read(manifest_path)["files"]:assert pin(row["path"])==row
proposal_path="evidence/lanes/native-archive032/gzip/functional-proof-proposal.json"
assert pin(proposal_path)["sha256"]=="efaa733bc59228d5d84d28bc3b596541f3c0d464c3ced394169e36f6c6fb5640"
packet=read(proposal_path)
assert len(packet["functions"])==5 and sum(row["originalInstructionBytes"] for row in packet["functions"])==496
assert all(row["symbol"]!="fn_006edec8" for row in packet["functions"])
assert all(row["behavior"]["originalInstructions"]==row["behavior"]["originalInstructionsReached"] for row in packet["functions"])
for row in packet["functions"]:
    assert pin(row["source"]["path"])==row["source"]
    assert row["functionalConfidence"]=="medium" and not row["exactObjectSpan"] and not row["exactLinkedSpan"]
    row["behavior"]["independentSourceComponentReplay"]=pin(coordinator_path)
    row["behavior"]["all141IndependentReplayCaseRowsByteIdentical"]=True
    row["behavior"]["uniqueIndependentReplayTests"]=97
packet.update(status="coordinator-reviewed-bounded-gzip036-wrapper-family",independentCleanReplayClaimed=True,
    sharedRegistryChanged=False,recoveredPhysicalFunctionBytes=496,grossCodeByteDenominatorChanged=False,
    wholeGameCreditGranted=0,coordinatorReplay=pin(coordinator_path),frozenManifest=pin(manifest_path),
    originalProposal=pin(proposal_path),producer=pin(Path(__file__).relative_to(ROOT).as_posix()))
(ROOT/"evidence/functional/gzip036.json").write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"functions":5,"boundedBodyBytes":496,"duplicateGetterBytesExcluded":12,"sdkCredit":0}))
