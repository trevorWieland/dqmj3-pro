import hashlib
import json
import random
import struct

import unicorn
from unicorn.arm_const import *


DATA = 0x3000000
DATA_SIZE = 0x8000
VM = DATA + 0x100
SLOTS = DATA + 0x1100
SOURCE = DATA + 0x2000
DESTINATION = DATA + 0x2010
NODES = [DATA + 0x3000, DATA + 0x3040, DATA + 0x3080]
HEAD = DATA + 0x4000
VTABLE = DATA + 0x5000
CALLBACK = 0x7000000
STACK = 0x2000000
SP = STACK + 0x1000
END = 0x5000000
REF = 0x08000040
INTEGER = 0x05000002
REGS = [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4,
        UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9,
        UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR]


def digest(data):
    return hashlib.sha256(data).hexdigest()


def read(memory, address):
    return struct.unpack_from('<I', memory, address - DATA)[0]


def write(memory, address, value):
    struct.pack_into('<I', memory, address - DATA, value & 0xffffffff)


def initial(seed):
    memory = bytearray(random.Random(seed).randbytes(DATA_SIZE))
    write(memory, VM + 24, SLOTS)
    write(memory, VM + 48, 4)
    write(memory, VM + 52, 1)
    for node in NODES:
        for offset, value in [(0, VTABLE), (4, 3), (8, 0), (12, 0), (16, 0), (20, 0)]:
            write(memory, node + offset, value)
    for offset, value in [(0, 0), (4, 0), (8, CALLBACK)]:
        write(memory, VTABLE + offset, value)
    return memory


def assignment_model(memory, destination, source, reads, writes):
    incoming_type, incoming_value = read(memory, source), read(memory, source + 4)
    previous_type, previous_value = read(memory, destination), read(memory, destination + 4)
    reads.extend([(source, 8), (destination, 8)])
    writes.append((destination, 8))
    write(memory, destination + 4, incoming_value)
    write(memory, destination, incoming_type)
    if incoming_type & 0x08000000:
        reads.append((incoming_value + 4, 4))
        writes.append((incoming_value + 4, 4))
        write(memory, incoming_value + 4, read(memory, incoming_value + 4) + 1)
    callbacks = []
    if previous_type & 0x08000000:
        reads.append((previous_value + 4, 4))
        writes.append((previous_value + 4, 4))
        count = (read(memory, previous_value + 4) - 1) & 0xffffffff
        write(memory, previous_value + 4, count)
        if count == 0:
            reads.extend([(previous_value, 4), (VTABLE + 8, 4), (previous_value + 20, 4)])
            writes.append((previous_value + 20, 4))
            callbacks.append({'node': previous_value, 'destinationType': read(memory, destination),
                              'destinationValue': read(memory, destination + 4),
                              'references': [read(memory, node + 4) for node in NODES]})
            write(memory, previous_value + 20, read(memory, previous_value + 20) + 1)
    return callbacks


def make_case(address, definition, seed):
    memory = initial(seed)
    reads, writes = [], []
    args = [VM, 0]
    result = None
    destination = DESTINATION
    if address == 0x157ff4:
        top, base = definition
        write(memory, VM + 48, top)
        write(memory, VM + 52, base)
        reads.append((VM + 48, 8))
        result = top - base
    elif address == 0x173d40:
        args[1] = definition & 0xffffffff
        reads.append((VM + 24, 4))
        result = SLOTS + definition * 8
    elif address == 0x19e8c4:
        head = NODES[0] if definition else 0
        write(memory, HEAD, head)
        if definition == 2:
            write(memory, NODES[0] + 12, NODES[1])
            write(memory, NODES[1] + 16, NODES[0])
        write(memory, NODES[2] + 12, NODES[1])
        write(memory, NODES[2] + 16, NODES[1])
        args = [HEAD, NODES[2]]
        reads.append((HEAD, 4))
        writes.extend([(NODES[2] + 12, 8), (HEAD, 4)])
        if head:
            writes.append((head + 16, 4))
    else:
        old_ref, new_ref, old_count, new_count, same, alias = definition
        write(memory, NODES[0] + 4, old_count)
        write(memory, NODES[1] + 4, new_count)
        old_type, old_value = (REF, NODES[0]) if old_ref else (INTEGER, 0x11223344)
        new_type, new_value = (REF, NODES[0] if same else NODES[1]) if new_ref else (INTEGER, 0xfedcba98)
        if address == 0x173d1c:
            destination = SLOTS + read(memory, VM + 48) * 8
            reads.extend([(VM + 24, 4), (VM + 48, 4)])
            writes.append((VM + 48, 4))
        write(memory, destination, old_type)
        write(memory, destination + 4, old_value)
        source = destination if alias else SOURCE
        if not alias:
            write(memory, source, new_type)
            write(memory, source + 4, new_value)
        args = [VM, source] if address == 0x173d1c else [destination, source]
        if address == 0x19e864:
            result = destination
    expected = bytearray(memory)
    callbacks = []
    if address == 0x19e8c4:
        head = read(expected, HEAD)
        write(expected, NODES[2] + 16, 0)
        write(expected, NODES[2] + 12, head)
        if head:
            write(expected, head + 16, NODES[2])
        write(expected, HEAD, NODES[2])
    elif address in (0x173d1c, 0x19e864):
        if address == 0x173d1c:
            write(expected, VM + 48, read(expected, VM + 48) + 1)
        callbacks = assignment_model(expected, destination, args[1], reads, writes)
    return {'address': address, 'definition': definition, 'seed': seed, 'memory': memory,
            'expectedMemory': expected, 'arguments': args, 'expectedReturn': result,
            'readRanges': reads, 'writeRanges': writes, 'callbacks': callbacks, 'destination': destination}


def cases(address):
    if address == 0x157ff4:
        definitions = [(0, 0), (1, 0), (2, 1), (32, 0), (64, 48), (127, 127), (255, 15)]
        rng = random.Random(address)
        for _ in range(25):
            base = rng.randrange(100)
            definitions.append((base + rng.randrange(100), base))
    elif address == 0x173d40:
        definitions = [-16, -8, -1, 0, 1, 4, 16, 63, 127]
    elif address == 0x19e8c4:
        definitions = [0, 1, 2]
    else:
        definitions = [(False, False, 3, 5, False, False), (False, True, 3, 5, False, False),
                       (True, False, 2, 5, False, False), (True, False, 1, 5, False, False),
                       (True, True, 1, 5, False, False), (True, True, 1, 5, True, False),
                       (True, True, 1, 5, True, True), (False, False, 3, 5, False, True),
                       (True, True, 2, 0, False, False)]
    return [make_case(address, definition, address + index * 0x103) for index, definition in enumerate(definitions)]


def execute(images, callback, case, entry=None):
    machine = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    machine.ctl_set_cpu_model(UC_CPU_ARM_1176)
    images = dict(images)
    images[CALLBACK] = callback
    pages = {page for address, data in images.items()
             for page in range(address & ~4095, (address + len(data) + 4095) & ~4095, 4096)}
    for page in sorted(pages):
        machine.mem_map(page, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    for address, data in images.items():
        machine.mem_write(address, data)
    machine.mem_map(END, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    machine.mem_map(DATA, DATA_SIZE)
    machine.mem_write(DATA, bytes(case['memory']))
    machine.mem_map(STACK, 8192)
    stack = random.Random(case['seed'] ^ 0x123456).randbytes(8192)
    machine.mem_write(STACK, stack)
    rng = random.Random(case['seed'])
    initial = [rng.getrandbits(32) for _ in REGS]
    initial[:2] = case['arguments']
    initial[-2:] = [SP, END]
    machine.reg_write(UC_ARM_REG_CPSR, (rng.getrandbits(4) << 28) | 0x10)
    for register, value in zip(REGS, initial):
        machine.reg_write(register, value)
    visited, reads, writes, callbacks = [], [], [], []
    def allowed(address, length, ranges):
        return all(any(start <= byte < start + size for start, size in ranges) for byte in range(address, address + length))
    def instruction(uc, pc, size, unused):
        if not any(address <= pc and pc + size <= address + len(data) for address, data in images.items()):
            raise RuntimeError('Instruction outside closed source/native/helper/fixture images')
        visited.append(pc)
        if pc == CALLBACK:
            destination = case['destination']
            callbacks.append({'node': uc.reg_read(UC_ARM_REG_R0),
                              'destinationType': int.from_bytes(uc.mem_read(destination, 4), 'little'),
                              'destinationValue': int.from_bytes(uc.mem_read(destination + 4, 4), 'little'),
                              'references': [int.from_bytes(uc.mem_read(node + 4, 4), 'little') for node in NODES]})
    def access(uc, kind, address, size, value, unused):
        ranges = case['writeRanges'] if kind == unicorn.UC_MEM_WRITE else case['readRanges']
        if not allowed(address, size, ranges + [(SP - 128, 128)]):
            raise RuntimeError('Undeclared field/stack memory access at ' + hex(address))
        (writes if kind == unicorn.UC_MEM_WRITE else reads).append([address, size])
    machine.hook_add(unicorn.UC_HOOK_CODE, instruction)
    machine.hook_add(unicorn.UC_HOOK_MEM_READ, access)
    machine.hook_add(unicorn.UC_HOOK_MEM_WRITE, access)
    machine.emu_start(case['address'] if entry is None else entry, END, count=512, timeout=100000)
    if machine.reg_read(UC_ARM_REG_PC) != END:
        raise RuntimeError('No actual sentinel return')
    final = [machine.reg_read(register) for register in REGS]
    if final[4:12] != initial[4:12] or final[-2] != SP or machine.reg_read(UC_ARM_REG_CPSR) & 0x3f != 0x10:
        raise RuntimeError('Callee-save/SP/return CPU mode mismatch')
    leaf = case['address'] in (0x157ff4, 0x173d40, 0x19e8c4)
    if leaf and final[-1] != END:
        raise RuntimeError('Leaf LR changed')
    actual_memory = bytes(machine.mem_read(DATA, DATA_SIZE))
    after_stack = bytes(machine.mem_read(STACK, 8192))
    frame = SP - STACK
    if after_stack[:frame - 128] != stack[:frame - 128] or after_stack[frame:] != stack[frame:]:
        raise RuntimeError('Stack bytes outside dead ABI frame changed')
    meaningful_return = final[0] if case['expectedReturn'] is not None else None
    matched = (actual_memory == case['expectedMemory'] and meaningful_return == case['expectedReturn']
               and callbacks == case['callbacks'])
    return {'returnedToSentinel': True, 'semanticModelAgreed': matched, 'returnValue': meaningful_return,
            'expectedReturn': case['expectedReturn'], 'memorySha256': digest(actual_memory),
            'expectedMemorySha256': digest(case['expectedMemory']), 'callbacks': callbacks,
            'visited': sorted(set(visited)), 'readTraceSha256': digest(json.dumps(reads).encode()),
            'writeTraceSha256': digest(json.dumps(writes).encode()), 'writes': writes,
            'calleeSavedAndSpPreserved': True, 'leafLrPreserved': leaf, 'deadFrameBytesNotCompared': 128}
