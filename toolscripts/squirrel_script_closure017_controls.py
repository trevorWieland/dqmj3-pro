import json

from squirrel_script_closure017_build import SOURCE, SOURCES, WORK, arm, windows, pin, save
from squirrel_script_closure017_oracle import Arm, Windows


WEAK = '''    if (closure->reference.prefix.weak) {
        SqPrototypeWeak011 *weak = closure->reference.prefix.weak;
        weak->object.type = 0x01000001u;
        weak->object.value.reference = 0;
    }'''
VARIANTS = [
    ('bypass-current-virtual-destructor', 'release', 9, [('closure->reference.prefix.vtable->destroy(closure);', 'sq_script_closure_destroy017(closure);')]),
    ('outers-before-defaults', 'release', 1, [('destroy_values(&closure->defaults);\n    destroy_values(&closure->outers);', 'destroy_values(&closure->outers);\n    destroy_values(&closure->defaults);')]),
    ('environment-before-real-prototype', 'release', 1, [('release_object(&closure->function);\n    release_object(&closure->environment);', 'release_object(&closure->environment);\n    release_object(&closure->function);')]),
    ('invalidate-root-weak-before-owned-cleanup', 'release', 1, [('destroy_values(&closure->defaults);', WEAK.lstrip() + '\n    destroy_values(&closure->defaults);')]),
    ('cache-outers-before-default-callbacks', 'release', 4, [('destroy_values(&closure->defaults);\n    destroy_values(&closure->outers);', 'SqPrefixVector012 cached = closure->outers;\n    destroy_values(&closure->defaults);\n    destroy_values(&cached);')]),
    ('cache-prototype-before-capture-disposal', 'release', 6, [('destroy_values(&closure->outers);\n    release_object(&closure->function);', 'SqPrefixObject012 cached = closure->function;\n    destroy_values(&closure->outers);\n    release_object(&cached);')]),
    ('cache-environment-before-prototype-disposal', 'release', 7, [('release_object(&closure->function);\n    release_object(&closure->environment);', 'SqPrefixObject012 cached = closure->environment;\n    release_object(&closure->function);\n    release_object(&cached);')]),
    ('cache-weak-before-environment-disposal', 'release', 8, [
        ('release_object(&closure->environment);', 'SqPrototypeWeak011 *cached = closure->reference.prefix.weak;\n    release_object(&closure->environment);'),
        (WEAK, '''    if (cached) {
        cached->object.type = 0x01000001u;
        cached->object.value.reference = 0;
    }''')]),
    ('wrong-captured-object-disposal-stride', 'release', 1, [('vector->capacity * sizeof(SqPrefixObject012)', 'vector->capacity * sizeof(SqPrototypePrefix011)')]),
    ('omit-actual-compact-prototype-owner', 'release', 1, [('release_object(&closure->function);', '(void)closure->function;')]),
    ('unlink-marked-collector-owned-root', 'release', 10, [('if (!(closure->reference.prefix.references & 0x80000000u))', 'if (1)')])]


def run():
    records = []
    for name, root, variant, replacements in VARIANTS:
        folder = WORK / 'controls' / name
        folder.mkdir(parents=True, exist_ok=True)
        original = SOURCE / 'script_closure.c'
        text = original.read_text()
        for before, after in replacements:
            if text.count(before) != 1:
                raise ValueError('017 returning control marker is ambiguous: ' + name)
            text = text.replace(before, after)
        source = folder / original.name
        source.write_text(text)
        sources = [source if path == original else path for path in SOURCES]
        sections, symbols, functions, build = arm(folder / 'arm', sources, describe=False)
        expected, expected_heap = Arm(sections, symbols, functions, True).execute(root, variant)
        actual, actual_heap = Arm(sections, symbols, functions).execute(root, variant)
        library = windows(folder / 'windows', sources)
        native = Windows(library).execute(root, variant)
        if actual == expected or native == expected:
            raise ValueError('Wrong017 source escaped qualification: ' + name)
        same_heap = expected_heap == actual_heap
        if name in ['outers-before-defaults', 'environment-before-real-prototype',
                'invalidate-root-weak-before-owned-cleanup', 'wrong-captured-object-disposal-stride'] and not same_heap:
            raise ValueError('017 observer-only control changed final foreign heap: ' + name)
        records.append({'name': name, 'root': root, 'variant': variant, 'modifiedSource': pin(source),
            'sourceElf': build['linkedElf'], 'actualWindowsLibrary': pin(library),
            'originalSourceAndWindowsReturnedNormally': True, 'boundedMemoryAndSavedAbiPassed': True,
            'compactPrototypePrefixAndDisposedOwnerBoundsPassed': True, 'sourceObservationRejected': True,
            'nativeObservationRejected': True, 'finalNormalizedHeapStillEqual': same_heap,
            'instructionOrObjectPatching': False})
    report = {'schemaVersion': 1, 'allNormallyReturningControlsRejected': True, 'controls': records,
        'sameFinalStateObserverControlsRejected': True}
    save(WORK / 'semantic-controls.json', report)
    print(json.dumps({'scriptClosureReturningControlsRejectedOnArmAndWindows': len(records),
        'sameFinalHeapObserverControlsRejected': sum(row['finalNormalizedHeapStillEqual'] for row in records)}))
    return report


if __name__ == '__main__':
    run()
