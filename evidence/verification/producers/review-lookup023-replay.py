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
    return {"path": path.relative_to(ROOT).as_posix(), "sha256": hashlib.sha256(data).hexdigest(), "bytes": len(data)}


raw_path = ROOT / "evidence/verification/lookup023-isolated-49bc736.json"
raw = read(raw_path)
assert raw["status"] == "passed" and all(step["returncode"] == 0 for step in raw["steps"])
fresh = Path(raw["replayRoot"])
primary_path = ROOT / "evidence/lanes/squirrel-lookup023/execution.json"
secondary_path = fresh / "evidence/lanes/squirrel-lookup023/execution.json"
a, b = read(primary_path), read(secondary_path)
assert pin(primary_path)["sha256"] == "7a2fc46261bfd749c2229c13d9b3c08b47b9aaecc9acfc6d9668c87aba303fb4"
variants = set()
for first, second in zip(a["normallyReturningControls"]["controls"], b["normallyReturningControls"]["controls"]):
    x, y = first["mutatedSource"], second["mutatedSource"]
    if x != y:
        left, right = (ROOT / x["path"]).read_bytes(), (fresh / y["path"]).read_bytes()
        assert hashlib.sha256(left).hexdigest() == x["sha256"] and hashlib.sha256(right).hexdigest() == y["sha256"]
        assert len(left) == x["bytes"] and len(right) == y["bytes"]
        assert left.decode().replace(ROOT.as_posix(), "<ROOT>") == right.decode().replace(fresh.as_posix(), "<ROOT>")
        variants.add(x["path"])
assert len(variants) == 7


def normalize(packet, base):
    result = copy.deepcopy(packet)
    log = result.pop("testsLog")
    path = base / log["path"]
    assert hashlib.sha256(path.read_bytes()).hexdigest() == log["sha256"] and path.stat().st_size == log["bytes"]
    tests = read(path)
    assert tests["exitCode"] == 0 and "Ran 26 tests" in tests["stdout"] and tests["stdout"].strip().endswith("OK")
    def convert(value):
        if isinstance(value, dict):
            mapped = {key: convert(child) for key, child in value.items()}
            if mapped.get("path") in variants:
                mapped["sha256"] = "only-absolute-quoted-include-root-differs-verified"
                mapped["bytes"] = "independently-verified-path-length-difference"
            return mapped
        if isinstance(value, list):
            return [convert(child) for child in value]
        return value
    return convert(result)


assert normalize(a, ROOT) == normalize(b, fresh)
assert a["cases"] == 382 and a["comparisonsAgainstOriginal"] == 1146 and a["androidReturnedApis"] == 1528
assert a["immutable020CasesReplayed"] == 132 and a["immutable020ObservationsEqualFrozenReceipt"]
assert a["boundedActualNativeCallCompositionQualified"] and not a["sourceOriginalImageCodeDataOrSdkServicesMapped"]
assert not a["sourceInstructionRegisterOrObjectPatching"] and not a["fullScriptExecuteClassFactoryTypeErrorOrWholeVmQualified"]
compiled = read(fresh / "work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 247 and len(compiled["results"]) == 683 and all(row["status"] == "compiled" for row in compiled["results"])
counts = []
for step in raw["steps"]:
    if step["name"].endswith("-tests"):
        log = (fresh / step["log"]).read_text()
        assert log.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", log)[1]))
assert sorted(counts) == [15, 21, 22, 26] and sum(counts) == 84
ready_path = ROOT / "evidence/lanes/squirrel-lookup023/ready.json"
assert pin(ready_path)["sha256"] == "2162f8e84ff2197cc443fb50e6bee268fb528ae37fe5e64034f23163c0685acf"
for row in read(ready_path)["files"]:
    assert pin(ROOT / row["path"]) == row
driver = ROOT / "evidence/verification/producers/lookup023-49bc736-replay.py"
shutil.copyfile(ROOT / "work/replay-lookup023.py", driver)
assert pin(driver)["sha256"] == raw["replayDriverSha256"]
receipt = {"schemaVersion": 1, "status": "qualified-independent-lookup-and-real-native-invocation-closure",
    "sourceRevision": raw["sourceRevision"], "completeUnmodifiedBatchReplayPassed": True,
    "rawReplay": pin(raw_path), "executedDriver": pin(driver), "primaryExecution": pin(primary_path),
    "independentExecution": pin(secondary_path), "ready": pin(ready_path), "cases": 382,
    "comparisonsAgainstOriginal": 1146, "aarch64ReturnedApis": 1528, "repeated020CasesNewCredit": 0,
    "tests": 84, "publicUnits": 247, "publicCompilations": 683,
    "allCaseHashesCoverageBuildArtifactsAndEveryOtherPacketFieldIdentical": True,
    "onlyIndependentTestLogAndSevenAbsoluteControlIncludePathsDiffer": True,
    "controlSourcesWithOnlyIncludeRootDifferences": sorted(variants), "binaryOrResultPatchingPerformed": False,
    "normalIntegerDescriptorAndNullStringAssertionDomainsRemainExplicit": True,
    "existingInstanceCensusEntryReconfirmedWithoutInventoryIncrease": True,
    "sourceAdmissionGranted": False, "wholeVmGameOrPhysicalDeviceClaimed": False, "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/lookup023-coordinator-49bc736.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"cases": 382, "tests": 84, "publicCompilations": 683, "newInventoryCredit": 0}))
