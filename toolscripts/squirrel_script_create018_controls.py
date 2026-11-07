import json

from squirrel_script_create018_build import SOURCE, SOURCES, WORK, arm, windows, pin, save
from squirrel_script_create018_oracle import Arm, Windows


GROW_OUTERS = '''                if (closure->outers.capacity <= closure->outers.size)
                    reserve(&closure->outers, closure->outers.size ? closure->outers.size * 2 : 4);
'''
GROW_DEFAULTS = '''            if (closure->defaults.capacity <= closure->defaults.size)
                reserve(&closure->defaults, closure->defaults.size ? closure->defaults.size * 2 : 4);
'''
VARIANTS = [
    ('capture-shared-after-allocation', 9, [
        ('    SqPrefixState012 *state = sq_native_creation_shared016(vm);\n    SqScriptClosure017 *closure = sq_script_create_allocate018(sizeof(*closure));',
         '    SqScriptClosure017 *closure = sq_script_create_allocate018(sizeof(*closure));\n    SqPrefixState012 *state = sq_native_creation_shared016(vm);')]),
    ('use-whole-kind-instead-of-low-byte', 6, [('switch ((unsigned char)outer->kind)', 'switch (outer->kind)')]),
    ('omit-prototype-temporary-retain', 1, [('sq_prefix_retain(prototype.type, prototype.value);', '(void)prototype;')]),
    ('omit-captured-value-retain', 1, [('sq_prefix_retain(slot->type, slot->value);', '(void)slot;')]),
    ('select-local-after-storage-growth', 8, [
        ('                const SqPrefixObject012 *incoming = sq_script_creation_local018(vm, outer->source.value.integer);',
         GROW_OUTERS + '                const SqPrefixObject012 *incoming = sq_script_creation_local018(vm, outer->source.value.integer);')]),
    ('select-parent-after-storage-growth', 25, [
        ('                const SqPrefixObject012 *incoming = sq_script_creation_parent_outer018(vm, outer->source.value.integer);',
         GROW_OUTERS + '                const SqPrefixObject012 *incoming = sq_script_creation_parent_outer018(vm, outer->source.value.integer);')]),
    ('select-default-after-storage-growth', 11, [
        ('            const SqPrefixObject012 *incoming = sq_script_creation_local018(vm, function->defaults[index]);',
         GROW_DEFAULTS + '            const SqPrefixObject012 *incoming = sq_script_creation_local018(vm, function->defaults[index]);')]),
    ('cache-descriptors-across-lookup-callback', 10, [
        ('        for (SqPrototypeI32 index = 0; index < outer_count; ++index) {',
         '        SqPrototypeOuter011 *cached = function->outers;\n        for (SqPrototypeI32 index = 0; index < outer_count; ++index) {'),
        ('SqPrototypeOuter011 *outer = function->outers + index;', 'SqPrototypeOuter011 *outer = cached + index;')]),
    ('cleanup-unpublished-closure-on-lookup-failure', 5, [('                    return 0;', '                    sq_script_closure_release017(closure);\n                    return 0;')]),
    ('elide-temporary-owner-around-publication', 1, [
        ('sq_prefix_retain(temporary.type, temporary.value);', '(void)temporary;'),
        ('sq_prefix_release(temporary.type, temporary.value);', '(void)temporary;')]),
    ('release-old-destination-before-publication', 1, [
        ('    sq_prefix_assign(destination, &temporary);', '''    SqPrefixObject012 previous = *destination;
    sq_prefix_release(previous.type, previous.value);
    *destination = temporary;
    sq_prefix_retain(temporary.type, temporary.value);''')]),
    ('omit-index-error-provider-call', 5, [('sq_script_creation_index_error018(vm, &outer->source);', '(void)outer;')]),
    ('reload-outer-count-after-reserve', 26, [('index < outer_count;', 'index < function->outer_count;')]),
    ('reload-default-count-after-reserve', 27, [('index < default_count;', 'index < function->default_count;')])]
OBSERVER_ONLY = {'elide-temporary-owner-around-publication', 'release-old-destination-before-publication', 'omit-index-error-provider-call'}


def run():
    records = []
    for name, variant, replacements in VARIANTS:
        folder = WORK / 'controls' / name
        folder.mkdir(parents=True, exist_ok=True)
        original = SOURCE / 'script_create.c'
        text = original.read_text()
        for before, after in replacements:
            if text.count(before) != 1:
                raise ValueError('018 returning control marker is ambiguous: ' + name)
            text = text.replace(before, after)
        source = folder / original.name
        source.write_text(text)
        sources = [source if path == original else path for path in SOURCES]
        sections, symbols, functions, build = arm(folder / 'arm', sources, describe=False)
        expected, expected_heap = Arm(sections, symbols, functions, True).execute('published', variant)
        actual, actual_heap = Arm(sections, symbols, functions).execute('published', variant)
        library = windows(folder / 'windows', sources)
        native = Windows(library).execute('published', variant)
        if actual == expected or native == expected:
            raise ValueError('Wrong018 source escaped qualification: ' + name)
        same_heap = expected_heap == actual_heap
        if name in OBSERVER_ONLY and not same_heap:
            raise ValueError('018 observer control unexpectedly changed final heap: ' + name)
        records.append({'name': name, 'variant': variant, 'modifiedSource': pin(source),
            'sourceElf': build['linkedElf'], 'actualWindowsLibrary': pin(library),
            'originalSourceAndWindowsReturnedNormally': True, 'boundedMemoryAndSavedAbiPassed': True,
            'sourceObservationRejected': True, 'nativeObservationRejected': True,
            'finalNormalizedHeapStillEqual': same_heap, 'instructionOrObjectPatching': False})
        print(json.dumps({'returningControlRejected': name, 'sameFinalHeap': same_heap}), flush=True)
    report = {'schemaVersion': 1, 'allNormallyReturningControlsRejected': True, 'controls': records,
        'sameFinalStateObserverControlsRejected': True}
    save(WORK / 'semantic-controls.json', report)
    return report


if __name__ == '__main__':
    run()
