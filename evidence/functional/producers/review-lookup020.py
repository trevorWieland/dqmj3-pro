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
    return {"path": path, "sha256": hashlib.sha256(data).hexdigest(), "bytes": len(data)}


ready_path = "evidence/lanes/squirrel-lookup020/ready.json"
assert pin(ready_path)["sha256"] == "a48bda1f2ed39c1f7b49ead8b6d250a3d841a5e21a57c1c40940bac7b15d1884"
ready = read(ready_path)
for item in ready["files"]:
    assert pin(item["path"]) == item
coordinator_path = "evidence/verification/lookup020-coordinator-7ae88bf.json"
coordinator = read(coordinator_path)
assert coordinator["completeUnmodifiedBatchReplayPassed"] and coordinator["tests"] == 88
execution_path = "evidence/lanes/squirrel-lookup020/execution.json"
execution = read(execution_path)
assert execution["cases"] == 132 and execution["comparisonsAgainstOriginal"] == 396
assert not execution["sourceModeOriginalImageCodeDataSdkServicesMapped"] and not execution["fullVmCall17ffacQualified"]
registry = read("config/functional-functions.json")
census, unused = native_census_overlay.compose(ROOT, read(registry["census"]["path"]))
canonical = {row["address"]: row for row in census["functions"]}
mappings = {row["symbol"]: row for row in read("config/source-names.json")["mappings"]}
inventory = read("evidence/inventory/update-content0.json")
image = (ROOT / "generated/update-content0/code.bin").read_bytes()
rows, headers = [], set()
for address, size in [(0x1a36d4, 108), (0x202cf4, 40)]:
    original = canonical[address]
    coverage = next(row for row in execution["originalInstructionCoverage"] if row["entry"] == address)
    assert coverage["visited"] == coverage["instructionAddresses"] == size // 4 and not coverage["unvisited"]
    assert original["textBodyBytes"] == size and original["ranges"] == [{"start": address, "endExclusive": address + size, "bytes": size}]
    symbol = "fn_" + format(address, "08x")
    mapping = mappings[symbol]
    source = mapping["sourcePath"]
    pending = [ROOT / source]
    while pending:
        path = pending.pop()
        for name in re.findall(r'^#include "([^"\n]+)"', path.read_text(), re.M):
            header = (path.parent / name).resolve()
            relative = header.relative_to(ROOT).as_posix()
            if relative not in headers:
                headers.add(relative)
                pending.append(header)
    rows.append({"symbol": symbol, "canonicalIdentity": {"address": address, "mode": "ARM",
        "moduleSha256": inventory["codeSha256"], "programId": inventory["programId"]},
        "source": pin(source), "sourceName": mapping["sourceName"], "symbolNames": pin("include/bytematch_names.h"),
        "functionalConfidence": "medium", "exactObjectSpan": False, "exactLinkedSpan": False,
        "originalInstructionBytes": size, "originalInstructionRanges": original["ranges"], "reportEntryBytes": size,
        "originalBodySha256": hashlib.sha256(image[address - 0x100000:address + size - 0x100000]).hexdigest(),
        "behavior": {"allPassed": True, "boundedNotUniversalEquivalence": True,
            "execution": pin(execution_path), "independentSourceComponentReplay": pin(coordinator_path),
            "batchCases": 132, "batchComparisonsAgainstOriginal": 396, "originalInstructions": size // 4,
            "originalInstructionsVisited": size // 4, "armWholeArenaBytes": 262144,
            "actualWindowsAndAarch64Model": True, "sourceGraphOriginalCodeMapped": False,
            "vtableAndSharedPointerBindingsDeclaredAndNonoverlapping": True,
            "noFullVmSharedClassOrInstanceLayoutClaim": True,
            "noSignedOverflowAllocationFailureGeneralGcOrDeviceClaim": True,
            "limits": execution["unsupported"]}})
dependencies = {item["path"]: item for item in ready["files"] if item["path"].startswith(("source/", "src/native/"))}
for item in execution["armBuild"]["sources"] + execution["consumedQuotedIncludeHeaders"]:
    dependencies[item["path"]] = item
packet = {"schemaVersion": 1, "status": "coordinator-reviewed-bounded-scratch-and-table-metamethod",
    "moduleSha256": inventory["codeSha256"], "acceptedSourceCreditGranted": 0, "functions": rows,
    "headers": [pin(path) for path in sorted(headers)], "sourceDependencies": list(dependencies.values()),
    "frozenReady": pin(ready_path), "otherPartial020BodiesNewWholeFunctionCredit": 0,
    "recoveredPhysicalFunctionBytes": 148, "grossCodeByteDenominatorChanged": False,
    "wholeVmRootCreditGranted": 0, "producer": pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT / "evidence/functional/lookup020.json").write_text(json.dumps(packet, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"reviewedFunctions": 2, "boundedInstructionBytes": 148, "matchingSourceCreditGranted": 0}))
