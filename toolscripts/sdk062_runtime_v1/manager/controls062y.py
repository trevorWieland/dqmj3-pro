import hashlib
import json
from build062y import build,WORK
from runtime062y import ThreadMapRuntime
from proof062y import selector_program,thread_program
CONTROLS=[
('selector-wrong-existing-return','map_select062y.c','                return 0;','                return candidate;',('selector',[7,7],0)),
('selector-wrong-existing-flag','map_select062y.c','                output->inserted = 0;','                output->inserted = 1;',('selector',[7,7],0)),
('selector-forces-duplicates','map_select062y.c','    if (!map->allow_duplicates) {','    if (map->allow_duplicates == 255) {',('selector',[7,7],0)),
('selector-canonicalizes-nonzero','map_select062y.c','    if (!map->allow_duplicates) {','    if (map->allow_duplicates == 0 || map->allow_duplicates == 128) {',('selector',[7,7],128)),
('selector-payload-corruption','map_select062y.c','    sdk_map_insert062s(&node, map, 0, parent, pair);','    SdkPair062s wrong = *pair;\n    wrong.value ^= 1;\n    sdk_map_insert062s(&node, map, 0, parent, &wrong);',('selector',[0x80000000],0)),
('thread-skips-default-index','thread_index062y.c','        insertion.node->pair.value = manager->default_index;','        insertion.node->pair.value = 0;',('thread',1,False)),
('thread-truncates-index','thread_index062y.c','        insertion.node->pair.value = manager->default_index;','        insertion.node->pair.value = (SdkByte062s)manager->default_index;',('thread',0x80000000,False)),
('thread-reuses-stale-query','thread_index062y.c','        pair.key = current_thread();','        pair.key = key;',('thread',1,False)),
('thread-wrong-return-alias','thread_index062y.c','        value = &insertion.node->pair.value;','        value = &insertion.node->pair.key;',('thread',1,False)),
('thread-misses-release','thread_index062y.c','    mutex->methods->release(mutex);','',('thread',1,False)),
]

def controls(folder,baseline_folder):
    rows=[]
    for label,name,old,new,case in CONTROLS:
        text=(WORK/'source'/name).read_text(encoding='utf-8')
        if text.count(old)!=1:raise ValueError('062y mutation uniqueness rejected '+label)
        out=folder/label;out.mkdir(parents=True,exist_ok=True);mutant=out/name;mutant.write_text(text.replace(old,new),encoding='utf-8');observations=[]
        for target in ['arm','windows','a64']:
            build(out/'build'/target,target,{name:mutant});r=ThreadMapRuntime(target,out/'build',baseline_folder)
            try:
                try:
                    if case[0]=='selector':selector_program(r,label,case[1],case[2])
                    else:thread_program(r,case[1],0,0,case[2])
                except ValueError as error:
                    if not str(error).startswith('062y normally-returning'):raise
                    comparison=r.last_comparison
                    if not comparison['normallyReturned']:raise ValueError('062y negative did not return')
                    observations.append(dict(profile=target,normalReturnBeforeRejection=True,sameFinalArena=comparison['wholeArenaEqual'],reason=str(error)))
                else:raise ValueError('062y wrong source accepted '+label)
            finally:r.close()
        rows.append(dict(label=label,case=case,sourceSha256=hashlib.sha256(mutant.read_bytes()).hexdigest(),observations=observations));print('062y rejected returning control',label,'on three targets',flush=True)
    result=dict(status='returning-wrong-source-controls-rejected',checks=sum(len(x['observations'])for x in rows),sameFinalArenaChecks=sum(o['sameFinalArena']for x in rows for o in x['observations']),controls=rows,sourceCreditGranted=0)
    (folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':
    for target in ['arm','windows','a64']:build(WORK/'control-baseline/build'/target,target)
    controls(WORK/'control-baseline/controls',WORK/'control-baseline/build')
