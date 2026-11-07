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


registry = read("config/functional-functions.json")
census, unused = native_census_overlay.compose(ROOT, read(registry["census"]["path"]))
canonical = {row["address"]: row for row in census["functions"]}
inventory = read("evidence/inventory/update-content0.json")
image = (ROOT / "generated/update-content0/code.bin").read_bytes()
mappings = {row["symbol"]: row for row in read("config/source-names.json")["mappings"]}
lookup_sources = {0x198578: 612, 0x197b18: 1200, 0x19828c: 108, 0x197fe0: 336,
    0x19813c: 240, 0x191f20: 8, 0x191f28: 236, 0x18d4fc: 344, 0x1cdaec: 44}
for lane, ready_path, execution_path, coordinator_path in [
    ("lookup023", "evidence/lanes/squirrel-lookup023/ready.json", "evidence/lanes/squirrel-lookup023/execution.json", "evidence/verification/lookup023-coordinator-49bc736.json"),
    ("digest024", "evidence/lanes/digest024/ready.json", "evidence/lanes/digest024/execution.json", "evidence/verification/digest024-coordinator-24f6b00.json")]:
    ready, execution, coordinator = read(ready_path), read(execution_path), read(coordinator_path)
    assert coordinator["completeUnmodifiedBatchReplayPassed"]
    for item in ready["files"]:
        assert pin(item["path"]) == item
    if lane == "lookup023":
        candidates = lookup_sources
        coverage = {row["entry"]: row for row in execution["coverageOfUnchanged020"]}
        coverage[0x1cdaec] = {"visited": 11, "instructions": 11, "unvisited": []}
        dependencies = execution["sourceInputs"] + execution["quotedHeaders"] + execution["armBuild"]["sources"]
        assert coordinator["cases"] == 382 and coordinator["tests"] == 84
        limits = execution["remaining"]
    else:
        candidates = {0x1b2554: 2408}
        coverage = {0x1b2554: {"visited": 602, "instructions": 602, "unvisited": []}}
        dependencies = ready["files"]
        assert coordinator["cases"] == 828 and coordinator["tests"] == 74
        assert len(execution["independentHashlibMessages"]) == 22
        limits = execution["unsupported"]
    rows = []
    for address, size in candidates.items():
        original = canonical[address]
        symbol = "fn_" + format(address, "08x")
        assert original["textBodyBytes"] == size and coverage[address]["instructions"] * 4 == size
        source = mappings[symbol]["sourcePath"] if lane == "lookup023" else "src/native/wave024/digest.c"
        parts = original["ranges"]
        body = b"".join(image[part["start"] - 0x100000:part["endExclusive"] - 0x100000] for part in parts)
        behavior = {"allPassed": True, "boundedNotUniversalEquivalence": True,
            "execution": pin(execution_path), "independentSourceComponentReplay": pin(coordinator_path),
            "batchCases": coordinator["cases"], "originalInstructions": coverage[address]["instructions"],
            "originalInstructionsVisited": coverage[address]["visited"], "unvisitedInstructionAddresses": coverage[address]["unvisited"],
            "sourceGraphOriginalCodeMapped": False, "actualWindowsAndAarch64Model": True,
            "wholeVmGamePhysicalDeviceOrUniversalEquivalenceClaimed": False, "limits": limits}
        if lane == "lookup023":
            behavior.update(normalIntegerDescriptorDomainAndAllocationFailureExclusionsExplicit=True,
                sourceInstructionRegisterOrObjectPatching=False, realNativeCallCompositionCases=14,
                normalDescriptorDomainExclusiveWriterWholeVmProof=False)
            if address == 0x191f20:
                behavior.update(eightByteEntryStandaloneFunction=False, logicalContinuation="fn_00191f28",
                    continuationPhysicalBytesCountedOnlyInSeparateTail=236)
        else:
            behavior.update(wholeCallerArenaBytes=4096, additionalPaddingBlocks=126,
                independentHashlibMessages=22, allFourBackendsReturnsPerBackend=954,
                originalReadonlyFlagInstructionsOrArtifactsPatched=False, completeMd5ApiClaimed=False)
        row = {"symbol": symbol, "canonicalIdentity": {"address": address, "mode": "ARM",
            "moduleSha256": inventory["codeSha256"], "programId": inventory["programId"]},
            "source": pin(source), "functionalConfidence": "medium", "exactObjectSpan": False,
            "exactLinkedSpan": False, "originalInstructionBytes": size, "originalInstructionRanges": parts,
            "reportEntryBytes": parts[0]["endExclusive"] - address,
            "originalBodySha256": hashlib.sha256(body).hexdigest(), "behavior": behavior}
        if lane == "lookup023":
            row.update(sourceName=mappings[symbol]["sourceName"], symbolNames=pin("include/bytematch_names.h"))
        rows.append(row)
    pinned = {}
    for item in dependencies:
        if item["path"].startswith(("source/", "src/native/")):
            identity = {key: item[key] for key in ["path", "sha256", "bytes"]}
            assert pin(item["path"]) == identity
            if item["path"] in pinned:
                assert pinned[item["path"]] == identity
            pinned[item["path"]] = identity
    assert sum(row["originalInstructionBytes"] for row in rows) == (3128 if lane == "lookup023" else 2408)
    packet = {"schemaVersion": 1, "status": "coordinator-reviewed-bounded-" + lane,
        "moduleSha256": inventory["codeSha256"], "acceptedSourceCreditGranted": 0, "functions": rows,
        "headers": [row for row in pinned.values() if row["path"].endswith(".h")],
        "sourceDependencies": list(pinned.values()), "frozenReady": pin(ready_path),
        "recoveredPhysicalFunctionBytes": sum(row["originalInstructionBytes"] for row in rows),
        "grossCodeByteDenominatorChanged": False, "wholeGameCreditGranted": 0,
        "producer": pin(Path(__file__).relative_to(ROOT).as_posix())}
    (ROOT / ("evidence/functional/" + lane + ".json")).write_text(json.dumps(packet, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"lane": lane, "reviewedFunctions": len(rows), "boundedBodyBytes": packet["recoveredPhysicalFunctionBytes"]}))
