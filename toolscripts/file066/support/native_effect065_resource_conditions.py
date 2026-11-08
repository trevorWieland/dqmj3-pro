from unicorn import arm_const as ar


def flags_allow(condition, cpsr):
    n, z, c, v = [(cpsr >> shift) & 1 for shift in [31, 30, 29, 28]]
    return [z != 0, z == 0, c != 0, c == 0, n != 0, n == 0, v != 0, v == 0,
        c != 0 and z == 0, c == 0 or z != 0, n == v, n != v,
        z == 0 and n == v, z != 0 or n != v, True, True][condition]


def condition_for_instruction(cpu, address, size, mode):
    cpsr = cpu.reg_read(ar.UC_ARM_REG_CPSR)
    raw = bytes(cpu.mem_read(address, size))
    if mode == 'ARM':
        if size != 4:
            raise ValueError('ARM predicate accounting requires a complete four-byte instruction')
        condition = raw[3] >> 4
    else:
        state = ((cpsr >> 25) & 3) | ((cpsr >> 8) & 0xfc)
        half = int.from_bytes(raw[:2], 'little')
        if state:
            condition = state >> 4
        elif size == 2 and half & 0xf000 == 0xd000 and (half >> 8 & 15) < 14:
            condition = half >> 8 & 15
        elif size == 4 and half & 0xf800 == 0xf000 and int.from_bytes(raw[2:], 'little') & 0xd000 == 0x8000:
            condition = half >> 6 & 15
            if condition >= 14:
                condition = 14
        else:
            condition = 14
    return condition, cpsr, flags_allow(condition, cpsr)


def observe(cpu, address, size, mode, counters):
    condition, cpsr, satisfied = condition_for_instruction(cpu, address, size, mode)
    row = counters.setdefault(address, {'address': address, 'mode': mode, 'bytes': size,
        'hookEncounters': 0, 'conditionSatisfied': 0, 'conditionFailed': 0, 'conditions': set()})
    row['hookEncounters'] += 1
    row['conditionSatisfied' if satisfied else 'conditionFailed'] += 1
    row['conditions'].add(condition)
    return satisfied


def serializable(counters):
    return [{**row, 'conditions': sorted(row['conditions'])} for address, row in sorted(counters.items())]
