import hashlib
import json
from build062x import build,WORK
from runtime062x import ConstructionRuntime
from proof062x import program
CONTROLS=[
('length-byte-count','wide_units062x.c','    return length;','    return length * 2;',dict(name='length',units=[0x1234,0xffff],null=False)),
('copy-loses-high-unit','wide_units062x.c','        *destination++ = unit;','        *destination++ = unit & 255;',dict(name='copy',units=[0xffff,0xd800],null=False)),
('copy-skips-terminator','wide_units062x.c','        *destination++ = unit;','        if (unit != 0) *destination = unit;\n        ++destination;',dict(name='copy',units=[],null=False)),
('copy-returns-end','wide_units062x.c','    return result;','    (void)result;\n    return destination;',dict(name='copy',units=[0x1234],null=False)),
('create-wrong-count','wide_owner062x.c','    *storage = count;','    *storage = count + 1;',dict(name='roundtrip',units=[0xffff],null=False)),
('create-publishes-input','wide_owner062x.c','    *output = text;','    *output = source;',dict(name='create',units=[0x1234],null=False)),
('destroy-identity-after-callback','wide_owner062x.c','    name->methods = &sdk_wide_name_identity062x;','',dict(name='roundtrip',units=[0x41],null=False)),
('destroy-clears-text','wide_owner062x.c','    return name;','    name->text = 0;\n    return name;',dict(name='roundtrip',units=[0x41],null=False)),
('constructor-reference-two','binding_initialize062x.c','    binding->reference.references = 1;','    binding->reference.references = 2;',dict(name='constructor-start',units=[0x41],null=False)),
('constructor-null-return','binding_initialize062x.c','    return object;','    return 0;',dict(name='constructor',units=[0x41],null=False)),
('list-capacity-zero','list_initialize062x.c','    pool->capacity = 1;','    pool->capacity = 0;',dict(name='list-initialize',units=[],null=False)),
('list-null-back-link','list_initialize062x.c','    node->previous = node;','    node->previous = 0;',dict(name='list-initialize',units=[],null=False)),
]

def controls(folder):
    rows=[]
    for label,name,old,new,case in CONTROLS:
        text=(WORK/'source'/name).read_text(encoding='utf-8')
        if text.count(old)!=1:raise ValueError('062x mutation uniqueness rejected '+label)
        mutant_text=text.replace(old,new)
        if label=='destroy-identity-after-callback':mutant_text=mutant_text.replace('    return name;','    name->methods = &sdk_wide_name_identity062x;\n    return name;')
        out=folder/label;out.mkdir(parents=True,exist_ok=True);mutant=out/name;mutant.write_text(mutant_text,encoding='utf-8');observations=[]
        for target in ['arm','windows','a64']:
            build(out/'build'/target,target,{name:mutant});r=ConstructionRuntime(target,out/'build')
            try:
                try:program(r,case)
                except ValueError as error:
                    if not str(error).startswith('062x normally-returning'):raise
                    comparison=r.last_comparison
                    if not comparison['normallyReturned']:raise ValueError('062x negative failed without normal return')
                    observations.append(dict(profile=target,normalReturnBeforeRejection=True,sameFinalArena=comparison['wholeArenaEqual'],reason=str(error)))
                else:raise ValueError('062x wrong source accepted '+label)
            finally:r.close()
        rows.append(dict(label=label,case=case,sourceSha256=hashlib.sha256(mutant.read_bytes()).hexdigest(),observations=observations));print('062x rejected returning control',label,'on three targets',flush=True)
    result=dict(status='returning-wrong-source-controls-rejected',checks=sum(len(r['observations'])for r in rows),sameFinalArenaChecks=sum(o['sameFinalArena']for r in rows for o in r['observations']),controls=rows,sourceCreditGranted=0)
    (folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':controls(WORK/'attempt001/controls')
