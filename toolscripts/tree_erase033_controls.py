import argparse
import hashlib
import json
from pathlib import Path

from tree_erase033_build import ROOT,SOURCE,REBALANCE,build,pin
from tree_erase033_fixtures import cases
from tree_erase033_oracle import Cpu,Windows


MUTATIONS = {
    "wrong-successor":("erase","TreeNode033 *next = successor(removed);","TreeNode033 *next = successor(removed); next = removed;"),
    "omit-count-update":("erase","--tree->count;","tree->count -= 0;"),
    "omit-removed-color-exchange":("erase","removed->black = color;","(void)color;"),
    "drop-recycled-tail":("erase","removed->right = tree->recycled;","removed->right = (void *)0;"),
    "wrong-rebalance-final-color":("rebalance","    node->black = 1;\n}","    node->black = 0;\n}"),
    "overwrite-aliased-input":("erase","    TreeNode033 *removed = input->node;","    if (output == input) output->node = tree->head;\n    TreeNode033 *removed = input->node;")
}


def produce(output,baseline):
    output=Path(output).resolve();baseline=Path(baseline).resolve()
    if not output.is_relative_to(ROOT/"work/tree-erase033") or output.exists():
        raise ValueError("Controls require a new owned directory")
    output.mkdir(parents=True)
    expected=json.loads((baseline/"report.json").read_text())["observations"]
    fixtures=list(cases());rows=[]
    for name,(kind,old,new) in MUTATIONS.items():
        folder=output/name;folder.mkdir()
        path=SOURCE if kind=="erase" else REBALANCE
        text=path.read_text();assert text.count(old)==1
        mutated=folder/path.name;mutated.write_text(text.replace(old,new),encoding="utf-8")
        source=mutated if kind=="erase" else SOURCE
        rebalance=mutated if kind=="rebalance" else REBALANCE
        arm_path,arm_build=build(folder/"arm","arm",source,rebalance)
        bad=Cpu(arm_path);selected=None
        for case,row in zip(fixtures,expected,strict=True):
            memory,result=bad.execute(case)
            if result!=row["observation"]:
                selected=(case,row,memory,result);break
        assert selected is not None,("undetected control",name)
        case,row,arm_memory,result=selected
        android_path,android_build=build(folder/"android","android",source,rebalance)
        windows_path,windows_build=build(folder/"windows","windows",source,rebalance)
        android=Cpu(android_path,True);windows=Windows(windows_path)
        try:
            android_memory,android_result=android.execute(case)
            windows_memory,windows_result=windows.execute(case)
            assert android_result==windows_result==result and result!=row["observation"]
        finally:windows.close()
        records={"arm":arm_memory,"windows":windows_memory,"a64":android_memory}
        for target,memory in records.items():(folder/(target+"-arena.bin")).write_bytes(memory)
        rows.append({"name":name,"caseId":case["id"],"allThreeSourceBackendsReturnedNormally":True,
            "allCallerCanariesAndSavedModelAbiPreserved":True,"allThreeSourceBackendsRejectedSemantically":True,
            "sameWrongStructuredResultAcrossTargets":True,"mutation":pin(mutated),
            "originalObservationSha256":hashlib.sha256(json.dumps(row["observation"],sort_keys=True).encode()).hexdigest(),
            "wrongObservationSha256":hashlib.sha256(json.dumps(result,sort_keys=True).encode()).hexdigest(),
            "rawArenaHashes":{target:hashlib.sha256(memory).hexdigest() for target,memory in records.items()},
            "builds":{"arm":arm_build,"windows":windows_build,"android":android_build}})
        print("tree033 returning control",name,flush=True)
    packet={"schemaVersion":1,"count":len(rows),"allNormallyReturnedAndRejected":True,
        "controls":rows,"producer":pin(Path(__file__))}
    (output/"controls.json").write_text(json.dumps(packet,indent=2)+"\n",encoding="utf-8")
    return packet


if __name__=="__main__":
    parser=argparse.ArgumentParser();parser.add_argument("--output",type=Path,required=True);parser.add_argument("--baseline",type=Path,required=True)
    args=parser.parse_args();print(produce(args.output,args.baseline)["count"])
