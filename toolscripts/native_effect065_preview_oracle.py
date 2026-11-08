import ctypes
import json
import struct

import unicorn as uc
from unicorn import arm_const as ar, arm64_const as aa

import native_effect065_build as common
from native_wave013_file_owner_reference_image import ReferenceImage


ROOT = common.ROOT
LAYOUT = ['pointer', 'previewBytes', 'vectorBytes', 'entryBytes', 'cacheBytes', 'cacheBegin',
    'primary', 'vector', 'recordBytes', 'role', 'logical', 'physical', 'live', 'fixtureBytes',
    'allocations', 'released', 'arena']


def layout_from(read, address):
    return dict(zip(LAYOUT, struct.unpack('<' + 'I' * len(LAYOUT), read(address, 4 * len(LAYOUT))), strict=True))


class Machine:
    def __init__(self, profile, elf):
        self.original, self.a64 = profile == 'original', profile == 'a64'
        self.cpu = uc.Uc(uc.UC_ARCH_ARM64 if self.a64 else uc.UC_ARCH_ARM, 0 if self.a64 else uc.UC_MODE_ARM)
        if not self.a64:
            self.cpu.ctl_set_cpu_model(ar.UC_CPU_ARM_11MPCORE)
            self.cpu.reg_write(ar.UC_ARM_REG_C1_C0_2, 0xf00000)
            self.cpu.reg_write(ar.UC_ARM_REG_FPEXC, 0x40000000)
        else:
            self.cpu.reg_write(aa.UC_ARM64_REG_CPACR_EL1, 3 << 20)
        self.reference = ReferenceImage() if self.original else None
        if self.original:
            self.reference.map(self.cpu)
        self.graph = common.read_elf(elf)
        self.functions = {name: item['address'] for name, item in self.graph['functions'].items()}
        pages = set()
        for segment in self.graph['segments']:
            for page in range(segment['address'] & ~4095, (segment['address'] + segment['bytes'] + 4095) & ~4095, 4096):
                if page not in pages:
                    self.cpu.mem_map(page, 4096)
                    pages.add(page)
            self.cpu.mem_write(segment['address'], segment['fileBytes'])
        self.base = 0x120000000 if self.a64 else 0x20000000
        self.stack = 0x130000000 if self.a64 else 0x30000000
        self.stop = self.stack + 0x40000
        self.cpu.mem_map(self.base, 0x100000)
        self.cpu.mem_map(self.stack, 0x40000)
        self.cpu.mem_map(self.stop, 4096, uc.UC_PROT_READ | uc.UC_PROT_EXEC)
        self.pointer = 8 if self.a64 else 4
        self.cache, self.entry, self.input = self.base + 0x100, self.base + 0x500, self.base + 0x1000
        self.layout = layout_from(self.read, self.graph['objects']['effect_preview_layout065']['address'])
        self.pcs, self.witnesses, self.transitions = set(), {}, []
        self.last_pc, self.active, self.phase = None, False, 'setup'
        self.retired, self.retired_reads, self.sdk_writes, self.provider_calls = [], [], [], []
        self.cpu.hook_add(uc.UC_HOOK_CODE, self.code)
        self.cpu.hook_add(uc.UC_HOOK_MEM_WRITE, self.write)
        self.cpu.hook_add(uc.UC_HOOK_MEM_READ, self.memory_read)
        self.state = self.invoke('effect_preview_fixture065_state', [])
        self.heap = self.invoke('effect_preview_fixture065_heap', [])
        if not self.original:
            memory = self.invoke('effect_preview_fixture065_memory', [])
            self.invoke('effect_bind_cache_memory065', [memory])
        else:
            for address, value, size in [(0x89a670, 0xf531, 4), (0x8bfb54, 0x531, 4),
                (0x89a688, self.heap, 4), (0x89a508, 1, 1)]:
                self.put(address, value, size)

    def read(self, address, size):
        return bytes(self.cpu.mem_read(address, size))

    def put(self, address, value, size=None):
        size = self.pointer if size is None else size
        self.cpu.mem_write(address, (value & ((1 << (8 * size)) - 1)).to_bytes(size, 'little'))

    def code(self, cpu, address, size, user):
        if address == self.stop:
            self.returned = True
            cpu.emu_stop()
            return
        rows = [(name, row) for name, row in self.graph['functions'].items()
                if row['address'] <= address < address + size <= row['address'] + row['bytes']]
        if rows:
            name, row = rows[0]
            if self.original and address == row['address'] and name == 'effect_preview_original_allocate065':
                call = {'heap': cpu.reg_read(ar.UC_ARM_REG_R0), 'bytes': cpu.reg_read(ar.UC_ARM_REG_R1),
                    'alignmentRawU32': cpu.reg_read(ar.UC_ARM_REG_R2)}
                if call['heap'] != self.heap or call['alignmentRawU32'] != 4:
                    raise ValueError('Preview original heap/alignment precondition differs')
                self.provider_calls.append(call)
            if not any(part['kind'] in ['$a', '$x'] and part['start'] <= address < address + size <= part['endExclusive']
                       for part in row['mappingSpans']) or size != 4:
                raise ValueError('Preview executed outside compiler instruction mapping ranges')
            if self.original and not (name.startswith('effect_preview_') or name in ['preview_allocate065', 'preview_release065']):
                raise ValueError('Original preview executed an authored game helper: ' + name)
            if not self.a64 and cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32:
                raise ValueError('Compiled preview/provider entered incorrect instruction mode')
        elif self.original:
            owner, instruction = self.reference.instruction(cpu, address, size)
            mode = 'Thumb' if cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32 else 'ARM'
            self.witnesses[address] = {'address': address, 'mode': mode, 'bytes': size, 'owner': owner,
                'sha256': common.hashlib.sha256(self.read(address, size)).hexdigest()}
        else:
            raise ValueError('Source preview executed outside exact compiler-owned functions')
        self.pcs.add(address)
        if self.last_pc is not None and address != self.last_pc + size:
            self.transitions.append([self.last_pc, address])
        self.last_pc = address

    def write(self, cpu, access, address, size, value, user):
        if not self.active:
            return
        ranges = [(self.entry, self.entry + self.layout['entryBytes']), (self.stack, self.stack + 0x40000)]
        if self.phase == 'body':
            ranges.append((self.state, self.state + self.layout['fixtureBytes']))
        else:
            ranges += [(segment['address'], segment['address'] + segment['bytes']) for segment in self.graph['segments']
                       if segment['flags'] & 2]
        if self.original:
            ranges.append(self.reference.writable)
            if self.reference.writable[0] <= address < address + size <= self.reference.writable[1]:
                self.sdk_writes.append({'pc': cpu.reg_read(ar.UC_ARM_REG_PC), 'address': address, 'bytes': size})
        if not any(low <= address < address + size <= high for low, high in ranges):
            raise ValueError('Preview write outside declared caller/provider/SDK mutable storage')
        if self.phase == 'body' and size == 4 and value == 0:
            for index in range(int.from_bytes(self.read(self.state + 4, 4), 'little')):
                record = self.state + self.layout['allocations'] + index * self.layout['recordBytes']
                if address == record + self.layout['live']:
                    memory = int.from_bytes(self.read(record, self.pointer), 'little')
                    physical = int.from_bytes(self.read(record + self.layout['physical'], self.pointer), 'little')
                    self.retired.append((memory, memory + physical))

    def memory_read(self, cpu, access, address, size, value, user):
        if not self.active:
            return
        ranges = [(self.base, self.base + 0x100000), (self.stack, self.stack + 0x40000)]
        ranges += [(segment['address'], segment['address'] + segment['bytes']) for segment in self.graph['segments']]
        if self.original:
            ranges += [(row['address'], row['address'] + row['pages'] * 4096)
                       for row in self.reference.layout['segments']]
            ranges.append(self.reference.writable)
        if not any(low <= address < address + size <= high for low, high in ranges):
            raise ValueError('Preview read outside explicit image/provider/caller/live-stack backing')
        if self.phase == 'body' and any(max(low, address) < min(high, address + size) for low, high in self.retired):
            self.retired_reads.append({'address': address, 'bytes': size})
            raise ValueError('Preview read retired owned allocation payload')

    def invoke(self, name, args, translation=None):
        self.returned, self.active = False, True
        if self.a64:
            register = lambda index: getattr(aa, 'UC_ARM64_REG_X' + str(index))
            saved = [(register(index), 0x6500000000000000 + index) for index in range(19, 30)]
            sp, lr, fp = aa.UC_ARM64_REG_SP, aa.UC_ARM64_REG_LR, aa.UC_ARM64_REG_FPSR
            floating_saved = [(getattr(aa, 'UC_ARM64_REG_D' + str(index)), 0x3fe0000000000000 + index) for index in range(8, 16)]
        else:
            register = lambda index: getattr(ar, 'UC_ARM_REG_R' + str(index))
            saved = [(register(index), 0x65000000 + index) for index in range(4, 12)]
            sp, lr, fp = ar.UC_ARM_REG_SP, ar.UC_ARM_REG_LR, ar.UC_ARM_REG_FPSCR
            self.cpu.reg_write(ar.UC_ARM_REG_CPSR, 0x1f)
            floating_saved = [(getattr(ar, 'UC_ARM_REG_D' + str(index)), 0x3fe0000000000000 + index) for index in range(8, 16)]
        for item, value in saved + floating_saved:
            self.cpu.reg_write(item, value)
        for index, value in enumerate(args):
            self.cpu.reg_write(register(index), value)
        if translation is not None:
            for index, bits in enumerate(translation):
                item = getattr(aa if self.a64 else ar,
                    ('UC_ARM64_REG_S' if self.a64 else 'UC_ARM_REG_S') + str(index))
                self.cpu.reg_write(item, bits)
        self.cpu.reg_write(sp, self.stack + 0x3fff0)
        self.cpu.reg_write(lr, self.stop)
        self.cpu.reg_write(fp, 0)
        self.phase = 'body' if name == 'fn_002a41c4' else 'setup'
        address = 0x2a41c4 if self.original and name == 'fn_002a41c4' else self.functions[name]
        self.cpu.emu_start(address, self.stop + 4, count=3000000)
        self.active = False
        if not self.returned or any(self.cpu.reg_read(item) != value for item, value in saved + floating_saved):
            raise ValueError('Preview return/callee-save contract differs')
        if self.cpu.reg_read(sp) != self.stack + 0x3fff0:
            raise ValueError('Preview did not restore actual caller stack')
        self.fp_after = self.cpu.reg_read(fp)
        return self.cpu.reg_read(register(0))

    def prepare(self, count, records):
        self.retired, self.retired_reads = [], []
        self.cpu.mem_write(self.state, bytes([0xa5]) * self.layout['fixtureBytes'])
        self.cpu.mem_write(self.state, bytes(16))
        self.cpu.mem_write(self.cache - 32, bytes([0xa5]) * (self.layout['cacheBytes'] + 64))
        self.cpu.mem_write(self.entry - 32, bytes([0xa5]) * (self.layout['entryBytes'] + 64))
        self.put(self.cache + self.layout['cacheBegin'], self.entry)
        self.put(self.entry + self.layout['primary'], 0)
        for offset in range(0, self.layout['vectorBytes'], self.pointer):
            self.put(self.entry + self.layout['vector'] + offset, 0)
        self.cpu.mem_write(self.input, struct.pack('<II', 0x65000001, count & 0xffffffff) + records)


def smoke():
    folder = ROOT / 'work/native-effect065/preview-build-v2'
    machine = Machine('original', folder / 'arm/effect_preview.elf')
    records = bytearray(bytes([0x5a]) * 320)
    struct.pack_into('<3f', records, 260, 1, 2, 3)
    machine.prepare(1, records)
    try:
        machine.invoke('fn_002a41c4', [machine.cache, 0, machine.input],
                       list(struct.unpack('<3I', struct.pack('<3f', 10, 20, 30))))
    except Exception as error:
        report = {'status': 'preserved-first-preview-reference-stop', 'error': str(error),
            'pc': machine.cpu.reg_read(ar.UC_ARM_REG_PC), 'witnesses': list(machine.witnesses.values()),
            'transitions': machine.transitions, 'sourceCreditGranted': 0}
        path = ROOT / 'work/native-effect065/preview-reference-stop-v1.json'
        if path.exists():
            raise ValueError('Preserve first preview reference stop') from error
        path.write_text(json.dumps(report, indent=2) + '\n')
        raise
    path = ROOT / 'work/native-effect065/preview-original-first-v1.json'
    if path.exists():
        raise ValueError('Preserve original first preview')
    report = {'status': 'first-preview-original-reference-return', 'layout': machine.layout,
        'fixtureState': machine.state, 'fixturePrefixHex': machine.read(machine.state, 16).hex(),
        'entryHex': machine.read(machine.entry, machine.layout['entryBytes']).hex(),
        'witnesses': list(machine.witnesses.values()), 'sourceCreditGranted': 0}
    path.write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({key: value for key, value in report.items() if key != 'witnesses'}))


if __name__ == '__main__':
    smoke()
