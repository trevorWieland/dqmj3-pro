import hashlib
import json
from pathlib import Path
import re
import sys


ROOT = Path.cwd()
sys.path.insert(0, str(ROOT / "toolscripts"))
import native_census_overlay


def read(path):
    return json.loads((ROOT / path).read_text(encoding="utf-8"))


def pin(path):
    data = (ROOT / path).read_bytes()
    return {"path": path, "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()}


coordinator_path = "evidence/verification/coercion026-coordinator-58008cd.json"
coordinator = read(coordinator_path)
assert coordinator["completeUnmodifiedBatchReplayPassed"] and coordinator["tests"] == 70
ready_path = "evidence/lanes/squirrel-coercion026/ready.json"
for row in read(ready_path)["files"]:
    assert pin(row["path"]) == row
execution_path = "evidence/lanes/squirrel-coercion026/execution.json"
execution = read(execution_path)
assert execution["definedMemoryEqualSets"] == 302 and not execution["executedHeapObjectsRegistersCodeLiteralsAndTextAlteredByAliasing"]
registry = read("config/functional-functions.json")
census, unused = native_census_overlay.compose(ROOT, read(registry["census"]["path"]))
canonical = {row["address"]: row for row in census["functions"]}
inventory = read("evidence/inventory/update-content0.json")
mappings = {row["symbol"]: row for row in read("config/source-names.json")["mappings"]}
headers, pending, dependencies = set(), [], {}
for row in execution["sourceFiles"]:
    assert pin(row["path"]) == row
    dependencies[row["path"]] = row
    pending.append(ROOT / row["path"])
while pending:
    path = pending.pop()
    for name in re.findall(r'^#include "([^"\n]+)"', path.read_text(), re.M):
        header = (path.parent / name).resolve()
        relative = header.relative_to(ROOT).as_posix()
        if relative not in headers:
            headers.add(relative)
            pending.append(header)
            dependencies[relative] = pin(relative)
rows = []
for address, size in [(0x1a83dc, 508), (0x7434e8, 152)]:
    original = canonical[address]
    assert original["textBodyBytes"] == size
    symbol = "fn_" + format(address, "08x")
    mapping = mappings[symbol]
    coverage = next(row for row in execution["coverage"] if row["address"] == address)
    assert coverage["totalArmInstructions"] * 4 == size
    assert coverage["coveredArmInstructions"] == (125 if size == 508 else 38)
    rows.append({"symbol": symbol, "canonicalIdentity": {"address": address, "mode": "ARM",
        "moduleSha256": inventory["codeSha256"], "programId": inventory["programId"]},
        "source": pin(mapping["sourcePath"]), "sourceName": mapping["sourceName"], "symbolNames": pin("include/bytematch_names.h"),
        "functionalConfidence": "medium", "exactObjectSpan": False, "exactLinkedSpan": False,
        "originalInstructionBytes": size, "originalInstructionRanges": original["ranges"], "reportEntryBytes": size,
        "behavior": {"allPassed": True, "boundedNotUniversalEquivalence": True,
            "execution": pin(execution_path), "independentSourceComponentReplay": pin(coordinator_path),
            "batchCases": 302, "fourTargetObservations": 1208, "returningControls": 14,
            "originalInstructions": size // 4, "originalInstructionsVisited": coverage["coveredArmInstructions"],
            "unvisitedAllocationAssertionInstructions": coverage["missingInstructionAddresses"],
            "preAliasWholeArenaEqualSets": 0, "postVerifiedCallbackAliasWholeArenaEqualSets": 286,
            "definedMemoryEqualSets": 302, "inactiveFrameDifferenceSets": 16,
            "rawPreAliasHashesMismatchOffsetsAndTypedActualAliasesPreserved": True,
            "callbackAddressAliasesOnlyInPostExecutionComparisonCopies": True,
            "executedHeapObjectsRegistersCodeLiteralsOrTextPatched": False,
            "excludedInactiveWordsObserved": False, "nativePointerTextTruncatedOrNormalized": False,
            "sourceOriginalModuleMapped": False, "actualWindowsAndAarch64Model": True,
            "wholeMemoryUniversalVmGameAndroidOsOrPhysicalDeviceClaimed": False,
            "limits": read("evidence/lanes/squirrel-coercion026/dependencies.json")}})
packet = {"schemaVersion": 1, "status": "coordinator-reviewed-bounded-coercion-and-stack-string-api",
    "moduleSha256": inventory["codeSha256"], "acceptedSourceCreditGranted": 0, "functions": rows,
    "headers": [pin(path) for path in sorted(headers)], "sourceDependencies": list(dependencies.values()),
    "frozenReady": pin(ready_path), "recoveredPhysicalFunctionBytes": 660,
    "grossCodeByteDenominatorChanged": False, "wholeGameCreditGranted": 0,
    "producer": pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT / "evidence/functional/coercion026.json").write_text(json.dumps(packet, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"reviewedFunctions": 2, "boundedBodyBytes": 660, "preAliasWholeArenasEqual": 0}))
