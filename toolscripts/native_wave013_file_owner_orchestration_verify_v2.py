import argparse
import hashlib
import json
from pathlib import Path, PurePosixPath
import re
import subprocess


PRODUCER_ROOT = Path(__file__).resolve().parents[1]
IDENTITY_KEYS = ("path", "sha256", "bytes")


def nested_pins(value):
    if isinstance(value, dict):
        if set(IDENTITY_KEYS) <= value.keys():
            yield {key: value[key] for key in IDENTITY_KEYS}
        else:
            for child in value.values():
                yield from nested_pins(child)
    elif isinstance(value, list):
        for child in value:
            yield from nested_pins(child)


def identity(path, root):
    path = Path(path)
    with path.open("rb") as stream:
        digest = hashlib.file_digest(stream, "sha256").hexdigest()
    return {"path": path.relative_to(root).as_posix(), "sha256": digest, "bytes": path.stat().st_size}


def checked_pins(root, values):
    root = root.resolve()
    unique = {}
    for row in nested_pins(values):
        name = row["path"]
        if not isinstance(name, str):
            raise ValueError("File pin path must be a string")
        relative = PurePosixPath(name)
        if "\\" in name or relative.is_absolute() or ".." in relative.parts or ":" in name:
            raise ValueError("File pin path escapes snapshot")
        path = root / relative
        if not path.resolve().is_relative_to(root) or path.is_symlink():
            raise ValueError("Linked or escaped file pin")
        if name in unique and unique[name] != row:
            raise ValueError("Conflicting identities for one file")
        unique[name] = row
    for name, row in unique.items():
        if identity(root / name, root) != row:
            raise ValueError("Owner pinned input/artifact changed: " + name)
    return len(unique)


def verify(root, path, run_tests=True):
    root, path = root.resolve(), path.resolve()
    if not path.is_relative_to(root):
        raise ValueError("Packet escapes snapshot")
    packet = json.loads(path.read_text(encoding="utf-8"))
    keys = ["sources", "headers", "producers", "evidenceInputs", "runtimeInputs", "compiler", "linker", "objects",
            "referenceProvider", "linkedElf", "linkerScript", "referenceTrace", "referenceInputPins", "ABI", "platform",
            "functions", "negativeControls"]
    count = checked_pins(root, [packet[key] for key in keys])
    assert len(packet["functions"]) == 6 and packet["functionalOriginalInstructionBytes"] == 816
    assert packet["acceptedSourceCreditGranted"] == 0 and not packet["dependencies"]["retainedOriginalExecutableHelpers"]
    assert packet["behavior"]["allQualifiedCasesPassed"] and packet["behavior"]["attemptedFixtureCases"] == 95
    assert packet["behavior"]["flagAndReturnCrossProductCases"] == 32
    assert len(packet["negativeControls"]) == 11
    for row in packet["negativeControls"]:
        for platform in ["arm", "windows"]:
            assert row[platform]["returnedNormally"] and row[platform]["immutableMemoryPreserved"] and row[platform]["rejected"]
    delayed = next(row for row in packet["negativeControls"] if row["name"] == "delayed-clear-same-final")
    assert delayed["sameFinalGameAndProviderState"] and delayed["onlyIndependentConfigurationFlagObservationDiffers"]
    assert not packet["platform"]["android"]["deviceExecuted"] and not packet["platform"]["wholeGameBuildOrExecution"]
    result = {"schemaVersion": 2, "status": "packet-and-snapshot-inputs-verified-with-enriched-identities",
              "packet": identity(path, root), "verifier": identity(Path(__file__).resolve(), PRODUCER_ROOT),
              "verifiedSnapshotRoot": str(root), "checkedPinsAndArtifacts": count,
              "enrichedMetadataNotRewritten": True, "originalVerifierFailureNotOverwritten": True,
              "behaviorReexecutedByMetadataVerifier": False, "acceptedSourceCreditGranted": 0}
    if run_tests:
        command = [str(root / "tools/python/Scripts/python.exe"), "-m", "unittest", "discover", "-s", "tests",
                   "-p", "test_native_wave013_file_owner_orchestration.py", "-v"]
        tests = subprocess.run(command, cwd=root, capture_output=True, timeout=240)
        log = root / "work/file-owner-verification-v2/tests.log"
        log.parent.mkdir(parents=True, exist_ok=True)
        log.write_bytes(tests.stdout + tests.stderr)
        match = re.search(rb"Ran (\d+) tests?", tests.stdout + tests.stderr)
        assert tests.returncode == 0 and match and int(match[1]) == 18
        result.update(testCount=18, testCommand=command, testLog=identity(log, root))
    return result


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, required=True)
    parser.add_argument("--skip-tests", action="store_true")
    args = parser.parse_args()
    root = args.root.resolve()
    packet = root / "evidence/lanes/wave013-native/file/owner/orchestration/packet.json"
    result = verify(root, packet, not args.skip_tests)
    target = packet.parent / "verification-v2.json"
    target.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"status": result["status"], "checkedPins": result["checkedPinsAndArtifacts"], "sourceCredit": 0}))
