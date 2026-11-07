import argparse
import hashlib
import json
from pathlib import Path
from tree_erase033_build import ROOT,build,pin
from tree_erase033_fixtures import cases
from tree_erase033_oracle import Cpu,Windows
from tree_erase033 import semantic

CLAIM=json.loads((ROOT/"evidence/lanes/tree-erase037/claim.json").read_text(encoding="utf-8"))
ENTRIES=[row["entry"] for row in CLAIM["functions"]]
SIZES={row["entry"]:row["instructionBytes"] for row in CLAIM["functions"]}

def execute(output):
    output=Path(output).resolve()
    if not output.is_relative_to(ROOT/"work/tree-erase037") or output.exists():
        raise ValueError("Tree qualification requires a new owned output directory")
    output.mkdir(parents=True)
    paths={target:build(output/target,target) for target in ["arm","windows","android"]}
    original=Cpu();original.executable=[(row["entry"],row["entry"]+row["instructionBytes"]) for row in CLAIM["functions"]];arm=Cpu(paths["arm"][0]);android=Cpu(paths["android"][0],True);windows=Windows(paths["windows"][0])
    files={name:(output/(name+"-arenas.bin")).open("wb") for name in ["original","source-arm","windows","a64"]}
    rows=[];ordered=hashlib.sha256()
    try:
        for case in cases():
            original_bytes=None;expected=None
            for entry in ENTRIES:
                memory,observation=original.execute(case,entry)
                if expected is None:original_bytes,expected=memory,observation
                assert memory==original_bytes and observation==expected
            arm_bytes,arm_observation=arm.execute(case)
            windows_bytes,windows_observation=windows.execute(case)
            android_bytes,android_observation=android.execute(case)
            assert arm_bytes==original_bytes
            assert expected==arm_observation==windows_observation==android_observation
            semantic(case,expected)
            data={"original":original_bytes,"source-arm":arm_bytes,"windows":windows_bytes,"a64":android_bytes}
            for name,memory in data.items():files[name].write(memory)
            record={"id":case["id"],"observation":expected,"wholeArm4096ByteArenasEqual":True,
                "rawArenaHashes":{name:hashlib.sha256(memory).hexdigest() for name,memory in data.items()}}
            rows.append(record);ordered.update((json.dumps(expected,sort_keys=True)+"\n").encode())
            if case["id"]%256==0:print("tree037",case["id"],flush=True)
    finally:
        windows.close()
        for stream in files.values():stream.close()
    coverage=[]
    for entry in ENTRIES:
        missing=[pc for pc in range(entry,entry+SIZES[entry],4) if pc not in original.coverage]
        coverage.append({"entry":entry,"visitedInstructions":SIZES[entry]//4-len(missing),"totalInstructions":SIZES[entry]//4,
            "unvisitedUnclassifiedInstructions":missing})
    report={"schemaVersion":1,"status":"development-typed-tree-erase-thirteen-additional-canonical-candidates",
        "caseCount":len(rows),"originalCalls":original.calls,"sourceCallsPerBackend":arm.calls,
        "allThirteenOriginalCloneArenasEqualForEveryCase":True,"allSourceArmOriginal4096ByteArenasEqual":True,
        "allNativeTypedFieldsAndUntouchedPaddingCanariesAgree":True,
        "nativeRawMemoryEqualityAcrossPointerWidthsClaimed":False,
        "originalAndSourceHeapCodeRegistersOrInstructionsPatched":False,
        "windowsAddress":windows.ram,"a64Address":android.ram,"nativeAddressesAbove32Bits":True,
        "orderedObservationSha256":ordered.hexdigest(),"coverage":coverage,"observations":rows,
        "privateRawArenas":[pin(output/(name+"-arenas.bin")) for name in files],
        "builds":{name:receipt for name,(artifact,receipt) in paths.items()},
        "actualWindowsExecuted":True,"androidOsOrPhysicalDeviceExecuted":False,
        "sourceOriginalExecutableMapped":False,"wholeGameOrUniversalTreeEquivalenceClaimed":False,
        "sourceCreditGranted":0,"producer":pin(Path(__file__))}
    (output/"report.json").write_text(json.dumps(report,indent=2)+"\n",encoding="utf-8")
    return report


if __name__=="__main__":
    parser=argparse.ArgumentParser();parser.add_argument("--output",type=Path,required=True)
    result=execute(parser.parse_args().output)
    print(json.dumps({"cases":result["caseCount"],"originalCalls":result["originalCalls"],"candidateBytes":sum(SIZES.values()),"coverage":result["coverage"],"sourceCredit":0}))
