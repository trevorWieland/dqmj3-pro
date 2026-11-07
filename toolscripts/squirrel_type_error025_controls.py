SPECS={
 'include-bit16':('type_error.c','bit<16','bit<17',{'index':0,'mask':65536,'type':0x05000002,'flags':3,'cleanup':1}),
 'descending-types':('type_error.c','1u<<bit','1u<<(15-bit)',{'index':0,'mask':3,'type':0x05000002,'flags':3,'cleanup':1}),
 'omit-separator':('type_error.c','if(selected) {','if(selected&&0) {',{'index':0,'mask':3,'type':0x05000002,'flags':3,'cleanup':1}),
 'one-based-index':('type_error.c',"expected: '%s'\",index,","expected: '%s'\",index+1,",{'index':0,'mask':1,'type':0x05000002,'flags':3,'cleanup':1}),
 'mask-only-byte':('type_error.c','(SqPrototypeU32)mask&type','((SqPrototypeU32)mask&255u)&type',{'index':0,'mask':32768,'type':0x05000002,'flags':3,'cleanup':1}),
 'truncate-index16':('format.c','integer(destination,__builtin_va_arg(arguments,SqPrototypeI32))','integer(destination,(short)__builtin_va_arg(arguments,SqPrototypeI32))',{'index':-2147483648,'mask':1,'type':0x05000002,'flags':3,'cleanup':1}),
 'late-error-publication':('lookup_error.c','__builtin_memcpy(slot, &temporary, sizeof(temporary));\n    sq_prefix_retain(temporary.type, temporary.value);\n    sq_prefix_release(previous.type, previous.value);','sq_prefix_release(previous.type, previous.value);\n    __builtin_memcpy(slot, &temporary, sizeof(temporary));\n    sq_prefix_retain(temporary.type, temporary.value);',{'index':0,'mask':3,'type':0x05000002,'flags':3,'cleanup':1}),
 'early-error-temporary-release':('lookup_error.c','sq_prefix_release(previous.type, previous.value);\n    sq_prefix_release(temporary.type, temporary.value);','sq_prefix_release(temporary.type, temporary.value);\n    sq_prefix_release(previous.type, previous.value);',{'index':0,'mask':3,'type':0x05000002,'flags':3,'cleanup':1}),
 'late-error-retain':('lookup_error.c','sq_prefix_retain(temporary.type, temporary.value);\n    sq_prefix_release(previous.type, previous.value);','sq_prefix_release(previous.type, previous.value);\n    sq_prefix_retain(temporary.type, temporary.value);',{'index':0,'mask':3,'type':0x05000002,'flags':3,'cleanup':1}),
 'expected-owner-leak':('type_error.c','sq_prefix_clear(&expected);','(void)expected;',{'index':0,'mask':3,'type':0x05000002,'flags':3,'cleanup':1}),
 'name-owner-leak':('type_error.c','sq_prefix_clear(&name);','(void)name;',{'index':0,'mask':3,'type':0x05000002,'flags':3,'cleanup':1}),
 'wrong-actual-typename':('type_error.c','sq_lookup_type_name020(actual_type)','sq_lookup_type_name020(actual_type^3u)',{'index':0,'mask':2,'type':0x01000001,'flags':3,'cleanup':1}),
 'native-argument-index-shift':('native_adapter.c','sq_native_type_error025(vm,index,mask,actual_type)','sq_native_type_error025(vm,index+1,mask,actual_type)',{'index':99,'mask':65536,'type':0x01000001,'flags':7,'cleanup':1}),
}


def mutate(path,output,variant):
    if variant not in SPECS:raise ValueError('Unknown025 variant')
    name,old,new,unused=SPECS[variant]
    if path.name!=name:return path
    text=path.read_text(encoding='utf-8')
    if text.count(old)!=1:raise ValueError('025 control source operation changed: '+variant)
    target=output/('control-'+name);target.parent.mkdir(parents=True,exist_ok=True)
    target.write_text(text.replace(old,new),encoding='utf-8');return target


def program(output,variant):
    from pathlib import Path
    root=Path(__file__).resolve().parents[1];case=SPECS[variant][3]
    text=(root/'source/squirrel-wave025/native_fixture.c').read_text(encoding='utf-8')
    start=text.index('    for(SqPrototypeU32 item=0;');end=text.index('    free(memory);',start)
    index='(-2147483647-1)'if case['index']==-2147483648 else str(case['index'])
    body='    fixture_prepare025('+index+','+','.join(str(case[key])+'u'for key in('mask','type','flags'))+',1);fixture_run025('+str(case['cleanup'])+');\n'
    body+=r'''    SqPrototypeU32 count=fixture_snapshot025(words,8192);printf("{\"words\":[");for(SqPrototypeU32 i=0;i<count;i++)printf("%s%u",i?",":"",words[i]);printf("]}\n");'''+'\n'
    text=(text[:start]+body+text[end:]).replace('#include \"fixture_cases.h\"\n','');path=output/'control_native_fixture.c';path.write_text(text,encoding='utf-8');return path
