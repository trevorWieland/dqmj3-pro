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


raw_path = ROOT / "evidence/verification/digest024-isolated-24f6b00.json"
raw = read(raw_path)
assert raw["status"] == "passed" and all(row["returncode"] == 0 for row in raw["steps"])
fresh = Path(raw["replayRoot"])
primary_path = ROOT / "evidence/lanes/digest024/execution.json"
secondary_path = fresh / "evidence/lanes/digest024/execution.json"
a, b = read(primary_path), read(secondary_path)
object_variants = []


def normalize(packet, base, prefix):
    result = copy.deepcopy(packet)
    private = result.pop("privateReport", None)
    if private:
        private_path = base / private["path"]
        assert hashlib.sha256(private_path.read_bytes()).hexdigest() == private["sha256"] and private_path.stat().st_size == private["bytes"]
        private_normalized = normalize(read(private_path), base, prefix)
    log = result.pop("testLog")
    path = base / log["path"]
    assert hashlib.sha256(path.read_bytes()).hexdigest() == log["sha256"] and path.stat().st_size == log["bytes"]
    text = path.read_text()
    assert "Ran 16 tests" in text and text.strip().endswith("OK")
    def visit(value):
        if isinstance(value, dict):
            mapped = {key: visit(child) for key, child in value.items()}
            if value.get("path", "").endswith(".obj"):
                p = base / value["path"]
                content = p.read_bytes()
                assert len(content) == value["bytes"] and hashlib.sha256(content).hexdigest() == value["sha256"]
                assert content[:2] == bytes.fromhex("6486")
                mapped["sha256"] = hashlib.sha256(content[:4] + bytes(4) + content[8:]).hexdigest()
                row = {"path": mapped["path"], "actualSha256": value["sha256"], "exceptTimestampSha256": mapped["sha256"]}
                if row not in object_variants:
                    object_variants.append(row)
            return mapped
        if isinstance(value, list):
            return [visit(child) for child in value]
        if isinstance(value, str):
            return value.replace(prefix, "<OUTPUT>").replace(str(base), "<ROOT>")
        return value
    result = visit(result)
    if private:
        result["independentlyVerifiedPrivateReport"] = private_normalized
    return result


assert normalize(a, ROOT, "work/digest024/qualified-hardened") == normalize(b, fresh, "work/digest024/committed-root")
assert len(object_variants) == 10
assert a["caseSets"] == a["caseCount"] == 828 and a["originalAndEachSourceReturns"] == 954
assert a["originalInstructions"] == a["originalInstructionsVisited"] == 602 and not a["unvisitedInstructions"]
assert a["additionalPaddingCompressionBlocks"] == 126 and len(a["independentHashlibMessages"]) == 22 and all(row["allFourTargetsEqual"] for row in a["independentHashlibMessages"])
assert not a["sourceGraphOriginalModuleMapped"] and not a["originalReadonlyFlagOrInstructionsOrArtifactsPatched"]
assert a["actualWindowsExecuted"] and not a["androidOperatingSystemOrPhysicalDeviceExecuted"]
assert len(a["negativeControls"]) == 4 and all(row["allThreeSourceBackendsReturnedNormallyAndRejected"] and not row["instructionObjectOrOriginalDataPatching"] for row in a["negativeControls"])
counts = []
for step in raw["steps"]:
    if step["name"].endswith("-tests"):
        log = (fresh / step["log"]).read_text()
        assert log.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", log)[1]))
assert sorted(counts) == [15, 16, 21, 22] and sum(counts) == 74
compiled = read(fresh / "work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 247 and len(compiled["results"]) == 683 and all(row["status"] == "compiled" for row in compiled["results"])
ready_path = ROOT / "evidence/lanes/digest024/ready.json"
for row in read(ready_path)["files"]:
    assert pin(ROOT / row["path"]) == row
driver = ROOT / "evidence/verification/producers/digest024-24f6b00-replay.py"
shutil.copyfile(ROOT / "work/replay-digest024-hardened.py", driver)
assert pin(driver)["sha256"] == raw["replayDriverSha256"]
receipt = {"schemaVersion": 1, "status": "qualified-independent-md5-compression-component",
    "sourceRevision": raw["sourceRevision"], "completeUnmodifiedBatchReplayPassed": True,
    "rawReplay": pin(raw_path), "executedDriver": pin(driver), "primaryExecution": pin(primary_path),
    "independentExecution": pin(secondary_path), "ready": pin(ready_path), "cases": 828,
    "additionalPaddingBlocks": 126, "independentHashlibMessages": 22, "originalInstructionsVisited": 602,
    "instructionBytesForFunctionalReview": 2408, "tests": 74, "publicUnits": 247, "publicCompilations": 683,
    "allCaseHashesMemoryAbiCoverageAndLinkedArtifactsIdentical": True,
    "onlyOutputPathsTestTimingAndFiveCoffObjectTimestampsDiffer": True,
    "objectIdentitiesVerifiedWithoutWritingAnyBinary": object_variants,
    "previousFailedRelativeOutputAttemptPreserved": True,
    "wholeMd5ApiGameAndroidOsOrPhysicalDeviceClaimed": False, "sourceAdmissionGranted": False,
    "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/digest024-coordinator-24f6b00.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"cases": 828, "tests": 74, "originalInstructionsVisited": 602}))
