import struct

from unicorn import Uc, UC_ARCH_ARM, UC_ARCH_ARM64, UC_MODE_ARM
from unicorn import UC_HOOK_CODE, UC_HOOK_MEM_READ, UC_HOOK_MEM_WRITE, UC_MEM_WRITE
from unicorn import arm_const as arm
from unicorn import arm64_const as a64

from native_sampled_key053_reference import floating_bits, KEYS


def run(graph, case):
    high = graph['classBits'] == 64
    base = 0x204000000 if high else 0x4000000
    keys, output = base + 0x100, base + 0x800
    stack, stop = base + 0x100000, base + 0xF00000
    header = case['header'][:32] + (struct.pack('<Q', keys) if high else struct.pack('<I', keys))
    source_pointer, period = struct.unpack_from('<Ii', case['state'])
    cache = 0 if not source_pointer else keys + source_pointer - KEYS
    state = (struct.pack('<Qi', cache, period) if high else struct.pack('<Ii', cache, period))
    state += case['state'][8:]
    if high:
        state += bytes([0xA9]) * 4
    cpu = Uc(UC_ARCH_ARM64 if high else UC_ARCH_ARM, UC_MODE_ARM)
    pages = set()
    for block in graph['blocks']:
        for page in range(block['start'] & ~4095, (block['endExclusive'] + 4095) & ~4095, 4096):
            if page not in pages:
                cpu.mem_map(page, 4096)
                pages.add(page)
        cpu.mem_write(block['start'], block['data'])
    cpu.mem_map(base, 4096)
    cpu.mem_map(stack, 0x4000)
    cpu.mem_map(stop, 4096)
    cpu.mem_write(base, bytes([0xA9]) * 4096)
    cpu.mem_write(base, header)
    cpu.mem_write(keys, case['keys'])
    cpu.mem_write(output, state)
    cpu.mem_write(stack, bytes([0xA5]) * 0x4000)
    initial_memory = bytes(cpu.mem_read(base, 4096))
    initial_sp = stack + 0x3000
    if high:
        cpu.reg_write(a64.UC_ARM64_REG_CPACR_EL1, 3 << 20)
        cpu.reg_write(a64.UC_ARM64_REG_FPCR, 0)
        cpu.reg_write(a64.UC_ARM64_REG_FPSR, 0)
        cpu.reg_write(a64.UC_ARM64_REG_X0, base)
        cpu.reg_write(a64.UC_ARM64_REG_X1, output)
        cpu.reg_write(a64.UC_ARM64_REG_S0, case.get('positionBits', floating_bits(case['position'])))
        cpu.reg_write(a64.UC_ARM64_REG_SP, initial_sp)
        cpu.reg_write(a64.UC_ARM64_REG_LR, stop)
        integer_registers = [getattr(a64, 'UC_ARM64_REG_X' + str(index)) for index in range(19, 30)]
        double_registers = [getattr(a64, 'UC_ARM64_REG_D' + str(index)) for index in range(8, 16)]
        sp_register, float_register = a64.UC_ARM64_REG_SP, a64.UC_ARM64_REG_S0
    else:
        cpu.reg_write(arm.UC_ARM_REG_C1_C0_2, 0xF << 20)
        cpu.reg_write(arm.UC_ARM_REG_FPEXC, 0x40000000)
        cpu.reg_write(arm.UC_ARM_REG_FPSCR, 0)
        cpu.reg_write(arm.UC_ARM_REG_R0, base)
        cpu.reg_write(arm.UC_ARM_REG_R1, output)
        cpu.reg_write(arm.UC_ARM_REG_S0, case.get('positionBits', floating_bits(case['position'])))
        cpu.reg_write(arm.UC_ARM_REG_SP, initial_sp)
        cpu.reg_write(arm.UC_ARM_REG_LR, stop)
        integer_registers = [getattr(arm, 'UC_ARM_REG_R' + str(index)) for index in range(4, 12)]
        double_registers = [getattr(arm, 'UC_ARM_REG_D' + str(index)) for index in range(8, 16)]
        sp_register, float_register = arm.UC_ARM_REG_SP, arm.UC_ARM_REG_S0
    integer_values = [0x11110000 + index * 0x1111 for index in range(len(integer_registers))]
    double_values = [0x3FF1000012340000 + index for index in range(8)]
    for register, value in zip(integer_registers, integer_values):
        cpu.reg_write(register, value)
    for register, value in zip(double_registers, double_values):
        cpu.reg_write(register, value)
    executed = set()
    returned = False

    def code(machine, address, size, unused):
        nonlocal returned
        if address == stop:
            returned = True
            machine.emu_stop()
            return
        thumb = not high and machine.reg_read(arm.UC_ARM_REG_CPSR) & 0x20
        if size != 4 or thumb or address not in graph['executableAddresses']:
            raise ValueError('Source executed outside compiled ARM/A64 functions: ' + hex(address))
        executed.add(address)

    def memory(machine, access, address, size, value, unused):
        in_stack = stack <= address and address + size <= stack + 0x4000
        in_output = output <= address and address + size <= output + (36 if high else 32)
        if access == UC_MEM_WRITE:
            allowed = in_stack or in_output
        else:
            in_header = base <= address and address + size <= base + len(header)
            in_keys = keys <= address and address + size <= keys + len(case['keys'])
            readonly = any(low <= address and address + size <= limit for low, limit in graph['readableRanges'])
            allowed = in_stack or in_output or in_header or in_keys or readonly
        if not allowed:
            raise ValueError('Source accessed undeclared memory: ' + hex(address))

    cpu.hook_add(UC_HOOK_CODE, code)
    cpu.hook_add(UC_HOOK_MEM_READ | UC_HOOK_MEM_WRITE, memory)
    entry = graph['functions']['fn_' + format(case['entry'], '08x')]['address']
    cpu.emu_start(entry, stop + 4, count=20000)
    preserved = cpu.reg_read(sp_register) == initial_sp
    preserved &= all(cpu.reg_read(register) == value for register, value in zip(integer_registers, integer_values))
    preserved &= all(cpu.reg_read(register) == value for register, value in zip(double_registers, double_values))
    if not returned or not preserved:
        raise ValueError('Source did not return with preserved ABI guards')
    final_memory = bytes(cpu.mem_read(base, 4096))
    allowed = set(range(0x800, 0x800 + (36 if high else 32)))
    if any(before != after and at not in allowed
           for at, (before, after) in enumerate(zip(initial_memory, final_memory))):
        raise ValueError('Source changed inputs, key data, output padding or caller guards')
    result = bytes(cpu.mem_read(output, len(state)))
    pointer = struct.unpack_from('<Q' if high else '<I', result)[0]
    offset = 12 if high else 8
    normalized = {'cachedKeyOffset': None if pointer == 0 else pointer - keys,
                  'period': struct.unpack_from('<i', result, 8 if high else 4)[0],
                  'coefficientBits': list(struct.unpack_from('<IIIIII', result, offset))}
    return {'result': normalized, 'executed': sorted(executed),
            'resultFloatBits': cpu.reg_read(float_register), 'returnedNormally': True,
            'calleeSavedGuardsPreserved': True, 'callerGuardsPreserved': True,
            'sourceOnlyExecution': True, 'mapsOriginalImageOrSdk': False}
