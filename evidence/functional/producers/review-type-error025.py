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
    return {"path": path, "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()}


coordinator_path = "evidence/verification/type-error025-coordinator-da119c5.json"
coordinator = read(coordinator_path)
assert coordinator["immutableRuntimeAndNativeTestsAndCompilationPassed"] and coordinator["externalExplicitFixtureScopeTestRepairAndRemainingIntegrationPassed"]
assert not coordinator["originalDriverPassed"] and coordinator["tests"] == 68
ready_path = "evidence/lanes/squirrel-type-error025/ready.json"
for row in read(ready_path)["files"]:
    assert pin(row["path"]) == row
runtime_path = coordinator["primaryPrivateReport"]["path"]
assert pin(runtime_path) == coordinator["primaryPrivateReport"]
runtime = read(runtime_path)
registry = read("config/functional-functions.json")
census, unused = native_census_overlay.compose(ROOT, read(registry["census"]["path"]))
original = next(row for row in census["functions"] if row["address"] == 0x1a1010)
assert original["textBodyBytes"] == 480 and original["ranges"] == [{"start": 0x1a1010, "endExclusive": 0x1a11f0, "bytes": 480}]
coverage = next(row for row in runtime["boundaries"] if row["entry"] == 0x1a1010)
assert coverage["totalInstructions"] == 120 and coverage["visitedInstructions"] == 118
assert coverage["domainUnvisitedInstructionAddresses"] == [0x1a1168, 0x1a116c]
inventory = read("evidence/inventory/update-content0.json")
mapping = next(row for row in read("config/source-names.json")["mappings"] if row["symbol"] == "fn_001a1010")
dependencies = {}
for row in runtime["inputs"]:
    if row["path"].startswith(("source/", "src/native/")):
        assert pin(row["path"]) == row
        dependencies[row["path"]] = row
function = {"symbol": "fn_001a1010", "canonicalIdentity": {"address": 0x1a1010, "mode": "ARM",
    "moduleSha256": inventory["codeSha256"], "programId": inventory["programId"]},
    "source": pin(mapping["sourcePath"]), "sourceName": mapping["sourceName"], "symbolNames": pin("include/bytematch_names.h"),
    "functionalConfidence": "medium", "exactObjectSpan": False, "exactLinkedSpan": False,
    "originalInstructionBytes": 480, "originalInstructionRanges": original["ranges"], "reportEntryBytes": 480,
    "behavior": {"allPassed": True, "boundedNotUniversalEquivalence": True,
        "independentSourceComponentReplay": pin(coordinator_path), "publicExecution": pin("evidence/lanes/squirrel-type-error025/execution.json"),
        "cases": 108, "fourTargetObservations": 432, "returningControls": 13,
        "originalInstructions": 120, "originalInstructionsVisited": 118,
        "unvisitedInstructionAddresses": coverage["domainUnvisitedInstructionAddresses"],
        "allocationFailureTwoInstructionTransferExcluded": True, "wholeInitializedCallerArenaCompared": True,
        "actualNative022MismatchPathAndStringOnlyConcatClosure": True,
        "sourceGraphOriginalImageMapped": False, "actualWindowsAndAarch64Model": True,
        "originalDriverFailedExplicitFixtureScopeAndExternalTestRepairPassed": True,
        "broadConcatOrCoercionFunctionCreditGranted": 0,
        "wholeVmGamePhysicalDeviceOrUniversalEquivalenceClaimed": False,
        "limits": read("evidence/lanes/squirrel-type-error025/domain-coverage.json")}}
packet = {"schemaVersion": 1, "status": "coordinator-reviewed-bounded-native-type-error-controller",
    "moduleSha256": inventory["codeSha256"], "acceptedSourceCreditGranted": 0, "functions": [function],
    "headers": [row for row in dependencies.values() if row["path"].endswith(".h")],
    "sourceDependencies": list(dependencies.values()), "frozenReady": pin(ready_path),
    "stringOnlyConcatNewWholeFunctionCredit": 0, "recoveredPhysicalFunctionBytes": 480,
    "grossCodeByteDenominatorChanged": False, "wholeGameCreditGranted": 0,
    "producer": pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT / "evidence/functional/type-error025.json").write_text(json.dumps(packet, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"reviewedFunctions": 1, "boundedBodyBytes": 480, "unvisitedAllocationFailureInstructions": 2}))
