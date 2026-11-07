import copy
import hashlib
import json
from pathlib import Path
import re
import shutil


ROOT = Path.cwd()


def read(path):
    return json.loads(Path(path).read_text(encoding="utf-8"))


def pin(path):
    path = Path(path)
    data = path.read_bytes()
    return {"path": path.relative_to(ROOT).as_posix(), "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()}


def pins(value):
    if isinstance(value, dict):
        if {"path", "sha256", "bytes"} <= value.keys():
            yield value
        for child in value.values():
            yield from pins(child)
    elif isinstance(value, list):
        for child in value:
            yield from pins(child)


raw_path = ROOT / "evidence/verification/md5-stream029-isolated-4f5c001.json"
raw = read(raw_path)
repair_path = ROOT / "evidence/verification/md5-stream029-finalization-repair-4f5c001.json"
repair = read(repair_path)
assert raw["status"] == "running" and all(row["returncode"] == 0 for row in raw["steps"])
assert repair["status"] == "passed" and repair["externalCorrectPathFinalizationPassed"] and not repair["originalDriverPassed"]
fresh = Path(raw["replayRoot"])
primary_path = ROOT / "evidence/lanes/md5-stream029/execution.json"
secondary_path = fresh / "evidence/lanes/md5-stream029/execution.json"
a, b = read(primary_path), read(secondary_path)
x, y = copy.deepcopy(a), copy.deepcopy(b)
private_pairs, log_pairs = [], []
for key in ["privatePositiveReport", "returningControls"]:
    p, q = x.pop(key), y.pop(key)
    assert pin(ROOT / p["path"]) == p and pin(fresh / q["path"])["sha256"] == q["sha256"]
    private_pairs.append((read(ROOT / p["path"]), read(fresh / q["path"])))
for p, q, count in zip(x.pop("testsLogs"), y.pop("testsLogs"), [13, 5]):
    assert pin(ROOT / p["path"]) == p and pin(fresh / q["path"])["sha256"] == q["sha256"]
    for base, row in [(ROOT, p), (fresh, q)]:
        text = (base / row["path"]).read_text()
        assert "Ran " + str(count) + " tests" in text and text.strip().endswith("OK")
    log_pairs.append({"tests": count, "primary": p, "independent": q})
assert x == y
variants = []
for first, second in private_pairs:
    left, right = {row["path"]: row for row in pins(first)}, {row["path"]: row for row in pins(second)}
    assert left.keys() == right.keys()
    for path in left:
        if left[path] == right[path]:
            continue
        assert path.endswith(".obj")
        p, q = (ROOT / path).read_bytes(), (fresh / path).read_bytes()
        assert hashlib.sha256(p).hexdigest() == left[path]["sha256"] and hashlib.sha256(q).hexdigest() == right[path]["sha256"]
        assert len(p) == len(q) == left[path]["bytes"] == right[path]["bytes"] and p[:2] == bytes.fromhex("6486")
        differences = [i for i, (u, v) in enumerate(zip(p, q)) if u != v]
        assert set(differences) <= {4, 5, 6, 7}
        variants.append({"path": path, "differenceOffsets": differences, "primary": left[path]["sha256"], "independent": right[path]["sha256"]})
assert len(variants) == 12
names = {row["path"] for row in variants}


def normalized(value):
    if isinstance(value, dict):
        result = {key: normalized(child) for key, child in value.items()}
        if result.get("path") in names:
            result["sha256"] = "verified-only-four-coff-timestamp-bytes-differ"
        return result
    if isinstance(value, list):
        return [normalized(child) for child in value]
    return value


assert all(normalized(p) == normalized(q) for p, q in private_pairs)
assert private_pairs[0][0]["cases"] == private_pairs[0][1]["cases"]
assert a["scenarioCount"] == 954 and a["apiCallsPerBackend"] == 2412 and a["actualApiInvocationsAcrossFourBackends"] == 9648
assert a["hashlibStreamingProfiles"] == 87 and a["outputContextOverlapProfiles"] == 105
assert a["visitedInstructionBytes"] == 740 and a["explicitAbiAndGeometryExcludedInstructionBytes"] == 120
assert a["totalCanonicalInstructionBytes"] == 860 and a["knownCallerSitesIgnoringReturnRegisters"] == 14
assert not a["sourceOriginalModuleMapped"] and not a["originalInstructionsRegistersOrDataPatched"]
compiled = read(fresh / "work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 281 and len(compiled["results"]) == 781 and all(row["status"] == "compiled" for row in compiled["results"])
counts = []
for step in raw["steps"]:
    if step["name"].endswith("-tests"):
        log = (fresh / step["log"]).read_text()
        assert log.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", log)[1]))
assert sorted(counts) == [5, 13, 15, 21, 22] and sum(counts) == 76
ready_path = ROOT / "evidence/lanes/md5-stream029/ready.json"
for row in read(ready_path)["files"]:
    assert pin(ROOT / row["path"]) == row
driver = ROOT / "evidence/verification/producers/md5-stream029-4f5c001-replay.py"
shutil.copyfile(ROOT / "work/replay-md5-stream029.py", driver)
assert pin(driver)["sha256"] == raw["replayDriverSha256"]
receipt = {"schemaVersion": 1, "status": "qualified-independent-md5-streaming-api-component", "sourceRevision": raw["sourceRevision"],
    "completeUnmodifiedBatchReplayPassed": False, "originalDriverPassed": False,
    "immutableRuntimeAndAllIntegrationPassed": True, "externalFinalPinCollectionRepairPassed": True,
    "finalizationRepair": pin(repair_path), "rawReplay": pin(raw_path), "executedDriver": pin(driver),
    "primaryExecution": pin(primary_path), "independentExecution": pin(secondary_path), "ready": pin(ready_path),
    "cases": 954, "apiCallsPerBackend": 2412, "fourTargetApiInvocations": 9648,
    "hashlibStreamingProfiles": 87, "outputContextOverlapProfiles": 105, "returningControls": 5,
    "tests": 76, "publicUnits": 281, "publicCompilations": 781,
    "all954CasesAndEveryArenaHashLinkedArtifactAndOtherExecutionFieldIdentical": True,
    "onlyVerifiedCoffObjectTimestampsAndTestLogTimingsDiffer": True, "coffObjectTimestampDifferences": variants,
    "nativeTestLogPairs": log_pairs, "binaryOrResultPatchingPerformed": False,
    "visitedInstructionBytes": 740, "explicitAbiAndFinitePaddingGeometryExcludedBytes": 120,
    "instructionBytesForBoundedFunctionalReview": 860, "knownDirectCallerSitesIgnoringReturnRegisters": 14,
    "duplicateCompressionAndSdkCopyNewCredit": 0,
    "universalOtherAbiFlagOverlappingInputVolatileMemoryGameOrPhysicalDeviceClaimed": False,
    "sourceAdmissionGranted": False, "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/md5-stream029-coordinator-4f5c001.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"cases": 954, "tests": 76, "bodyBytesForReview": 860, "timestampVariants": 12}))
