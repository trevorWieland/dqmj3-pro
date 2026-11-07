import json

from squirrel_prototype_release011_build import SOURCE, SOURCES, WORK, arm, windows, pin, save
from squirrel_prototype_release011_oracle import Arm, Windows


VARIANTS = [
    ('omit-virtual-header-destruction', 'release', 1,
        'prototype->reference.vtable->destroy(prototype);', '(void)prototype->reference.vtable;'),
    ('weak-reset-before-header-names', 'destructor', 1,
        'release_object(&prototype->name);',
        'if (prototype->reference.weak) { SqPrototypeWeak011 *weak = prototype->reference.weak; weak->object.type = 0x01000001u; weak->object.value.reference = 0; }\n    release_object(&prototype->name);'),
    ('capture-allocation-size-after-destructor', 'release', 7,
        'SqPrototypeU32 bytes = sq_prototype_allocation_bytes011(prototype);\n    prototype->reference.vtable->destroy(prototype);',
        'prototype->reference.vtable->destroy(prototype);\n    SqPrototypeU32 bytes = sq_prototype_allocation_bytes011(prototype);'),
    ('reverse-outer-source-name-cleanup', 'release', 1,
        'release_object(&outer->source);\n        release_object(&outer->name);',
        'release_object(&outer->name);\n        release_object(&outer->source);'),
    ('reload-current-outer-after-source-callback', 'release', 5,
        'release_object(&outer->source);\n        release_object(&outer->name);',
        'release_object(&outer->source);\n        outer = prototype->outers + index;\n        release_object(&outer->name);'),
    ('cache-parameters-before-literal-callback', 'release', 4,
        'for (SqPrototypeI32 index = 0; index < prototype->literal_count; ++index)\n        release_object(prototype->literals + index);\n    for (SqPrototypeI32 index = 0; index < prototype->parameter_count; ++index)\n        release_object(prototype->parameters + index);',
        'SqPrototypeObject011 *parameters = prototype->parameters;\n    for (SqPrototypeI32 index = 0; index < prototype->literal_count; ++index)\n        release_object(prototype->literals + index);\n    for (SqPrototypeI32 index = 0; index < prototype->parameter_count; ++index)\n        release_object(parameters + index);'),
    ('omit-local-name-ownership', 'release', 1,
        'release_object(&prototype->locals[index].name);', '(void)prototype->locals[index].name;'),
    ('wrong-local-record-allocation-stride', 'release', 1,
        'prototype->local_count * sizeof(SqPrototypeLocal011)', 'prototype->local_count * sizeof(SqPrototypeLine011)')]


def run():
    records = []
    for name, root, variant, before, after in VARIANTS:
        folder = WORK / 'controls' / name
        folder.mkdir(parents=True, exist_ok=True)
        original_source = SOURCE / 'prototype_release.c'
        text = original_source.read_text()
        if text.count(before) != 1:
            raise ValueError('Returning prototype control marker is ambiguous')
        source = folder / original_source.name
        source.write_text(text.replace(before, after))
        files = [source if path == original_source else path for path in SOURCES]
        sections, symbols, functions, receipt = arm(folder / 'arm', files)
        expected, expected_heap = Arm(sections, symbols, functions, True).execute(root, variant)
        actual, actual_heap = Arm(sections, symbols, functions).execute(root, variant)
        native_path = windows(folder / 'windows', files)
        native = Windows(native_path).execute(root, variant)
        if actual == expected or native == expected:
            raise ValueError('Changed prototype source escaped qualification: ' + name)
        same_heap = actual_heap == expected_heap
        if name in ['weak-reset-before-header-names', 'capture-allocation-size-after-destructor'] and not same_heap:
            raise ValueError('Prototype observer-only control must preserve its final heap')
        records.append({'name': name, 'root': root, 'variant': variant, 'modifiedSource': pin(source),
            'sourceElf': receipt['linkedElf'], 'nativeLibrary': pin(native_path),
            'originalSourceAndNativeReturnedNormally': True, 'boundedMemoryAndSavedAbiPassed': True,
            'actual12ByteGenericPrefixBoundsPassed': True, 'sourceObservationRejected': True,
            'nativeObservationRejected': True, 'finalNormalizedHeapStillEqual': same_heap,
            'instructionOrObjectPatching': False})
    report = {'schemaVersion': 1, 'allNormallyReturningControlsRejected': True, 'controls': records,
        'sameFinalStateObserverControlsRejected': True}
    save(WORK / 'semantic-controls.json', report)
    print(json.dumps({'prototypeReturningControlsRejectedOnArmAndWindows': len(records),
        'sameFinalHeapObserverControlsRejected': sum(row['finalNormalizedHeapStillEqual'] for row in records)}))
    return report


if __name__ == '__main__':
    run()
