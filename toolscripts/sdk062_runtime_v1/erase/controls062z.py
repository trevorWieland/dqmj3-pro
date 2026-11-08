import hashlib
import json
from build062z import build,WORK
from runtime062z import EraseRuntime
from proof062z import program
CONTROLS=[
('end-clears-output','tree_erase062z.c','        sdk_tree_write_pointer062z(output, head);','        sdk_tree_write_pointer062z(output, 0);',[],[('erase',None)]),
('wrong-successor','tree_erase062z.c','    void *successor = next(node);','    void *successor = next(node);\n    successor = node;',[0,1],[('erase',0)]),
('missing-color-swap','tree_erase062z.c','        sdk_tree_set_color062z(node, sdk_tree_color062z(replacement));','',[2,1,3],[('erase',2)]),
('count-not-decremented','tree_erase062z.c','    --count;','    count += 0;',[7],[('erase',7)]),
('free-history-dropped','tree_erase062z.c','    sdk_tree_set_link062z(node, SDK_TREE_RIGHT062Z, free_nodes);','    (void)free_nodes;\n    sdk_tree_set_link062z(node, SDK_TREE_RIGHT062Z, 0);',[0,1,2],[('erase',0),('erase',1)]),
('payload-corruption','tree_erase062z.c','    sdk_tree_write_pointer062z(output, successor);','    ((SdkByte062s *)node)[sizeof(SdkTreeNodeLayout062z)] = 0;\n    sdk_tree_write_pointer062z(output, successor);',[7],[('erase',7)]),
('wrong-return-alias','tree_erase062z.c','    return output;','    return 0;',[7],[('erase',7)]),
('rebalance-skipped','tree_erase062z.c','        sdk_tree_rebalance062z(store, cursor);','        (void)cursor;',[0,1],[('erase',0)]),
]

def controls(folder):
    records=[]
    for label,name,old,new,keys,operations in CONTROLS:
        text=(WORK/'source'/name).read_text(encoding='utf-8');expected=2 if label=='wrong-return-alias'else 1
        if text.count(old)!=expected:raise ValueError('062z negative mutation uniqueness failed '+label)
        out=folder/label;out.mkdir(parents=True,exist_ok=True);mutant=out/name;mutant.write_text(text.replace(old,new),encoding='utf-8');observations=[]
        for target in ['arm','windows','a64']:
            build(out/'build'/target,target,{name:mutant});r=EraseRuntime(target,out/'build')
            try:
                try:program(r,keys,operations)
                except ValueError as error:
                    if not str(error).startswith('062z normally-returning'):raise
                    comparison=r.last_comparison
                    if not comparison['normallyReturned']:raise ValueError('062z negative did not return')
                    observations.append(dict(profile=target,normalReturnBeforeRejection=True,sameFinalArena=comparison['wholeArenaEqual'],reason=str(error)))
                else:raise ValueError('062z wrong source accepted '+label)
            finally:r.close()
        records.append(dict(label=label,keys=keys,operations=operations,sourceSha256=hashlib.sha256(mutant.read_bytes()).hexdigest(),observations=observations));print('062z rejected returning control',label,'on three targets',flush=True)
    result=dict(status='returning-wrong-source-controls-rejected',checks=sum(len(r['observations'])for r in records),sameFinalArenaChecks=sum(o['sameFinalArena']for r in records for o in r['observations']),controls=records,sourceCreditGranted=0)
    (folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':controls(WORK/'attempt001/controls')
