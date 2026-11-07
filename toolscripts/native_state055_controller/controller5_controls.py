import copy
import json
from pathlib import Path
from controller5_measure import WORK,pin,original_image
from controller5_program_build import build
from controller5_program_target_probe import source
from controller5_program_native import Windows,machine
from controller5_reference import execute
from controller5_lighting_probe import cases as lights
from controller5_remaining_probe import cases as tables
from controller5_attributes_probe import cases as attributes
from controller5_full_frontier import compact


def controls():
    fresh=copy.deepcopy(list(lights())[0]);fresh['context_words'][0x190]=3
    yield ('late-cache-publication','apply_lighting055.c',
           '    state_context_store055(context,identity_base+slot*4,identity);\n    state_table_pack12_055(resource);',
           '    state_table_pack12_055(resource);\n    state_context_store055(context,identity_base+slot*4,identity);',fresh,False)
    yield ('early-resource-clean','apply_pack12_055.c','    if (!resource->storage_1024)',
           '    resource->flags &= ~1u;\n    if (!resource->storage_1024)',fresh,False)
    yield ('premature-component-identity','apply_texture055.c','            state_table_pack_bytes055(resource);',
           '            state_context_store055(context,0x170+component*4,state_context_word055(context,0x74+selection->storage[0xdfc/4+component]*4));\n            state_table_pack_bytes055(resource);',copy.deepcopy(list(tables())[0]),False)
    yield ('mapped-slot-hole','apply_lighting055.c','slot+(slot >= 2)','slot+(slot >= 3)',copy.deepcopy(list(lights())[2]),False)
    yield ('pending-not-cleared','apply_lighting055.c','            state_context_store055(context,count_base+slot*4,0);',
           '            state_context_store055(context,count_base+slot*4,pending);',copy.deepcopy(list(lights())[-4]),False)
    yield ('delta-shift','apply_pack12_055.c','encoded_delta<<12','encoded_delta<<11',fresh,False)
    case=copy.deepcopy(list(attributes())[-1]);case['additional_calls']=[{}]
    yield ('unchanged-cache-command-omitted','apply_attributes055.c','        state_apply_pair055(base>>3,0xf0200);',
           '        (void)base;',case,False)
    uniform=dict(label='control-uniform-two-consecutive',selected=True,clip=False,rect=[0,0,0,0],size=[640,480],capacity=8192,flags=16,mask=0,selected_words={0x2c:0x200e000,0x1c0:0x200e000,0x1b0:32,0x344:32,0x1b4:3,0x348:3,**{0x30+i*4:i%4+5 for i in range(32)},**{0x1c4+i*4:i%4+8 for i in range(32)}})
    yield ('uniform-run-split','apply_uniforms055.c','current-mapped != run','current-mapped != run+1',uniform,False)
    yield ('observer-pointer-truncation','storage_fixture055.c','        observation->returned = output;',
           '        observation->returned = (void *)(StateAddress055)(StateWord055)(StateAddress055)output;',fresh,True)
    footer=dict(label='control-footer-capacity-zero',selected=True,clip=False,rect=[0,0,0,0],size=[640,480],capacity=0,flags=0x800,mask=0xffffffff,selected_words={0xe38:0x6030})
    yield ('soft-limit-off-by-one','apply_bindings055.c','(StateAddress055)output < (StateAddress055)state_pair055.limit',
           '(StateAddress055)output <= (StateAddress055)state_pair055.limit',footer,False)


def run(stage=None,source_origin=None):
    work=Path(stage) if stage is not None else WORK
    origin=Path(source_origin) if source_origin is not None else WORK
    root=work/'returning-controls';root.mkdir(exist_ok=True);rows=[]
    image=original_image();claim=json.loads((origin/'claim.json').read_text())
    original_source=[pin(path)for path in sorted((origin/'source').iterdir())if path.suffix in ['.c','.h']]
    for name,filename,old,new,case,arm_identity in controls():
        stage=root/name;source_dir=stage/'source';source_dir.mkdir(parents=True,exist_ok=True)
        for path in (origin/'source').iterdir():
            if path.suffix in ['.c','.h']:(source_dir/path.name).write_bytes(path.read_bytes())
        path=source_dir/filename;text=path.read_text();assert text.count(old)==1,(name,text.count(old));path.write_text(text.replace(old,new),encoding='utf-8')
        result=build(stage,origin/'dependency-source' if (origin/'dependency-source').is_dir() else None)
        original=execute(case,image,claim,origin);assert original['returned']
        target=source(case,stage)
        keys=['finalArenaSha256','finalControlSha256','finalPair','finalStageMode']
        if case.get('storage_provider'):keys+=['storageProviderObservationsSha256','storageProviderCursor','allocationCacheObservations']
        differences=[key for key in keys if target.get(key)!=original.get(key)]
        if arm_identity:assert not differences
        else:assert differences,name
        windows=Windows(stage)
        try:win=windows.execute(case,False)
        finally:windows.close()
        wide=machine(case,False,stage)
        assert win['returnedNormally']and wide['returnedNormally']
        assert win['independentModelDifferences']and wide['independentModelDifferences'],name
        row=dict(name=name,mutation=dict(file=filename,before=old,after=new),input=case,build=result['artifacts'],original=compact(original),
                 authoredArm=target,armDifferent=differences,armExpectedPointerWidthIdentity=arm_identity,
                 actualWindows=win,highAarch64=wide,allThreeSourceExecutionsReturned=True,
                 armFinalArenaPreserved=original['finalArenaSha256']==target['finalArenaSha256'])
        rows.append(row);print(name,'RETURNING REJECT',differences,win['independentModelDifferences'],wide['independentModelDifferences'],flush=True)
    assert original_source==[pin(path)for path in sorted((origin/'source').iterdir())if path.suffix in ['.c','.h']]
    out=work/'returning-controls.json';out.write_text(json.dumps(dict(schemaVersion=1,controls=rows,producer=pin(__file__),sourcePins=original_source,sourceUnchanged=True,sourceCreditGranted=0),indent=2)+'\n')
    print(json.dumps(dict(report=pin(out),controls=len(rows),returningSourceExecutions=len(rows)*3,sameFinalArmArenas=sum(row['armFinalArenaPreserved']for row in rows))),flush=True)


if __name__=='__main__':run()
