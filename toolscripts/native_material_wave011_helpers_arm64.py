import io
import random
import struct

from elftools.elf.elffile import ELFFile
import unicorn
import unicorn.arm64_const as arm

from native_material_wave011_build import ROOT, WORK, command, pin, save, sha
from native_material_wave011_helpers_native import Material, original_state, normalize


INPUT, OBJECT, STORAGE, STACK, RETURN, ALLOCATE, RESOLVE = 0x10000000, 0x12001000, 0x12004000, 0x11010000, 0x2000000, 0x13000000, 0x13000004


def link(android, folder):
    folder.mkdir(parents=True, exist_ok=True)
    objects = [ROOT / row['path'] for row in android['objects']]
    for row, path in zip(android['objects'], objects):
        if pin(path) != row:
            raise ValueError('Actual Android compiler object changed before CPU-model link')
    script = folder / 'component.ld'
    script.write_text('SECTIONS { .vtable 0x857ed8 : { KEEP(*(.rodata.material_vtable)) }\n' +
        '.heap 0x89a918 : { KEEP(*(.material_heap)) }\n' +
        '.text 0xf00000 : { *(.text.fn_00554a30) *(.text*) } .rodata : { *(.rodata*) }\n' +
        '.got : { *(.got*) } .data : { *(.data*) }\n' +
        '/DISCARD/ : { *(.eh_frame*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
    linked = folder / 'android-object-model.elf'
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'aarch64elf', '--no-undefined', '--build-id=none',
        '--entry=fn_00554a30', '-T', script, *objects, '-o', linked], folder / 'link.json')
    elf = ELFFile(io.BytesIO(linked.read_bytes()))
    table = elf.get_section_by_name('.symtab')
    if any(symbol.name and symbol['st_shndx'] == 'SHN_UNDEF' for symbol in table.iter_symbols()):
        raise ValueError('AArch64 model has unresolved sources')
    blocks, executable = [], []
    for section in elf.iter_sections():
        if section['sh_flags'] & 2 and section['sh_size']:
            if section['sh_type'] != 'SHT_PROGBITS':
                raise ValueError('AArch64 model non-file-backed allocation')
            blocks.append((section['sh_addr'], section.data()))
            if section['sh_flags'] & 4:
                executable.append((section['sh_addr'], section['sh_addr'] + section['sh_size']))
    entry = table.get_symbol_by_name('fn_00554a30')[0]['st_value']
    receipt = {'linkedElf': pin(linked), 'linkerScript': pin(script), 'entry': entry,
        'androidObjects': android['objects'], 'sameActualAndroidObjectFiles': True,
        'originalExecutableImageRequired': False, 'androidDeviceExecution': False}
    save(folder / 'build.json', receipt)
    return blocks, executable, entry, receipt


def execute(blocks, executable, entry, case, original, seed, skew=0):
    if skew not in [0, 4]:
        raise ValueError('Component requires at least four-byte object/storage alignment')
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM64, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(arm.UC_CPU_ARM64_A72)
    sctlr = cpu.cpr_read(3, 0, 1, 0, 0)
    if sctlr & 2:
        raise ValueError('Alignment-fault-enabled model is outside the qualified component memory contract')
    mapped = set()
    for address, raw in blocks:
        for page in range(address & -4096, (address + len(raw) + 4095) & -4096, 4096):
            if page not in mapped:
                cpu.mem_map(page, 4096)
                mapped.add(page)
        cpu.mem_write(address, raw)
    rng = random.Random(seed)
    for address, size in [(INPUT, 0x10000), (0x12000000, 0x10000), (0x11000000, 0x20000)]:
        cpu.mem_map(address, size)
        cpu.mem_write(address, rng.randbytes(size))
    for address in [RETURN, ALLOCATE]:
        cpu.mem_map(address, 4096)
    wire, replacement, names = INPUT + skew, INPUT + 0x2000 + skew, INPUT + 0x4000 + skew
    object_address, storage = OBJECT + skew, STORAGE + skew
    cpu.mem_write(wire, case['wire'])
    cpu.mem_write(replacement, case['replacement'] or b'\0' * 40)
    cpu.mem_write(names, case['names'])
    primary, alternate, accessor, vtable, context = [INPUT + offset + skew for offset in [0xb000, 0xb100, 0xb200, 0xb300, 0xb400]]
    cpu.mem_write(primary, struct.pack('<QIIQ', names, 0, 0, accessor))
    cpu.mem_write(alternate, struct.pack('<QIIQ', names, 0, 0, accessor + 0x40))
    for address in [accessor, accessor + 0x40]:
        cpu.mem_write(address, struct.pack('<Q', vtable))
    cpu.mem_write(vtable, b'\0' * 40 + struct.pack('<Q', RESOLVE))
    cpu.mem_write(context + 32, struct.pack('<QQHHH', primary, alternate, int(case['mode'] == 3), 0, int(case['mode'] == 1)))
    heap = INPUT + 0xf000 + skew
    cpu.mem_write(heap, struct.pack('<Q', heap + 0x20))
    cpu.mem_write(heap + 0x20, struct.pack('<4Q', 0, 0, ALLOCATE, 0))
    cpu.mem_write(0x89a918, struct.pack('<Q', heap))
    for index in range(16):
        cpu.mem_write(INPUT + 0xc000 + index * 32 + skew, struct.pack('<IHHBBHHHI',
            0x40000000 + index * 256, 32 + index, 64 + index, index % 14, index % 4, 0,
            32 + index, 64 + index, 0x40000000 + index * 512))
    expected = original_state(original)
    cpu.mem_write(object_address + Material.reserved.offset, expected['reserved'])
    cpu.mem_write(object_address + Material.reserved7d.offset, expected['reserved7d'])
    initializer = random.Random(seed)
    initializer.randbytes(0x10000)
    initialized = initializer.randbytes(0x10000)
    cpu.mem_write(storage, initialized[0x4000:0x5000])
    before_input = bytes(cpu.mem_read(INPUT, 0x10000))
    before_objects = bytes(cpu.mem_read(0x12000000, 0x10000))
    cpu.mem_protect(INPUT, 0x10000, unicorn.UC_PROT_READ)
    cpu.reg_write(arm.UC_ARM64_REG_CPACR_EL1, 3 << 20)
    cpu.reg_write(arm.UC_ARM64_REG_SP, STACK)
    cpu.reg_write(arm.UC_ARM64_REG_X30, RETURN)
    for index, value in enumerate([object_address, wire, replacement if case['replacement'] else 0, context]):
        cpu.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(index)), value)
    saved = [rng.getrandbits(64) for _ in range(12)]
    for index, value in enumerate(saved, 18):
        cpu.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(index)), value)
    floating = [rng.getrandbits(128) for _ in range(32)]
    for index, value in enumerate(floating):
        cpu.reg_write(getattr(arm, 'UC_ARM64_REG_Q' + str(index)), value)
    allocations, lookups, writes, reads, steps = [], [], [], [], set()
    def instruction(uc, address, size, user):
        if address == ALLOCATE:
            actual_heap, amount, alignment = [uc.reg_read(getattr(arm, 'UC_ARM64_REG_X' + str(index))) for index in range(3)]
            if actual_heap != heap or alignment != 4 or not 0 < amount <= 4096 or allocations:
                raise ValueError('AArch64 heap interface differs')
            allocations.append(amount)
            uc.reg_write(arm.UC_ARM64_REG_X0, 0 if case['allocationFails'] else storage)
            uc.reg_write(arm.UC_ARM64_REG_PC, uc.reg_read(arm.UC_ARM64_REG_X30))
            return
        if address == RESOLVE:
            actual_accessor, text = uc.reg_read(arm.UC_ARM64_REG_X0), uc.reg_read(arm.UC_ARM64_REG_X1)
            if actual_accessor not in [accessor, accessor + 0x40] or not names <= text < names + len(case['names']):
                raise ValueError('AArch64 accessor interface differs')
            data = bytes(uc.mem_read(text, min(128, names + len(case['names']) - text)))
            if b'\0' not in data:
                raise ValueError('AArch64 bounded name failed')
            value = data.split(b'\0', 1)[0]
            alternate_used = int(actual_accessor == accessor + 0x40)
            lookups.append((alternate_used, sha(value)))
            index = (sum(value) + alternate_used * 3) % 16
            uc.reg_write(arm.UC_ARM64_REG_X0, 0 if case['resourceNull'] else INPUT + 0xc000 + index * 32 + skew)
            uc.reg_write(arm.UC_ARM64_REG_PC, uc.reg_read(arm.UC_ARM64_REG_X30))
            return
        if not any(low <= address < address + size <= high for low, high in executable):
            raise ValueError('AArch64 execution escaped compiler-produced Android objects')
        steps.add(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE, instruction)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda uc, access, address, size, value, user: writes.append((address, size)))
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda uc, access, address, size, value, user: reads.append((address, size)))
    cpu.emu_start(entry, RETURN, timeout=3000000, count=200000)
    if cpu.reg_read(arm.UC_ARM64_REG_PC) != RETURN or cpu.reg_read(arm.UC_ARM64_REG_X0) != object_address:
        raise ValueError('AArch64 constructor did not return this')
    if cpu.reg_read(arm.UC_ARM64_REG_SP) != STACK or [cpu.reg_read(getattr(arm, 'UC_ARM64_REG_X' + str(index))) for index in range(18, 30)] != saved:
        raise ValueError('AArch64 integer/SP/platform-register ABI differs')
    for index in range(8, 16):
        if cpu.reg_read(getattr(arm, 'UC_ARM64_REG_D' + str(index))) != floating[index] & 0xffffffffffffffff:
            raise ValueError('AArch64 floating callee-saved ABI differs')
    if bytes(cpu.mem_read(INPUT, 0x10000)) != before_input:
        raise ValueError('AArch64 immutable inputs changed')
    raw_object = bytes(cpu.mem_read(object_address, 144))
    material = Material.from_buffer_copy(raw_object)
    amount = allocations[0] if allocations and not case['allocationFails'] else 0
    actual = {'reserved': bytes(material.reserved), 'colors': bytes(material.colors), 'capacity': material.capacity,
        'used': material.used, 'flags': material.flags, 'reserved7d': bytes(material.reserved7d),
        'wire': 'primary' if material.wire == wire else 'replacement', 'lookupNames': lookups,
        'storage': normalize(bytes(cpu.mem_read(storage, amount)), material.capacity, 8, storage) if amount else None}
    valid_writes = [(object_address, object_address + 144), (storage, storage + amount), (STACK - 4096, STACK)]
    if any(not any(low <= address < address + size <= high for low, high in valid_writes) for address, size in writes):
        raise ValueError('AArch64 write escaped object/allocation/private stack')
    valid_reads = [(INPUT, INPUT + 0x10000), (0x12000000, 0x12010000), (STACK - 4096, STACK)]
    valid_reads += [(address, address + len(data)) for address, data in blocks]
    if any(not any(low <= address < address + size <= high for low, high in valid_reads) for address, size in reads):
        raise ValueError('AArch64 read escaped source/declared input domains')
    after_objects = bytes(cpu.mem_read(0x12000000, 0x10000))
    for offset, (before, after) in enumerate(zip(before_objects, after_objects)):
        address = 0x12000000 + offset
        if before != after and not any(low <= address < high for low, high in valid_writes[:2]):
            raise ValueError('AArch64 object/allocation guard changed')
    differences = [key for key in expected if actual[key] != expected[key]]
    if differences:
        raise ValueError('AArch64 returned semantic mismatch: ' + ','.join(differences))
    return {'returnedNormally': True, 'normalizedStateMatchesOriginal': True, 'sourceInstructionAddresses': len(steps),
        'objectAndStorageAlignmentSkew': skew, 'integerVfpSpAndX18Preserved': True,
        'guardAndReadonlyInputsPreserved': True, 'androidObjectsExecutedInCpuModel': True,
        'androidDeviceExecuted': False, 'originalImageMapped': False, 'sctlrEl1': sctlr,
        'alignmentCheckingEnabled': False, 'flatMemoryModel': True}
