import json

from squirrel_lookup020_build import SOURCE,SOURCES,WORK,arm,windows,pin,save
from squirrel_lookup020_oracle import Arm,Windows


VARIANTS = [
    ('repair-negative-string-index','lookup_fallback.c',8,[('string->length - (SqPrototypeU32)index','string->length + (SqPrototypeU32)index')]),
    ('unsigned-string-byte','lookup_fallback.c',7,[('SqPrototypeI32 byte = string->value[offset];','SqPrototypeI32 byte = (unsigned char)string->value[offset];')]),
    ('wrong-class-member-vector','lookup_fallback.c',21,[('klass->members32.values[member & 0x00ffffffu].primary','klass->members44.values[member & 0x00ffffffu].primary')]),
    ('ignore-raw-for-table-default','lookup_fallback.c',27,[('receiver->type == 0x0a000020u && !raw','receiver->type == 0x0a000020u')]),
    ('root-fallback-without-payload-equality','lookup_get.c',16,[('if (equal) return sq_table_get019','if (equal || receiver->type == 0x01000001u) return sq_table_get019')]),
    ('array-out-of-range-falls-through','lookup_get.c',5,[
        ('if (index < 0 || (SqPrototypeU32)index >= array->vector.size) return 0;', 'if (index < 0 || (SqPrototypeU32)index >= array->vector.size) goto fallback;'),
        ('    if (sq_lookup_fallback020(', 'fallback:\n    if (sq_lookup_fallback020(')]),
    ('leave-weak-result-wrapped','lookup_bindings.c',23,[('    if (incoming.type == 0x08010000u) incoming = ((SqWeakReference014 *)incoming.value.reference)->object;\n','')]),
    ('skip-lookup-fallback','lookup_get.c',17,[('    if (sq_lookup_fallback020(vm, receiver, key, destination, raw)) return 1;', '    (void)raw;')]),
    ('wrong-metamethod-selector','metamethod.c',13,[('names->values + selector','names->values + (selector ? selector - 1 : 0)')]),
    ('null-delegate-reports-success','metamethod.c',64,[('if (!delegate) return 0;', 'if (!delegate) return 1;')]),
    ('omit-meta-argument-cleanup','metamethod_call.c',13,[('index < arguments;','index < 0;')]),
    ('release-meta-callable-before-stack-cleanup','metamethod_call.c',65,[
        ('    for (SqPrototypeI32 index = 0; index < arguments; ++index) sq_lookup_pop020(vm);\n    sq_prefix_release(callable.type, callable.value);',
         '    sq_prefix_release(callable.type, callable.value);\n    for (SqPrototypeI32 index = 0; index < arguments; ++index) sq_lookup_pop020(vm);')]),
    ('publish-extended-vtable-before-initialization','metamethod_publication.c',13,[
        ('    storage->prefix = *table->reference.prefix.vtable;',
         '    const SqPrototypeVTable011 *previous = table->reference.prefix.vtable;\n    table->reference.prefix.vtable = &storage->prefix;\n    if (observer) observer(context, table, storage);\n    storage->prefix = *previous;'),
        ('    table->reference.prefix.vtable = &storage->prefix;\n    if (observer) observer(context, table, storage);\n}', '}')]),
    ('elide-error-temporary-owner','lookup_error.c',28,[
        ('    sq_prefix_retain(temporary.type, temporary.value);\n    SqPrefixObject012 previous;', '    SqPrefixObject012 previous;'),
        ('    sq_prefix_release(previous.type, previous.value);\n    sq_prefix_release(temporary.type, temporary.value);', '    sq_prefix_release(previous.type, previous.value);')]),
    ('release-old-error-before-publication','lookup_error.c',28,[
        ('    __builtin_memcpy(slot, &temporary, sizeof(temporary));\n    sq_prefix_retain(temporary.type, temporary.value);\n    sq_prefix_release(previous.type, previous.value);',
         '    sq_prefix_retain(temporary.type, temporary.value);\n    sq_prefix_release(previous.type, previous.value);\n    __builtin_memcpy(slot, &temporary, sizeof(temporary));')]),
    ('ignore-string-format-precision','fixture_services.c',29,[('index < precision && value[index]', '(index < precision || precision == 50) && value[index]')]),
    ('strict-scratch-shrink-threshold','lookup_scratch.c',59,[('capacity >= requested * 32','capacity > requested * 32')]),
    ('do-not-mask-type-flags','lookup_type_name.c',52,[('switch (type & 0x00ffffffu)', 'switch (type)')])]
OBSERVER_ONLY = {'release-meta-callable-before-stack-cleanup','publish-extended-vtable-before-initialization',
    'elide-error-temporary-owner','release-old-error-before-publication'}


def run():
    base_sections,base_symbols,base_functions,_=arm(WORK/'controls/baseline')
    original=Arm(base_sections,base_symbols,base_functions,True)
    records=[]
    for name,filename,variant,replacements in VARIANTS:
        folder=WORK/'controls'/name;folder.mkdir(parents=True,exist_ok=True)
        path=SOURCE/filename;text=path.read_text()
        for before,after in replacements:
            if text.count(before)!=1:raise ValueError('020 control marker is ambiguous: '+name)
            text=text.replace(before,after)
        changed=folder/filename;changed.write_text(text)
        sources=[changed if source==path else source for source in SOURCES]
        sections,symbols,functions,build=arm(folder/'arm',sources)
        expected,expected_heap=original.execute(variant)
        actual,actual_heap=Arm(sections,symbols,functions).execute(variant)
        library=windows(folder/'windows',sources)
        native=Windows(library).execute(variant)
        if actual==expected or native==expected:raise ValueError('Wrong020 source escaped semantic qualification: '+name)
        same_heap=actual_heap==expected_heap
        if name in OBSERVER_ONLY and not same_heap:raise ValueError('020 observer control changed final heap: '+name)
        records.append({'name':name,'variant':variant,'modifiedSource':pin(changed),'elf':build['linkedElf'],
            'actualWindowsLibrary':pin(library),'originalSourceAndWindowsReturnedNormally':True,
            'boundedMemoryAndSavedAbiPassed':True,'sourceAndWindowsRejected':True,
            'finalNormalizedArmHeapStillEqual':same_heap,'instructionOrObjectPatching':False})
        print(json.dumps({'controlRejected':name,'sameFinalHeap':same_heap}),flush=True)
    result={'schemaVersion':1,'controls':records,'allReturnedNormallyAndRejected':True}
    save(WORK/'semantic-controls.json',result)
    return result


if __name__=='__main__':
    run()
