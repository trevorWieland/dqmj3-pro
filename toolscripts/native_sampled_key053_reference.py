import json
import struct
from pathlib import Path

from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM, UC_HOOK_CODE
from unicorn import UC_HOOK_MEM_READ, UC_HOOK_MEM_WRITE, UC_MEM_WRITE
from unicorn.arm_const import UC_ARM_REG_C1_C0_2, UC_ARM_REG_FPEXC
from unicorn.arm_const import UC_ARM_REG_FPSCR, UC_ARM_REG_R0, UC_ARM_REG_R1
from unicorn.arm_const import UC_ARM_REG_R4, UC_ARM_REG_D8
from unicorn.arm_const import UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_S0
from unicorn.arm_const import UC_ARM_REG_CPSR, UC_ARM_REG_PC

from native_sampled_key053_measure import ROOT, digest


INPUT = 0x2000000
KEYS = INPUT + 0x100
OUTPUT = INPUT + 0x800
STACK = 0x3000000
STOP = 0xF000000


def f32(value):
    return struct.unpack('<f', struct.pack('<f', value))[0]


def floating_bits(value):
    return struct.unpack('<I', struct.pack('<f', value))[0]


def run(entry, header, keys, state, position, position_bits=None, observer=None):
    claim = json.loads((ROOT / 'evidence/lanes/native-sampled-key053/claim.json').read_text())
    original = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if digest(original) != claim['moduleSha256']:
        raise ValueError('Reference module identity differs')
    selected = [row for row in claim['functions'] if row['entry'] in [entry, 0x6FA358]]
    if not any(row['entry'] == entry for row in selected):
        raise ValueError('Entry is not an owned candidate')
    if len(header) != 36 or len(state) != 32 or len(keys) > 0x600:
        raise ValueError('Reference fixture extent differs')
    instructions = {at for row in selected for span in row['instructionRanges']
                    for at in range(span['start'], span['endExclusive'], 4)}
    literal_bytes = {at for row in selected for word in row['literalWords']
                     for at in range(word['start'], word['endExclusive'])}
    cpu = Uc(UC_ARCH_ARM, UC_MODE_ARM)
    cpu.mem_map(0x100000, (len(original) + 4095) & ~4095)
    cpu.mem_write(0x100000, original)
    cpu.mem_map(INPUT, 0x1000)
    cpu.mem_map(STACK, 0x4000)
    cpu.mem_map(STOP, 0x1000)
    cpu.mem_write(INPUT, header)
    cpu.mem_write(KEYS, keys)
    cpu.mem_write(OUTPUT, state)
    cpu.mem_write(STACK, bytes([0xA5]) * 0x4000)
    cpu.reg_write(UC_ARM_REG_C1_C0_2, 0xF << 20)
    cpu.reg_write(UC_ARM_REG_FPEXC, 0x40000000)
    cpu.reg_write(UC_ARM_REG_FPSCR, 0)
    cpu.reg_write(UC_ARM_REG_R0, INPUT)
    cpu.reg_write(UC_ARM_REG_R1, OUTPUT)
    cpu.reg_write(UC_ARM_REG_S0, floating_bits(position) if position_bits is None else position_bits)
    initial_sp = STACK + 0x3000
    cpu.reg_write(UC_ARM_REG_SP, initial_sp)
    cpu.reg_write(UC_ARM_REG_LR, STOP)
    integer_guards = [0x11110000 + index * 0x1111 for index in range(8)]
    double_guards = [0x3FF1000012340000 + index for index in range(8)]
    for index, value in enumerate(integer_guards):
        cpu.reg_write(UC_ARM_REG_R4 + index, value)
    for index, value in enumerate(double_guards):
        cpu.reg_write(UC_ARM_REG_D8 + index, value)
    executed, reads, writes = set(), set(), set()
    returned = False

    def code(machine, address, size, unused):
        nonlocal returned
        if address == STOP:
            returned = True
            machine.emu_stop()
            return
        if size != 4 or machine.reg_read(UC_ARM_REG_CPSR) & 0x20 or address not in instructions:
            raise ValueError('Reference executed outside selected ARM bodies: ' + hex(address))
        executed.add(address)
        if observer is not None:
            observer(machine, address)

    def memory(machine, access, address, size, value, unused):
        touched = set(range(address, address + size))
        stack = STACK <= address and address + size <= STACK + 0x4000
        output = OUTPUT <= address and address + size <= OUTPUT + 32
        if access == UC_MEM_WRITE:
            if not (stack or output):
                raise ValueError('Reference wrote outside output/stack: ' + hex(address))
            if output:
                writes.update(touched)
        else:
            source = INPUT <= address and address + size <= INPUT + 36
            key = KEYS <= address and address + size <= KEYS + len(keys)
            if not (stack or output or source or key or touched <= literal_bytes):
                raise ValueError('Reference read outside declared data: ' + hex(address) +
                                 ' atPC ' + hex(machine.reg_read(UC_ARM_REG_PC)))
            if not stack:
                reads.update(touched)

    cpu.hook_add(UC_HOOK_CODE, code)
    cpu.hook_add(UC_HOOK_MEM_READ | UC_HOOK_MEM_WRITE, memory)
    cpu.emu_start(entry, STOP + 4, count=20000)
    preserved = cpu.reg_read(UC_ARM_REG_SP) == initial_sp
    preserved &= all(cpu.reg_read(UC_ARM_REG_R4 + index) == value
                     for index, value in enumerate(integer_guards))
    preserved &= all(cpu.reg_read(UC_ARM_REG_D8 + index) == value
                     for index, value in enumerate(double_guards))
    if not returned or not preserved:
        raise ValueError('Reference did not return with preserved ABI guards')
    if bytes(cpu.mem_read(INPUT, 36)) != header or bytes(cpu.mem_read(KEYS, len(keys))) != keys:
        raise ValueError('Reference changed immutable caller inputs')
    output = bytes(cpu.mem_read(OUTPUT, 32))
    return {'output': output, 'executed': sorted(executed),
            'dataReads': sorted(reads), 'outputWrites': sorted(writes),
            'fpscr': cpu.reg_read(UC_ARM_REG_FPSCR),
            'resultFloatBits': cpu.reg_read(UC_ARM_REG_S0),
            'returnedNormally': returned, 'calleeSavedGuardsPreserved': bool(preserved)}


if __name__ == '__main__':
    header = struct.pack('<ffBBBBBBHffffI', 0, 2, 0, 0, 0, 0, 0, 0, 3, 1, 0, 1, 0.5, KEYS)
    keys = struct.pack('<ffffff', 0, 10, 1, 20, 2, 40)
    result = run(0x75C360, header, keys, bytes(32), 0.25)
    data = result.pop('output')
    result['result'] = {'cachedKeyOffset': struct.unpack_from('<I', data)[0] - KEYS,
                        'period': struct.unpack_from('<i', data, 4)[0],
                        'floats': struct.unpack_from('<ffffff', data, 8)}
    result['executedInstructionCount'] = len(result.pop('executed'))
    result['readByteCount'] = len(result.pop('dataReads'))
    result['writtenOutputBytes'] = len(result.pop('outputWrites'))
    print(json.dumps(result))
