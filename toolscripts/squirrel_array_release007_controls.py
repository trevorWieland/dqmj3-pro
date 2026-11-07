import json

from squirrel_array_release007_build import SOURCE, SOURCES, WORK, arm, windows, pin, save
from squirrel_array_release007_oracle import Arm, Windows


VARIANTS = [
    ('skip-virtual-destructor', 'array_release.c', 'release', 1,
        'reference->vtable->unknown_0(reference);', '(void)reference;'),
    ('weak-reset-before-vector-cleanup', 'array_release.c', 'destructor', 1,
        'fn_0077f3f8(&array->vector);',
        'if (reference->weak) { ((SqWeakObject007 *)reference->weak)->object.type = 0x01000001u; ((SqWeakObject007 *)reference->weak)->object.value.reference = 0; }\n    fn_0077f3f8(&array->vector);'),
    ('cached-length-across-release-callback', 'vector_destroy.c', 'vector', 5,
        'for (SqU32 index = 0; index < vector->size; ++index)',
        'SqU32 limit = vector->size;\n        for (SqU32 index = 0; index < limit; ++index)'),
    ('cached-storage-across-release-callback', 'vector_destroy.c', 'vector', 6,
        'for (SqU32 index = 0; index < vector->size; ++index) {\n            SqObject *object = &vector->values[index];',
        'SqObject *cached = vector->values;\n        for (SqU32 index = 0; index < vector->size; ++index) {\n            SqObject *object = &cached[index];'),
    ('wrong-next-backlink', 'chain_unlink.c', 'unlink', 3,
        'reference->next->previous = reference->previous;', 'reference->next->previous = reference;'),
    ('free-size-instead-of-capacity', 'vector_destroy.c', 'vector', 11,
        'vector->capacity * sizeof(SqObject)', 'vector->size * sizeof(SqObject)')]


def run():
    records = []
    for name, filename, root, variant, before, after in VARIANTS:
        folder = WORK / 'controls' / name
        folder.mkdir(parents=True, exist_ok=True)
        text = (SOURCE / filename).read_text()
        if text.count(before) != 1:
            raise ValueError('Returning control marker is ambiguous')
        source = folder / filename
        source.write_text(text.replace(before, after))
        files = [source if path.name == filename else path for path in SOURCES]
        sections, symbols, functions, receipt = arm(folder / 'arm', files)
        expected, expected_heap = Arm(sections, symbols, functions, True).execute(root, variant)
        actual, actual_heap = Arm(sections, symbols, functions).execute(root, variant)
        native_path = windows(folder / 'windows', files)
        native = Windows(native_path).execute(root, variant)
        if actual == expected or native == expected:
            raise ValueError('Changed semantic source escaped qualification: ' + name)
        same_heap = actual_heap == expected_heap
        if name == 'weak-reset-before-vector-cleanup' and not same_heap:
            raise ValueError('Read-order negative must preserve the final heap while changing observations')
        records.append({'name': name, 'root': root, 'variant': variant, 'modifiedSource': pin(source),
            'sourceElf': receipt['linkedElf'], 'nativeLibrary': pin(native_path),
            'originalSourceAndNativeReturnedNormally': True, 'boundedMemoryAndSavedAbiPassed': True,
            'sourceObservationRejected': True, 'nativeObservationRejected': True,
            'finalNormalizedHeapStillEqual': same_heap, 'instructionOrObjectPatching': False,
            'onlyMetadataChanged': False})
    report = {'schemaVersion': 1, 'allNormallyReturningControlsRejected': True, 'controls': records,
        'sameFinalStateObserverControlRejected': True}
    save(WORK / 'semantic-controls.json', report)
    print(json.dumps({'returningControlsRejectedOnArmAndWindows': len(records), 'sameFinalHeapReadOrderNegativeRejected': True}))
    return report


if __name__ == '__main__':
    run()
