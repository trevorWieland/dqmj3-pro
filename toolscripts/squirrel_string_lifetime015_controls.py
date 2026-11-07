import json

from squirrel_string_lifetime015_build import SOURCE, SOURCES, WORK, arm, windows, pin, save
from squirrel_string_lifetime015_oracle import Arm, Windows


UNLINK = '''            if (previous) previous->next = current->next;
            else table->buckets[bucket] = current->next;
            table->used -= 1;
            SqPrototypeI32 length = current->length;
            current->reference.vtable->destroy(current);'''
INVALIDATE = '''    if (string->reference.weak) {
        SqPrototypeWeak011 *weak = string->reference.weak;
        weak->object.type = 0x01000001u;
        weak->object.value.reference = 0;
    }'''
VARIANTS = [
    ('unsigned-byte-instead-of-signed-to-u16', 'add', 2, [('SqStringCode015 code = (SqStringCode015)*input++;', 'SqStringCode015 code = (unsigned char)*input++;')]),
    ('advance-input-by-hash-step', 'add', 5, [('SqStringCode015 code = (SqStringCode015)*input++;', 'SqStringCode015 code = (SqStringCode015)*input; input += step;')]),
    ('reuse-preallocation-hash', 'add', 10, [
        ('SqString015 *string = sq_string_allocate_value015(', 'SqPrototypeU32 saved_hash = sq_string_hash015(input, (SqPrototypeU32)length);\n    SqString015 *string = sq_string_allocate_value015('),
        ('string->hash = sq_string_hash015(input, (SqPrototypeU32)length);', 'string->hash = saved_hash;')]),
    ('increase-used-after-grow-callbacks', 'create', 8, [
        ('table->used += 1;\n    if ((SqPrototypeU32)table->used > (SqPrototypeU32)table->slots)', 'if ((SqPrototypeU32)table->used + 1 > (SqPrototypeU32)table->slots)'),
        ('sq_string_deallocate_buckets015(old, (SqPrototypeU32)old_slots * sizeof(SqString015 *));\n    }\n    return string;', 'sq_string_deallocate_buckets015(old, (SqPrototypeU32)old_slots * sizeof(SqString015 *));\n    }\n    table->used += 1;\n    return string;')]),
    ('read-length-after-virtual-destructor', 'release', 12, [
        ('SqPrototypeI32 length = current->length;\n            current->reference.vtable->destroy(current);', 'current->reference.vtable->destroy(current);\n            SqPrototypeI32 length = current->length;')]),
    ('unlink-after-virtual-destructor', 'release', 12, [(UNLINK,
        '''            SqPrototypeI32 length = current->length;
            current->reference.vtable->destroy(current);
            if (previous) previous->next = current->next;
            else table->buckets[bucket] = current->next;
            table->used -= 1;''')]),
    ('publish-shared-owner-before-add-returns', 'create', 8, [
        ('#include "string.h"', '#include "string.h"\n\nstatic SqPrefixState012 *early_shared015;'),
        ('string->reference.vtable = &sq_string_vtable015;', 'string->reference.vtable = &sq_string_vtable015;\n        string->shared = early_shared015;'),
        ('SqString015 *string = fn_0016b5f0(sq_string_table015(shared), input, length);', 'early_shared015 = shared;\n    SqString015 *string = fn_0016b5f0(sq_string_table015(shared), input, length);')]),
    ('allocate-flexible-prefix-without-nominal-tail-padding', 'add', 0, [
        ('sq_string_allocate_value015(sq_string_allocation_bytes015((SqPrototypeU32)length))', 'sq_string_allocate_value015(sizeof(SqString015) + (SqPrototypeU32)length)')]),
    ('clone-instead-of-intern-cache-hit', 'add', 6, [('return existing;', '(void)existing;')]),
    ('omit-current-weak-target-invalidation', 'release', 15, [(INVALIDATE, '    (void)string->reference.weak;')]),
    ('append-instead-of-prepend-during-rehash', 'create', 9, [
        ('current->next = table->buckets[index];\n                table->buckets[index] = current;', 'current->next = 0;\n                SqString015 **tail = &table->buckets[index];\n                while (*tail) tail = &(*tail)->next;\n                *tail = current;')])]


def run():
    records = []
    same_state_required = ['increase-used-after-grow-callbacks', 'read-length-after-virtual-destructor',
        'unlink-after-virtual-destructor', 'publish-shared-owner-before-add-returns',
        'allocate-flexible-prefix-without-nominal-tail-padding']
    for name, root, variant, replacements in VARIANTS:
        folder = WORK / 'controls' / name
        folder.mkdir(parents=True, exist_ok=True)
        original = SOURCE / 'string.c'
        text = original.read_text()
        for before, after in replacements:
            if text.count(before) != 1:
                raise ValueError('String returning control marker is ambiguous: ' + name)
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
            raise ValueError('Wrong string source escaped qualification: ' + name)
        same_heap = expected_heap == actual_heap
        if name in same_state_required and not same_heap:
            raise ValueError('String observer-only control changed final foreign heap: ' + name)
        records.append({'name': name, 'root': root, 'variant': variant, 'modifiedSource': pin(source),
            'sourceElf': build['linkedElf'], 'actualWindowsLibrary': pin(library),
            'originalSourceAndWindowsReturnedNormally': True, 'boundedMemoryAndSavedAbiPassed': True,
            'realOriginalByteHelpersExecuted': True, 'sourceObservationRejected': True,
            'nativeObservationRejected': True, 'finalNormalizedHeapStillEqual': same_heap,
            'instructionOrObjectPatching': False})
    report = {'schemaVersion': 1, 'allNormallyReturningControlsRejected': True, 'controls': records,
        'sameFinalStateObserverControlsRejected': True}
    save(WORK / 'semantic-controls.json', report)
    print(json.dumps({'stringReturningControlsRejectedOnArmAndWindows': len(records),
        'sameFinalHeapObserverControlsRejected': sum(row['finalNormalizedHeapStillEqual'] for row in records)}))
    return report


if __name__ == '__main__':
    run()
