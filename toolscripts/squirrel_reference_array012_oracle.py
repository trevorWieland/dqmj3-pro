import random
import struct

import unicorn
from unicorn import arm_const as arm

from squirrel_source_wave002 import sha


HEAP, HEAP_BYTES, STACK, STOP = 0x2000000, 0x10000, 0x6000000, 0xfff0000
ORIGINAL_SPANS = [(0x19e8c4, 0x19e8e8), (0x665a44, 0x665af8), (0x665bd4, 0x665bfc), (0x665c60, 0x665cc0),
    (0x233b7c, 0x233bd4), (0x6a7780, 0x6a77c0), (0x6a77c0, 0x6a77ec), (0x19e864, 0x19e8c4), (0x19d320, 0x19d408), (0x77f3f8, 0x77f478),
    (0x299114, 0x29936c), (0x299424, 0x2994a0), (0x299518, 0x299540), (0x2995a4, 0x299698),
    (0x24d73c, 0x24d76c), (0x233bd8, 0x233c04)]
ORIGINAL_DATA = [(0x2994a0, 0x2994a4), (0x299698, 0x2996a4), (0x233c04, 0x233c0c),
                 (0x81e52c, 0x81e538), (0x81e540, 0x81e54c), (0x850d74, 0x850d80),
                 (0x8516ec, 0x8516f8), (0x665af8, 0x665b08), (0x665cc0, 0x665ccc),
                 (0x233bd4, 0x233bd8), (0x6a77ec, 0x6a77f4)]


def execute(image, component, case, source):
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    pages = set()
    if not source:
        pages.update(range(0x100000, (0x100000 + len(image) + 4095) & -4096, 4096))
    for section in component['sections']:
        pages.update(range(section['address'] & -4096, (section['address'] + section['size'] + 4095) & -4096, 4096))
    ordered = sorted(pages)
    start, end = ordered[0], ordered[0] + 4096
    for page in ordered[1:]:
        if page == end:
            end += 4096
        else:
            cpu.mem_map(start, end - start)
            start, end = page, page + 4096
    cpu.mem_map(start, end - start)
    if not source:
        cpu.mem_write(0x100000, image)
    for section in component['sections']:
        original_table = section['address'] in (0x81d020, 0x81e52c, 0x81e540, 0x850d74, 0x8516ec)
        if source or not original_table:
            cpu.mem_write(section['address'], section['data'])
    cpu.mem_map(HEAP, HEAP_BYTES)
    cpu.mem_map(STACK, 0x10000)
    cpu.mem_write(STACK, random.Random(0x12a00 + case['variant'] * 64 + case['requested'] * 4 + case['weak_order']).randbytes(0x10000))
    cpu.mem_map(STOP, 4096)
    cpu.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
    phase, returned, coverage = '', False, set()
    fixture_names = ('fixture_array_run012', 'fixture_mixed_original012', 'fixture_original_assign012',
        'sq_prototype_deallocate011', 'sq_native_closure_deallocate013', 'sq_deallocate', 'disposed', 'logical',
        'fixture_mixed_dispose012', 'fixture_mixed_native_dispose012', 'fixture_mixed_prototype_dispose012',
        'sq_opaque_array_allocate012', 'sq_reallocate', 'sq_weak_allocate014', 'sq_weak_deallocate014', 'observe', 'identity', 'assign')
    original_fixture_ranges = [row for row in component['functions'] if row['name'] in fixture_names]
    writable = [row for row in component['sections'] if row['flags'] & 1]

    def instruction(current, address, size, unused):
        nonlocal returned
        if address == STOP:
            returned = True
            current.emu_stop()
            return
        if phase != 'root':
            return
        if not source and address in (0x19d680, 0x2fece8, 0x18388c):
            if address == 0x19d680:
                target = 'sq_weak_deallocate014' if current.reg_read(arm.UC_ARM_REG_R0) == HEAP + 0xc000 else 'sq_deallocate'
            elif address == 0x18388c:
                target = 'sq_reallocate'
            else:
                size_argument = current.reg_read(arm.UC_ARM_REG_R0)
                if size_argument not in (20, 36):
                    raise ValueError('Unqualified original array allocation size')
                target = 'sq_weak_allocate014' if size_argument == 20 else 'sq_opaque_array_allocate012'
            current.reg_write(arm.UC_ARM_REG_PC, component['symbols'][target])
            return
        if source:
            allowed = any(row['address'] <= address < row['address'] + row['size'] for row in component['functions'])
        else:
            allowed = any(start <= address < end for start, end in ORIGINAL_SPANS) or any(
                row['address'] <= address < row['address'] + row['size'] for row in original_fixture_ranges)
        if not allowed:
            raise ValueError('Mixed lifetime execution left original/source/observer closure: ' + hex(address))
        coverage.add(address)

    def memory(current, kind, address, size, value, unused):
        if phase != 'root':
            return
        mutable = (HEAP <= address < address + size <= HEAP + HEAP_BYTES or
                   STACK <= address < address + size <= STACK + 0x10000 or
                   any(row['address'] <= address < address + size <= row['address'] + row['size'] for row in writable))
        if kind == unicorn.UC_MEM_WRITE and not mutable:
            raise ValueError('Mixed lifetime write escaped its declared heap/stack/observer storage')
        source_data = any(row['address'] <= address < address + size <= row['address'] + row['size'] for row in component['sections'])
        original_data = not source and any(start <= address < address + size <= end for start, end in ORIGINAL_DATA)
        if kind == unicorn.UC_MEM_READ and not mutable and not source_data and not original_data:
            raise ValueError('Mixed lifetime read escaped its declared storage: ' + hex(address))

    cpu.hook_add(unicorn.UC_HOOK_CODE, instruction)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ | unicorn.UC_HOOK_MEM_WRITE, memory)

    def invoke(name, arguments, label):
        nonlocal phase, returned
        phase, returned = label, False
        sp = STACK + 0xff00
        cpu.reg_write(arm.UC_ARM_REG_SP, sp)
        cpu.reg_write(arm.UC_ARM_REG_LR, STOP)
        protected = {getattr(arm, 'UC_ARM_REG_R' + str(index)): 0x51120000 + index * 151 for index in range(4, 12)}
        for register, value in protected.items():
            cpu.reg_write(register, value)
        for index, argument in enumerate(arguments):
            if index < 4:
                cpu.reg_write(getattr(arm, 'UC_ARM_REG_R' + str(index)), argument)
            else:
                cpu.mem_write(sp + (index - 4) * 4, struct.pack('<I', argument))
        cpu.emu_start(component['symbols'][name], STOP + 4, timeout=3000000, count=2000000)
        if not returned or cpu.reg_read(arm.UC_ARM_REG_SP) != sp or any(cpu.reg_read(register) != value for register, value in protected.items()):
            raise ValueError('Mixed lifetime fixture/root did not normally return with its ABI')
        return cpu.reg_read(arm.UC_ARM_REG_R0)

    if invoke('fixture_array_bind012', [HEAP, HEAP_BYTES, 0x81e540, 0x81e52c, 0x81d020, 0x850d74, 0x8516ec], 'prepare') != 1:
        raise ValueError('Array fixture rejected valid storage')
    invoke('fixture_array_prepare012', [case['variant'], case['requested'], case['weak_order'], case['failed']], 'prepare')
    invoke('fixture_array_run012', [int(source)], 'root')
    raw = bytes(cpu.mem_read(HEAP, HEAP_BYTES))
    count = invoke('fixture_array_snapshot012', [HEAP + 0xf000, 512], 'snapshot')
    if not 21 <= count <= 512:
        raise ValueError('Array lifetime snapshot extent is invalid')
    words = list(struct.unpack('<' + 'I' * count, cpu.mem_read(HEAP + 0xf000, count * 4)))
    return {'words': words, 'arenaSha256': sha(raw), 'returned': True}, {'visited': sorted(coverage),
        'sourceOriginalModuleMapped': not source, 'originalTablesPreserved': not source,
        'vtableAddressNormalizationUsed': False}, raw
