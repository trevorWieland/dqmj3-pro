import hashlib
import random
import struct

import unicorn
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_CPU_ARM_1176

import native_wave010_model as model


REGISTERS = [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4,
             UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9,
             UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR]
RETURN, STACK = 0x1000000, 0x2000000
GRAPH_BYTES = 0x40000


class SemanticMismatch(RuntimeError):
    def __init__(self, actual_result, expected_result, actual_state, expected_state):
        self.details = {'actualResult': actual_result, 'expectedResult': expected_result,
                        'actualState': actual_state, 'expectedState': expected_state,
                        'returnedToSentinel': True, 'graphOutsideCursorPreserved': True,
                        'calleeSavedAndSpPreserved': True}
        super().__init__('Returned normally with a different matcher result or cursor state')


def encode(case, seed, operation):
    model.validate(case)
    rng = random.Random(seed)
    base = 0x3000000 + seed % 4 * 0x100000
    memory = bytearray(rng.randbytes(GRAPH_BYTES))
    cursor, context, text = base, base + 0x100, base + 0x200
    states = [base + 0x1000 + index * 0x80 for index in range(len(case['states']))]
    edge_count, range_count = 0, 0
    readable = [(cursor, cursor + 4), (context, context + 8), (text, text + (len(case['text']) + 1) * 2)]
    start_state = case['initial'] if operation == 'control' else len(states) - 1
    struct.pack_into('<I', memory, 0, states[start_state])
    struct.pack_into('<I', memory, 0x104, states[case['initial']])
    for index, character in enumerate([*case['text'], 0]):
        struct.pack_into('<H', memory, 0x200 + index * 2, character)
    for state_index, state in enumerate(case['states']):
        address = states[state_index]
        readable.append((address, address + 48))
        sentinel = address + 8
        edges = [base + 0x3000 + (edge_count + index) * 0x40 for index in range(len(state['edges']))]
        edge_count += len(edges)
        struct.pack_into('<II', memory, address - base + 8, rng.getrandbits(32), edges[0] if edges else sentinel)
        struct.pack_into('<b', memory, address - base + 44, state['result'])
        for index, (edge, edge_address) in enumerate(zip(state['edges'], edges)):
            readable.append((edge_address, edge_address + 28))
            following = edges[index + 1] if index + 1 < len(edges) else sentinel
            struct.pack_into('<III', memory, edge_address - base, rng.getrandbits(32), following, states[edge['destination']])
            memory[edge_address - base + 12] = edge['kind']
            struct.pack_into('<H', memory, edge_address - base + 14, edge.get('value', 0))
            inner = edge_address + 16
            nodes = [base + 0x10000 + (range_count + number) * 0x20 for number in range(len(edge.get('ranges', [])))]
            range_count += len(nodes)
            struct.pack_into('<I', memory, edge_address - base + 20, nodes[0] if nodes else inner)
            for number, ((low, high), node) in enumerate(zip(edge.get('ranges', []), nodes)):
                readable.append((node, node + 12))
                next_node = nodes[number + 1] if number + 1 < len(nodes) else inner
                struct.pack_into('<IIHH', memory, node - base, rng.getrandbits(32), next_node, low, high)
    if edge_count > 256 or range_count > 4096:
        raise ValueError('Synthetic graph exceeds declared address allocation')
    return {'base': base, 'memory': bytes(memory), 'cursor': cursor, 'context': context, 'text': text,
            'stateAddresses': states, 'readable': readable}


def execute(blocks, entry, case, seed, operation='match', mask=0, return_thumb=False, flags=0, allowed_execution=None):
    if operation not in ['match', 'control'] or not 0 <= mask <= 0xffffffff:
        raise ValueError('Unknown operation or mask outside u32 domain')
    layout = encode(case, seed, operation)
    answer = model.match(case) if operation == 'match' else {
        'result': None, 'state': model.control(case['states'], case['initial'], mask)[0]}
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    pages = set()
    readable_code = []
    for address, raw in blocks:
        for page in range(address & ~4095, (address + len(raw) + 4095) & ~4095, 4096):
            if page not in pages:
                cpu.mem_map(page, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
                pages.add(page)
        cpu.mem_write(address, raw)
        readable_code.append((address, address + len(raw)))
    cpu.mem_map(RETURN, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_map(STACK, 8192, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    cpu.mem_map(layout['base'], GRAPH_BYTES, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    cpu.mem_write(layout['base'], layout['memory'])
    cpu.mem_protect(layout['base'], GRAPH_BYTES, unicorn.UC_PROT_READ)
    cpu.mem_protect(layout['base'], 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    rng = random.Random(seed + 1009)
    stack = rng.randbytes(8192)
    cpu.mem_write(STACK, stack)
    initial = [rng.getrandbits(32) for _ in REGISTERS]
    initial[:3] = [layout['cursor'], mask if operation == 'control' else layout['context'], layout['text']]
    initial[-2:] = [STACK + 4096, RETURN | int(return_thumb)]
    cpu.reg_write(UC_ARM_REG_CPSR, 0x10 | flags << 28)
    for register, value in zip(REGISTERS, initial):
        cpu.reg_write(register, value)
    writes, reads, steps = [], [], []
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda uc, access, a, n, value, user: writes.append((a, n)))
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda uc, access, a, n, value, user: reads.append((a, n)))
    execution_ranges = [(address, address + len(raw)) for address, raw in blocks] if allowed_execution is None else allowed_execution
    def executed(uc, address, size, user):
        if not any(low <= address < address + size <= high for low, high in execution_ranges):
            raise RuntimeError('Execution escaped declared source/dependency bodies')
        steps.append(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE, executed)
    cpu.emu_start(entry, RETURN, count=1000000)
    if cpu.reg_read(UC_ARM_REG_PC) != RETURN:
        raise RuntimeError('Control/matcher execution failed to return within instruction bound')
    final = [cpu.reg_read(register) for register in REGISTERS]
    if final[4:12] != initial[4:12] or final[-2] != initial[-2]:
        raise RuntimeError('Callee-saved registers or SP changed')
    frame_start, frame_end = initial[-2] - 512, initial[-2]
    for address, size in writes:
        if (address, size) != (layout['cursor'], 4) and not frame_start <= address < address + size <= frame_end:
            raise RuntimeError('Unexpected graph/input or outside-frame memory write')
    result_memory = bytes(cpu.mem_read(layout['base'], GRAPH_BYTES))
    if result_memory[4:] != layout['memory'][4:]:
        raise RuntimeError('Graph, context or input changed outside cursor state')
    result_stack = bytes(cpu.mem_read(STACK, 8192))
    if result_stack[:frame_start - STACK] != stack[:frame_start - STACK] or result_stack[frame_end - STACK:] != stack[frame_end - STACK:]:
        raise RuntimeError('Memory outside bounded private stack frame changed')
    readable = [*layout['readable'], *readable_code, (frame_start, frame_end)]
    for address, size in reads:
        if not any(low <= address and address + size <= high for low, high in readable):
            raise RuntimeError('Read outside declared graph/input/code/frame domains')
    state = struct.unpack_from('<I', result_memory, 0)[0]
    expected_state = layout['stateAddresses'][answer['state']]
    expected_return = None if answer['result'] is None else answer['result'] & 0xffffffff
    if bool(cpu.reg_read(UC_ARM_REG_CPSR) & 0x20) != return_thumb:
        raise RuntimeError('Return interworking mode changed')
    if state != expected_state or expected_return is not None and final[0] != expected_return:
        raise SemanticMismatch(final[0] if expected_return is not None else None, expected_return, state, expected_state)
    return {'result': answer['result'], 'state': answer['state'], 'rawR0': final[0], 'rawLR': final[-1],
            'returnedToSentinel': True, 'graphOutsideCursorPreserved': True, 'calleeSavedAndSpPreserved': True,
            'stackFrameBytesExcludedFromEquality': 512, 'steps': len(steps), 'writeCount': len(writes),
            'codePath': sorted(set(steps)), 'graphSha256': hashlib.sha256(result_memory).hexdigest()}
