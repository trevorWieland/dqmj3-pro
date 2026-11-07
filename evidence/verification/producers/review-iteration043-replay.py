import hashlib
import json
from pathlib import Path
import re

ROOT = Path.cwd()

def read(path):
    return json.loads(Path(path).read_text(encoding="utf-8"))

def pin(path):
    path = Path(path)
    return {"path": path.relative_to(ROOT).as_posix(), "bytes": path.stat().st_size,
            "sha256": hashlib.sha256(path.read_bytes()).hexdigest()}

raw_path = ROOT / "evidence/verification/iteration043-isolated-09f17af.json"
raw = read(raw_path)
assert raw["status"] == "passed" and all(row["returncode"] == 0 for row in raw["steps"])
fresh = Path(raw["replayRoot"])
primary = ROOT / "work/squirrel-iteration043/qualified1018/report.json"
secondary = fresh / "work/squirrel-iteration043/qualified/report.json"
assert primary.read_bytes() == secondary.read_bytes()
assert pin(primary)["sha256"] == "191da8edb31b5fe8d844f3cfc76f1d6517a7dcf6077c3793de7f62f68afa3417"
report = read(primary)
assert all(report[key] == 1018 for key in ["originalReturns", "sourceReturns", "windowsReturns", "a64ModelReturns"])
assert len(report["baseline039Preserved"]) == 398
assert all(row["sourcePrefixIdentical"] and row["wholeSourceArenaIdentical"] for row in report["baseline039Preserved"])
assert len(report["terminalProbes"]) == 3
assert len(report["negativeControls"]) == 8
assert all(all(row[key] for key in ["armActuallyReturned", "windowsActuallyReturned", "a64ActuallyReturned", "rejectedByIndependentModels"]) for row in report["negativeControls"])
assert sum(row["sameFinalSourceArmArena"] for row in report["negativeControls"]) == 2
assert [(row["totalInstructions"], len(row["visitedInstructions"]), len(row["invariantDeadInstructions"])) for row in report["helperCoverage"]] == [(50, 50, 0), (75, 75, 0), (70, 60, 10)]
artifacts = []
for relative, key in [("arm/iteration043.elf", "armElfSha256"), ("windows/iteration043.exe", "windowsExeSha256"), ("android/android-model.elf", "a64ElfSha256")]:
    path = primary.parent / relative
    assert pin(path)["sha256"] == report[key]
    assert hashlib.sha256((secondary.parent / relative).read_bytes()).hexdigest() == report[key]
    artifacts.append(pin(path))
ready_path = ROOT / "evidence/lanes/squirrel-iteration043/ready.json"
assert pin(ready_path)["sha256"] == "524af070d6429776a95a3d62e49fd2173127c16d13d0f816a91ea5102ea6d46a"
for row in read(ready_path)["files"]:
    assert pin(ROOT / row["path"]) == row
    assert hashlib.sha256((fresh / row["path"]).read_bytes()).hexdigest() == row["sha256"]
compiled = read(fresh / "work/source-compile-ci/committed-replay/manifests/compilation.json")
assert compiled["unitCount"] == 393 and len(compiled["results"]) == 1109
assert all(row["status"] == "compiled" for row in compiled["results"])
counts = []
for step in raw["steps"]:
    log = fresh / step["log"]
    assert hashlib.sha256(log.read_bytes()).hexdigest() == step["logSha256"]
    if step["name"].endswith("-tests"):
        text = log.read_text(encoding="utf-8")
        assert text.strip().endswith("OK")
        counts.append(int(re.search(r"Ran (\d+) tests", text)[1]))
assert sorted(counts) == [10, 14, 15, 21, 24] and sum(counts) == 84
assert pin(fresh / "toolscripts/isolated_component_replay.py")["sha256"] == raw["replayDriverSha256"]
receipt = {"schemaVersion": 1, "status": "qualified-independent-iteration043-bounded-helper-domain",
    "sourceRevision": raw["sourceRevision"], "completeUnmodifiedBatchReplayPassed": True,
    "rawReplay": pin(raw_path), "ready": pin(ready_path), "primaryExecution": pin(primary),
    "independentExecution": pin(secondary), "allReportControlsAndThreeArtifactsByteIdentical": True,
    "artifacts": artifacts, "cases": 1018, "fourTargetObservations": 4072,
    "terminalSets": 3, "terminalObservations": 6, "returningControls": 8,
    "sameFinalSourceArenaControls": 2, "preserved039Cases": 398,
    "all398SourcePrefixesAndDefinedArenasPreserved": True,
    "wholeOriginalSourceArenaEqualSets": sum(row["comparison"]["wholeInitializedArenaEqual"] for row in report["cases"]),
    "helperInstructionBytes": 780, "helperInstructionPcsVisited": 185, "invariantDeadClassInstructionBytes": 40,
    "tests": 84, "publicUnits": 393, "publicCompilations": 1109,
    "sourceAdmissionGranted": False, "wholeExecuteVmGameAndroidOsOrPhysicalDeviceClaimed": False,
    "producer": pin(Path(__file__))}
(ROOT / "evidence/verification/iteration043-coordinator-09f17af.json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"cases": 1018, "tests": 84, "candidateHelperBytes": 780}))
