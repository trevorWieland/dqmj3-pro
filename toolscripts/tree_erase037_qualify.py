import argparse
import json
from pathlib import Path
from tree_erase033_build import ROOT,pin
from tree_erase033_controls import produce as controls
from tree_erase037 import execute
from tree_erase037_exclusions import measure
from android_elf_alignment import inspect


def qualify(output):
    output=Path(output).resolve()
    if output.exists() or not output.is_relative_to(ROOT/"work/tree-erase037"):raise ValueError("New owned qualification directory required")
    measure()
    ready_path=ROOT/"evidence/lanes/tree-erase033/ready.json"
    predecessor=json.loads(ready_path.read_text(encoding="utf-8"))
    for row in predecessor["files"]:assert pin(ROOT/row["path"])==row
    inputs={row["path"]:row for row in predecessor["files"]};inputs[pin(ready_path)["path"]]=pin(ready_path)
    paths=set((ROOT/"toolscripts").glob("tree_erase037*.py"))
    paths|={ROOT/"evidence/lanes/tree-erase037"/name for name in ["claim.json","abi-and-exclusions.json"]}
    for path in paths:inputs[pin(path)["path"]]=pin(path)
    output.mkdir(parents=True);checkpoint={"status":"running","sourceCreditGranted":0}
    try:
        positive=execute(output/"positive")
        negative_path=ROOT/"work/tree-erase033"/("tree037-"+output.name+"-controls")
        negative=controls(negative_path,output/"positive")
        assert positive["caseCount"]==2048 and positive["originalCalls"]==26624 and positive["sourceCallsPerBackend"]==2048
        assert negative["count"]==6 and negative["allNormallyReturnedAndRejected"]
        for coverage in positive["coverage"]:
            expected=[] if coverage["totalInstructions"]==400 else [coverage["entry"]+0x4a8,coverage["entry"]+0x658]
            assert coverage["unvisitedUnclassifiedInstructions"]==expected
        for row in inputs.values():assert pin(ROOT/row["path"])==row
        packet={"schemaVersion":1,"status":"bounded-thirteen-additional-tree-erase-candidates-ready-for-independent-review",
            "inputs":list(inputs.values()),"reusedFrozenSourceImplementation":pin(ready_path),
            "privatePositiveReport":pin(output/"positive/report.json"),"returningControls":pin(negative_path/"controls.json"),
            "casesEachCanonicalBody":2048,"canonicalBodies":13,"originalCalls":26624,"sourceCallsEachBackend":2048,
            "physicalInstructionBytes":21136,"visitedPhysicalInstructionBytes":21040,"unexecutedInvariantExcludedBytes":96,
            "freshReturningControls":6,"newProductionCWritten":False,"predecessorImplementationTests":17,
            "predecessorImmutableReplayTests":85,"coverage":positive["coverage"],
            "allSourceArmOriginal4096ByteCallerArenasEqual":True,"nativeTypedFieldsAndUntouchedCanariesAgree":True,
            "sourceOriginalModuleMapped":False,"executedCodeHeapRegistersOrResultsPatched":False,
            "actualWindowsExecuted":True,"nativePointersAbove32Bits":True,
            "androidLinkage":inspect(ROOT/positive["builds"]["android"]["sharedLibrary"]["path"]),
            "androidOsOrPhysicalDeviceExecuted":False,"universalWholeGameOrSourceCreditClaimed":False,
            "producer":pin(Path(__file__))}
        evidence=ROOT/"evidence/lanes/tree-erase037"
        (evidence/"execution.json").write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
        ready={"schemaVersion":1,"status":"frozen-tree037-additional-candidates-for-coordinator-review",
            "files":[*inputs.values(),pin(evidence/"execution.json")],"canonicalFunctions":13,"instructionBytesForReview":21136,
            "newSourceOrInventoryCreditGranted":0,"reusesUnmodifiedTree033Implementation":True}
        (evidence/"ready.json").write_text(json.dumps(ready,indent=2)+"\n",encoding="utf-8")
        checkpoint["status"]="passed";print(json.dumps({"cases":2048,"originalCalls":26624,"canonicalBytesForReview":21136,"independentReplayPending":True}),flush=True)
        return packet
    except Exception as error:checkpoint.update(status="failed",errorType=type(error).__name__,error=str(error));raise
    finally:(output/"qualification.json").write_text(json.dumps(checkpoint,indent=2)+"\n",encoding="utf-8")


if __name__=="__main__":
    parser=argparse.ArgumentParser();parser.add_argument("--output",type=Path,required=True)
    qualify(parser.parse_args().output)
