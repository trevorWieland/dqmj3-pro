import hashlib
import json
from pathlib import Path
import re


ROOT = Path.cwd()


def read(path):
    return json.loads(path.read_text(encoding="utf-8"))


def pin(path):
    data = path.read_bytes()
    return {"path": path.relative_to(ROOT).as_posix(), "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()}


raw_path = ROOT / "evidence/verification/md5-stream029-isolated-4f5c001.json"
raw = read(raw_path)
fresh = Path(raw["replayRoot"])
required = {"offline-dependencies", "fresh-original-intake", "md5-stream029-producer", "public-compilation",
    "md5_stream029-tests", "android_elf_alignment-tests", "compile_sources-tests", "functional_report-tests", "native_census_overlay-tests",
    "reporting-objects", "report-configuration", "stock-report", "normalized-report", "functional-companion"}
assert raw["status"] == "running" and {row["name"] for row in raw["steps"]} == required
assert len(raw["steps"]) == 14 and all(row["returncode"] == 0 for row in raw["steps"])
for row in raw["steps"]:
    assert hashlib.sha256((fresh / row["log"]).read_bytes()).hexdigest() == row["logSha256"]
old_driver = ROOT / "work/replay-md5-stream029.py"
assert hashlib.sha256(old_driver.read_bytes()).hexdigest() == raw["replayDriverSha256"]
assert "work/digest024/committed-root/report.json" in old_driver.read_text()
assert not (fresh / "work/digest024/committed-root/report.json").exists()
files = read(ROOT / "evidence/lanes/md5-stream029/ready.json")["files"]
before = {row["path"]: pin(fresh / row["path"])["sha256"] for row in files}
for row in files:
    assert pin(ROOT / row["path"]) == row
    if row["path"] != "evidence/lanes/md5-stream029/execution.json":
        assert before[row["path"]] == row["sha256"]
packets = ["evidence/lanes/md5-stream029/execution.json", "work/md5-stream029/qualified-v2/positive/report.json",
    "work/md5-stream029/qualified-v2/controls/controls.json", "build/update-content0/report.json", "build/update-content0/functional.json"]
packet_pins = [pin(fresh / path) for path in packets]
counts = []
for row in raw["steps"]:
    if row["name"].endswith("-tests"):
        text = (fresh / row["log"]).read_text()
        assert text.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", text)[1]))
assert sum(counts) == 76
for row in files:
    assert pin(fresh / row["path"])["sha256"] == before[row["path"]]
result = {"schemaVersion": 1, "status": "passed", "originalDriverPassed": False,
    "originalDriverStoppedAfterAllRuntimeAndIntegrationCommandsPassed": True,
    "failure": "Final packet collector referred to stale work/digest024/committed-root/report.json and raised FileNotFoundError before its final receipt save",
    "rawReceiptStillRunningIsPreservedHistoricalLastCheckpoint": True,
    "rawReceipt": pin(raw_path), "executedDriver": pin(old_driver), "correctFinalPacketPins": packet_pins,
    "immutableRuntimeAndAllIntegrationStepsPassed": True, "tests": 76,
    "externalCorrectPathFinalizationPassed": True, "sourceCodeSnapshotRuntimeResultsOrOldDriverChanged": False,
    "allFrozenSourceInputsAndRegeneratedOutputsUnchangedDuringFinalization": True,
    "producer": pin(Path(__file__).resolve())}
(ROOT / "evidence/verification/md5-stream029-finalization-repair-4f5c001.json").write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"runtimeAndIntegrationStepsPassed": 14, "tests": 76, "originalDriverPassed": False, "finalPinRepairPassed": True}))
