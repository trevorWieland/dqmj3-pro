import json
import random
import struct

import unicorn
import unicorn.arm_const as arm
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_ARM_REG_C1_C0_2, UC_ARM_REG_FPEXC

from native_material_wave011_build import ROOT, sha


IMAGE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
REGISTERS = [UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8,
    UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11]
INPUT, OBJECT, STORAGE, STACK, RETURN = 0x10000000, 0x12001000, 0x12004000, 0x11010000, 0x2000000
ALLOCATE, RESOLVE, SERVICES = 0x13000000, 0x13000004, 0x1000f000


def image():
    path = ROOT / 'generated/update-content0/code.bin'
    if not path.exists():
        path = ROOT / 'work/native-ci-local-validation/private/generated/update-content0/code.bin'
    raw = path.read_bytes()
    if sha(raw) != IMAGE_SHA:
        raise ValueError('Original update image differs')
    return raw


def closure():
    census = json.loads((ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text())
    if census['codeSha256'] != IMAGE_SHA:
        raise ValueError('Census image identity differs')
    by_address = {row['address']: row for row in census['functions']}
    pending, rows = [0x554a30, 0x17d8f8], {}
    while pending:
        address = pending.pop()
        if address in rows:
            continue
        row = by_address[address]
        rows[address] = row
        pending += row['calledFunctionAddresses']
    return rows


def environment(cpu, case, seed):
    rng = random.Random(seed)
    for address, size in [(INPUT, 0x10000), (0x12000000, 0x10000), (0x11000000, 0x20000)]:
        cpu.mem_map(address, size)
        cpu.mem_write(address, rng.randbytes(size))
    cpu.mem_write(INPUT, case['wire'])
    replacement = case['replacement']
    if replacement:
        cpu.mem_write(INPUT + 0x2000, replacement)
    cpu.mem_write(INPUT + 0x4000, case['names'])
    primary, alternate, accessor, vtable, context = INPUT + 0xb000, INPUT + 0xb100, INPUT + 0xb200, INPUT + 0xb300, INPUT + 0xb400
    cpu.mem_write(primary, struct.pack('<4I', INPUT + 0x4000, 0, 0, accessor))
    cpu.mem_write(alternate, struct.pack('<4I', INPUT + 0x4000, 0, 0, accessor + 0x40))
    for address in [accessor, accessor + 0x40]:
        cpu.mem_write(address, struct.pack('<I', vtable))
    cpu.mem_write(vtable, b'\0' * 20 + struct.pack('<I', RESOLVE))
    cpu.mem_write(context + 0x20, struct.pack('<IIHHH', primary, alternate, int(case['mode'] == 3), 0, int(case['mode'] == 1)))
    heap = SERVICES
    cpu.mem_write(heap, struct.pack('<4I', heap + 0x20, 0, 0, 0))
    cpu.mem_write(heap + 0x20, struct.pack('<4I', 0, 0, ALLOCATE, 0))
    cpu.mem_write(0x89a918, struct.pack('<I', heap))
    for index in range(16):
        texture = INPUT + 0xc000 + index * 32
        cpu.mem_write(texture, struct.pack('<IHHBBHHHI', 0x40000000 + index * 256, 32 + index, 64 + index,
            index % 14, index % 4, 0, 32 + index, 64 + index, 0x40000000 + index * 512))
    saved = [rng.getrandbits(32) for _ in REGISTERS]
    cpu.reg_write(UC_ARM_REG_CPSR, 0x10 | (seed & 15) << 28)
    cpu.reg_write(UC_ARM_REG_C1_C0_2, 0xf00000)
    cpu.reg_write(UC_ARM_REG_FPEXC, 0x40000000)
    floating = [rng.getrandbits(64) for _ in range(16)]
    for index, value in enumerate(floating):
        cpu.reg_write(getattr(arm, 'UC_ARM_REG_D' + str(index)), value)
    for register, value in zip(REGISTERS, saved):
        cpu.reg_write(register, value)
    for register, value in [(UC_ARM_REG_R0, OBJECT), (UC_ARM_REG_R1, INPUT),
            (UC_ARM_REG_R2, INPUT + 0x2000 if replacement else 0), (UC_ARM_REG_R3, context),
            (UC_ARM_REG_SP, STACK), (UC_ARM_REG_LR, RETURN | (seed & 1))]:
        cpu.reg_write(register, value)
    return saved, floating[8:]


def execute(raw, closed, case, seed=0, blocks=(), entry=0x554a30):
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(arm.UC_CPU_ARM_11MPCORE)
    size = (len(raw) + 4095) & -4096
    cpu.mem_map(0x100000, size)
    cpu.mem_write(0x100000, raw)
    cpu.mem_map(RETURN, 4096)
    cpu.mem_map(ALLOCATE, 4096)
    for address, data in blocks:
        if address & 4095 or len(data) > 4096:
            low, high = address & -4096, (address + len(data) + 4095) & -4096
        else:
            low, high = address, address + 4096
        try:
            cpu.mem_map(low, high - low)
        except unicorn.UcError:
            pass
        cpu.mem_write(address, data)
    saved, floating = environment(cpu, case, seed)
    cpu.mem_protect(0x100000, size, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_protect(INPUT, 0x10000, unicorn.UC_PROT_READ)
    before_object = bytes(cpu.mem_read(0x12000000, 0x10000))
    before_input = bytes(cpu.mem_read(INPUT, 0x10000))
    steps, reads, writes, allocations, lookups, calls = set(), set(), set(), [], [], []
    allowed = [(span['start'], span['endExclusive']) for row in closed.values() for span in row['ranges']]
    allowed += [(address, address + len(data)) for address, data in blocks]
    called = set(closed)
    def instruction(uc, address, length, user):
        if address == ALLOCATE:
            heap, amount, alignment = [uc.reg_read(reg) for reg in [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2]]
            if heap != SERVICES or alignment != 4 or not 0 < amount <= 2048 or allocations:
                raise ValueError('Allocator virtual ABI/precondition differs')
            allocations.append((amount, alignment))
            uc.reg_write(UC_ARM_REG_R0, 0 if case['allocationFails'] else STORAGE)
            uc.reg_write(UC_ARM_REG_PC, uc.reg_read(UC_ARM_REG_LR))
            return
        if address == RESOLVE:
            accessor, text = uc.reg_read(UC_ARM_REG_R0), uc.reg_read(UC_ARM_REG_R1)
            if accessor not in [INPUT + 0xb200, INPUT + 0xb240] or not INPUT + 0x4000 <= text < INPUT + 0x8000:
                raise ValueError('Resource accessor virtual ABI/precondition differs')
            value = bytearray()
            for index in range(128):
                character = uc.mem_read(text + index, 1)[0]
                if not character:
                    break
                value.append(character)
            else:
                raise ValueError('Bounded resource string failed')
            lookups.append((accessor, text, sha(value)))
            index = (sum(value) + int(accessor == INPUT + 0xb240) * 3) % 16
            uc.reg_write(UC_ARM_REG_R0, 0 if case['resourceNull'] else INPUT + 0xc000 + index * 32)
            uc.reg_write(UC_ARM_REG_PC, uc.reg_read(UC_ARM_REG_LR))
            return
        if not any(low <= address and address + length <= high for low, high in allowed):
            raise ValueError('Execution escaped closed original/source bodies at ' + hex(address))
        steps.add(address)
        if address in called:
            registers = [uc.reg_read(reg) for reg in [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3]]
            if address == 0x19fdf4:
                registers += list(struct.unpack('<7I', uc.mem_read(uc.reg_read(UC_ARM_REG_SP), 28)))
            widths = {0x101a1c: 4, 0x17d8f8: 1, 0x5549f0: 1, 0x19fdf4: 11,
                0x5525ac: 1, 0x19501c: 2, 0x19fbb0: 3, 0x5524ec: 3, 0x166824: 2}
            if address in widths:
                calls.append((address, tuple(registers[:widths[address]])))
    cpu.hook_add(unicorn.UC_HOOK_CODE, instruction)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda uc, access, address, length, value, user: reads.add((address, length)))
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda uc, access, address, length, value, user: writes.add((address, length)))
    cpu.emu_start(entry, RETURN, timeout=3000000, count=200000)
    if cpu.reg_read(UC_ARM_REG_PC) != RETURN or cpu.reg_read(UC_ARM_REG_R0) != OBJECT:
        raise ValueError('Constructor failed to return this within instruction bound')
    if cpu.reg_read(UC_ARM_REG_SP) != STACK or [cpu.reg_read(reg) for reg in REGISTERS] != saved:
        raise ValueError('Constructor callee-saved/SP ABI differs')
    if [cpu.reg_read(getattr(arm, 'UC_ARM_REG_D' + str(index))) for index in range(8, 16)] != floating:
        raise ValueError('Constructor callee-saved VFP ABI differs')
    if bool(cpu.reg_read(UC_ARM_REG_CPSR) & 0x20) != bool(seed & 1):
        raise ValueError('Constructor return interworking differs')
    if bytes(cpu.mem_read(INPUT, 0x10000)) != before_input:
        raise ValueError('Constructor modified immutable resource/context inputs')
    allocation_bytes = allocations[0][0] if allocations and not case['allocationFails'] else 0
    valid_writes = [(OBJECT, OBJECT + 132), (STORAGE, STORAGE + allocation_bytes), (STACK - 2048, STACK)]
    for address, length in writes:
        if not any(low <= address and address + length <= high for low, high in valid_writes):
            raise ValueError('Write escaped object/allocation/private stack at ' + hex(address))
    read_ranges = [(0x100000, 0x100000 + len(raw)), (INPUT, INPUT + 0x10000), (0x12000000, 0x12010000), (STACK - 2048, STACK)]
    read_ranges += [(address, address + len(data)) for address, data in blocks]
    for address, length in reads:
        if not any(low <= address and address + length <= high for low, high in read_ranges):
            raise ValueError('Read escaped declared domains at ' + hex(address))
    after_object = bytes(cpu.mem_read(0x12000000, 0x10000))
    for offset, (before, after) in enumerate(zip(before_object, after_object)):
        address = 0x12000000 + offset
        if before != after and not any(low <= address < high for low, high in valid_writes[:2]):
            raise ValueError('Object/allocation guard changed')
    return {'object': bytes(cpu.mem_read(OBJECT, 132)), 'storage': bytes(cpu.mem_read(STORAGE, allocation_bytes)),
        'calls': calls, 'allocations': allocations, 'lookups': lookups, 'executed': steps,
        'moduleReads': sorted((address, length) for address, length in reads if 0x100000 <= address < 0x100000 + len(raw)),
        'writeRanges': sorted(writes), 'returned': True, 'calleeSaved': True, 'inputsPreserved': True,
        'guardsPreserved': True, 'unmodifiedOriginalInstructions': True}


def compare(original, source):
    differences = [key for key in ['object', 'storage', 'calls', 'allocations', 'lookups'] if original[key] != source[key]]
    if differences:
        raise ValueError('Returning source/original semantic mismatch: ' + ','.join(differences))
