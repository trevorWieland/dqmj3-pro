import copy
import hashlib
import json
from pathlib import Path

ROOT=Path.cwd()
def read(path):return json.loads((ROOT/path).read_text(encoding="utf-8"))
def pin(path):
    data=(ROOT/path).read_bytes();return {"path":path,"bytes":len(data),"sha256":hashlib.sha256(data).hexdigest()}

coordinator_path="evidence/verification/archive032-coordinator-dea2bdf.json"
coordinator=read(coordinator_path)
assert coordinator["completeUnmodifiedBatchReplayPassed"] and coordinator["uniqueTests"]==83
manifest_path="evidence/lanes/native-archive032/xbb/frozen-manifest.json"
for row in read(manifest_path)["files"]:assert pin(row["path"])==row
proposal_path="evidence/lanes/native-archive032/xbb/functional-proof-proposal.json"
packet=copy.deepcopy(read(proposal_path))
assert len(packet["functions"])==13 and sum(row["originalInstructionBytes"] for row in packet["functions"])==992
for row in packet["functions"]:
    row["behavior"]["independentSourceComponentReplay"]=pin(coordinator_path)
    row["behavior"]["coordinatorReviewed"]=True
packet.update(status="coordinator-reviewed-bounded-XBB-source-family",acceptedSourceCreditGranted=0,
    frozenManifest=pin(manifest_path),independentReplay=pin(coordinator_path),originalProposal=pin(proposal_path),
    supplementalCandidateStillUnadmitted=True,producer=pin(Path(__file__).relative_to(ROOT).as_posix()))
(ROOT/"evidence/functional/archive032.json").write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
print(json.dumps({"functions":13,"boundedBytes":992,"sdkSourceCredit":0}))
