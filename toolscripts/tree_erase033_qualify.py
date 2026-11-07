import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys

import capstone
import unicorn
from tree_erase033_build import ROOT,pin
from tree_erase033 import execute
from tree_erase033_controls import produce as controls
from tree_erase033_exclusions import measure
from android_elf_alignment import inspect


def qualify(output):
    output=Path(output).resolve()
    if not output.is_relative_to(ROOT/"work/tree-erase033") or output.exists():
        raise ValueError("Qualification requires a new owned output directory")
    measure()
    paths=set((ROOT/"toolscripts").glob("tree_erase033*.py"))|{ROOT/"toolscripts/tree_erase033_layout.c"}
    paths|=set((ROOT/"src/native/wave033").glob("*.[ch]"))
    paths|={ROOT/name for name in ["toolscripts/digest024_build.py","toolscripts/android_elf_alignment.py",
        "tests/test_tree_erase033.py","tests/test_android_elf_alignment.py","tools.lock.json","docs/native-tree-erase033.md",
        "evidence/lanes/tree-erase033/claim.json","evidence/lanes/tree-erase033/abi-and-exclusions.json"]}
    inputs=[pin(path) for path in sorted(paths)]
    lock=json.loads((ROOT/"tools.lock.json").read_text(encoding="utf-8"))
    tools=[row for row in lock["files"] if row["path"].startswith("tools/clang-21/")]+lock["nativeLibraries"]
    for row in tools:assert pin(ROOT/row["path"])["sha256"]==row["sha256"]
    original=pin(ROOT/"generated/update-content0/code.bin")
    output.mkdir(parents=True)
    checkpoint={"status":"running","inputs":inputs,"sourceCreditGranted":0}
    try:
        positive=execute(output/"positive")
        negative=controls(output/"controls",output/"positive")
        logs=[]
        for filename,count in [("test_tree_erase033.py",12),("test_android_elf_alignment.py",5)]:
            log=output/(filename+".log")
            with log.open("wb") as stream:
                process=subprocess.run([sys.executable,"-m","unittest","discover","-s","tests","-p",filename,"-v"],cwd=ROOT,
                    stdout=stream,stderr=subprocess.STDOUT,timeout=180)
            value=log.read_text(encoding="utf-8")
            assert process.returncode==0 and ("Ran "+str(count)+" tests") in value and value.strip().endswith("OK")
            logs.append(pin(log))
        assert positive["caseCount"]==2048 and positive["originalCalls"]==14336 and positive["sourceCallsPerBackend"]==2048
        assert negative["count"]==6 and negative["allNormallyReturnedAndRejected"]
        linkage=inspect(ROOT/positive["builds"]["android"]["sharedLibrary"]["path"])
        for row in inputs:assert pin(ROOT/row["path"])==row
        for row in tools:assert pin(ROOT/row["path"])["sha256"]==row["sha256"]
        assert pin(ROOT/original["path"])==original
        packet={"schemaVersion":1,"status":"bounded-seven-clone-tree-erase-ready-for-independent-review",
            "inputs":inputs,"compilerAndNativeRuntimePins":tools,"originalModule":original,
            "privatePositiveReport":pin(output/"positive/report.json"),"returningControls":pin(output/"controls/controls.json"),
            "cases":2048,"canonicalOriginalBodies":7,"originalCalls":14336,"sourceCallsEachBackend":2048,
            "allSevenOriginalArenasEqualPerFixture":True,"allSourceArmOriginal4096ByteArenasEqual":True,
            "allNativeTypedFieldsAndPreservedCallerCanariesAgree":True,"nativeRawByteEqualityAcrossPointerWidthsClaimed":False,
            "coverage":positive["coverage"],"visitedPhysicalInstructionBytes":11368,"invariantExcludedPhysicalInstructionBytes":56,
            "totalCanonicalInstructionBytes":11424,"newInventoryEntries":0,"returningControlsCount":6,"testsPassed":17,
            "testsLogs":logs,"allDeclaredInputsUnchangedBeforeAndAfter":True,"sourceOriginalModuleMapped":False,
            "originalInstructionsRegistersOrDataPatched":False,"actualWindowsExecuted":True,"nativePointersAbove32Bits":True,
            "androidLinkage":linkage,"androidOsOrPhysicalDeviceExecuted":False,
            "universalCorruptGraphOtherAliasesVolatileMemoryWholeGameOrSourceCreditClaimed":False,
            "runtimeVersions":{"python":sys.version.split()[0],"capstone":capstone.__version__,"capstoneNative":list(capstone.cs_version()),
                "unicorn":unicorn.__version__,"unicornNative":list(unicorn.uc_version())},
            "acceptedSourceCreditGranted":0,"independentReplayClaimed":False,"originalPayloadsPublished":False,"producer":pin(Path(__file__))}
        evidence=ROOT/"evidence/lanes/tree-erase033"
        (evidence/"execution.json").write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
        ready={"schemaVersion":1,"status":"frozen-tree-erase033-candidate-ready-for-independent-review",
            "files":inputs+[pin(evidence/"execution.json")],"canonicalFunctions":7,"instructionBytesForReview":11424,
            "cases":2048,"negativeControls":6,"tests":17,"acceptedSourceCreditGranted":0,"wholeGameOrDeviceClaimed":False}
        (evidence/"ready.json").write_text(json.dumps(ready,indent=2)+"\n",encoding="utf-8")
        checkpoint["status"]="passed"
        print(json.dumps({"cases":2048,"originalCalls":14336,"controls":6,"tests":17,"independentReplayPending":True}),flush=True)
        return packet
    except Exception as error:
        checkpoint.update(status="failed",errorType=type(error).__name__,error=str(error));raise
    finally:(output/"qualification.json").write_text(json.dumps(checkpoint,indent=2)+"\n",encoding="utf-8")


if __name__=="__main__":
    parser=argparse.ArgumentParser();parser.add_argument("--output",type=Path,required=True)
    qualify(parser.parse_args().output)
