import copy
import hashlib
import json
from pathlib import Path
import re
import shutil
import sys


ROOT = Path.cwd()
sys.path.insert(0, str(ROOT / "toolscripts"))
from squirrel_vm_call022 import validate


def read(path):
    return json.loads(Path(path).read_text(encoding="utf-8"))


def pin(path):
    path = Path(path)
    data = path.read_bytes()
    return {"path": path.relative_to(ROOT).as_posix(), "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()}


def normalize(packet):
    result = copy.deepcopy(packet)
    result["inputs"] = [row for row in result["inputs"] if row["path"] not in
        ["toolscripts/squirrel_vm_call022_layout.py", "toolscripts/squirrel_vm_call022_replay.py"]]
    pointers = []
    for row in result["cases"]:
        validate(row["windows"]["words"], row["input"]["case"], row["input"]["kwargs"])
        words = row["windows"]["words"]
        pointer = words[27] | (words[28] << 32)
        assert pointer > 0xffffffff
        pointers.append(pointer)
        words[27:29] = ["actual-native-callback-low", "actual-native-callback-high"]
    assert len(set(pointers)) == 1
    for row in result["negativeControls"]:
        words = row["nativeResult"]["words"]
        assert words[27] | (words[28] << 32) > 0xffffffff
        words[27:29] = ["actual-native-callback-low", "actual-native-callback-high"]
    return result


raw_path = ROOT / "evidence/verification/vm-call022-isolated-618d505.json"
raw = read(raw_path)
assert raw["status"] == "passed" and all(row["returncode"] == 0 for row in raw["steps"])
fresh = Path(raw["replayRoot"])
primary_path = ROOT / "work/squirrel-vm-call022/final234/report.json"
secondary_path = fresh / "work/squirrel-vm-call022/committed-root/report.json"
a, b = read(primary_path), read(secondary_path)
assert pin(primary_path)["sha256"] == "0eb35a2a2000eda51fabd7c1ee947ae330a217ebf3cfc6cb42cf9ba443002c3f"
assert normalize(a) == normalize(b)
for first, second in zip(a["cases"], b["cases"]):
    x, y = first["windows"]["words"], second["windows"]["words"]
    assert ((x[27] | x[28] << 32) - (y[27] | y[28] << 32)) % 0x10000 == 0
for first, second in zip(a["negativeControls"], b["negativeControls"]):
    x, y = first["nativeResult"]["words"], second["nativeResult"]["words"]
    assert ((x[27] | x[28] << 32) - (y[27] | y[28] << 32)) % 0x10000 == 0
assert a["originalReturns"] == a["sourceReturns"] == a["windowsReturns"] == a["a64ModelReturns"] == 234
assert len(a["negativeControls"]) == 12 and sum(row["sameFinalArmArena"] for row in a["negativeControls"]) == 8
compiled = read(fresh / "work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 237 and len(compiled["results"]) == 653 and all(row["status"] == "compiled" for row in compiled["results"])
counts = []
for step in raw["steps"]:
    if step["name"].endswith("-tests"):
        log = (fresh / step["log"]).read_text()
        assert log.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", log)[1]))
assert sorted(counts) == [11, 15, 21, 22] and sum(counts) == 69
ready_path = ROOT / "evidence/lanes/squirrel-vm-call022/ready.json"
assert pin(ready_path)["sha256"] == "64a08d949e507e59737db08356f5f45221ae18581bba315a2e58ce3036742202"
for row in read(ready_path)["files"]:
    assert pin(ROOT / row["path"]) == row
driver = ROOT / "evidence/verification/producers/vm-call022-618d505-replay.py"
shutil.copyfile(ROOT / "work/replay-vm-call022.py", driver)
assert pin(driver)["sha256"] == raw["replayDriverSha256"]
receipt = {"schemaVersion": 1, "status": "qualified-independent-frozen-native-invocation-graph", "sourceRevision": raw["sourceRevision"],
    "completeUnmodifiedBatchReplayPassed": True, "rawReplay": pin(raw_path), "executedDriver": pin(driver),
    "primaryReport": pin(primary_path), "independentReport": pin(secondary_path), "ready": pin(ready_path),
    "cases": 234, "targetObservations": 936, "returningControls": 12, "sameFinalHeapControls": 8,
    "tests": 69, "publicUnits": 237, "publicCompilations": 653, "allArmA64AndAllOtherNativeWordsAndOrderedEventsIdentical": True,
    "nativeCallbackPointerWordsDifferWithRuntimeLoadAddresses": True, "onlyNativeWords27And28ComparedByIdentity": True,
    "callbackPointerWordSource": pin(ROOT / "source/squirrel-wave022/fixture.c"),
    "allNativeObservationsIndependentlyValidated": True,
    "additionalColdInputPins": ["toolscripts/squirrel_vm_call022_layout.py", "toolscripts/squirrel_vm_call022_replay.py"],
    "additionalFilesAreAuxiliaryMetadataToolsAndCommonInputPinsUnchanged": True,
    "existingInstructionBytes": 2380, "newOrDuplicateSourceCredit": 0,
    "fullExecuteClassCreationTypeErrorOr018ParentQualified": False,
    "wholeVmGameOrPhysicalAndroidClaimed": False, "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/vm-call022-coordinator-618d505.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"cases": 234, "tests": 69, "publicCompilations": 653, "newSourceCredit": 0}))
