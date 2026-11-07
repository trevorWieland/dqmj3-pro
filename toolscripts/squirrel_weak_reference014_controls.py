import json

from unicorn import UcError

from squirrel_weak_reference014_build import SOURCE, SOURCES, WORK, arm, windows, pin, save
from squirrel_weak_reference014_oracle import Arm, Windows


INVALIDATION = '''    if (weak->prefix.weak) {
        SqWeakReference014 *dependent = weak->prefix.weak;
        dependent->object.type = 0x01000001u;
        dependent->object.value.reference = 0;
    }'''
VARIANTS = [
    ('allocate-despite-cached-weak', 'create', 2, [('if (!owner->weak) {', '{')]),
    ('refresh-cached-tag', 'create', 2, [('return owner->weak;', 'SqWeakReference014 *cached = owner->weak; cached->object.type = type; return cached;')]),
    ('retain-nonowning-target', 'create', 0, [('weak->object.value.reference = owner;', 'weak->object.value.reference = owner; owner->references += 1;')]),
    ('detach-target-after-virtual-destruction', 'release', 8, [
        ('target->weak = 0;', '(void)target;'),
        ('weak->prefix.vtable->destroy(weak);', 'weak->prefix.vtable->destroy(weak);\n    if (weak->object.type & 0x08000000u) { SqPrototypePrefix011 *target = weak->object.value.reference; target->weak = 0; }')]),
    ('ignore-nonreference-tag', 'release', 6, [('if (weak->object.type & 0x08000000u)', 'if (weak->object.value.reference)')]),
    ('invalidate-dependent-after-disposal', 'release', 4, [
        (INVALIDATION, '    (void)weak->prefix.weak;'),
        ('sq_weak_deallocate014(weak, sizeof(SqWeakReference014));', 'sq_weak_deallocate014(weak, sizeof(SqWeakReference014));\n' + INVALIDATION)]),
    ('wrong-allocation-size', 'create', 0, [('sq_weak_allocate014(sizeof(SqWeakReference014))', 'sq_weak_allocate014(sizeof(SqPrototypePrefix011))')]),
    ('wrong-disposal-size', 'release', 0, [('sq_weak_deallocate014(weak, sizeof(SqWeakReference014));', 'sq_weak_deallocate014(weak, sizeof(SqPrototypePrefix011));')])]


def allocation_failure():
    folder = WORK / 'controls/original-null-allocation'
    folder.mkdir(parents=True, exist_ok=True)
    original = SOURCE / 'fixture_observers.c'
    text = original.read_text()
    if text.count('return pointer;') != 1:
        raise ValueError('NULL service marker is ambiguous')
    source = folder / original.name
    source.write_text(text.replace('return pointer;', 'return 0;'))
    sources = [source if path == original else path for path in SOURCES]
    sections, symbols, functions, receipt = arm(folder / 'arm', sources)
    original = Arm(sections, symbols, functions, True)
    try:
        original.execute('create', 0)
    except (ValueError, UcError) as error:
        if original.last_fault is None or original.last_fault['address'] != 12 or original.last_fault['programCounter'] != 0x233bc0 or original.last_fault['ownerWeakAfterFault'] != 0:
            raise
        result = {'modifiedAllocationService': pin(source), 'sourceElf': receipt['linkedElf'],
            'originalNullAllocationAttemptedWriteAddress': 12, 'originalReturnedNormally': False,
            'sourceNullAllocationExecuted': False, 'includedInAdmittedDomain': False,
            'instructionOrOriginalImagePatching': False, 'observedGuardFailure': str(error), 'invalidAccess': original.last_fault}
        save(folder / 'result.json', result)
        return result
    raise ValueError('Original unexpectedly recovered from NULL weak allocation')


def run():
    records = []
    for name, root, variant, replacements in VARIANTS:
        folder = WORK / 'controls' / name
        folder.mkdir(parents=True, exist_ok=True)
        original = SOURCE / 'weak_reference.c'
        text = original.read_text()
        for before, after in replacements:
            if text.count(before) != 1:
                raise ValueError('Weak returning control marker is ambiguous: ' + name)
            text = text.replace(before, after)
        source = folder / original.name
        source.write_text(text)
        sources = [source if path == original else path for path in SOURCES]
        sections, symbols, functions, receipt = arm(folder / 'arm', sources)
        expected, expected_heap = Arm(sections, symbols, functions, True).execute(root, variant)
        actual, actual_heap = Arm(sections, symbols, functions).execute(root, variant)
        library = windows(folder / 'windows', sources)
        native = Windows(library).execute(root, variant)
        if actual == expected or native == expected:
            raise ValueError('Wrong weak-reference C escaped qualification: ' + name)
        same_heap = actual_heap == expected_heap
        if name in ['detach-target-after-virtual-destruction', 'invalidate-dependent-after-disposal', 'wrong-allocation-size', 'wrong-disposal-size'] and not same_heap:
            raise ValueError('Weak observer-only control must preserve final heap')
        records.append({'name': name, 'root': root, 'variant': variant, 'modifiedSource': pin(source),
            'sourceElf': receipt['linkedElf'], 'nativeLibrary': pin(library),
            'originalSourceAndActualWindowsReturnedNormally': True, 'boundedMemoryAndSavedAbiPassed': True,
            'ownerAccessRestrictedToActualPrefix': True, 'noWeakApiReadOfLogicallyDisposedOwner': True,
            'sourceObservationRejected': True, 'nativeObservationRejected': True,
            'finalNormalizedHeapStillEqual': same_heap, 'instructionOrObjectPatching': False})
    report = {'schemaVersion': 1, 'allNormallyReturningControlsRejected': True, 'controls': records,
        'allocationNullBoundary': allocation_failure(), 'sameFinalStateObserverControlsRejected': True}
    save(WORK / 'semantic-controls.json', report)
    print(json.dumps({'weakReturningControlsRejectedOnArmAndWindows': len(records),
        'sameFinalHeapObserverControlsRejected': sum(row['finalNormalizedHeapStillEqual'] for row in records)}))
    return report


if __name__ == '__main__':
    run()
