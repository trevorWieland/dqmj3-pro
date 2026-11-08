import hashlib
import json
from build062ab import WORK,build
from runtime062ab import ConfigRuntime
from owner_proof062ab import program

CONTROLS=[
('owner-timeout','owner_initialize062ab.c','3u * sdk_config_select062ab(1)->parameter_006c','2u * sdk_config_select062ab(1)->parameter_006c'),
('owner-final-identity','owner_initialize062ab.c','owner->identity = &sdk_owner_identity062ab;','owner->identity = &sdk_owner_base_identity062ab;'),
('second-endpoint-order','owner_insert88062ab.c','return sdk_endpoint_compare062aa(&pair->second, &node->second);','return 0;'),
('timestamp-high','owner_insert88062ab.c','node->stamp = pair->stamp;','node->stamp = pair->stamp; node->stamp.high = 0;'),
('pool-growth','owner_insert88062ab.c','if (capacity < old + 32)\n            capacity = old + 32;','if (capacity < old + 16)\n            capacity = old + 16;'),
('map-destruction-order','owner_destroy062ab.c','destroy_map(&owner->map56);\n    destroy_map(&owner->map88);','destroy_map(&owner->map88);\n    destroy_map(&owner->map56);'),
('storage-header-order','owner_destroy062ab.c','sdk_owner_dispose062ab(storage);\n        sdk_owner_dispose062ab(pool);','sdk_owner_dispose062ab(pool);\n        sdk_owner_dispose062ab(storage);'),
('pool-publication-order','owner_destroy062ab.c','sdk_tree_write_pointer062z(bytes + OFFSET(pools), next);\n        void *storage','void *storage'),
]

def run(folder):
    rows=[]
    for label,name,old,new in CONTROLS:
        text=(WORK/'source'/name).read_text()
        if text.count(old)!=1:raise ValueError('control source drift '+label)
        text=text.replace(old,new)
        if label=='pool-publication-order':text=text.replace('sdk_owner_dispose062ab(pool);','sdk_owner_dispose062ab(pool);\n        sdk_tree_write_pointer062z(bytes + OFFSET(pools), next);')
        source=folder/label/name;source.parent.mkdir(parents=True,exist_ok=True);source.write_text(text,encoding='utf-8')
        for target in ['arm','windows','a64']:
            build(folder/label/'build'/target,target,{name:source})
        for target in ['arm','windows','a64']:
            runtime=ConfigRuntime(target,folder/label/'build')
            try:
                error=None
                try:program(runtime,keys=list(range(80))+[0,0,0,1],destroy=True)
                except ValueError as exc:error=str(exc)
                observed=getattr(runtime,'last_comparison',{})
                if not error or observed.get('normallyReturned')is not True:raise ValueError('control not rejected by a normally returning semantic comparison '+label+': '+str(error))
                rows.append(dict(control=label,profile=target,sourceSha256=hashlib.sha256(source.read_bytes()).hexdigest(),rejected=True,error=error,observation=observed))
                print('062ab control',label,target,'rejected',flush=True)
            finally:runtime.close()
    result=dict(status='genuine-compiled-returning-controls-rejected',observations=rows,count=len(rows),sameFinalPrimaryArena=sum(r['observation'].get('wholeArenaEqual')is True for r in rows))
    (folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':run(WORK/'controls-attempt003')
