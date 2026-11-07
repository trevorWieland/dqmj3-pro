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


coordinator_path = "evidence/verification/md5-stream029-coordinator-4f5c001.json"
coordinator = read(coordinator_path)
assert coordinator["immutableRuntimeAndAllIntegrationPassed"] and coordinator["externalFinalPinCollectionRepairPassed"]
assert not coordinator["originalDriverPassed"] and coordinator["tests"] == 76
ready_path = "evidence/lanes/md5-stream029/ready.json"
for row in read(ready_path)["files"]:
    assert pin(row["path"]) == row
execution_path = "evidence/lanes/md5-stream029/execution.json"
execution = read(execution_path)
assert execution["scenarioCount"] == 954 and execution["apiCallsPerBackend"] == 2412
assert execution["visitedInstructionBytes"] == 740 and execution["explicitAbiAndGeometryExcludedInstructionBytes"] == 120
assert not execution["sourceOriginalModuleMapped"] and not execution["originalInstructionsRegistersOrDataPatched"]
registry = read("config/functional-functions.json")
census, unused = native_census_overlay.compose(ROOT, read(registry["census"]["path"]))
canonical = {row["address"]: row for row in census["functions"]}
inventory = read("evidence/inventory/update-content0.json")
exclusions_path = "evidence/lanes/md5-stream029/domain-exclusions.json"
exclusions = read(exclusions_path)
source = "src/native/wave029/md5_stream.c"
rows = []
for address, size in [(0x1b24a0, 44), (0x3019f0, 172), (0x1b2214, 644)]:
    original = canonical[address]
    assert original["textBodyBytes"] == size and original["ranges"] == [{"start": address, "endExclusive": address + size, "bytes": size}]
    coverage = next(row for row in execution["originalCoverage"] if row["entry"] == address)
    missing = coverage["unvisitedInstructionAddresses"]
    if address == 0x1b2214:
        assert set(missing) == {pc for part in exclusions["ranges"] for pc in range(part["start"], part["endExclusive"], 4)}
    else:
        assert not missing
    rows.append({"symbol": "fn_" + format(address, "08x"), "canonicalIdentity": {"address": address, "mode": "ARM",
        "moduleSha256": inventory["codeSha256"], "programId": inventory["programId"]},
        "source": pin(source), "functionalConfidence": "medium", "exactObjectSpan": False, "exactLinkedSpan": False,
        "originalInstructionBytes": size, "originalInstructionRanges": original["ranges"], "reportEntryBytes": size,
        "behavior": {"allPassed": True, "boundedNotUniversalEquivalence": True, "execution": pin(execution_path),
            "independentSourceComponentReplay": pin(coordinator_path), "cases": 954, "apiCallsEachBackend": 2412,
            "fourTargetApiInvocations": 9648, "hashlibStreamingProfiles": 87, "outputContextOverlapProfiles": 105,
            "returningControls": 5, "originalInstructions": size // 4, "originalInstructionsVisited": coverage["visitedInstructions"],
            "unvisitedInstructionAddresses": missing, "explicitAbiAndPaddingGeometryExclusions": pin(exclusions_path),
            "knownDirectCallerReturnRegisterReview": pin("evidence/lanes/md5-stream029/abi.json"),
            "whole4096ByteCallerArenasEqual": True, "sourceGraphOriginalModuleMapped": False,
            "actualWindowsAndHighAddressAarch64Model": True, "originalCodeRegistersDataOrResultsPatched": False,
            "originalFinalReceiptCollectorFailedAndExternalCorrectPathRepairExplicit": True,
            "overlappingStreamingInputContextOtherReadonlyFlagMisalignedStackOrVolatileMemoryQualified": False,
            "universalApiGameAndroidOsOrPhysicalDeviceClaimed": False,
            "updateTailContinuationCopyServicesNewCredit": 0, "duplicateCompressionInstructionCredit": 0}})
dependencies = [row for row in execution["inputs"] if row["path"].startswith("src/native/")]
for row in dependencies:
    assert pin(row["path"]) == row
packet = {"schemaVersion": 1, "status": "coordinator-reviewed-bounded-md5-init-update-final-api",
    "moduleSha256": inventory["codeSha256"], "acceptedSourceCreditGranted": 0, "functions": rows,
    "headers": [row for row in dependencies if row["path"].endswith(".h")], "sourceDependencies": dependencies,
    "frozenReady": pin(ready_path), "recoveredPhysicalFunctionBytes": 860, "originalVisitedInstructionBytes": 740,
    "abiAndPaddingGeometryExcludedBytes": 120, "duplicateCompressionAndSdkCopyCreditGranted": 0,
    "grossCodeByteDenominatorChanged": False, "wholeGameCreditGranted": 0,
    "producer": pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT / "evidence/functional/md5-stream029.json").write_text(json.dumps(packet, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"reviewedFunctions": 3, "boundedBodyBytes": 860, "visitedBytes": 740, "explicitExcludedBytes": 120}))
