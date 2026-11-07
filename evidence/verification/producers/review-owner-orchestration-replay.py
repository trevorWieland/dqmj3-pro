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
    with path.open("rb") as stream:
        digest = hashlib.file_digest(stream, "sha256").hexdigest()
    return {"path": path.relative_to(ROOT).as_posix(), "sha256": digest, "bytes": path.stat().st_size}


raw_path = ROOT / "evidence/verification/owner-orchestration-isolated-3d4deaa.json"
repair_path = ROOT / "evidence/verification/owner-orchestration-metadata-repair-3d4deaa.json"
raw, repair = read(raw_path), read(repair_path)
assert raw["status"] == "failed" and repair["status"] == "passed"
assert raw["steps"][-1]["name"] == "owner-verify" and raw["steps"][-1]["returncode"] == 1
assert next(row for row in raw["steps"] if row["name"] == "owner-producer")["returncode"] == 0
assert repair["verifiedFrozenFilesBefore"] == repair["verifiedFrozenFilesAfter"] == 150
assert repair["immutableRuntimeProducerPassed"] and not repair["originalUnmodifiedDriverPassed"]
assert not repair["sourceOrOriginalGameBytesPatched"]
fresh = Path(raw["replayRoot"])
primary_path = ROOT / "work/wave013-native/file-owner-orchestration-sealed/results.private.json"
secondary_path = fresh / "work/wave013-native/file-owner-orchestration-sealed/results.private.json"
assert read(primary_path) == read(secondary_path) and len(read(primary_path)) == 95
compiled = read(fresh / "work/source-compile-ci/metadata-repair/manifests/compilation.json")
assert compiled["unitCount"] == 221 and len(compiled["results"]) == 607
assert all(row["status"] == "compiled" for row in compiled["results"])
verified = read(fresh / "evidence/lanes/wave013-native/file/owner/orchestration/verification-v2.json")
assert verified["testCount"] == 18 and verified["enrichedMetadataNotRewritten"]
counts = []
for step in repair["steps"]:
    assert step["returncode"] == 0
    if step["name"].endswith("-tests"):
        content = (ROOT / step["log"]["path"]).read_text()
        assert content.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", content)[1]))
assert sorted(counts) == [8, 15, 21, 22] and sum(counts) + 18 == 84
runtime_path = fresh / "evidence/lanes/wave013-native/file/owner/orchestration/packet.json"
packet = read(runtime_path)
assert len(packet["functions"]) == 6 and packet["functionalOriginalInstructionBytes"] == 816
closed = [row for row in packet["functions"] if not row["unhitInstructionAddresses"]]
assert len(closed) == 5 and sum(row["originalInstructionBytes"] for row in closed) == 352
assert len(packet["behavior"]["unhitNotProvenExcludedInstructions"]) == 8
assert packet["behavior"]["everyLiveAndNonPrivateByteCompared"] and not packet["behavior"]["wholeMemoryEquivalenceClaimed"]
outputs = {}
for name, source in [("runtime", runtime_path), ("trace", fresh / packet["referenceTrace"]["path"]),
                     ("verification-v2", fresh / "evidence/lanes/wave013-native/file/owner/orchestration/verification-v2.json")]:
    target = ROOT / ("evidence/verification/owner-orchestration-" + name + "-3d4deaa.json")
    shutil.copyfile(source, target)
    assert hashlib.sha256(source.read_bytes()).hexdigest() == pin(target)["sha256"]
    outputs[name] = pin(target)
driver = ROOT / "evidence/verification/producers/owner-orchestration-v2-resume-3d4deaa.py"
shutil.copyfile(ROOT / "work/resume-owner-orchestration-v2.py", driver)
receipt = {"schemaVersion": 1, "status": "independent-owner-runtime-qualified-with-separate-verifier-repair",
    "sourceRevision": raw["sourceRevision"], "rawReplay": pin(raw_path), "metadataRepair": pin(repair_path),
    "repairDriver": pin(driver), "runtimeOutputs": outputs, "sourceSnapshotFilesChanged": False,
    "originalDriverPassed": False, "originalV1VerifierFailureRetained": True,
    "immutableRuntimeProducerPassed": True, "externalV2AndRemainingIntegrationChecksPassed": True,
    "frozenInputsVerifiedBeforeAndAfter": 150, "completeMainCases": 95, "flagsReturnCases": 32,
    "normallyReturningWrongSourceControls": 11, "capturedPrimaryAndIndependentRowsByteIdentical": True,
    "tests": 84, "nativeOwnerTests": 18, "verifierRegressionTests": 8, "publicUnits": 221, "publicCompilations": 607,
    "fullyVisitedFunctionsForFunctionalReview": 5, "fullyVisitedInstructionBytes": 352,
    "partialApplyNewWholeFunctionCredit": 0, "partialApplyInstructionBytes": 464, "unhitUnprovedInstructions": 8,
    "wholeMemoryVmGameOrDeviceEquivalenceClaimed": False, "matchingSourceCreditGranted": 0,
    "expiredScratchNotDereferencedAndPlatformRepresentationLimitsExplicit": True, "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/owner-orchestration-coordinator-3d4deaa.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"tests": 84, "closedFunctionsForReview": 5, "bytesForReview": 352, "partialApplyCredit": 0}))
