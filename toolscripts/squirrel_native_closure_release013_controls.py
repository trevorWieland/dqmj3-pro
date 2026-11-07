import json

from squirrel_native_closure_release013_build import SOURCE, SOURCES, WORK, arm, windows, pin, save
from squirrel_native_closure_release013_oracle import Arm, Windows


VARIANTS = [
    ('skip-virtual-destruction', 'release', 1,
        'closure->reference.prefix.vtable->destroy(closure);', '(void)closure->reference.prefix.vtable;'),
    ('weak-clear-before-name-cleanup', 'destructor', 1,
        'release_object(&closure->name);',
        'if (closure->reference.prefix.weak) { SqPrototypeWeak011 *weak = closure->reference.prefix.weak; weak->object.type = 0x01000001u; weak->object.value.reference = 0; }\n    release_object(&closure->name);'),
    ('reverse-name-environment-cleanup', 'destructor', 1,
        'release_object(&closure->name);\n    release_object(&closure->environment);',
        'release_object(&closure->environment);\n    release_object(&closure->name);'),
    ('cache-outers-before-environment-callback', 'destructor', 5,
        'release_object(&closure->name);\n    release_object(&closure->environment);\n    destroy_outers(&closure->outers);',
        'SqPrefixVector012 cached = closure->outers;\n    release_object(&closure->name);\n    release_object(&closure->environment);\n    destroy_outers(&cached);'),
    ('cache-masks-before-outer-free', 'destructor', 7,
        'destroy_outers(&closure->outers);\n    if (closure->type_checks.capacity)\n        sq_native_closure_deallocate013(closure->type_checks.values, closure->type_checks.capacity * sizeof(SqPrototypeI32));',
        'SqPrefixPodVector012 cached = closure->type_checks;\n    destroy_outers(&closure->outers);\n    if (cached.capacity)\n        sq_native_closure_deallocate013(cached.values, cached.capacity * sizeof(SqPrototypeI32));'),
    ('wrong-mask-scalar-stride', 'destructor', 1,
        'closure->type_checks.capacity * sizeof(SqPrototypeI32)', 'closure->type_checks.capacity * sizeof(SqPrefixObject012)'),
    ('invoke-unowned-native-callable', 'release', 1,
        'closure->reference.prefix.vtable->destroy(closure);', 'closure->function(closure);\n    closure->reference.prefix.vtable->destroy(closure);'),
    ('omit-name-owner', 'destructor', 1,
        'release_object(&closure->name);', '(void)closure->name;')]


def run():
    records = []
    for name, root, variant, before, after in VARIANTS:
        folder = WORK / 'controls' / name
        folder.mkdir(parents=True, exist_ok=True)
        original_source = SOURCE / 'native_closure_release.c'
        text = original_source.read_text()
        if text.count(before) != 1:
            raise ValueError('Returning native-closure control marker is ambiguous')
        source = folder / original_source.name
        source.write_text(text.replace(before, after))
        files = [source if path == original_source else path for path in SOURCES]
        sections, symbols, functions, receipt = arm(folder / 'arm', files)
        expected, expected_heap = Arm(sections, symbols, functions, True).execute(root, variant)
        actual, actual_heap = Arm(sections, symbols, functions).execute(root, variant)
        native_path = windows(folder / 'windows', files)
        native = Windows(native_path).execute(root, variant)
        if actual == expected or native == expected:
            raise ValueError('Changed native-closure source escaped qualification: ' + name)
        same_heap = actual_heap == expected_heap
        if name in ['weak-clear-before-name-cleanup', 'cache-masks-before-outer-free', 'invoke-unowned-native-callable'] and not same_heap:
            raise ValueError('Native-closure observer-only control must preserve final heap')
        records.append({'name': name, 'root': root, 'variant': variant, 'modifiedSource': pin(source),
            'sourceElf': receipt['linkedElf'], 'nativeLibrary': pin(native_path),
            'originalSourceAndNativeReturnedNormally': True, 'boundedMemoryAndSavedAbiPassed': True,
            'actual12ByteGenericPrefixBoundsPassed': True, 'sourceObservationRejected': True,
            'nativeObservationRejected': True, 'finalNormalizedHeapStillEqual': same_heap,
            'instructionOrObjectPatching': False})
    report = {'schemaVersion': 1, 'allNormallyReturningControlsRejected': True, 'controls': records,
        'sameFinalStateObserverControlsRejected': True}
    save(WORK / 'semantic-controls.json', report)
    print(json.dumps({'nativeClosureReturningControlsRejectedOnArmAndWindows': len(records),
        'sameFinalHeapObserverControlsRejected': sum(row['finalNormalizedHeapStillEqual'] for row in records)}))
    return report


if __name__ == '__main__':
    run()
