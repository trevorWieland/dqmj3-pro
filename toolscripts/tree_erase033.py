import argparse
import hashlib
import json
from pathlib import Path

from tree_erase033_build import ROOT,build,pin
from tree_erase033_measure import ENTRIES
from tree_erase033_fixtures import cases,HEAD,NODES,STRIDE
from tree_erase033_oracle import Cpu,Windows


def semantic(case, result):
    size=len(case["nodes"]);removed=case["target"]
    expected_count=size-(removed!="head")
    assert result["count"]==expected_count
    expected_next=HEAD if removed=="head" or removed+1==size else NODES+(removed+1)*STRIDE
    assert result["output"]==expected_next
    rows={row["offset"]:row for row in result["nodes"]}
    root=rows[HEAD]["parent"]
    visited=[]
    def walk(offset,parent,low,high):
        if offset is None:return
        key=(offset-NODES)//STRIDE
        assert offset not in visited and offset in rows and low<key<high
        visited.append(offset);node=rows[offset];assert node["parent"]==parent
        walk(node["left"],offset,low,key);walk(node["right"],offset,key,high)
    walk(root,HEAD,-1,size)
    expected={NODES+key*STRIDE for key in case["nodes"] if key!=removed}
    assert set(visited)==expected
    ordered=sorted(visited)
    assert rows[HEAD]["left"]==(ordered[0] if ordered else HEAD)
    assert rows[HEAD]["right"]==(ordered[-1] if ordered else HEAD)
    recycled=None if not case["recycledCount"] else NODES+size*STRIDE
    if removed!="head":
        assert rows[NODES+removed*STRIDE]["right"]==recycled
        recycled=NODES+removed*STRIDE
    assert result["recycled"]==recycled


def execute(output):
    output=Path(output).resolve()
    if not output.is_relative_to(ROOT/"work/tree-erase033") or output.exists():
        raise ValueError("Tree qualification requires a new owned output directory")
    output.mkdir(parents=True)
    paths={target:build(output/target,target) for target in ["arm","windows","android"]}
    original=Cpu();arm=Cpu(paths["arm"][0]);android=Cpu(paths["android"][0],True);windows=Windows(paths["windows"][0])
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
            if case["id"]%256==0:print("tree033",case["id"],flush=True)
    finally:
        windows.close()
        for stream in files.values():stream.close()
    coverage=[]
    for entry in ENTRIES:
        missing=[pc for pc in range(entry,entry+1632,4) if pc not in original.coverage]
        assert missing==[entry+0x4ac,entry+0x65c]
        coverage.append({"entry":entry,"visitedInstructions":406,"totalInstructions":408,
            "unvisitedInvariantExcludedInstructions":missing})
    report={"schemaVersion":1,"status":"bounded-typed-tree-erase-seven-canonical-clones",
        "caseCount":len(rows),"originalCalls":original.calls,"sourceCallsPerBackend":arm.calls,
        "allSevenOriginalCloneArenasEqualForEveryCase":True,"allSourceArmOriginal4096ByteArenasEqual":True,
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
    result=execute(parser.parse_args().output);print(json.dumps({key:result[key] for key in ["caseCount","originalCalls","sourceCallsPerBackend"]}))
