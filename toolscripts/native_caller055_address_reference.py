import hashlib
import json
from pathlib import Path
import struct
import unicorn
from unicorn import arm_const as arm
from native_caller055_measure import WORK, ROOT, pin, original_image

STACK, STOP = 0x6000000, 0xfff0000


def u32(value):
    return value & 0xffffffff


def expected(case):
    address = case['address']
    first, second = case['first'], case['second']
    if first['base'] <= address < u32(first['base']+first['length']):
        result = u32(address+first['offset'])
        if result:
            return result
    if 0x1f000000 <= address <= 0x1f600000:
        return address-0x7000000
    if second['length'] and second['base'] <= address < u32(second['base']+second['length']):
        result = u32(address+second['offset'])
        if result:
            return result
    region = case['objectAddress']
    start = u32(region+128) if region else 0
    if start and start <= address < u32(start+case['objectLength']):
        return u32(address-0x10000000 if start >= 0x30000000 else address+0xc000000)
    return 0


def cases():
    rows = []
    states = [
        ('empty', (0, 0, 0), (0, 0, 0), 0, 0),
        ('first-zero-result', (0x20000000, 64, 0xe0000000), (0, 0, 0), 0, 0),
        ('first-converted', (0x20000000, 64, 0x10000000), (0, 0, 0), 0, 0),
        ('second-zero-result', (0, 0, 0), (0x22000000, 64, 0xddffffff), 0, 0),
        ('first-priority', (0x22000000, 64, 0x10000000), (0x22000000, 64, 0x20000000), 0, 0),
        ('low-object', (0, 0, 0), (0, 0, 0), 0x4000100, 64),
        ('middle-object', (0, 0, 0), (0, 0, 0), 0x14000100, 64),
        ('high-object', (0, 0, 0), (0, 0, 0), 0x30000100, 64),
        ('empty-object', (0, 0, 0), (0, 0, 0), 0x14000100, 0),
        ('wrap-first-window', (0xfffffff0, 64, 0x12345678), (0, 0, 0), 0, 0),
        ('wrap-second-window', (0, 0, 0), (0xfffffff0, 64, 0x12345678), 0, 0),
    ]
    for label, first, second, region, length in states:
        addresses = {0, 1, 0xffffffff, 0x1effffff, 0x1f000000, 0x1f000001, 0x1f5fffff, 0x1f600000, 0x1f600001}
        for base, size, offset in [first, second]:
            addresses.update(u32(base+delta) for delta in [-1, 0, 1, size-1, size, size+1])
        if region:
            addresses.update(region+128+delta for delta in [-1, 0, 1, length-1, length, length+1])
        for address in sorted(addresses):
            rows.append(dict(label=label+'-'+hex(address), address=address,
                             first=dict(zip(['base', 'length', 'offset'], first)),
                             second=dict(zip(['base', 'length', 'offset'], second)),
                             objectAddress=region, objectLength=length))
    return rows


def execute(case, image, claim):
    functions = [row for row in claim['functions'] if row['entry'] != 0x7440bc]
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    pages = {STACK, STOP, 0x8c0000, 0x8c3000}
    parts = []
    for function in functions:
        for row in [*function['ranges'], *function['literalReads']]:
            parts.append(row)
            pages.update(range(row['start']&-4096, (row['endExclusive']+4095)&-4096, 4096))
    if case['objectAddress']:
        pages.add(case['objectAddress']&-4096)
    for page in sorted(pages):
        cpu.mem_map(page, 4096)
    for row in parts:
        cpu.mem_write(row['start'], image[row['start']-0x100000:row['endExclusive']-0x100000])
    cpu.mem_write(0x8c0324, struct.pack('<II', case['first']['base'], case['first']['length']))
    cpu.mem_write(0x8c33a0, struct.pack('<II', case['second']['offset'], case['first']['offset']))
    cpu.mem_write(0x8c33a8, struct.pack('<II', case['second']['base'], case['second']['length']))
    cpu.mem_write(0x8c33b8, struct.pack('<I', case['objectAddress']))
    if case['objectAddress']:
        cpu.mem_write(case['objectAddress']+8, struct.pack('<I', case['objectLength']))
    cpu.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
    cpu.reg_write(arm.UC_ARM_REG_C1_C0_2, 0xf << 20)
    cpu.reg_write(arm.UC_ARM_REG_FPEXC, 0x40000000)
    sp = STACK+0xf00
    cpu.reg_write(arm.UC_ARM_REG_SP, sp)
    cpu.reg_write(arm.UC_ARM_REG_LR, STOP)
    cpu.reg_write(arm.UC_ARM_REG_R0, case['address'])
    saved = [(getattr(arm, 'UC_ARM_REG_R'+str(index)), 0x51000000+index*163) for index in range(4, 12)]
    saved += [(getattr(arm, 'UC_ARM_REG_D'+str(index)), 0x3ff0000000000000+index*131) for index in range(8, 16)]
    for register, value in saved:
        cpu.reg_write(register, value)
    ranges = [part for row in functions for part in row['ranges']]
    pcs, reads, writes = set(), [], []
    def code(machine, address, size, unused):
        assert size == 4 and not machine.reg_read(arm.UC_ARM_REG_CPSR)&32
        assert any(row['start'] <= address < row['endExclusive'] for row in ranges), hex(address)
        pcs.add(address)
    def memory(machine, access, address, size, value, unused):
        if STACK <= address < STACK+4096:
            return
        event = [machine.reg_read(arm.UC_ARM_REG_PC), address, size]
        if access == unicorn.UC_MEM_WRITE:
            writes.append(event+[value])
        else:
            reads.append(event)
    cpu.hook_add(unicorn.UC_HOOK_CODE, code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ | unicorn.UC_HOOK_MEM_WRITE, memory)
    cpu.emu_start(0x166b28, STOP, count=10000)
    assert cpu.reg_read(arm.UC_ARM_REG_PC) == STOP
    assert cpu.reg_read(arm.UC_ARM_REG_SP) == sp
    assert all(cpu.reg_read(register) == value for register, value in saved)
    returned = cpu.reg_read(arm.UC_ARM_REG_R0)
    assert returned == expected(case), (case, hex(returned), hex(expected(case)))
    assert not writes
    return dict(input=case, returned=returned, actualOriginalReturned=True,
                savedIntegerVfpSpPreserved=True, originalPcs=sorted(pcs), reads=reads, nonStackWrites=writes)


def run():
    image = original_image()
    claim = json.loads((WORK/'claim.json').read_text(encoding='utf-8'))
    rows = []
    for case in cases():
        try:
            rows.append(execute(case, image, claim))
        except BaseException as error:
            (WORK/'address-reference.failure.json').write_text(json.dumps(dict(case=case, error=repr(error)), indent=2)+'\n', encoding='utf-8')
            raise
    coverage = set().union(*(set(row['originalPcs']) for row in rows))
    functions = [row for row in claim['functions'] if row['entry'] != 0x7440bc]
    all_pcs = {pc for row in functions for part in row['ranges'] for pc in range(part['start'], part['endExclusive'], 4)}
    result = dict(schemaVersion=1, status='actual-original-address-helper-graph-before-source',
                  claim=pin(WORK/'claim.json'), producer=pin(Path(__file__).resolve()),
                  caseSets=len(rows), cases=rows, instructionPcs=len(all_pcs),
                  visitedInstructionPcs=len(coverage), unvisitedPcs=sorted(all_pcs-coverage),
                  originalInputImagePatched=False, explicitMutableGlobalFixtureBindings=True,
                  productionInitializationQualified=False, nativePhysicalAddressClaimed=False,
                  sourceAuthored=False, sourceCreditGranted=0)
    path = WORK/'address-reference.json'
    path.write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(dict(report=pin(path), cases=len(rows), visited=len(coverage), missing=len(all_pcs-coverage))))
    return result


if __name__ == '__main__':
    run()
