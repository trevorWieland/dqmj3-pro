import hashlib
import json
from pathlib import Path
import struct
import unicorn
from unicorn import arm_const as arm
from native_state055_measure import ROOT, WORK, pin, original_image

ENTRY, END, GLOBAL = 0x6f95a4, 0x6f9684, 0x8bf790
ARENA, STACK, STOP = 0x2000000, 0x6000000, 0xfff0000
ARENA_BYTES = 0x10000


def u32(value):
    return value & 0xffffffff


def expected(case, initial):
    memory = bytearray(initial)
    count, base = case['count'], case['base']
    output, source, limit = case['output'], case['source'], case['limit']
    needed_words = u32((count & 0xfffffffe) + ((count >> 7) << 1) + 2)
    if limit <= u32(output + needed_words * 4):
        return memory, limit
    def read(address):
        return struct.unpack_from('<I', memory, address-ARENA)[0]
    def write(address, value):
        struct.pack_into('<I', memory, address-ARENA, u32(value))
    for offset in range(0, count, 128):
        block = min(count-offset, 128)
        first = read(source + offset*4)
        write(output, first)
        write(output+4, u32(base+offset) | u32((block-1) << 20) | 0x800f0000)
        output += 8
        for index in range((block // 2) * 2):
            value = read(source + (offset+index+1)*4)
            write(output, value)
            output += 4
    return memory, output


def execute(case):
    image = original_image()
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.mem_map(ENTRY & -4096, 4096)
    cpu.mem_write(ENTRY, image[ENTRY-0x100000:END+4-0x100000])
    cpu.mem_map(GLOBAL & -4096, 4096)
    cpu.mem_map(ARENA, ARENA_BYTES)
    cpu.mem_map(STACK, 0x10000)
    cpu.mem_map(STOP, 4096)
    initial = b''.join(struct.pack('<I', u32(0x125a34d7 + index*0x9e3779b9)) for index in range(ARENA_BYTES//4))
    cpu.mem_write(ARENA, initial)
    cpu.mem_write(GLOBAL, struct.pack('<II', case['output'], case['limit']))
    cpu.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
    cpu.reg_write(arm.UC_ARM_REG_C1_C0_2, 0xf << 20)
    cpu.reg_write(arm.UC_ARM_REG_FPEXC, 0x40000000)
    sp = STACK + 0xc000
    cpu.reg_write(arm.UC_ARM_REG_SP, sp)
    cpu.reg_write(arm.UC_ARM_REG_LR, STOP)
    saved = [(arm.UC_ARM_REG_R4+index, 0x51000000+index*163) for index in range(8)]
    saved += [(arm.UC_ARM_REG_D8+index, 0x3ff0000000000000+index*131) for index in range(8)]
    for register, value in saved:
        cpu.reg_write(register, value)
    for register, value in zip([arm.UC_ARM_REG_R0, arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2],
                               [case['base'], case['count'], case['source']]):
        cpu.reg_write(register, value)
    coverage, reads, writes = set(), [], []
    def code(machine, address, size, unused):
        if not ENTRY <= address < END or size != 4 or machine.reg_read(arm.UC_ARM_REG_CPSR) & 32:
            raise ValueError('055 reference escaped the declared leaf')
        coverage.add(address)
    def memory(machine, access, address, size, value, unused):
        if ARENA <= address < ARENA+ARENA_BYTES or GLOBAL <= address < GLOBAL+8:
            event = [machine.reg_read(arm.UC_ARM_REG_PC), address, size]
            if access == unicorn.UC_MEM_WRITE:
                event.append(value)
                writes.append(event)
            else:
                reads.append(event)
    cpu.hook_add(unicorn.UC_HOOK_CODE, code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ | unicorn.UC_HOOK_MEM_WRITE, memory)
    cpu.emu_start(ENTRY, STOP, count=100000)
    assert cpu.reg_read(arm.UC_ARM_REG_PC) == STOP
    assert cpu.reg_read(arm.UC_ARM_REG_SP) == sp and all(cpu.reg_read(register) == value for register, value in saved)
    result = bytes(cpu.mem_read(ARENA, ARENA_BYTES))
    pair = list(struct.unpack('<II', bytes(cpu.mem_read(GLOBAL, 8))))
    model, cursor = expected(case, initial)
    assert result == bytes(model) and pair == [cursor, case['limit']]
    assert cpu.reg_read(arm.UC_ARM_REG_R0) == case['base']
    return dict(input=case, returned=True, savedIntegerVfpSpPreserved=True,
                r0=cpu.reg_read(arm.UC_ARM_REG_R0), finalPair=pair,
                fullDataArenaSha256=hashlib.sha256(result).hexdigest(), modelArenaEqual=True,
                originalInstructionPcs=sorted(coverage), originalReads=reads, originalWrites=writes)


def cases():
    rows = []
    for count in [0, 1, 2, 3, 6, 127, 128, 129, 130, 255, 256, 257, 258, 511, 512, 513, 1023, 1024, 4095, 4096]:
        budget = (count & ~1) + 2*(count >> 7) + 2
        for capacity in [budget-1, budget, budget+1]:
            output = ARENA+0x4000
            rows.append(dict(label=f'count-{count}-capacity-{capacity}', base=0x99, count=count,
                             output=output, source=ARENA+0x1000, limit=output+capacity*4))
    for delta in [-3, 0, 1, 2, 3]:
        for count in [1, 2, 6, 129]:
            output = ARENA+0x4000
            rows.append(dict(label=f'alias-{delta}-count-{count}', base=0xffffff80, count=count,
                             output=output, source=output+delta*4, limit=output+4096))
    for count in [0, 1, 2]:
        rows.append(dict(label=f'null-pair-count-{count}', base=0xfedcba98, count=count,
                         output=0, source=0, limit=0))
    return rows


def run():
    rows = [execute(case) for case in cases()]
    visited = set().union(*(set(row['originalInstructionPcs']) for row in rows))
    all_pcs = set(range(ENTRY, END, 4))
    result = dict(schemaVersion=1, status='actual-original-leaf-reference-measurement',
                  claim=pin(WORK/'claim.json'), producer=pin(Path(__file__).resolve()),
                  originalExecution=True, sourceComparison=False, cases=rows, referenceCases=len(rows),
                  instructions=56, visitedInstructions=len(visited), unvisitedPcs=sorted(all_pcs-visited),
                  admittedGlobalBinding='Only the two target pointer words at8bf790 are fixture-provisioned; complete context/startup ownership unqualified.',
                  originalCodeOrInstructionBytesPatched=False, renderingOrGameplayClaim=False,
                  sourceCreditGranted=0, originalPayloadsPublished=False)
    target = WORK/'reference.json'
    target.write_text(json.dumps(result, indent=2)+'\n')
    print(json.dumps(dict(report=pin(target), cases=len(rows), visited=len(visited), missing=len(all_pcs-visited))))
    return result


if __name__ == '__main__':
    run()
