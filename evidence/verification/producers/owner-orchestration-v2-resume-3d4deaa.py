import hashlib
import json
from pathlib import Path
import subprocess
import sys


ROOT = Path.cwd()
RAW = ROOT / "evidence/verification/owner-orchestration-isolated-3d4deaa.json"
OUT = ROOT / "evidence/verification/owner-orchestration-metadata-repair-3d4deaa.json"
VERIFIER = ROOT / "toolscripts/native_wave013_file_owner_orchestration_verify_v2.py"


def pin(path):
    with path.open("rb") as stream:
        sha = hashlib.file_digest(stream, "sha256").hexdigest()
    return {"path": path.relative_to(ROOT).as_posix(), "sha256": sha, "bytes": path.stat().st_size}


def save(receipt):
    OUT.write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")


raw = json.loads(RAW.read_text())
assert raw["status"] == "failed" and raw["steps"][-1]["name"] == "owner-verify" and raw["steps"][-1]["returncode"] == 1
assert next(s for s in raw["steps"] if s["name"] == "owner-producer")["returncode"] == 0
snapshot = Path(raw["replayRoot"])
error = (snapshot / "owner-verify.log").read_text()
assert "Owner pinned input/artifact changed:" in error
manifest = json.loads((snapshot / "evidence/lanes/wave013-native/file/owner/orchestration/frozen-manifest.json").read_text())


def frozen_inputs():
    for row in manifest["files"]:
        path = snapshot / row["path"]
        assert path.stat().st_size == row["bytes"]
        assert hashlib.sha256(path.read_bytes()).hexdigest() == row["sha256"], row["path"]


frozen_inputs()
receipt = {"schemaVersion": 1, "sourceRevision": raw["sourceRevision"], "originalDriver": pin(RAW),
    "sourceSnapshotRoot": str(snapshot), "externalVerifier": pin(VERIFIER), "status": "running",
    "originalUnmodifiedDriverPassed": False, "immutableRuntimeProducerPassed": True,
    "sourceOrOriginalGameBytesPatched": False, "verifiedFrozenFilesBefore": 150,
    "repairScope": "External file-identity verifier accepts enriched records by comparing path/sha256/bytes; source snapshot files remain unchanged",
    "steps": [], "acceptedSourceCreditGranted": 0, "wholeGameExecutionClaimed": False}
save(receipt)
python = snapshot / "tools/python/Scripts/python.exe"
commands = [("external-v2-verifier", [str(sys.executable), str(VERIFIER), "--root", str(snapshot)], ROOT),
    ("public-compilation", [str(python), "toolscripts/compile_sources.py", "--output", "work/source-compile-ci/metadata-repair"], snapshot)]
for name in ["compile_sources", "functional_report", "native_census_overlay"]:
    commands.append((name + "-tests", [str(python), "-m", "unittest", "discover", "-s", "tests", "-p", "test_" + name + ".py", "-v"], snapshot))
commands.append(("verifier-v2-tests", [str(sys.executable), "-m", "unittest", "discover", "-s", "tests", "-p", "test_owner_pin_verifier_v2.py", "-v"], ROOT))
for name, args in [("reporting-objects", ["toolscripts/objdiff_objects.py"]),
    ("report-configuration", ["toolscripts/configure_objdiff.py", "--version", "update-content0", "--output", "objdiff.json"]),
    ("stock-report", ["tools/objdiff-3.8.3/objdiff-cli.exe", "report", "generate", "-o", "build/update-content0/report.raw.json"]),
    ("normalized-report", ["toolscripts/finalize_objdiff_report.py", "--input", "build/update-content0/report.raw.json"]),
    ("functional-companion", ["toolscripts/functional_report.py"])]:
    effective = [str(snapshot / args[0]), *args[1:]] if args[0].endswith(".exe") else [str(python), *args]
    commands.append((name, effective, snapshot))
for name, argv, cwd in commands:
    log = snapshot / (name + "-repair.log")
    with log.open("wb") as stream:
        result = subprocess.run(argv, cwd=cwd, stdout=stream, stderr=subprocess.STDOUT, timeout=1200)
    receipt["steps"].append({"name": name, "argv": argv, "cwd": str(cwd), "returncode": result.returncode, "log": pin(log)})
    save(receipt)
    print(name + ": " + str(result.returncode), flush=True)
    if result.returncode:
        break
frozen_inputs()
receipt["verifiedFrozenFilesAfter"] = 150
receipt["status"] = "passed" if len(receipt["steps"]) == len(commands) and all(s["returncode"] == 0 for s in receipt["steps"]) else "failed"
save(receipt)
raise SystemExit(receipt["status"] != "passed")
