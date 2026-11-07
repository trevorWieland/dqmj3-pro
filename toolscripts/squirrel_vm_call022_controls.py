from pathlib import Path

SPECS={
 'raise-bool':('generic_call.c','result,raise_error,0);','result,raise_error!=0,0);',{'contract_mode':2,'raise_error':0x7fc12345,'cleanup':True}),
 'execute-target':('generic_call.c','sq_lookup_top020(vm)-arguments,arguments','sq_lookup_top020(vm)-arguments+1,arguments',{'contract_mode':2,'raise_error':0xffffffff,'cleanup':True}),
 'receiver-late':('generic_call.c','sq_prefix_assign(sq_lookup_stack020(vm)+base,result);\n            returned=sq_vm_call022(vm,&constructor,arguments,base,&discarded,raise_error);','returned=sq_vm_call022(vm,&constructor,arguments,base,&discarded,raise_error);\n            sq_prefix_assign(sq_lookup_stack020(vm)+base,result);',{'contract_mode':5,'raise_error':0xffffffff,'cleanup':True}),
 'ctor-failure-ignored':('generic_call.c','returned=sq_vm_call022(vm,&constructor,arguments,base,&discarded,raise_error);','returned=sq_vm_call022(vm,&constructor,arguments,base,&discarded,raise_error);returned=1;',{'contract_mode':6,'raise_error':0xffffffff,'cleanup':True}),
 'discarded-leak':('generic_call.c','sq_prefix_release(discarded.type,discarded.value);','(void)discarded;',{'contract_mode':4,'cleanup':False}),
 'temporary-order':('generic_call.c','sq_prefix_release(discarded.type,discarded.value);\n        sq_prefix_release(constructor.type,constructor.value);','sq_prefix_release(constructor.type,constructor.value);\n        sq_prefix_release(discarded.type,discarded.value);',{'contract_mode':7,'cleanup':True}),
 'native-suspend':('native_call.c','returned==-666','returned==-667',{'contract_mode':13,'cleanup':True}),
 'native-zero':('native_call.c','sq_prefix_assign(result,&empty);','(void)empty;',{'contract_mode':10,'cleanup':True}),
 'native-depth':('native_call.c','sq_vm_set_native_depth022(vm,sq_vm_native_depth022(vm)-1);','sq_vm_set_native_depth022(vm,sq_vm_native_depth022(vm));',{'cleanup':False}),
 'native-local-before-frame':('native_call.c','sq_vm_set_top022(vm,old_top);sq_vm_set_base022(vm,old_base);pop_call(vm);\n    sq_prefix_clear(&local.closure);','sq_vm_set_top022(vm,old_top);sq_vm_set_base022(vm,old_base);sq_prefix_clear(&local.closure);pop_call(vm);',{'cleanup':False,'case':{'length':5,'captures':2,'flags':0}}),
 'weak-retain':('native_call.c','sq_prefix_retain(receiver->type,receiver->value);','(void)receiver;',{'native_profile':7,'cleanup':False}),
 'outer-count':('native_call.c','index<outers;index++','index+1<outers;index++',{'cleanup':False}),
}


def mutate(path,output,variant):
    if variant not in SPECS:raise ValueError('Unknown022 control')
    name,old,new,_=SPECS[variant]
    if path.name!=name:return path
    text=path.read_text(encoding='utf-8')
    if text.count(old)!=1:raise ValueError('022 control no longer identifies one source operation')
    target=output/('control-'+name);target.parent.mkdir(parents=True,exist_ok=True);target.write_text(text.replace(old,new),encoding='utf-8');return target


def program(output,variant):
    spec=SPECS[variant][3];case=spec.get('case',{'length':5,'captures':1,'flags':0});cleanup=bool(spec.get('cleanup'))
    if spec.get('contract_mode'):
        prepare='fixture_contract_prepare022('+str(spec['contract_mode'])+','+str(spec.get('raise_error',0))+'u)';call='fixture_contract_call022(1)';clean='fixture_contract_cleanup022(1)';snap='fixture_contract_snapshot022'
    elif spec.get('native_profile')is not None:
        prepare='fixture_native_profile_prepare022('+str(spec['native_profile'])+')';call='fixture_native_profile_call022(1)';clean='fixture_cleanup022(1)';snap='fixture_native_profile_snapshot022'
    else:
        prepare='fixture_prepare022('+','.join(str(case[key])for key in('length','captures','flags'))+')';call='fixture_call022(1)';clean='fixture_cleanup022(1)';snap='fixture_snapshot022'
    root=Path(__file__).resolve().parents[1]
    text=(root/'source/squirrel-wave022/native_fixture.c').read_text(encoding='utf-8').split('int _fltused;')[0]
    text+=r'''int _fltused;
static SqPrototypeU32 words[4096];
void mainCRTStartup(void){void *memory=malloc(0x40000);
if(!memory||!fixture_bind022(memory,0x40000,&sq_prototype_vtable011,&sq_native_closure_vtable013,&sq_opaque_array_vtable012,&sq_prototype_base_vtable011))ExitProcess(2);
PREPARE;fixture_register022(1);CALL;CLEAN
SqPrototypeU32 count=SNAP(words,4096);printf("{\"words\":[");for(SqPrototypeU32 i=0;i<count;i++)printf("%s%u",i?",":"",words[i]);printf("]}\n");free(memory);ExitProcess(0);}
'''
    text=text.replace('PREPARE',prepare).replace('CALL',call).replace('CLEAN',clean+';'if cleanup else'').replace('SNAP',snap)
    path=output/'control_native_fixture.c';path.write_text(text,encoding='utf-8');return path
