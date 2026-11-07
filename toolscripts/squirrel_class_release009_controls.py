import json

from squirrel_class_release009_build import SOURCE, SOURCES, WORK, arm, windows, pin, save
from squirrel_class_release009_oracle import Arm, Windows


VARIANTS = [
    ('skip-release-hook', 'class_release.c', 'release', 1,
        'klass->release_hook(klass->type_tag, 0);', '(void)klass->type_tag;'),
    ('cache-destructor-before-hook', 'class_release.c', 'release', 12,
        'if (klass->release_hook)\n        klass->release_hook(klass->type_tag, 0);\n    reference->vtable->unknown_0(reference);',
        'void (*destructor)(SqRef *) = reference->vtable->unknown_0;\n    if (klass->release_hook)\n        klass->release_hook(klass->type_tag, 0);\n    destructor(reference);'),
    ('weak-reset-before-finalize', 'class_release.c', 'destructor', 1,
        'fn_00665f20(klass);',
        'if (reference->weak) { ((SqWeakObject007 *)reference->weak)->object.type = 0x01000001u; ((SqWeakObject007 *)reference->weak)->object.value.reference = 0; }\n    fn_00665f20(klass);'),
    ('clear-member-table-before-callback', 'class_finalize.c', 'finalize', 1,
        'release_reference(klass->members);\n        klass->members = 0;',
        'SqRef *members = klass->members;\n        klass->members = 0;\n        release_reference(members);'),
    ('reverse-member-field-release', 'class_internal.h', 'finalize', 1,
        'release_object(&member->secondary);\n    release_object(&member->primary);',
        'release_object(&member->primary);\n    release_object(&member->secondary);'),
    ('recompute-current-record-after-callback', 'member_resize.c', 'resize', 20,
        'release_member(member);',
        'release_object(&member->secondary);\n            member = vector->values + index;\n            release_object(&member->primary);'),
    ('grow-without-retaining-primary', 'member_resize.c', 'resize', 4,
        'fn_0019e864(&member->primary, &fill->primary);', 'member->primary = fill->primary;'),
    ('reverse-member-backing-disposal', 'class_release.c', 'destructor', 10,
        'destroy_members(&klass->members44);\n    destroy_members(&klass->members32);',
        'destroy_members(&klass->members32);\n    destroy_members(&klass->members44);'),
    ('omit-base-owner-release', 'class_finalize.c', 'finalize', 4,
        'release_reference(&klass->base->reference);', '(void)klass->base->reference;')]


def run():
    records = []
    for name, filename, root, variant, before, after in VARIANTS:
        folder = WORK / 'controls' / name
        folder.mkdir(parents=True, exist_ok=True)
        original_source = SOURCE / filename
        text = original_source.read_text()
        if text.count(before) != 1:
            raise ValueError('Returning class control marker is ambiguous')
        source = folder / filename
        source.write_text(text.replace(before, after))
        files = list(SOURCES)
        if source.suffix == '.h':
            for index, path in enumerate(files):
                if path.parent == SOURCE and path.name in ['class_release.c', 'class_finalize.c', 'member_resize.c']:
                    copy = folder / path.name
                    copy.write_bytes(path.read_bytes())
                    files[index] = copy
        else:
            files = [source if path == original_source else path for path in files]
        sections, symbols, functions, receipt = arm(folder / 'arm', files)
        expected, expected_heap = Arm(sections, symbols, functions, True).execute(root, variant)
        actual, actual_heap = Arm(sections, symbols, functions).execute(root, variant)
        native_path = windows(folder / 'windows', files)
        native = Windows(native_path).execute(root, variant)
        if actual == expected or native == expected:
            raise ValueError('Changed class source escaped qualification: ' + name)
        same_heap = actual_heap == expected_heap
        if name in ['cache-destructor-before-hook', 'weak-reset-before-finalize', 'clear-member-table-before-callback'] and not same_heap:
            raise ValueError('Class observer-only control must preserve the final heap')
        records.append({'name': name, 'root': root, 'variant': variant, 'modifiedSource': pin(source),
            'sourceElf': receipt['linkedElf'], 'nativeLibrary': pin(native_path),
            'originalSourceAndNativeReturnedNormally': True, 'boundedMemoryAndSavedAbiPassed': True,
            'sourceObservationRejected': True, 'nativeObservationRejected': True,
            'finalNormalizedHeapStillEqual': same_heap, 'instructionOrObjectPatching': False})
    report = {'schemaVersion': 1, 'allNormallyReturningControlsRejected': True, 'controls': records,
        'sameFinalStateObserverControlsRejected': True}
    save(WORK / 'semantic-controls.json', report)
    print(json.dumps({'classReturningControlsRejectedOnArmAndWindows': len(records),
        'sameFinalHeapReadOrderControlsRejected': sum(row['finalNormalizedHeapStillEqual'] for row in records)}))
    return report


if __name__ == '__main__':
    run()
