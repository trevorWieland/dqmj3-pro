import json
from pathlib import Path
from build062s import build,WORK
from map_proof062s import program
from context_proof062s import context_program

CONTROLS=[
('count','map062s.c','map->count += 1;','map->count += 2;','map',[1,2],0),
('value','map062s.c','node->pair = *pair;','node->pair = *pair; node->pair.value = 1;','map',[1],0),
('initial-pool','map062s.c','SdkWord062s capacity = 32;','SdkWord062s capacity = 16;','map',[1],0),
('new-red','map062s.c','node->black = 0;','node->black = 1;','map',[1,2],0),
('duplicates','map062s.c','map->allow_duplicates == 0 && found != (void *)0','found != (void *)0','map',[1,1],1),
('existing-value','map062s.c','return &found->pair.value;','return (found->pair.value = 0, &found->pair.value);','map',[7,7],0),
('context-slot','context062s.c','return context_resolve062s(3);','return context_resolve062s(1);','context',None,0),
('thread-freshness','context062s.c','key = sdk_environment062s.platform.thread_id();\n            value = sdk_map_value062s(&manager->map, &key);\n        } else','value = sdk_map_value062s(&manager->map, &key);\n        } else','context',None,0),
('unlock','context062s.c','manager->mutex.methods->release(&manager->mutex);','(void)manager;','context',None,0),
('record-index','context062s.c','if (index != 0) {','if (0) {','context',None,0),
('release-owner','mutex062s.c','__c11_atomic_store(&mutex->owner, (void *)0, 5);','(void)mutex;','context',None,0)
]


def main():
    output=WORK/'controls-attempt003';output.mkdir(exist_ok=True);rows=[]
    for label,name,old,new,kind,keys,multi in CONTROLS:
        text=(WORK/'source'/name).read_text(encoding='utf-8')
        if text.count(old)!=1:raise ValueError('062s control replacement not unique '+label+' '+str(text.count(old)))
        folder=output/label;folder.mkdir(exist_ok=True);source=folder/name;source.write_text(text.replace(old,new),encoding='utf-8')
        for target in ['arm','windows','a64']:build(folder/target,target,{name:source})
        outcomes=[]
        for target in ['arm','windows','a64']:
            try:
                if kind=='map':program(target,keys,multi,folder)
                else:context_program(target,1,1,1,0,0,'sdk_context062s',folder)
            except ValueError as error:
                message=str(error)
                if not any(s in message for s in ['complete arena differs','alias mismatch','value alias','freshness/call count mismatch']):raise
                outcomes.append(dict(target=target,normallyReturnedBeforeIndependentComparison=True,reason=message));continue
            raise ValueError('062s control was not rejected '+label+' '+target)
        rows.append(dict(name=label,sourceFile=name,outcomes=outcomes));print(label,'three normally-returning controls rejected',flush=True)
    (output/'report.json').write_text(json.dumps(dict(status='passed-returning-wrong-source-controls',controls=rows,sourceCreditGranted=0),indent=2)+'\n',encoding='utf-8')


if __name__=='__main__':main()
