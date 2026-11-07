import io
from pathlib import Path

from elftools.elf.elffile import ELFFile

import squirrel_source_wave002 as prior
import squirrel_wave004_build as previous


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'source/squirrel-wave006'
LEGACY_NAME_DEFINES = ['-Dsq_legacy_table_get006=fn_001a1dc8']
PLACEMENTS = {**previous.PLACEMENTS, 'fn_0018d65c': 0x18d65c, 'fn_001994c0': 0x1994c0,
              'fn_00199cb8': 0x199cb8, 'sq_execute_error_handler': 0x198320,
              'fn_001a0cc0': 0xa62000, 'sq_wave004_release': 0xa61000, '__aeabi_memcpy': 0xa63000,
              'sq_wave006_release': 0xa11000, 'sq_execute_debug': 0x1a0d30, 'fn_00191f20': 0x191f20, 'fn_001a1234': 0x1a1234,
              'fn_00199144': 0x199144, 'fn_00196b08': 0x196b08, '__aeabi_memclr4': 0xa65000, 'sq_execute_legacy_closure_release': 0x6a7610,
              'fn_00198578': 0xa66000, 'fn_0019b390': 0xa67000, 'fn_0019b998': 0xa68000,
              'fn_001a1dc8': 0xa69000, 'fn_0019b728': 0xa6a000, 'fn_0019b4ec': 0xa6b000,
              'fn_0019b414': 0xa6c000, 'fn_001987e4': 0xa6d000, 'fn_00666518': 0x666518, 'fn_0019e2e8': 0x19e2e8,
              'fn_0019b650': 0xa6e000, 'fn_00192b9c': 0x192b9c, 'fn_0019289c': 0x19289c, 'fn_0019e378': 0xa6f000,
              'fn_00665bd4': 0x665bd4, 'fn_00665c60': 0x665c60, 'fn_0077f3f8': 0x77f3f8, 'fn_0024d73c': 0x24d73c,
              'fn_00202dcc': 0x202dcc, 'fn_00202e68': 0x202e68}
SERVICES = {**previous.SERVICES, 'sq_execute_stop': 0xa80000, 'sq_execute_error': 0x19813c,
            'sq_script_closure_vtable': 0x8516d0, 'sq_weak_prefix_vtable': 0x81d020, 'sq_deallocate': 0x19d680,
            'sq_table_vtable': 0x850dac, 'sq_execute_table_stop': 0xa80000, 'sq_generator_vtable': 0x81c358}
SERVICES.pop('sq_array_vtable')
SERVICES.pop('sq_generator_vtable')
HELPERS = {'sq_execute_release', 'sq_execute_scalar', 'sq_execute_clear', 'sq_execute_false',
           'sq_execute_varargs', 'sq_execute_publish_varargs', 'sq_execute_clear_stack',
           'sq_execute_unsupported', 'sq_execute_unwind', 'sq_execute_push_trap', 'pop_frame', 'slot', 'dispatch_call', 'push_vararg',
           'sq_execute_bitwise', 'sq_execute_unary', 'shift', 'divide_integer', 'sq_execute_identical',
           'sq_execute_vararg_get', 'sq_execute_array_new', 'sq_execute_array_append', 'reserve', 'append', 'destroy_vector', 'hash', 'find', 'sq_execute_local_arithmetic', 'sq_execute_delegate', 'sq_execute_foreach', 'sq_execute_delete', 'push_generator_value', 'restore_generator_frame', 'array_destructor_entry', 'generator_destructor_entry', 'release_object'}


def sources():
    return [*[SOURCE / name for name in ('execute.c', 'objects.c', 'return.c', 'start_call.c', 'execute_fixture.c', 'runtime.c', 'exceptions.c', 'type_names.c', 'numbers.c', 'arithmetic.c', 'comparison.c', 'array_ops.c', 'closure.c', 'closure_release.c', 'indexed_get.c', 'table.c', 'local_arithmetic.c', 'table_release.c', 'delegate.c', 'iteration.c', 'delete.c', 'generator.c', 'generator_resume.c')], *previous.sources(),
            *[ROOT / 'source/squirrel-wave007' / name for name in ('array_release.c', 'vector_destroy.c', 'chain_unlink.c', 'vtables.c')],
            *[ROOT / 'source/squirrel-wave008' / name for name in ('generator_release.c', 'vtables.c')]]


def build(output, variant='normal'):
    if prior.sha((ROOT / 'evidence/lanes/squirrel-array-release007/ready.json').read_bytes()) != 'b398aa788374c97994be97e6ea40bfed6ed4ab7461585c140f0c103adcd0adce':
        raise ValueError('Frozen SQArray007 readiness packet changed')
    if prior.sha((ROOT / 'evidence/lanes/squirrel-generator-release008/ready.json').read_bytes()) != 'b01a7f74775289ff41f27c3a273111a1fb34d7ac162992b3f75cffa07801d6ce':
        raise ValueError('Frozen SQGenerator008 readiness packet changed')
    output.mkdir(parents=True, exist_ok=True)
    inputs = sources()
    if variant != 'normal':
        edits = {'wrong-postforeach-exit': ('instruction + argument - 1;', 'instruction + argument;'),
                 'wrong-generator-terminal-state': ('generator->state = 2;', 'generator->state = 1;'),
                 'wrong-integer-tag': ('0x05000002u, (SqU32)argument', '0x05000004u, (SqU32)argument'),
                 'wrong-jump': ('case SQ_JUMP:\n            base->current->instruction = (SqInstruction *)base->current->instruction + argument;',
                                'case SQ_JUMP:\n            base->current->instruction = (SqInstruction *)base->current->instruction + argument + 1;'),
                 'wrong-null-count': ('index < argument;', 'index <= argument;'),
                 'wrong-move': ('slot(vm, argument)); break;', 'slot(vm, argument + 1)); break;')}
        if variant == 'skipped-real-generator-destruction':
            index = next(index for index, path in enumerate(inputs) if path.parent.name == 'squirrel-wave008' and path.name == 'generator_release.c')
            old, new = 'reference->vtable->unknown_0(reference);', '(void)reference;'
        elif variant == 'skipped-real-array-destruction':
            index = next(index for index, path in enumerate(inputs) if path.parent.name == 'squirrel-wave007' and path.name == 'array_release.c')
            old, new = 'reference->vtable->unknown_0(reference);', '(void)reference;'
        elif variant == 'changed-generator-retention':
            index, old, new = 22, 'fn_0019e864(generator->stack.values, &null);', 'fn_0019e864(generator->stack.values + index, &null);'
        elif variant == 'retained-yield-trap':
            index, old, new = 21, 'base->traps.size--;', 'base->traps.size += 0;'
        elif variant == 'missing-generator-slot':
            index, old, new = 21, 'for (SqI32 index = 0; index < size; index++)', 'for (SqI32 index = 1; index < size; index++)'
        elif variant == 'uncounted-table-deletion':
            index, old, new = 15, 'table->used--;', 'table->used += 0;'
        elif variant == 'skip-foreach-element':
            index, old, new = 19, 'position + 1);', 'position + 2);'
        elif variant == 'accepted-delegate-cycle':
            index, old, new = 18, 'if (cursor == table) return 0;', 'if (cursor == table) return 1;'
        elif variant == 'wrong-table-destruction-order':
            index = 17
            old = '        sq_execute_release(table->nodes[index].key.type, table->nodes[index].key.value);\n        sq_execute_release(table->nodes[index].value.type, table->nodes[index].value.value);'
            new = '        sq_execute_release(table->nodes[index].value.type, table->nodes[index].value.value);\n        sq_execute_release(table->nodes[index].key.type, table->nodes[index].key.value);'
        elif variant == 'wrong-set-value':
            index, old, new = 14, 'fn_0019e864(array->vector.values + index, value);', 'fn_0019e864(array->vector.values + index, key);'
        elif variant == 'unsigned-local-increment':
            index, old, new = 16, '(SqI32)(signed char)', '(SqI32)(unsigned char)'
        elif variant == 'lost-table-collision-link':
            index, old, new = 15, 'main->next = free;', 'main->next = 0;'
        elif variant == 'wrong-array-index':
            index, old, new = 14, 'array->vector.values[index];', 'array->vector.values[index + 1];'
        elif variant == 'wrong-closure-destruction-order':
            index, old, new = 13, 'destroy_vector(&closure->defaults);\n    destroy_vector(&closure->outers);', 'destroy_vector(&closure->outers);\n    destroy_vector(&closure->defaults);'
        elif variant == 'wrong-closure-capture':
            index, old, new = 12, 'vm->base.frame.base + outer->source.value.integer);', 'vm->base.frame.base + outer->source.value.integer + 1);'
        elif variant == 'late-append-retain':
            index = 11
            content = inputs[index].read_text()
            old = content[content.index('    SqObject value = *input;'):content.index('    SqObject *destination = array->vector.values')]
            retain = '    if (value.type & 0x08000000u) value.value.reference->references++;\n'
            if old.count(retain) != 1: raise ValueError('Append retained-input source changed')
            new = old.replace(retain, '') + retain
        elif variant == 'wrong-float-identity':
            index, old, new = 10, 'return left->value.bits == right->value.bits;', 'return left->value.floating == right->value.floating;'
        elif variant == 'wrong-shift-width':
            index, old, new = 8, 'amount &= 255;', 'amount &= 31;'
        elif variant == 'wrong-integer-quotient':
            index, old, new = 9, 'return negative ? 0u - result : result;', 'return (negative ? 0u - result : result) + 1;'
        elif variant == 'lost-tail-call':
            index, old, new = 0, '_Bool tail = instruction->opcode == SQ_TAILCALL', '_Bool tail = 0 && instruction->opcode == SQ_TAILCALL'
        elif variant in ('wrong-trap-target', 'wrong-trap-handler'):
            index = 6
            old, new = ('record->target = instruction->argument0;', 'record->target = instruction->argument0 + 1;') if variant == 'wrong-trap-target' else (
                '+ instruction->argument1;', '+ instruction->argument1 + 1;')
        elif variant == 'wrong-scalar-publication':
            index = 1
            old = '    sq_execute_release(object->type, object->value);\n    object->type = type;\n    object->value.bits = bits;'
            new = '    SqU32 old_type = object->type;\n    SqValue old_value = object->value;\n    object->type = type;\n    object->value.bits = bits;\n    sq_execute_release(old_type, old_value);'
        elif variant == 'wrong-clear-boundary':
            index = 1
            old, new = 'old_top >= vm->base.frame.top', 'old_top > vm->base.frame.top'
        elif variant == 'late-vararg-publication':
            index = 2
            old = '        sq_execute_publish_varargs(vm, vector);\n        SqObject *object = vector.values + vector.size;\n        sq_execute_release(object->type, object->value);'
            new = '        SqObject *object = vector.values + vector.size;\n        sq_execute_release(object->type, object->value);\n        sq_execute_publish_varargs(vm, vector);'
        else:
            index = 0
            old, new = edits[variant]
        content = inputs[index].read_text()
        if content.count(old) != 1:
            raise ValueError('Negative source operation is not unique')
        changed = output / inputs[index].name
        changed.write_text(content.replace(old, new))
        inputs[index] = changed
    commands, objects = [], []
    for path in inputs:
        target = output / (str(len(objects)) + '-' + path.stem + '.o')
        commands.append(prior.command([ROOT / 'tools/clang-21/clang.exe', *prior.FLAGS, *LEGACY_NAME_DEFINES, '-mfpu=vfp', '-mfloat-abi=softfp',
                                       '-std=c11', '-O2', '-I', SOURCE, '-I', ROOT / 'source/squirrel-wave007', '-I', ROOT / 'source/squirrel-wave008', '-c', path, '-o', target], output / (path.stem + '.log')))
        objects.append(target)
    script = output / 'component.ld'
    sections = [(address, f'.text.{name} {hex(address)} : {{ KEEP(*(.text.{name})) }}') for name, address in PLACEMENTS.items()]
    sections += [(0x850d74, '.rodata.sq_array_vtable 0x850d74 : { KEEP(*(.rodata.sq_array_vtable)) }'),
                 (0x81c358, '.rodata.sq_generator_vtable 0x81c358 : { KEEP(*(.rodata.sq_generator_vtable)) }'),
                 (0x81d020, '.rodata.sq_release007_weak_vtable 0x81d020 : { KEEP(*(.rodata.sq_release007_weak_vtable)) }')]
    sections += [(0xa50000, '.text.support 0xa50000 : { *(.text.sq_execute*) *(.text.slot) *(.text.dispatch_call) *(.text.push_vararg) *(.text.push_generator_value) *(.text.restore_generator_frame) *(.text.array_destructor_entry) *(.text.generator_destructor_entry) *(.text.release_object) *(.text.pop_frame) *(.text.shift) *(.text.divide_integer) *(.text.reserve) *(.text.append) *(.text.destroy_vector) *(.text.hash) *(.text.find) }'),
                 (0xa20000, '.rodata 0xa20000 : { *(.rodata*) }')]
    script.write_text('SECTIONS {\n' + '\n'.join(text for address, text in sorted(sections)) + '\n'
                      '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.text*) *(.comment) *(.note*) *(.llvm_addrsig) }\n}\n')
    target = output / 'execute.elf'
    commands.append(prior.command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--fatal-warnings',
                                   '--build-id=none', '--entry=fn_0018d65c', *['--defsym=' + name + '=' + hex(address) for name, address in SERVICES.items()],
                                   '-T', script, *objects, '-o', target], output / 'link.log'))
    elf = ELFFile(io.BytesIO(target.read_bytes()))
    memory = [{'address': section['sh_addr'], 'data': section.data()} for section in elf.iter_sections()
              if section['sh_flags'] & 2 and section['sh_size'] and section['sh_type'] != 'SHT_NOBITS']
    functions = {}
    for symbol in elf.get_section_by_name('.symtab').iter_symbols():
        if symbol.name and symbol['st_shndx'] == 'SHN_UNDEF': raise ValueError('Unresolved source dependency: ' + symbol.name)
        if symbol['st_info']['type'] == 'STT_FUNC' and symbol['st_size']:
            section = elf.get_section(symbol['st_shndx'])
            functions[symbol.name] = {'address': symbol['st_value'], 'bytes': symbol['st_size'], 'sectionBytes': section['sh_size'],
                                      'data': section.data(), 'sectionSha256': prior.sha(section.data())}
    if not set(PLACEMENTS) <= set(functions) or set(functions) - set(PLACEMENTS) - HELPERS:
        raise ValueError('Execute component live function closure changed')
    if any(section['sh_type'] in ('SHT_REL', 'SHT_RELA') and section['sh_size'] for section in elf.iter_sections()):
        raise ValueError('Execute component retains relocations')
    return {'sections': memory, 'functions': functions, 'commands': commands, 'variant': variant,
            'elfSha256': prior.sha(target.read_bytes()),
            'functionRanges': [(row['address'], row['address'] + row['bytes']) for row in functions.values()]}
