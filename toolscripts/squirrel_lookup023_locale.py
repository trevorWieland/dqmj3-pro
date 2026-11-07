import hashlib
import json
import struct

import unicorn
import inventory
from unicorn import arm_const as arm
from native_wave014_oracle import original_image
from native_material_wave011_build import ROOT, pin, save
from squirrel_lookup023_boundaries import region


CODE = [(0x104c58, 0x104ca4), (0x1054b0, 0x1054f0),
    (0x177494, 0x1774d4), (0x300190, 0x300198)]
POOLS = [(0x104ca4, 0x104cac), (0x1054f0, 0x1054f8),
    (0x1774d4, 0x1774dc), (0x300198, 0x30019c)]
LOCALE = 0x8f7d30


def mapped_contract():
    scope_path = ROOT / 'evidence/lanes/executable-scope/scope.json'
    if hashlib.sha256(scope_path.read_bytes()).hexdigest() != 'c974e6ed9d999276452bc35588b703d52ba1061aa4ffee6b166cbdda6d060dcf':
        raise ValueError('023 measured executable mapping changed')
    scope = json.loads(scope_path.read_text())
    expected = next(row['mainImage'] for row in scope['versions'] if row['version'] == 'update-content0')
    header_path = ROOT / 'generated/update-content0/exheader.bin'
    header = header_path.read_bytes()
    if hashlib.sha256(header).hexdigest() != expected['exheaderSha256']:
        raise ValueError('023 original ExHeader identity changed')
    layout = inventory.code_layout(header)
    if layout['segments'] != expected['segments']:
        raise ValueError('023 original writable segment mapping changed')
    data = next(row for row in layout['segments'] if row['name'] == 'data')
    start = data['address'] + data['initializedBytes']
    end = start + layout['bssBytes']
    if not start <= 0x8f7000 <= LOCALE < LOCALE + 20 <= 0x8f8000 <= end:
        raise ValueError('023 numeric locale page is outside measured BSS')
    return {'scope': pin(scope_path), 'exheader': pin(header_path),
        'reader': pin(ROOT / 'toolscripts/inventory.py'), 'bssStart': start, 'bssEndExclusive': end}


def initialize(cpu):
    mapped_contract()
    cpu.mem_map(0x8f7000, 4096)
    stack, stop = 0x6018000, 0xfff0100
    cpu.reg_write(arm.UC_ARM_REG_SP, stack)
    cpu.reg_write(arm.UC_ARM_REG_LR, stop)
    for index in range(8): cpu.reg_write(arm.UC_ARM_REG_R4 + index, 0x71000000 + index * 71)
    visited, reads, writes = set(), set(), set()

    def code(current, address, size, unused):
        if not any(start <= address < address + size <= end for start, end in CODE):
            raise ValueError('023 actual locale initializer code escaped: ' + hex(address))
        if size != 4 or current.reg_read(arm.UC_ARM_REG_CPSR) & 0x20:
            raise ValueError('023 locale initializer mode changed')
        visited.add(address)

    def memory(current, access, address, size, value, unused):
        on_stack = stack - 128 <= address < address + size <= stack
        in_locale = LOCALE <= address < address + size <= LOCALE + 20
        if access == unicorn.UC_MEM_WRITE:
            if not (on_stack or in_locale): raise ValueError('023 locale initializer write escaped')
            writes.add((address, size))
        else:
            pool = any(start <= address < address + size <= end for start, end in POOLS)
            if not (on_stack or pool): raise ValueError('023 locale initializer read escaped: ' + hex(address))
            reads.add((address, size))
    ch = cpu.hook_add(unicorn.UC_HOOK_CODE, code)
    mh = cpu.hook_add(unicorn.UC_HOOK_MEM_READ | unicorn.UC_HOOK_MEM_WRITE, memory)
    try: cpu.emu_start(0x104c58, stop, count=1000)
    finally: cpu.hook_del(ch); cpu.hook_del(mh)
    if cpu.reg_read(arm.UC_ARM_REG_PC) != stop or cpu.reg_read(arm.UC_ARM_REG_SP) != stack:
        raise ValueError('023 actual locale initializer did not return')
    if any(cpu.reg_read(arm.UC_ARM_REG_R4 + i) != 0x71000000 + i * 71 for i in range(8)):
        raise ValueError('023 locale initializer changed saved registers')
    actual = bytes(cpu.mem_read(LOCALE, 20))
    if struct.unpack('<5I', actual) != (0, 0x8863c1, 0, 0x8864dc, 0):
        raise ValueError('023 actual C-locale initialization differs')
    return {'visited': sorted(visited), 'reads': sorted(reads), 'writes': sorted(writes),
        'initializedLocaleSha256': hashlib.sha256(actual).hexdigest()}


def receipt(observed):
    image = original_image()
    branch = struct.unpack_from('<I', image, 4)[0]
    displacement = (branch & 0xffffff) << 2
    if displacement & (1 << 25): displacement -= 1 << 26
    if branch >> 24 != 0xeb or 0x100004 + 8 + displacement != 0x104c58:
        raise ValueError('023 startup locale initialization witness changed')
    record = {'schemaVersion': 1, 'status': 'actual-original-c-locale-initializer-executed',
        'moduleSha256': hashlib.sha256(image).hexdigest(),
        'startupCall': region(image, 0x100004, 0x100008), 'entry': 0x104c58,
        'code': [region(image, a, b) for a, b in CODE],
        'pools': [region(image, a, b) for a, b in POOLS],
        'zeroInitializedBssPage': {'start': 0x8f7000, 'bytes': 4096},
        'measuredOriginalBssContract': mapped_contract(),
        'actualLocaleState': {'start': LOCALE, 'bytes': 20},
        'defaultNumericLocale': region(image, 0x8864dc, 0x8864ec),
        'decimalPointByte': 46, 'pointersInventedOrSeeded': False,
        'instructionsObserved': observed['visited'], 'dataReads': observed['reads'],
        'writes': observed['writes'], 'initializedLocaleSha256': observed['initializedLocaleSha256'],
        'sourceModeOriginalLocaleOrImageMapped': False, 'sdkSourceOrInventoryCreditGranted': 0,
        'producer': pin(ROOT / 'toolscripts/squirrel_lookup023_locale.py'),
        'originalPayloadsPublished': False}
    save(ROOT / 'evidence/lanes/squirrel-lookup023/reference-locale-precondition.json', record)
    return record
