import copy
import hashlib
import json
from pathlib import Path


ROOT = Path.cwd()


def read(path):
    return json.loads((ROOT / path).read_text(encoding="utf-8"))


def pin(path):
    data = (ROOT / path).read_bytes()
    return {"path": path, "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()}


coordinator_path = "evidence/verification/owner-game-coordinator-da119c5.json"
coordinator = read(coordinator_path)
assert coordinator["immutableRuntimeVerifierNativeTestsAndCompilationPassed"] and coordinator["externalExplicitFixtureScopeRepairAndRemainingIntegrationPassed"] and not coordinator["originalDriverPassed"] and coordinator["tests"] == 71
assert coordinator["originalInstructionsVisited"] == 130 and coordinator["instructionBytesForFunctionalReview"] == 508
proposal_path = "evidence/lanes/wave013-native/file/owner/game/functional-proof-proposal.json"
proposal = read(proposal_path)
runtime_path = "evidence/lanes/wave013-native/file/owner/game/packet.json"
runtime = read(runtime_path)
assert len(proposal["functions"]) == 4 and sum(row["originalInstructionBytes"] for row in proposal["functions"]) == 508
assert not runtime["behavior"]["wholeMemoryEquivalenceClaimed"] and not runtime["behavior"]["sourceOutputPatched"]
packet = copy.deepcopy(proposal)
packet["status"] = "coordinator-reviewed-four-game-owner-and-u16-count-bodies"
packet["independentCleanReplayClaimed"] = True
packet["exactConstructor12ByteCreditGranted"] = 0
packet["wholeColdMountedArchiveSessionQualified"] = False
packet["sourceDependencies"] = [row for row in runtime["allValidationInputs"] if row["path"].startswith(("src/native/", "source/"))]
for row in packet["sourceDependencies"] + packet["headers"]:
    assert pin(row["path"]) == {key: row[key] for key in ["path", "bytes", "sha256"]}
for row in packet["functions"]:
    assert not row["exactObjectSpan"] and not row["exactLinkedSpan"]
    assert row["behavior"]["originalInstructionsReached"] * 4 == row["originalInstructionBytes"]
    assert not row["behavior"]["unhitInstructionAddresses"]
    assert pin(row["source"]["path"]) == row["source"]
    row["behavior"].update(independentCleanReplayClaimed=True, independentSourceComponentReplay=pin(coordinator_path),
        sourceOriginalModuleMapped=False, sdkWorkingCachePlatformRepresentationDifferenceExplicit=True,
        all28DurableNativeAndArmCaseRowsIdentical=True, rawWrongWindowsControlHashesNotAssumedStable=True, externalExplicitFixtureTestRepairRequired=True, noWholeMemoryOrGameOrDeviceClaim=True)
packet["workerProposal"] = pin(proposal_path)
packet["producer"] = pin(Path(__file__).relative_to(ROOT).as_posix())
(ROOT / "evidence/functional/owner-game013.json").write_text(json.dumps(packet, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"reviewedFunctions": 4, "boundedInstructionBytes": 508, "wholeMemoryEquivalence": False}))
