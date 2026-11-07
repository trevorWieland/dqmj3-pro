import hashlib
import json
from pathlib import Path
import struct
import unicorn
from unicorn import arm_const as arm
from native_caller055_measure import WORK, pin, original_image

ARENA, ARENA_BYTES = 0x2000000, 0x10000
CONTEXT, DESCRIPTOR, OUTPUT = ARENA+0x1000, ARENA+0x3000, ARENA+0x6000
STACK, STOP = 0x6000000, 0xfff0000


def cases():
    rows = []
    def add(label, **updates):
        value = dict(label=label, unit=0, enabled=1, resource=0x20000008, format=0x1908,
                     firstFilter=0x2601, secondFilter=0x2703, firstWrap=0x2901, secondWrap=0x812f,
                     level=2, levels=5, width=65, height=127, tail=0xabcde123,
                     colors=[0, 0x3f000000, 0x3f800000, 0x3f800000], bias=0,
                     mode=0x6e00, capacity=256, aliasWord=None)
        value.update(updates)
        rows.append(value)
    for unit in range(4):
        for enabled in [0, 1]:
            for resource in [0, 0x20000008]:
                add(f'initial-{unit}-{enabled}-{resource:x}', unit=unit, enabled=enabled, resource=resource)
    for unit in range(3):
        for form in [0, 0x1906, 0x1907, 0x1908, 0x1909, 0x190a, 0x6040, 0x6050, 0x6700, 0x675a, 0x675b]:
            for filter_value in [0, 0x2600, 0x2601, 0x2700, 0x2701, 0x2702, 0x2703]:
                add(f'format-{unit}-{form:x}-{filter_value:x}', unit=unit, format=form, secondFilter=filter_value)
        for bias in [0, 0x80000000, 1, 0x80000001, 0xbf800000, 0x3f800000, 0xc1800000, 0x41800000,
                     0xc1800001, 0x41800001, 0x7f800000, 0xff800000, 0x7fc12345, 0x7f812345,
                     0x7f7fffff, 0xff7fffff]:
            add(f'bias-{unit}-{bias:x}', unit=unit, bias=bias)
        for wrap in [0, 0x2901, 0x812d, 0x812f, 0x8370]:
            add(f'wrap-{unit}-{wrap:x}', unit=unit, firstWrap=wrap, secondWrap=wrap)
        for capacity in [0, 8, 9, 12, 13, 14, 15]:
            add(f'capacity-{unit}-{capacity}', unit=unit, capacity=capacity)
        for alias in [0, 4, 12, 20]:
            add(f'cache-alias-{unit}-{alias}', unit=unit, aliasWord=alias)
        for level in [-1, -2147483648, 0, 17]:
            add(f'level-{unit}-{level}', unit=unit, level=level)
        add(f'negative-nearest-level-{unit}', unit=unit, level=-1, secondFilter=0x2701)
        add(f'unknown-mode-{unit}', unit=unit, mode=0)
        add(f'first-filter-unknown-{unit}', unit=unit, firstFilter=0)
        add(f'first-filter-nearest-{unit}', unit=unit, firstFilter=0x2600)
        for index, colors in enumerate([[0x80000000, 1, 0x80000001, 0xbf800000],
                                        [0x7f800000, 0xff800000, 0x7fc12345, 0x7f812345],
                                        [0x4f7fffff, 0x4f800000, 0x7f7fffff, 0xff7fffff],
                                        [0x3f000001, 0x3effffff, 0x3f7fffff, 0x3f800001],
                                        [0xbf000000, 0x40000000, 0x3dcccccd, 0x3f4ccccd]]):
            add(f'color-boundary-{unit}-{index}', unit=unit, colors=colors)
        for bits in [0x33800000, 0xb3800000, 0x3b000000, 0xbb000000, 0xb6800000, 0xb7000000]:
            add(f'bias-rounding-{unit}-{bits:x}', unit=unit, bias=bits)
        for width, height in [(0, 0), (2047, 2047), (2048, 2048), (0xffffffff, 0x80000000)]:
            add(f'dimensions-{unit}-{width:x}-{height:x}', unit=unit, width=width, height=height)
        for levels in [0, 1, 16, 0xffffffff]:
            add(f'levels-boundary-{unit}-{levels:x}', unit=unit, levels=levels)
    return rows


def initial(case):
    data = bytearray(b''.join(struct.pack('<I', (0x125a34d7+index*0x9e3779b9)&0xffffffff) for index in range(ARENA_BYTES//4)))
    def word(address, value):
        struct.pack_into('<I', data, address-ARENA, value&0xffffffff)
    word(CONTEXT+0xf8, case['mode'])
    for unit in range(4):
        data[CONTEXT+0x104+unit-ARENA] = case['enabled']
    values = {0:case['firstFilter'], 4:case['secondFilter'], 8:case['firstWrap'], 12:case['secondWrap'],
              0x14:case['level'], 0x28:case['bias'], 0x34:case['resource'], 0x40:case['width'],
              0x44:case['height'], 0x48:case['format'], 0x50:case['tail'], 0x68:case['levels']}
    for index, color in enumerate(case['colors']):
        values[0x18+index*4] = color
    for offset, value in values.items():
        word(DESCRIPTOR+offset, value)
    cursor = OUTPUT if case['aliasWord'] is None else CONTEXT+0x770+case['aliasWord']*4
    limit = cursor+case['capacity']*4 if case['aliasWord'] is None else CONTEXT+0x770+31*4
    return bytes(data), cursor, limit


def execute(case, image, claim):
    leaf = dict(entry=0x6f95a4, ranges=[dict(start=0x6f95a4, endExclusive=0x6f9684)],
                literalReads=[dict(start=0x6f9684, endExclusive=0x6f9688)])
    functions = claim['functions']+[leaf]
    parts = [part for row in functions for part in [*row['ranges'], *row['literalReads']]]
    pages = {STOP, 0x8bf000, 0x8c0000, 0x8c3000}
    for row in parts:
        pages.update(range(row['start']&-4096, (row['endExclusive']+4095)&-4096, 4096))
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    for page in sorted(pages):
        cpu.mem_map(page, 4096)
    cpu.mem_map(ARENA, ARENA_BYTES)
    cpu.mem_map(STACK, 0x10000)
    for row in parts:
        cpu.mem_write(row['start'], image[row['start']-0x100000:row['endExclusive']-0x100000])
    data, cursor, limit = initial(case)
    cpu.mem_write(ARENA, data)
    cpu.mem_write(0x8bf790, struct.pack('<II', cursor, limit))
    cpu.mem_write(0x8bfab0, struct.pack('<I', CONTEXT))
    cpu.mem_write(0x8c0324, struct.pack('<II', 0x20000000, 0x100))
    cpu.mem_write(0x8c33a0, struct.pack('<II', 0, 0x10000000))
    cpu.mem_write(0x8c33a8, struct.pack('<II', 0, 0))
    cpu.mem_write(0x8c33b8, struct.pack('<I', 0))
    cpu.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
    cpu.reg_write(arm.UC_ARM_REG_C1_C0_2, 0xf << 20)
    cpu.reg_write(arm.UC_ARM_REG_FPEXC, 0x40000000)
    cpu.reg_write(arm.UC_ARM_REG_FPSCR, 0)
    sp = STACK+0xc000
    cpu.reg_write(arm.UC_ARM_REG_SP, sp)
    cpu.reg_write(arm.UC_ARM_REG_LR, STOP)
    cpu.reg_write(arm.UC_ARM_REG_R0, DESCRIPTOR)
    cpu.reg_write(arm.UC_ARM_REG_R1, case['unit'])
    saved = [(getattr(arm, 'UC_ARM_REG_R'+str(index)), 0x51000000+index*163) for index in range(4, 12)]
    saved += [(getattr(arm, 'UC_ARM_REG_D'+str(index)), 0x3ff0000000000000+index*131) for index in range(8, 16)]
    for register, value in saved:
        cpu.reg_write(register, value)
    ranges = [part for row in functions for part in row['ranges']]
    pcs, writes = set(), []
    def code(machine, address, size, unused):
        assert size == 4 and not machine.reg_read(arm.UC_ARM_REG_CPSR)&32
        assert any(row['start'] <= address < row['endExclusive'] for row in ranges), hex(address)
        pcs.add(address)
    def memory(machine, access, address, size, value, unused):
        if STACK <= address < STACK+0x10000:
            return
        assert ARENA <= address and address+size <= ARENA+ARENA_BYTES or address == 0x8bf790, hex(address)
        writes.append([machine.reg_read(arm.UC_ARM_REG_PC), address, size, value])
    cpu.hook_add(unicorn.UC_HOOK_CODE, code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, memory)
    cpu.emu_start(0x7440bc, STOP, count=10000)
    assert cpu.reg_read(arm.UC_ARM_REG_PC) == STOP and cpu.reg_read(arm.UC_ARM_REG_SP) == sp
    assert all(cpu.reg_read(register) == value for register, value in saved)
    arena = bytes(cpu.mem_read(ARENA, ARENA_BYTES))
    pair = list(struct.unpack('<II', bytes(cpu.mem_read(0x8bf790, 8))))
    return dict(input=case, actualOriginalReturned=True, returned=cpu.reg_read(arm.UC_ARM_REG_R0),
                dataArenaSha256=hashlib.sha256(arena).hexdigest(), finalPair=pair,
                cacheWords=list(struct.unpack('<31I', arena[0x1770:0x17ec])),
                originalPcs=sorted(pcs), orderedWrites=writes, fpscr=cpu.reg_read(arm.UC_ARM_REG_FPSCR),
                savedIntegerVfpSpPreserved=True), arena


def run():
    image = original_image()
    claim = json.loads((WORK/'claim.json').read_text(encoding='utf-8'))
    rows = []
    for case in cases():
        try:
            row, arena = execute(case, image, claim)
            rows.append(row)
        except BaseException as error:
            (WORK/'selector-reference.failure.json').write_text(json.dumps(dict(case=case, error=repr(error)), indent=2)+'\n', encoding='utf-8')
            raise
    caller = next(row for row in claim['functions'] if row['entry'] == 0x7440bc)
    all_pcs = {pc for part in caller['ranges'] for pc in range(part['start'], part['endExclusive'], 4)}
    coverage = set().union(*(set(row['originalPcs']) for row in rows))
    result = dict(schemaVersion=1, status='actual-original-selector-root-before-source',
                  claim=pin(WORK/'claim.json'), producer=pin(Path(__file__).resolve()), caseSets=len(rows), cases=rows,
                  callerInstructionPcs=len(all_pcs), callerVisitedPcs=len(all_pcs&coverage),
                  callerUnvisitedPcs=sorted(all_pcs-coverage), originalProvidersExecuted=True,
                  sourceAuthored=False, productionGlobalInitializationQualified=False, sourceCreditGranted=0)
    path = WORK/'selector-reference.json'
    path.write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(dict(report=pin(path), cases=len(rows), visited=len(all_pcs&coverage), missing=len(all_pcs-coverage))))
    return result


if __name__ == '__main__':
    run()
