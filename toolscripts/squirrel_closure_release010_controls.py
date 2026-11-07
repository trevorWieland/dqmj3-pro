import json

from squirrel_closure_release010_build import SOURCE, SOURCES, WORK, arm, windows, pin, save
from squirrel_closure_release010_oracle import Arm, Windows


VARIANTS = [
    ('skip-virtual-destructor', 'release', 1,
        'reference->vtable->unknown_0(reference);', '(void)reference;'),
    ('weak-reset-before-vector-cleanup', 'destructor', 1,
        'fn_0077f3f8(&closure->defaults);',
        'if (reference->weak) { ((SqWeakObject007 *)reference->weak)->object.type = 0x01000001u; ((SqWeakObject007 *)reference->weak)->object.value.reference = 0; }\n    fn_0077f3f8(&closure->defaults);'),
    ('reverse-default-and-outer-destruction', 'destructor', 1,
        'fn_0077f3f8(&closure->defaults);\n    fn_0077f3f8(&closure->outers);',
        'fn_0077f3f8(&closure->outers);\n    fn_0077f3f8(&closure->defaults);'),
    ('reverse-prototype-and-environment-release', 'destructor', 1,
        'release_object(&closure->function);\n    release_object(&closure->environment);',
        'release_object(&closure->environment);\n    release_object(&closure->function);'),
    ('cache-prototype-before-default-free', 'destructor', 6,
        'fn_0077f3f8(&closure->defaults);\n    fn_0077f3f8(&closure->outers);\n    release_object(&closure->function);',
        'SqObject cached = closure->function;\n    fn_0077f3f8(&closure->defaults);\n    fn_0077f3f8(&closure->outers);\n    release_object(&cached);'),
    ('omit-prototype-owner-release', 'destructor', 1,
        'release_object(&closure->function);', '(void)closure->function;'),
    ('free-closure-with-array-extent', 'release', 1,
        'sq_deallocate(reference, sizeof(SqScriptClosure010));', 'sq_deallocate(reference, sizeof(SqArray));')]


def run():
    records = []
    for name, root, variant, before, after in VARIANTS:
        folder = WORK / 'controls' / name
        folder.mkdir(parents=True, exist_ok=True)
        original_source = SOURCE / 'closure_release.c'
        text = original_source.read_text()
        if text.count(before) != 1:
            raise ValueError('Returning closure control marker is ambiguous')
        source = folder / original_source.name
        source.write_text(text.replace(before, after))
        files = [source if path == original_source else path for path in SOURCES]
        sections, symbols, functions, receipt = arm(folder / 'arm', files)
        expected, expected_heap = Arm(sections, symbols, functions, True).execute(root, variant)
        actual, actual_heap = Arm(sections, symbols, functions).execute(root, variant)
        native_path = windows(folder / 'windows', files)
        native = Windows(native_path).execute(root, variant)
        if actual == expected or native == expected:
            raise ValueError('Changed closure source escaped qualification: ' + name)
        same_heap = actual_heap == expected_heap
        if name == 'weak-reset-before-vector-cleanup' and not same_heap:
            raise ValueError('Closure weak-order control must preserve final heap')
        records.append({'name': name, 'root': root, 'variant': variant, 'modifiedSource': pin(source),
            'sourceElf': receipt['linkedElf'], 'nativeLibrary': pin(native_path),
            'originalSourceAndNativeReturnedNormally': True, 'boundedMemoryAndSavedAbiPassed': True,
            'sourceObservationRejected': True, 'nativeObservationRejected': True,
            'finalNormalizedHeapStillEqual': same_heap, 'instructionOrObjectPatching': False})
    report = {'schemaVersion': 1, 'allNormallyReturningControlsRejected': True, 'controls': records,
        'sameFinalStateObserverControlRejected': True}
    save(WORK / 'semantic-controls.json', report)
    print(json.dumps({'closureReturningControlsRejectedOnArmAndWindows': len(records),
        'sameFinalHeapReadOrderControlsRejected': sum(row['finalNormalizedHeapStillEqual'] for row in records)}))
    return report


if __name__ == '__main__':
    run()
