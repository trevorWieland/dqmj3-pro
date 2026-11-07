import hashlib
import json
from pathlib import Path
import sys


ROOT = Path.cwd()
sys.path.insert(0, str(ROOT / "toolscripts"))
import native_census_overlay


def read(path):
    return json.loads((ROOT / path).read_text(encoding="utf-8"))


def pin(path):
    data = (ROOT / path).read_bytes()
    return {"path": path, "sha256": hashlib.sha256(data).hexdigest(), "bytes": len(data)}


coordinator_path = "evidence/verification/owner-orchestration-coordinator-3d4deaa.json"
coordinator = read(coordinator_path)
assert coordinator["immutableRuntimeProducerPassed"] and coordinator["externalV2AndRemainingIntegrationChecksPassed"]
assert not coordinator["originalDriverPassed"] and coordinator["tests"] == 84
assert coordinator["fullyVisitedFunctionsForFunctionalReview"] == 5 and coordinator["fullyVisitedInstructionBytes"] == 352
runtime_path = coordinator["runtimeOutputs"]["runtime"]["path"]
assert pin(runtime_path) == coordinator["runtimeOutputs"]["runtime"]
runtime = read(runtime_path)
registry = read("config/functional-functions.json")
census, unused = native_census_overlay.compose(ROOT, read(registry["census"]["path"]))
canonical = {row["address"]: row for row in census["functions"]}
inventory = read("evidence/inventory/update-content0.json")
rows = []
for function in runtime["functions"]:
    if function["unhitInstructionAddresses"]:
        assert function["symbol"] == "fn_004c3e74" and len(function["unhitInstructionAddresses"]) == 8
        continue
    identity = function["canonicalIdentity"]
    original = canonical[identity["address"]]
    size = function["originalInstructionBytes"]
    ranges = [{key: row[key] for key in ["start", "endExclusive", "bytes"]} for row in function["originalInstructionRanges"]]
    assert original["textBodyBytes"] == size and original["ranges"] == ranges
    assert not function["exactLinkedSpanCandidate"] and function["originalInstructionsReached"] == function["originalInstructions"]
    source = function["source"]
    assert pin(source["path"]) == source
    rows.append({"symbol": function["symbol"], "canonicalIdentity": identity, "source": source,
        "functionalConfidence": "medium", "exactObjectSpan": False, "exactLinkedSpan": False,
        "originalInstructionBytes": size, "originalInstructionRanges": original["ranges"], "reportEntryBytes": size,
        "behavior": {"allPassed": True, "boundedNotUniversalEquivalence": True, "runtimePacket": pin(runtime_path),
            "independentSourceComponentReplay": pin(coordinator_path), "mainCases": 95, "flagsReturnCases": 32,
            "returningControls": 11, "originalInstructions": size // 4, "originalInstructionsVisited": size // 4,
            "allLiveAndNonPrivateBytesCompared": True, "wholeMemoryEquivalenceClaimed": False,
            "expiredScratchDereferenced": False, "sourceOriginalModuleMapped": False,
            "sourceDependenciesAndPlatformLimits": runtime["dependencies"],
            "originalV1VerifierFailedAndExternalMetadataRepairExplicit": True}})
assert len(rows) == 5 and sum(row["originalInstructionBytes"] for row in rows) == 352
headers = runtime["headers"]
for row in headers:
    assert pin(row["path"]) == {key: row[key] for key in ["path", "sha256", "bytes"]}
dependencies = {row["path"]: {key: row[key] for key in ["path", "sha256", "bytes"]} for row in runtime["sources"] + headers}
for row in dependencies.values():
    assert pin(row["path"]) == row
packet = {"schemaVersion": 1, "status": "coordinator-reviewed-five-closed-owner-lifecycle-bodies",
    "moduleSha256": inventory["codeSha256"], "acceptedSourceCreditGranted": 0, "functions": rows,
    "headers": headers, "sourceDependencies": list(dependencies.values()), "partialApplyNewWholeFunctionCredit": 0,
    "unhitUnprovedApplyInstructions": 8, "separateAllocationInitResourceDraftsAdmitted": False,
    "producer": pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT / "evidence/functional/owner-orchestration013.json").write_text(json.dumps(packet, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"reviewedFunctions": 5, "boundedInstructionBytes": 352, "partialApplyCredit": 0}))
