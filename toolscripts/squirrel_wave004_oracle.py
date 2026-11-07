import struct

import unicorn
from unicorn import arm_const as arm

import squirrel_wave004_model as model
from squirrel_wave002_oracle import STACK, END


ORIGINAL_RANGES = [(0x196f6c, 0x197330), (0x19736c, 0x1975ac), (0x19d408, 0x19d558),
                   (0x198230, 0x19828c), (0x1b33dc, 0x1b3530), (0x19d320, 0x19d408),
                   (0x665a44, 0x665af8), (0x19e8c4, 0x19e8e8), (0x157ff4, 0x158004),
                   (0x173d40, 0x173d4c), (0x173d1c, 0x173d40), (0x19e864, 0x19e8c4)]


def execute(image, component, case, source=False):
    initial = model.prepare(case)
    machine = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    machine.ctl_set_cpu_model(arm.UC_CPU_ARM_1176)
    machine.reg_write(arm.UC_ARM_REG_C1_C0_2, 0xf << 20)
    machine.reg_write(arm.UC_ARM_REG_FPEXC, 0x40000000)
    machine.mem_map(0x100000, 0x800000)
    machine.mem_write(0x100000, image)
    machine.mem_write(0x8c06e8, struct.pack('<II', model.NULL, 0))
    machine.mem_map(0xa00000, 0x100000)
    for section in component['sections']:
        if source or section['address'] in (model.NATIVE, model.RELEASE):
            machine.mem_write(section['address'], section['data'])
    machine.mem_map(model.HEAP, model.HEAP_BYTES)
    machine.mem_write(model.HEAP, bytes(initial))
    machine.mem_write(model.ARRAY_VTABLE + 8, struct.pack('<I', model.RELEASE))
    machine.mem_map(STACK, 0x10000)
    stack = bytearray(model.stack_bytes(case))
    struct.pack_into('<II', stack, 0xff00, model.RESULT, model.SUSPEND)
    machine.mem_write(STACK, bytes(stack))
    machine.mem_map(END, 4096)
    sp = STACK + 0xff00
    machine.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
    for register, value in ((arm.UC_ARM_REG_SP, sp), (arm.UC_ARM_REG_LR, END),
                            (arm.UC_ARM_REG_R0, model.VM), (arm.UC_ARM_REG_R1, model.CLOSURE),
                            (arm.UC_ARM_REG_R2, case.get('arguments', 2)), (arm.UC_ARM_REG_R3, case.get('base', 5))):
        machine.reg_write(register, value)
    protected = {getattr(arm, 'UC_ARM_REG_R' + str(index)): 0x51330000 + index * 0x517 for index in range(4, 12)}
    protected.update({getattr(arm, 'UC_ARM_REG_D' + str(index)): 0x7717339933110000 + index for index in range(8, 16)})
    for register, value in protected.items():
        machine.reg_write(register, value)
    fixture_ranges = [(component['functions'][name]['address'], component['functions'][name]['address'] + component['functions'][name]['bytes'])
                      for name in ('sq_wave004_native', 'sq_wave004_release')]
    allowed = component['functionRanges'] if source else ORIGINAL_RANGES + fixture_ranges
    expected, unused = model.model(case, source)
    frame_address = expected['frameAddress']
    state = {'cursor': model.HEAP + 0x10000, 'services': [], 'terminal': None, 'visited': set(), 'handlerCalls': 0,
             'handlerReturn': None, 'handlerInactiveReads': []}

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
                if message not in ('Native stack overflow', 'wrong number of parameters'):
                    raise ValueError('Unexpected formatted-error service contract')
                state['services'].append({'operation': 'error', 'message': message})
            else:
                values = [uc.reg_read(register) for register in (arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2, arm.UC_ARM_REG_R3)]
                state['services'].append(dict(zip(('operation', 'index', 'mask', 'type'), ('type-error', *values))))
            clobber()
            return
        if address in (0x2fece8, 0x18388c):
            r0, r1, r2 = [uc.reg_read(register) for register in (arm.UC_ARM_REG_R0, arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2)]
            if address == 0x2fece8:
                result = 0 if case.get('allocationFails') else allocate(r0)
                state['services'].append({'operation': 'allocate', 'bytes': r0})
            else:
                result = allocate(r2)
                if r0:
                    if not model.HEAP <= r0 < r0 + r1 <= model.HEAP + model.HEAP_BYTES:
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
        if address in (model.NATIVE, 0x1b33dc):
            state['handlerCalls'] += 1
            state['handlerReturn'] = uc.reg_read(arm.UC_ARM_REG_LR)

    def access(uc, kind, address, size, value, unused):
        if kind == unicorn.UC_MEM_READ and state['handlerReturn'] is not None and frame_address is not None:
            if any(address < frame_address + offset + 4 and address + size > frame_address + offset for offset in model.INACTIVE_OFFSETS):
                state['handlerInactiveReads'].append(uc.reg_read(arm.UC_ARM_REG_PC))
        arena = model.HEAP <= address < address + size <= model.HEAP + model.HEAP_BYTES
        frame = sp - 1024 <= address < address + size <= sp + 8
        if source:
            pool = any(section['address'] <= address < address + size <= section['address'] + len(section['data']) for section in component['sections'])
        else:
            pool = any(low <= address < address + size <= high for low, high in
                       ((0x197330, 0x19736c), (0x1975ac, 0x1975b0), (0x665af8, 0x665b00), (0x1b3530, 0x1b3538), (0x8c06e8, 0x8c06f0)))
        if not (arena or frame or kind == unicorn.UC_MEM_READ and pool):
            raise ValueError('Read/write escaped owned arena, bounded frame or literals: ' + hex(address))

    machine.hook_add(unicorn.UC_HOOK_CODE, instruction)
    machine.hook_add(unicorn.UC_HOOK_MEM_READ | unicorn.UC_HOOK_MEM_WRITE, access)
    machine.emu_start(0x196f6c, END + 4, timeout=3000000, count=100000)
    if state['terminal'] is None:
        raise ValueError('No genuine return or separate terminal assertion')
    if state['terminal'] == 'returned':
        if machine.reg_read(arm.UC_ARM_REG_SP) != sp or any(machine.reg_read(register) != value for register, value in protected.items()):
            raise ValueError('Callee-saved SP/integer/VFP ABI changed')
    final_stack = bytes(machine.mem_read(STACK, 0x10000))
    if final_stack[:0xfb00] != stack[:0xfb00] or final_stack[0xff00:] != stack[0xff00:]:
        raise ValueError('Live stack or outer guard changed')
    arena = bytes(machine.mem_read(model.HEAP, model.HEAP_BYTES))
    canonical = bytearray(arena)
    frame = expected['frameAddress']
    if frame is not None:
        for offset in model.INACTIVE_OFFSETS:
            model.put(canonical, frame + offset, 0)
    result = {'arenaSha256': model.sha(arena), 'semanticArenaSha256': model.sha(canonical), 'services': state['services'],
              'return': machine.reg_read(arm.UC_ARM_REG_R0) if state['terminal'] == 'returned' else None,
              'terminal': state['terminal'], 'frameAddress': frame, 'excludedInactiveBytes': 16 if frame is not None else 0}
    return result, {'returned': state['terminal'] == 'returned', 'handlerCalls': state['handlerCalls'],
                    'visited': sorted(state['visited']), 'sourceOnlyOwnedCodeExecuted': source,
                    'handlerInactiveFieldReads': state['handlerInactiveReads']}, arena
