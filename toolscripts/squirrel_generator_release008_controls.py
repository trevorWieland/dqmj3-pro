import json

from squirrel_generator_release008_build import SOURCE, SOURCES, WORK, arm, windows, pin, save
from squirrel_generator_release008_oracle import Arm, Windows


VARIANTS = [
    ('skip-virtual-destructor', 'release', 1,
        'reference->vtable->unknown_0(reference);', '(void)reference;'),
    ('weak-reset-before-trap-cleanup', 'destructor', 1,
        'if (generator->traps.capacity)',
        'if (reference->weak) { ((SqWeakObject007 *)reference->weak)->object.type = 0x01000001u; ((SqWeakObject007 *)reference->weak)->object.value.reference = 0; }\n    if (generator->traps.capacity)'),
    ('reverse-varargs-and-saved-stack-destruction', 'destructor', 1,
        'fn_0077f3f8(&generator->varargs);\n    fn_0077f3f8(&generator->stack);',
        'fn_0077f3f8(&generator->stack);\n    fn_0077f3f8(&generator->varargs);'),
    ('release-main-closure-before-frame-and-vectors', 'destructor', 18,
        'release_object(&generator->saved.closure);\n    fn_0077f3f8(&generator->varargs);\n    fn_0077f3f8(&generator->stack);\n    release_object(&generator->closure);',
        'release_object(&generator->closure);\n    release_object(&generator->saved.closure);\n    fn_0077f3f8(&generator->varargs);\n    fn_0077f3f8(&generator->stack);'),
    ('omit-owned-frame-closure', 'destructor', 4,
        'release_object(&generator->saved.closure);', '(void)generator->saved.closure;'),
    ('free-traps-with-object-stride', 'destructor', 1,
        'generator->traps.capacity * sizeof(SqGeneratorTrap008)', 'generator->traps.capacity * sizeof(SqObject)')]


def run():
    records = []
    for name, root, variant, before, after in VARIANTS:
        folder = WORK / 'controls' / name
        folder.mkdir(parents=True, exist_ok=True)
        original_source = SOURCE / 'generator_release.c'
        text = original_source.read_text()
        if text.count(before) != 1:
            raise ValueError('Returning generator control marker is ambiguous')
        source = folder / original_source.name
        source.write_text(text.replace(before, after))
        files = [source if path == original_source else path for path in SOURCES]
        sections, symbols, functions, receipt = arm(folder / 'arm', files)
        expected, expected_heap = Arm(sections, symbols, functions, True).execute(root, variant)
        actual, actual_heap = Arm(sections, symbols, functions).execute(root, variant)
        native_path = windows(folder / 'windows', files)
        native = Windows(native_path).execute(root, variant)
        if actual == expected or native == expected:
            raise ValueError('Changed generator source escaped qualification: ' + name)
        same_heap = actual_heap == expected_heap
        if name == 'weak-reset-before-trap-cleanup' and not same_heap:
            raise ValueError('Weak read-order negative must preserve the final heap')
        records.append({'name': name, 'root': root, 'variant': variant, 'modifiedSource': pin(source),
            'sourceElf': receipt['linkedElf'], 'nativeLibrary': pin(native_path),
            'originalSourceAndNativeReturnedNormally': True, 'boundedMemoryAndSavedAbiPassed': True,
            'sourceObservationRejected': True, 'nativeObservationRejected': True,
            'finalNormalizedHeapStillEqual': same_heap, 'instructionOrObjectPatching': False})
    report = {'schemaVersion': 1, 'allNormallyReturningControlsRejected': True, 'controls': records,
        'sameFinalStateObserverControlRejected': True}
    save(WORK / 'semantic-controls.json', report)
    print(json.dumps({'generatorReturningControlsRejectedOnArmAndWindows': len(records),
        'sameFinalHeapReadOrderNegativeRejected': True}))
    return report


if __name__ == '__main__':
    run()
