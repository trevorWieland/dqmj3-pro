import argparse
import hashlib
import json
from pathlib import Path
import struct
import subprocess
import sys

import unicorn

from digest024_build import ROOT, WORK, SOURCE, arm, windows, android, pin, save
from digest024_cases import IV, cases, expected, messages, padded, fingerprint
from digest024_constants import content
from digest024_controls import run as controls
from digest024_oracle import Arm, Windows, Android
from digest024_measure import MODULE


EVIDENCE = ROOT / "evidence/lanes/digest024"


def owned_inputs():
    paths = sorted((ROOT / "src/native/wave024").glob("*"))
    paths += sorted((ROOT / "toolscripts").glob("digest024*.py"))
    paths += [ROOT / "tests/test_digest024.py", EVIDENCE / "claim.json", EVIDENCE / "abi.json"]
    paths += [ROOT / "tools/clang-21/clang.exe", ROOT / "tools/clang-21/ld.lld.exe"]
    return [pin(path) for path in paths if path.is_file()]


def check_inputs(rows):
    for row in rows:
        assert pin(ROOT / row["path"]) == row, row["path"]


def execute(output):
    output = output.resolve()
    assert output.is_relative_to(WORK.resolve())
    assert (SOURCE.parent / "digest_constants.h").read_bytes() == content().encode("utf-8")
    inputs = owned_inputs()
    claim = json.loads((EVIDENCE / "claim.json").read_text())
    image = (ROOT / "generated/update-content0/code.bin").read_bytes()
    assert hashlib.sha256(image).hexdigest() == claim["moduleSha256"] == MODULE
    for row in claim["instructionRanges"]:
        data = image[row["start"] - 0x100000:row["endExclusive"] - 0x100000]
        assert hashlib.sha256(data).hexdigest() == row["sha256"]
    elf, arm_build = arm(output / "arm")
    dll, windows_build = windows(output / "windows")
    model, android_build = android(output / "android")
    engines = [Arm(), Arm(elf), Windows(dll), Android(model)]
    observations, digest = [], hashlib.sha256()
    for row in cases():
        wanted = expected(row["memory"], row["state"], row["block"])
        results = []
        for number, engine in enumerate(engines):
            args = [row["memory"], row["state"], row["block"]] + ([] if number == 2 else [row["seed"]])
            results.append(engine.execute(*args))
        assert all(value == wanted for value in results), row["id"]
        raw = wanted[row["state"]:row["state"] + 16]
        digest.update(raw)
        observations.append({"id": row["id"], "kind": row["kind"], "stateOffset": row["state"],
            "blockOffset": row["block"], "inputArenaSha256": fingerprint(row["memory"]),
            "outputArenaSha256": fingerprint(wanted), "wholeCallerArenaEqual": True,
            "allFourTargetsReturnedWithDeclaredMemoryAndSavedAbi": True})
    assert len(observations) == 828
    golden, blocks = [], 0
    for message in messages():
        states = [struct.pack("<4I", *IV)] * 4
        data = padded(message)
        for block in range(0, len(data), 64):
            arenas = []
            for number, engine in enumerate(engines):
                memory = bytearray(4096)
                memory[64:80] = states[number]
                memory[128:192] = data[block:block + 64]
                args = [memory, 64, 128] + ([] if number == 2 else [block % 4])
                after = engine.execute(*args)
                assert after == expected(memory, 64, 128)
                states[number] = after[64:80]
                arenas.append(after)
            assert all(arena == arenas[0] for arena in arenas)
            blocks += 1
        golden_digest = hashlib.md5(message).digest()
        assert all(state == golden_digest for state in states)
        golden.append({"messageBytes": len(message), "messageSha256": fingerprint(message),
                       "independentHashlibDigest": golden_digest.hex(), "allFourTargetsEqual": True})
    assert len(engines[0].coverage) == 602
    negative = controls(output / "controls")
    test_command = [sys.executable, "-m", "unittest", "discover", "-s", "tests", "-p", "test_digest024.py", "-v"]
    result = subprocess.run(test_command, cwd=ROOT, capture_output=True, timeout=180)
    log = output / "tests.log"
    log.write_bytes(result.stdout + result.stderr)
    assert result.returncode == 0 and b"Ran 12 tests" in log.read_bytes() and log.read_bytes().strip().endswith(b"OK")
    check_inputs(inputs)
    raw = {"schemaVersion": 1, "status": "bounded-md5-single-block-compression-qualified",
        "moduleSha256": MODULE, "entry": 0x1b2554, "mode": "ARM", "claim": pin(EVIDENCE / "claim.json"),
        "abi": pin(EVIDENCE / "abi.json"), "inputs": inputs, "originalInstructionRanges": claim["instructionRanges"],
        "originalInstructionBytes": 2408, "originalInstructions": 602, "originalInstructionsVisited": len(engines[0].coverage),
        "unvisitedInstructions": [], "branchOutcomeCoverageClaimed": False, "literalPoolBytesExcludedFromCode": 256,
        "cases": observations, "caseDigest": digest.hexdigest(), "caseSets": 828, "originalAndEachSourceReturns": engines[0].calls,
        "additionalPaddingCompressionBlocks": blocks, "independentHashlibMessages": golden,
        "wholeCallerArenaBytes": 4096, "negativeControls": negative, "testsPassed": 12, "testCommand": test_command, "testLog": pin(log),
        "armBuild": arm_build, "windowsBuild": windows_build, "androidBuild": android_build,
        "sourceGraphOriginalModuleMapped": False, "sourceGraphUndefinedSymbols": [],
        "actualWindowsExecuted": True, "actualAndroidObjectsExecutedInAarch64Model": True,
        "androidOperatingSystemOrPhysicalDeviceExecuted": False, "wholeGameOrCompleteMd5ApiClaimed": False,
        "originalCpuModel": "ARM11MPCore", "sourceAarch64CpuModel": "Cortex-A72; all pointers above4GiB",
        "originalReadonlyFlagOrInstructionsOrArtifactsPatched": False,
        "unicornWrapperVersion": unicorn.__version__, "unicornNativeVersion": list(unicorn.uc_version()),
        "unsupported": ["null/unbacked pointers", "unaligned state words", "concurrent mutation or volatile buffers",
                        "observation of unspecified return registers", "different initialized readonly load flag", "complete streaming API or game integration"],
        "instructionOrDataSourceCreditGranted": 0, "acceptedSourceCreditGranted": 0,
        "independentCleanReplayClaimed": False, "originalPayloadsPublished": False}
    save(output / "report.json", raw)
    public = {key: value for key, value in raw.items() if key not in ["cases", "testCommand"]}
    public.update(privateReport=pin(output / "report.json"), caseCount=828,
                  observationsDigest=hashlib.sha256(json.dumps(observations, sort_keys=True).encode()).hexdigest())
    save(EVIDENCE / "execution.json", public)
    owned = [row for row in inputs if not row["path"].startswith("tools/")]
    owned += [pin(EVIDENCE / "execution.json")]
    ready = {"schemaVersion": 1, "status": "frozen-bounded-digest024-ready-for-independent-review",
        "files": owned, "instructionBytesForReview": 2408, "caseSets": 828, "independentHashlibMessages": len(golden),
        "negativeControls": 4, "tests": 12, "inventoryAdmissionGranted": 0, "acceptedSourceCreditGranted": 0,
        "wholeGameClaimed": False, "originalPayloadsPublished": False}
    save(EVIDENCE / "ready.json", ready)
    print(json.dumps({"cases": 828, "additionalBlocks": blocks, "goldenMessages": len(golden), "tests": 12,
                      "controls": 4, "instructionBytesForReview": 2408}), flush=True)
    return raw


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--output", type=Path, default=WORK / "qualified")
    args = parser.parse_args()
    execute(args.output)
