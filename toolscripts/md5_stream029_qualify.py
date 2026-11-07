import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys

import capstone
import elftools
import unicorn
from md5_stream029_build import ROOT, pin
from md5_stream029 import execute
from md5_stream029_abi import measure as abi_measure
from md5_stream029_controls import produce as controls_produce
from md5_stream029_exclusions import produce as exclusions_produce
from android_elf_alignment import inspect as android_inspect


def qualify(output):
    output = output.resolve()
    if not output.is_relative_to(ROOT / "work/md5-stream029") or output.exists():
        raise ValueError("Qualification needs a new owned output directory")
    abi_measure()
    exclusions_produce()
    paths = set((ROOT / "toolscripts").glob("md5_stream029*.py"))
    paths |= set((ROOT / "src/native/wave029").glob("*.[ch]"))
    paths |= set((ROOT / "src/native/wave024").glob("*.[ch]"))
    paths |= {ROOT / "toolscripts" / name for name in ["digest024_build.py", "digest024_oracle.py", "digest024_measure.py", "android_elf_alignment.py"]}
    paths |= {ROOT / "tests/test_md5_stream029.py", ROOT / "tests/test_android_elf_alignment.py", ROOT / "tools.lock.json"}
    paths |= {ROOT / "evidence/lanes/md5-stream029" / name for name in ["claim.json", "abi.json", "domain-exclusions.json"]}
    inputs = [pin(path) for path in sorted(paths)]
    lock = json.loads((ROOT / "tools.lock.json").read_text())
    tools = [row for row in lock["files"] if row["path"].startswith("tools/clang-21/")]
    tools += lock["nativeLibraries"]
    for row in tools:
        assert pin(ROOT / row["path"])["sha256"] == row["sha256"]
    original = pin(ROOT / "generated/update-content0/code.bin")
    assert original["sha256"] == "d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126"
    result = execute(output / "positive")
    assert result["scenarioCount"] == 954 and result["apiCallsEachBackend"] == 2412
    assert result["hashlibStreamingProfiles"] == 87 and result["outputContextOverlapProfiles"] == 105
    negative = controls_produce(output / "controls")
    assert negative["count"] == 5
    test_logs = []
    for filename, count in [("test_md5_stream029.py", 13), ("test_android_elf_alignment.py", 5)]:
        log = output / (filename + ".log")
        command = [sys.executable, "-m", "unittest", "discover", "-s", "tests", "-p", filename, "-v"]
        with log.open("wb") as stream:
            process = subprocess.run(command, cwd=ROOT, stdout=stream, stderr=subprocess.STDOUT, timeout=180)
        assert process.returncode == 0 and ("Ran " + str(count) + " tests") in log.read_text() and log.read_text().strip().endswith("OK")
        test_logs.append(pin(log))
    exclusions_path = ROOT / "evidence/lanes/md5-stream029/domain-exclusions.json"
    exclusions = json.loads(exclusions_path.read_text())
    expected_missing = {pc for row in exclusions["ranges"] for pc in range(row["start"], row["endExclusive"], 4)}
    coverage = result["coverage"]
    assert not coverage[0]["unvisitedInstructionAddresses"] and not coverage[1]["unvisitedInstructionAddresses"]
    assert set(coverage[2]["unvisitedInstructionAddresses"]) == expected_missing
    assert sum(row["visitedInstructions"] for row in coverage) * 4 == 740 and len(expected_missing) * 4 == 120
    linkage = android_inspect(ROOT / result["builds"]["android"]["sharedLibrary"]["path"])
    for row in inputs:
        assert pin(ROOT / row["path"]) == row
    for row in tools:
        assert pin(ROOT / row["path"])["sha256"] == row["sha256"]
    assert pin(ROOT / original["path"]) == original
    execution = {"schemaVersion": 1, "status": "bounded-md5-streaming-api-ready-for-independent-replay",
        "inputs": inputs, "compilerAndNativeRuntimePins": tools, "originalModule": original,
        "privatePositiveReport": pin(output / "positive/report.json"), "returningControls": pin(output / "controls/controls.json"),
        "scenarioCount": 954, "apiCallsPerBackend": 2412, "actualApiInvocationsAcrossFourBackends": 9648,
        "callerArenaBytes": 4096, "hashlibStreamingProfiles": 87, "outputContextOverlapProfiles": 105,
        "originalCoverage": coverage, "visitedInstructionBytes": 740, "explicitAbiAndGeometryExcludedInstructionBytes": 120,
        "totalCanonicalInstructionBytes": 860, "knownCallerSitesIgnoringReturnRegisters": 14,
        "newDuplicateCompressionInstructionCredit": 0, "newSdkCopyInstructionCredit": 0,
        "negativeControls": 5, "testsPassed": 18, "testsLogs": test_logs,
        "allDeclaredInputsUnchangedBeforeAndAfter": True, "allWholeCallerArenasEqual": True,
        "sourceOriginalModuleMapped": False, "originalInstructionsRegistersOrDataPatched": False,
        "actualWindowsExecuted": True, "aarch64CpuModelAddressesAbove32Bits": True,
        "androidLinkage": linkage, "androidOsOrPhysicalDeviceExecuted": False,
        "universalOtherReadonlyFlagMisalignedStackOverlappingUpdateInputsOrVolatileMemoryClaimed": False,
        "runtimeVersions": {"python": sys.version.split()[0], "capstone": capstone.__version__, "pyelftools": elftools.__version__,
            "unicornWrapper": unicorn.__version__, "unicornNative": list(unicorn.uc_version())},
        "acceptedSourceCreditGranted": 0, "independentReplayClaimed": False, "originalPayloadsPublished": False,
        "producer": pin(Path(__file__).resolve())}
    evidence = ROOT / "evidence/lanes/md5-stream029"
    (evidence / "execution.json").write_text(json.dumps(execution, indent=2) + "\n", encoding="utf-8")
    ready = {"schemaVersion": 1, "status": "frozen-md5-stream029-candidate-ready-for-independent-review",
        "files": inputs + [pin(evidence / "execution.json")], "instructionBytesForReview": 860,
        "cases": 954, "negativeControls": 5, "tests": 18, "acceptedSourceCreditGranted": 0,
        "wholeApiUniversalGameOrDeviceClaimed": False, "originalPayloadsPublished": False}
    (evidence / "ready.json").write_text(json.dumps(ready, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"cases": 954, "tests": 18, "controls": 5, "independentReplayPending": True}), flush=True)
    return execution


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--output", type=Path, default=ROOT / "work/md5-stream029/qualified-v2")
    qualify(parser.parse_args().output)
