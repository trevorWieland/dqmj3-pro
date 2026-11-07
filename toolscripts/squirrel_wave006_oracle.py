import struct

import unicorn
from unicorn import arm_const as arm

import squirrel_wave006_model as model
from squirrel_wave006_state import prepare, SCRIPT, CALLABLE, CODE, code_regions
from squirrel_wave006_programs import program
from squirrel_wave002_oracle import STACK, END
import squirrel_wave004_model as previous
from squirrel_wave006_fpscr import CONTROL_FIELDS


ORIGINAL_RANGES = [(0x1994c0, 0x1996ec), (0x199cb8, 0x19a1e0), (0x1a0cc0, 0x1a0d30), (0x196f6c, 0x197330), (0x19736c, 0x1975ac), (0x19d408, 0x19d558),
                   (0x198230, 0x19828c), (0x1b33dc, 0x1b3530), (0x19d320, 0x19d408),
                   (0x665a44, 0x665af8), (0x19e8c4, 0x19e8e8), (0x157ff4, 0x158004),
                   (0x173d40, 0x173d4c), (0x173d1c, 0x173d40), (0x19e864, 0x19e8c4), (0x191f20, 0x192014),
                   (0x1a1234, 0x1a158c), (0x300f74, 0x3011c0), (0x199144, 0x1994b8), (0x196b08, 0x196f58),
                   (0x6a7610, 0x6a7638), (0x6a769c, 0x6a7774), (0x77f3f8, 0x77f478), (0x24d73c, 0x24d76c), (0x198578, 0x1987dc),
                   (0x19b390, 0x19b410), (0x19b998, 0x19ba00), (0x19b728, 0x19b98c), (0x19b4ec, 0x19b64c),
                   (0x1a1dc8, 0x1a1ee8), (0x173d60, 0x1740bc), (0x174194, 0x17419c), (0x197b18, 0x197fc8),
                   (0x19b414, 0x19b4c4), (0x1987e4, 0x198b50), (0x198b70, 0x198c88), (0x666518, 0x666628), (0x19e2e8, 0x19e378), (0x233bd8, 0x233c04), (0x1975b0, 0x197ac4), (0x1a2b2c, 0x1a2b54), (0x1a8604, 0x1a8730), (0x19b650, 0x19b720), (0x192b9c, 0x192ca8), (0x19289c, 0x192b38), (0x19e378, 0x19e7a0), (0x19e7dc, 0x19e864), (0x665bd4, 0x665bfc), (0x665c60, 0x665cc0), (0x202dcc, 0x202df4), (0x202e68, 0x202f70)]


import json
from pathlib import Path

MILESTONE = json.loads((Path(__file__).resolve().parents[1] / 'evidence/lanes/squirrel-source-wave005/execute-milestone.json').read_text())
EXECUTE_RANGES = MILESTONE['instructionRanges']
DATA_RANGES = tuple((row['start'], row['endExclusive']) for row in MILESTONE['dataRanges']) + ((0x192014, 0x19204c), (0x1a158c, 0x1a15ec), (0x1994b8, 0x1994c0), (0x196f58, 0x196f6c), (0x6a7774, 0x6a7780), (0x8516d0, 0x8516e4), (0x1987dc, 0x1987e4), (0x19b410, 0x19b414), (0x19ba00, 0x19ba04), (0x19b98c, 0x19b998), (0x19b64c, 0x19b650), (0x1a1ee8, 0x1a1eec), (0x1740bc, 0x174194), (0x197fc8, 0x197fe0), (0x19b4c4, 0x19b4c8), (0x198b50, 0x198b70), (0x198c88, 0x198c9c), (0x666628, 0x66662c), (0x233c04, 0x233c0c), (0x850dac, 0x850dc0), (0x197ac4, 0x197b18), (0x1a8730, 0x1a8734), (0x19b720, 0x19b728), (0x192ca8, 0x192cb4), (0x192b38, 0x192b9c), (0x19e7a0, 0x19e7dc), (0x665cc0, 0x665ccc), (0x850d74, 0x850d88), (0x202f70, 0x202f7c), (0x81c358, 0x81c364))


def initialized_globals(image):
    uc = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    uc.mem_map(0x100000, 0x800000)
    uc.mem_write(0x100000, image)
    uc.mem_map(STACK, 0x10000)
    uc.reg_write(arm.UC_ARM_REG_SP, STACK + 0xff00)
    uc.emu_start(0x6ff69c, 0x6ff728, count=100)
    return [(pointer, bytes(uc.mem_read(pointer, 8))) for pointer in range(0x8c06e8, 0x8c0710, 8)]


def type_name_cases(image, component):
    names = {1: 'null', 2: 'integer', 4: 'float', 8: 'bool', 16: 'string', 32: 'table', 64: 'array',
             128: 'userdata', 256: 'function', 512: 'function', 1024: 'generator', 2048: 'userdata',
             4096: 'thread', 8192: 'function', 16384: 'class', 32768: 'instance', 65536: 'weakref',
             0: None, 3: None, 0xffffff: None}
    results = []
    for tag, expected in names.items():
        for flags in (0, 0x05000000, 0xff000000):
            observations = []
            for source in (False, True):
                uc = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
                uc.mem_map(0x100000, 0x800000)
                uc.mem_write(0x100000, image)
                uc.mem_map(0xa00000, 0x100000)
                if source:
                    for section in component['sections']: uc.mem_write(section['address'], section['data'])
                uc.mem_map(model.HEAP, 4096)
                uc.mem_write(model.HEAP, struct.pack('<II', tag | flags, 0))
                uc.mem_map(STACK, 4096)
                uc.mem_map(END, 4096)
                uc.reg_write(arm.UC_ARM_REG_R0, model.HEAP)
                uc.reg_write(arm.UC_ARM_REG_SP, STACK + 0xf00)
                uc.reg_write(arm.UC_ARM_REG_LR, END)
                uc.emu_start(0x191f20, END, count=1000)
                if uc.reg_read(arm.UC_ARM_REG_PC) != END or uc.reg_read(arm.UC_ARM_REG_SP) != STACK + 0xf00:
                    raise ValueError('Type name helper did not actually return')
                pointer = uc.reg_read(arm.UC_ARM_REG_R0)
                actual = bytes(uc.mem_read(pointer, 32)).split(b'\0')[0].decode('ascii') if pointer else None
                if actual != expected or bytes(uc.mem_read(model.HEAP, 8)) != struct.pack('<II', tag | flags, 0):
                    raise ValueError('Read-only type name result differs')
                observations.append(actual)
            results.append({'type': tag | flags, 'name': expected, 'originalReturned': True,
                            'sourceReturned': True, 'sourceMatchesOriginal': observations[0] == observations[1]})
    return results


def execute(image, component, case, source=False):
    initial = prepare(case)
    machine = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    machine.ctl_set_cpu_model(arm.UC_CPU_ARM_1176)
    machine.reg_write(arm.UC_ARM_REG_C1_C0_2, 0xf << 20)
    machine.reg_write(arm.UC_ARM_REG_FPEXC, 0x40000000)
    machine.reg_write(arm.UC_ARM_REG_FPSCR, 0)
    machine.mem_map(0x100000, 0x800000)
    machine.mem_write(0x100000, image)
    for pointer, data in initialized_globals(image):
        machine.mem_write(pointer, data)
    machine.mem_map(0xa00000, 0x100000)
    for section in component['sections']:
        if source or section['address'] in (previous.NATIVE, previous.RELEASE, 0xa61000, 0x1a0d30, 0x198320, 0xa50000, 0xa63000):
            machine.mem_write(section['address'], section['data'])
    machine.mem_map(model.HEAP, model.HEAP_BYTES)
    machine.mem_write(model.HEAP, bytes(initial))
    machine.mem_map(STACK, 0x10000)
    stack = bytearray(previous.stack_bytes(case))
    struct.pack_into('<IIII', stack, 0xff00, case.get('frameBase', 4), model.RESULT, case.get('raiseError', 1), case.get('mode', 2))
    machine.mem_write(STACK, bytes(stack))
    machine.mem_map(END, 4096)
    sp = STACK + 0xff00
    machine.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
    for register, value in ((arm.UC_ARM_REG_SP, sp), (arm.UC_ARM_REG_LR, END),
                            (arm.UC_ARM_REG_R0, model.VM), (arm.UC_ARM_REG_R1, CALLABLE),
                            (arm.UC_ARM_REG_R2, 0), (arm.UC_ARM_REG_R3, case.get('arguments', 1))):
        machine.reg_write(register, value)
    protected = {getattr(arm, 'UC_ARM_REG_R' + str(index)): 0x51330000 + index * 0x517 for index in range(4, 12)}
    protected.update({getattr(arm, 'UC_ARM_REG_D' + str(index)): 0x7717339933110000 + index for index in range(8, 16)})
    for register, value in protected.items():
        machine.reg_write(register, value)
    fixture_ranges = [(component['functions'][name]['address'], component['functions'][name]['address'] + component['functions'][name]['bytes'])
                      for name in ('sq_wave004_native', 'sq_wave004_release', 'sq_wave006_release', 'sq_execute_debug', 'sq_execute_error_handler', 'sq_execute_varargs', '__aeabi_memcpy')]
    allowed = component['functionRanges'] if source else ORIGINAL_RANGES + fixture_ranges + [(row['start'], row['endExclusive']) for row in EXECUTE_RANGES]
    expected, unused = model.model(case, source)
    frame_addresses = expected['frameAddresses']
    state = {'cursor': model.HEAP + 0x10000, 'services': [], 'terminal': None, 'visited': set(), 'handlerCalls': 0,
             'handlerReturn': None, 'handlerInactiveReads': [], 'nativeWitnesses': [], 'instructions': [],
             'pendingFetch': None, 'opcodeReads': [], 'allocationObservations': []}

    def clobber():
        for index, register in enumerate((arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2, arm.UC_ARM_REG_R3, arm.UC_ARM_REG_R12)):
            machine.reg_write(register, (case['seed'] * 0x3157 + index * 0x691) & 0xffffffff)
        for index in range(8):
            machine.reg_write(getattr(arm, 'UC_ARM_REG_D' + str(index)), 0x7ff1000000000000 + case['seed'] + index)
        machine.reg_write(arm.UC_ARM_REG_CPSR, (machine.reg_read(arm.UC_ARM_REG_CPSR) & 0x0fffffff) | ((case['seed'] & 15) << 28))
        machine.reg_write(arm.UC_ARM_REG_PC, machine.reg_read(arm.UC_ARM_REG_LR))

    def allocate(size):
        result = state['cursor']
        state['cursor'] += (max(size, 16) + 15) & ~15
        if not 0 < size <= 4096 or state['cursor'] >= model.HEAP + model.HEAP_BYTES:
            raise ValueError('Allocation escaped bounded successful-reallocation contract')
        return result

    def instruction(uc, address, size, unused):
        if address == state['handlerReturn']:
            state['handlerReturn'] = None
        if address == 0x196f6c:
            entry_sp = uc.reg_read(arm.UC_ARM_REG_SP)
            state['nativeWitnesses'].append([struct.unpack('<I', uc.mem_read(entry_sp + offset, 4))[0] for offset in (-96, -92, -64, -56)])
        if address == 0xa80000:
            state['terminal'] = 'unsupported'
            uc.emu_stop()
            return
        if address == END:
            state['terminal'] = 'returned'
            uc.emu_stop()
            return
        if address == 0x146590:
            pointer = uc.reg_read(arm.UC_ARM_REG_R1)
            if uc.reg_read(arm.UC_ARM_REG_R0) != 0 or bytes(uc.mem_read(pointer, 8)) != struct.pack('<II', model.REF, 0):
                raise ValueError('Unexpected native array assertion contract')
            state['terminal'] = 'assertion'
            uc.emu_stop()
            return
        if address in (0x19813c, 0x1a1010):
            if uc.reg_read(arm.UC_ARM_REG_R0) != model.VM:
                raise ValueError('Error service received another VM')
            if address == 0x19813c:
                pointer = uc.reg_read(arm.UC_ARM_REG_R1)
                message = bytes(uc.mem_read(pointer, 64)).split(b'\0')[0].decode('ascii')
                arguments = {"bitwise op between '%s' and '%s'": 2, "attempt to negate a %s": 1,
                             "attempt to perform a bitwise op on a %s": 1, "internal vm error bitwise op failed": 0,
                             "division by zero": 0, "modulo by zero": 0,
                             "the function doesn't have var args": 0, "vargv index out of range": 0,
                             "indexing 'vargv' with %s": 1, "delegate cycle detected": 0,
                             "delegating a '%s'": 1, "using '%s' as delegate": 1, "attempt to delete a slot from a %s": 1, "resuming dead generator": 0, "resuming active generator": 0, "internal vm error, yielding dead generator": 0, "internal vm error, yielding a dead generator": 0, "trying to resume a '%s',only genenerator can be resumed": 1}
                if message in arguments:
                    names = []
                    for register in (arm.UC_ARM_REG_R2, arm.UC_ARM_REG_R3)[:arguments[message]]:
                        value = uc.reg_read(register)
                        names.append(bytes(uc.mem_read(value, 32)).split(b'\0')[0].decode('ascii') if value else None)
                    state['services'].append({'operation': 'formatted-error', 'format': message, 'typeNames': names})
                elif message not in ('Native stack overflow', 'wrong number of parameters'):
                    raise ValueError('Unexpected formatted-error service contract')
                else: state['services'].append({'operation': 'error', 'message': message})
            else:
                values = [uc.reg_read(register) for register in (arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2, arm.UC_ARM_REG_R3)]
                state['services'].append(dict(zip(('operation', 'index', 'mask', 'type'), ('type-error', *values))))
            clobber()
            return
        if address in (0x2fece8, 0x18388c, 0x19d680):
            r0, r1, r2 = [uc.reg_read(register) for register in (arm.UC_ARM_REG_R0, arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2)]
            read = lambda pointer: struct.unpack('<I', uc.mem_read(pointer, 4))[0]
            head = read(previous.STATE + 68)
            chain = []
            while head:
                if len(chain) >= 8 or not model.HEAP <= head < model.HEAP + model.HEAP_BYTES - 20:
                    raise ValueError('Allocation observer escaped a bounded reference chain')
                chain.append({'address': head, 'references': read(head + 4)})
                head = read(head + 12)
            operation = {0x2fece8: 'allocate', 0x18388c: 'reallocate', 0x19d680: 'deallocate'}[address]
            state['allocationObservations'].append({'operation': operation,
                'nodeReferences': [read(pointer + 4) for pointer in previous.NODES], 'chainReferences': chain,
                'top': read(model.VM + 48), 'base': read(model.VM + 52), 'callCount': read(model.VM + 100)})
            if address == 0x19d680:
                if not model.HEAP <= r0 < model.HEAP + model.HEAP_BYTES or r0 + r1 > model.HEAP + model.HEAP_BYTES:
                    raise ValueError('Deallocation escaped owned diagnostic allocation')
                state['services'].append({'operation': 'deallocate', 'pointer': r0, 'bytes': r1})
                clobber()
                return
            if address == 0x2fece8:
                result = 0 if case.get('allocationFails') else allocate(r0)
                state['services'].append({'operation': 'allocate', 'bytes': r0})
            else:
                result = allocate(r2)
                if r0:
                    if not model.HEAP <= r0 < model.HEAP + model.HEAP_BYTES or r0 + r1 > model.HEAP + model.HEAP_BYTES:
                        raise ValueError('Reallocation source escaped owned storage')
                    uc.mem_write(result, bytes(uc.mem_read(r0, min(r1, r2))))
                elif r1:
                    raise ValueError('Null storage with nonzero old allocation size')
                state['services'].append({'operation': 'reallocate', 'oldBytes': r1, 'newBytes': r2})
            uc.reg_write(arm.UC_ARM_REG_R0, result)
            clobber()
            return
        if not any(low <= address < high for low, high in allowed):
            raise ValueError('Execution escaped compiled/source service closure: ' + hex(address))
        state['visited'].add(address)
        if address in (previous.NATIVE, 0x1b33dc):
            state['handlerCalls'] += 1
            state['handlerReturn'] = uc.reg_read(arm.UC_ARM_REG_LR)

    def access(uc, kind, address, size, value, unused):
        if kind == unicorn.UC_MEM_READ:
            for pointer in [pointer for start, rows in code_regions(case) for pointer in range(start, start + len(rows) * 8, 8)]:
                if address <= pointer + 4 < address + size:
                    state['opcodeReads'].append(pointer)
                    if state['pendingFetch'] == pointer:
                        state['instructions'].append({'address': pointer, 'opcode': uc.mem_read(pointer + 4, 1)[0]})
                        state['pendingFetch'] = None
        if kind == unicorn.UC_MEM_WRITE and size == 4:
            current = struct.unpack('<I', uc.mem_read(model.VM + 132, 4))[0]
            if current and address == current:
                old = struct.unpack('<I', uc.mem_read(address, 4))[0]
                if any(start <= old < start + len(rows) * 8 for start, rows in code_regions(case)) and value == old + 8:
                    if old in state['opcodeReads']:
                        state['instructions'].append({'address': old, 'opcode': uc.mem_read(old + 4, 1)[0]})
                        state['pendingFetch'] = None
                    else:
                        state['pendingFetch'] = old
                else:
                    state['pendingFetch'] = None
                state['opcodeReads'] = []
        if kind == unicorn.UC_MEM_READ and state['handlerReturn'] is not None and frame_addresses:
            if any(address < frame_address + offset + 4 and address + size > frame_address + offset for frame_address in frame_addresses for offset in (0, 4, 32, 40)):
                state['handlerInactiveReads'].append(uc.reg_read(arm.UC_ARM_REG_PC))
        arena = model.HEAP <= address < address + size <= model.HEAP + model.HEAP_BYTES
        frame = sp - 1024 <= address < address + size <= sp + 16
        if source:
            pool = any(section['address'] <= address < address + size <= section['address'] + len(section['data']) for section in component['sections']) or any(low <= address < address + size <= high for low, high in ((0x8516d0, 0x8516e4), (0x850dac, 0x850dc0)))
        else:
            pool = any(low <= address < address + size <= high for low, high in
                       DATA_RANGES + ((0x1996ec, 0x1996f4), (0x19a1e0, 0x19a208), (0x197330, 0x19736c), (0x1975ac, 0x1975b0), (0x665af8, 0x665b00), (0x1b3530, 0x1b3538), (0x8c06e8, 0x8c0710)))
        if not (arena or frame or kind == unicorn.UC_MEM_READ and pool):
            raise ValueError('Read/write escaped owned arena, bounded frame or literals: ' + hex(address))

    machine.hook_add(unicorn.UC_HOOK_CODE, instruction)
    machine.hook_add(unicorn.UC_HOOK_MEM_READ | unicorn.UC_HOOK_MEM_WRITE, access)
    machine.emu_start(0x18d65c, END + 4, timeout=3000000, count=100000)
    if state['terminal'] is None:
        raise ValueError('No genuine return or separate terminal assertion')
    if state['terminal'] == 'returned':
        if machine.reg_read(arm.UC_ARM_REG_SP) != sp or any(machine.reg_read(register) != value for register, value in protected.items()):
            raise ValueError('Callee-saved SP/integer/VFP ABI changed')
        for name, mask in CONTROL_FIELDS.items():
            if machine.reg_read(arm.UC_ARM_REG_FPSCR) & mask:
                raise ValueError('Floating-point control context changed: ' + name)
    for pointer, data in initialized_globals(image):
        if bytes(machine.mem_read(pointer, len(data))) != data:
            raise ValueError('Initialized global singleton state changed')
    final_stack = bytes(machine.mem_read(STACK, 0x10000))
    if final_stack[:0xfb00] != stack[:0xfb00] or final_stack[0xff00:] != stack[0xff00:]:
        raise ValueError('Live stack or outer guard changed')
    arena = bytes(machine.mem_read(model.HEAP, model.HEAP_BYTES))
    canonical = bytearray(arena)
    expected, unused = model.model(case, source, state['nativeWitnesses'] if not source else None)
    frames = expected['frameAddresses']
    for frame in frames:
        for offset in (0, 4, 32, 40):
            model.put(canonical, frame + offset, 0)
    result = {'arenaSha256': model.sha(arena), 'semanticArenaSha256': model.sha(canonical), 'services': state['services'],
              'return': machine.reg_read(arm.UC_ARM_REG_R0) if state['terminal'] == 'returned' else None,
              'terminal': state['terminal'], 'frameAddresses': frames, 'excludedInactiveBytes': 16 * len(frames), 'executedInstructions': state['instructions']}
    return result, {'returned': state['terminal'] == 'returned', 'handlerCalls': state['handlerCalls'],
                    'visited': sorted(state['visited']), 'sourceOnlyOwnedCodeExecuted': source,
                    'finalFPSCRExceptionStatus': machine.reg_read(arm.UC_ARM_REG_FPSCR) & 0x9f,
                    'fpscrControlFields': {name: {'mask': mask, 'initial': 0, 'final': machine.reg_read(arm.UC_ARM_REG_FPSCR) & mask}
                                           for name, mask in CONTROL_FIELDS.items()},
                    'handlerInactiveFieldReads': state['handlerInactiveReads'],
                    'allocationObservations': state['allocationObservations'],
                    'nativeIndeterminateInputHashes': [model.sha(struct.pack('<IIII', *values)) for values in state['nativeWitnesses']]}, arena, state['nativeWitnesses']
