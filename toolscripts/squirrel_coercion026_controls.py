import hashlib
import os
import re

from squirrel_lookup020_build import load
from squirrel_coercion026_build import ROOT,WORK,SOURCE,SOURCES,arm,windows,pin,save
from squirrel_coercion026_oracle import Arm,Windows
from squirrel_coercion026_model import validate


def replace_once(text,old,new):
    if text.count(old)!=1:raise ValueError('026 control splice is ambiguous')
    return text.replace(old,new)


def control_source(folder,name,text):
    original=SOURCE/name
    target=folder/name;folder.mkdir(parents=True,exist_ok=True)
    def include(match):
        header=(original.parent/match.group(1)).resolve()
        return '#include "'+os.path.relpath(header,target.parent).replace('\\','/')+'"'
    target.write_text(re.sub(r'#include "([^"]+)"',include,text),encoding='utf-8')
    return target,[target if path==original else path for path in SOURCES]


def definitions():
    coercion=(SOURCE/'coercion.c').read_text()
    scalar=(SOURCE/'scalar_text.c').read_text()
    wrapper=(SOURCE/'stack_string.c').read_text()
    callback=(SOURCE/'fixture_meta.c').read_text()
    rows=[]
    for name,variant,member,expression in [('integer-before-scratch',360,'integer','input->value.integer'),
            ('float-before-scratch',361,'floating','input->value.floating'),
            ('boolean-before-scratch',362,'bits','input->value.bits')]:
        declaration={'integer':'SqPrototypeI32','floating':'float','bits':'SqPrototypeU32'}[member]
        text=replace_once(coercion,'SqPrototypeU32 type = input->type;',
            'SqPrototypeU32 type = input->type;\n    '+declaration+' cached = '+expression+';')
        if member=='integer':text=replace_once(text,'sq_coercion_integer_text026(buffer, input->value.integer)',
            'sq_coercion_integer_text026(buffer, cached)')
        if member=='floating':text=replace_once(text,'sq_coercion_float_text026(buffer, (double)input->value.floating)',
            'sq_coercion_float_text026(buffer, (double)cached)')
        if member=='bits':text=replace_once(text,'sq_coercion_boolean_text026(buffer, input->value.bits)',
            'sq_coercion_boolean_text026(buffer, cached)')
        rows.append((name,variant,'coercion.c',text,'arm'))
    name_line='    const char *name = sq_lookup_object_type_name020(input);\n'
    scratch_line='    char *buffer = sq_lookup_scratch020(sq_native_creation_shared016(vm), sizeof(void *) == 4 ? 24 : 17 + 2 * sizeof(void *));\n'
    rows.append(('type-name-after-scratch',364,'coercion.c',replace_once(coercion,name_line+scratch_line,scratch_line+name_line),'arm'))
    address_start=coercion.index('    SqPrototypeU32 current = input->type;')
    address_end=coercion.index('    sq_coercion_pointer_text026(',address_start)
    address=coercion[address_start:address_end]
    early=replace_once(coercion,address,'')
    early=replace_once(early,name_line,address+name_line)
    rows.append(('pointer-before-scratch',364,'coercion.c',early,'arm'))
    rows.append(('wrong-meta-selector',342,'coercion.c',replace_once(coercion,
        'input->value.reference, 15, 1, destination','input->value.reference, 7, 1, destination'),'arm'))
    rows.append(('wrong-meta-argument-count',332,'coercion.c',replace_once(coercion,
        'input->value.reference, 15, 1, destination','input->value.reference, 15, 0, destination'),'arm'))
    rows.append(('leaked-temporary-owner',350,'coercion.c',replace_once(coercion,
        '    sq_prefix_release(temporary.type, temporary.value);\n',''),'arm'))
    rows.append(('negative-index-off-by-one',354,'stack_string.c',replace_once(wrapper,
        'sq_lookup_top020(vm) + index','sq_lookup_top020(vm) + index + 1'),'arm'))
    fourteen=replace_once(scalar,'#include "float_text.h"',
        '#include "../squirrel-wave023/float_text.h"')
    fourteen=replace_once(fourteen,'sq_float_binary32_text026(destination, bits)','sq_float_binary32_text023(destination, bits)')
    rows.append(('fourteen-digit-substitution',410,'scalar_text.c',fourteen,'arm'))
    observed=replace_once(callback,'    fixture_event020(26, fixture_variant026, (SqPrototypeU32)sq_vm_native_depth022(vm));',
        '    volatile const unsigned char *inactive = (const unsigned char *)sq_vm_current022(vm);\n'
        '    unsigned char value = inactive[0];\n    (void)value;\n'
        '    fixture_event020(26, fixture_variant026, (SqPrototypeU32)sq_vm_native_depth022(vm));')
    rows.append(('forbidden-dead-frame-observer',332,'fixture_meta.c',observed,'arm'))
    shared=replace_once(coercion,'static void publish(void *vm, SqPrefixObject012 *destination)',
        'static void publish(SqPrefixState012 *shared, SqPrefixObject012 *destination)')
    start=shared.index('static void publish(');end=shared.index('static _Bool delegated(')
    shared=shared[:start]+shared[start:end].replace('sq_native_creation_shared016(vm)','shared')+shared[end:]
    shared=replace_once(shared,'SqPrototypeU32 type = input->type;',
        'SqPrototypeU32 type = input->type;\n    SqPrefixState012 *cached_shared = sq_native_creation_shared016(vm);')
    shared=shared.replace('publish(vm, destination);','publish(cached_shared, destination);')
    rows.append(('cached-shared-publication',365,'coercion.c',shared,'arm'))
    pointer=(SOURCE/'pointer_text.c').read_text()
    pointer=replace_once(pointer,'    const char digits[] = "0123456789abcdef";',
        '    address = (SqPrototypeU32)address;\n    const char digits[] = "0123456789abcdef";')
    rows.append(('truncated-native-pointer',316,'pointer_text.c',pointer,'windows'))
    budget=replace_once(coercion,'sizeof(void *) == 4 ? 24 : 17 + 2 * sizeof(void *)','24')
    rows.append(('target-budget-on-native',366,'coercion.c',budget,'windows'))
    return rows


def produce(folder,baseline):
    sections,symbols,functions=load(baseline/'arm/lookup.elf')
    original=Arm(sections,symbols,functions,True)
    good=Arm(sections,symbols,functions)
    rows=[]
    for name,variant,filename,text,backend in definitions():
        target,sources=control_source(folder/name,filename,text)
        if backend=='arm':
            expected,expected_heap=original.execute(variant)
            pristine,pristine_heap=good.execute(variant)
            s,y,f,b=arm(folder/name/'arm',sources)
            bad=Arm(s,y,f);actual,actual_heap=bad.execute(variant)
            rejected=actual!=expected or actual_heap!=pristine_heap or bool(bad.dead_frame_reads)
            if not rejected:raise ValueError('026 returning control accepted: '+name)
            rows.append({'name':name,'variant':variant,'backend':backend,'normallyReturned':True,'rejected':True,
                'sameFinalSourceArena':actual_heap==pristine_heap,'sameFinalObservations':actual==expected,
                'forbiddenDeadFrameReads':bad.dead_frame_reads,'source':pin(target),
                'artifact':pin(folder/name/'arm/lookup.elf')})
        else:
            library=windows(folder/name/'windows',sources)
            bad=Windows(library);actual=bad.execute(variant)
            rejected=False
            try:validate(variant,actual,8)
            except ValueError:rejected=True
            if not rejected:raise ValueError('026 native returning control accepted: '+name)
            rows.append({'name':name,'variant':variant,'backend':backend,'normallyReturned':True,
                'rejected':True,'source':pin(target),'artifact':pin(library)})
        print('026 returning control',name,flush=True)
    result={'schemaVersion':1,'status':'compiled-normally-returning-semantic-controls','controls':rows,
        'count':len(rows),'allRejected':True,'allNormallyReturned':True,
        'sameFinalSourceArenaControls':sum(row.get('sameFinalSourceArena',False) for row in rows),
        'producer':pin(ROOT/'toolscripts/squirrel_coercion026_controls.py')}
    save(folder/'controls.json',result)
    return result


if __name__=='__main__':print(produce(WORK/'primary-v2/controls',WORK/'primary-v2')['count'])
