import io
import json
import random
import struct

from elftools.elf.elffile import ELFFile
import unicorn
import unicorn.arm64_const as arm

import platform_engine_wave006 as build
from platform_engine_wave006_data import owner
from platform_engine_wave003_measure import rgba


ROOT, WORK, OUT = build.ROOT, build.WORK, build.EVIDENCE


def link():
    directory = WORK / 'android-model'
    directory.mkdir(parents=True, exist_ok=True)
    objects = sorted((WORK / 'android/native').glob('*.o'))
    if len(objects) != 22:
        raise ValueError('Actual Android scene object inventory differs')
    script = directory / 'scene.ld'
    script.write_text('SECTIONS { .text 0x4000000 : { *(.text*) } .rodata : { *(.rodata*) }\n' +
        '.data : { *(.data*) *(.material_heap) *(.got*) } .bss : { *(.bss*) *(COMMON) }\n' +
        '/DISCARD/ : { *(.eh_frame*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
    linked = directory / 'scene.elf'
    build.tools.run([build.tools.LINKER, '-m', 'aarch64elf', '--no-undefined', '--build-id=none',
        '--entry=component_reset', '-T', script, *objects, '-o', linked], directory / 'link.json')
    elf = ELFFile(io.BytesIO(linked.read_bytes()))
    table = elf.get_section_by_name('.symtab')
    symbols = {item.name: item['st_value'] for item in table.iter_symbols() if item['st_info']['type'] == 'STT_FUNC'}
    if any(item.name and item['st_shndx'] == 'SHN_UNDEF' for item in table.iter_symbols()):
        raise ValueError('Android scene model has unresolved sources')
    sections = []
    for section in elf.iter_sections():
        if section['sh_flags'] & 2 and section['sh_size']:
            if section['sh_type'] not in ['SHT_PROGBITS', 'SHT_NOBITS']:
                raise ValueError('Unsupported Android scene allocation')
            sections.append((section['sh_addr'], section['sh_size'], section['sh_flags'],
                section.data() if section['sh_type'] == 'SHT_PROGBITS' else b''))
    return sections, symbols, {'linkedElf': build.tools.pin(linked), 'linkerScript': build.tools.pin(script),
        'actualAndroidObjects': [build.tools.pin(path) for path in objects], 'originalInstructionDependencies': []}


def machine(sections):
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM64, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(arm.UC_CPU_ARM64_A72)
    permissions = {}
    for address, size, flags, data in sections:
        bits = unicorn.UC_PROT_READ | (unicorn.UC_PROT_WRITE if flags & 1 else 0) | (unicorn.UC_PROT_EXEC if flags & 4 else 0)
        for page in range(address & -4096, (address + size + 4095) & -4096, 4096):
            permissions[page] = permissions.get(page, 0) | bits
    for page in permissions:
        cpu.mem_map(page, 4096)
    for address, size, flags, data in sections:
        if data:
            cpu.mem_write(address, data)
    for page, bits in permissions.items():
        cpu.mem_protect(page, 4096, bits)
    cpu.reg_write(arm.UC_ARM64_REG_CPACR_EL1, 3 << 20)
    return cpu


def run():
    build.inputs()
    data = owner()
    sections, symbols, receipt = link()
    cpu = machine(sections)
    stack, sentinel, memory, source, path = 0x130000000, 0x140000000, 0x110000004, 0x120000000, 0x150000000
    cpu.mem_map(stack, 0x20000, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    cpu.mem_map(sentinel, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_map(memory & -4096, 0x11000, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    cpu.mem_map(source, (len(data['archive']) + 4095) & -4096, unicorn.UC_PROT_READ)
    cpu.mem_write(source, data['archive'])
    cpu.mem_map(path, 4096, unicorn.UC_PROT_READ)
    cpu.mem_write(path, b'assets/scene.arc\0')
    randomizer = random.Random(5005)
    calls = []
    def invoke(name, *arguments):
        saved = [randomizer.getrandbits(64) for _ in range(12)]
        fp = [randomizer.getrandbits(64) for _ in range(8)]
        for index, value in enumerate(saved, 18):
            cpu.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(index)), value)
        for index, value in enumerate(fp, 8):
            cpu.reg_write(getattr(arm, 'UC_ARM64_REG_D' + str(index)), value)
        for index, value in enumerate(arguments):
            cpu.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(index)), value & 0xffffffffffffffff)
        cpu.reg_write(arm.UC_ARM64_REG_SP, stack + 0x10000)
        cpu.reg_write(arm.UC_ARM64_REG_X30, sentinel)
        cpu.emu_start(symbols[name], sentinel, count=1000000000, timeout=45000000)
        if cpu.reg_read(arm.UC_ARM64_REG_PC) != sentinel or cpu.reg_read(arm.UC_ARM64_REG_SP) != stack + 0x10000:
            raise ValueError('Android source scene API failed to return: ' + name)
        if [cpu.reg_read(getattr(arm, 'UC_ARM64_REG_X' + str(index))) for index in range(18, 30)] != saved or [cpu.reg_read(getattr(arm, 'UC_ARM64_REG_D' + str(index))) for index in range(8, 16)] != fp:
            raise ValueError('Android source scene API callee-saved ABI differs: ' + name)
        calls.append(name)
        return cpu.reg_read(arm.UC_ARM64_REG_X0)
    invoke('component_reset')
    if invoke('component_allocator', memory, 65536) != 1:
        raise ValueError('Android source scene four-byte/high-address arena rejected')
    invoke('component_resume', 1)
    invoke('component_surface', 0, 1, 1)
    handle = invoke('component_request', path)
    if invoke('component_claim') != handle or invoke('component_complete', handle, source, len(data['archive'])) != 1:
        raise ValueError('Android source scene import failed')
    results = []
    for view in [0, 1]:
        pixels = invoke('component_pixels', view)
        raw = bytes(cpu.mem_read(pixels, 76800 * 4))
        values = struct.unpack('<76800I', raw)
        digest = __import__('hashlib').sha256(rgba(values)).hexdigest()
        if invoke('component_material_count', view) != 19:
            raise ValueError('Android source scene did not construct 19 materials')
        materials = [invoke('component_material', view, index, field) for index in range(19) for field in range(80)]
        material_sha = __import__('hashlib').sha256(struct.pack('<1520I', *materials)).hexdigest()
        projections = [invoke('component_projection', view, picture, reference, field) for picture in range(17) for reference in range(2) for field in range(8)]
        projection_sha = __import__('hashlib').sha256(struct.pack('<272I', *projections)).hexdigest()
        results.append({'view': view, 'frameRgbaSha256': digest, 'constructedMaterials': 19,
            'materialAuditSha256': material_sha, 'projectionAuditSha256': projection_sha})
    expected = json.loads((OUT / 'measured-renderer.json').read_text())['independentReference']['frameRgbaSha256']
    if any(row['frameRgbaSha256'] != expected for row in results):
        raise ValueError('Actual Android object framebuffer differs from independent reference')
    measured = json.loads((OUT / 'measured-renderer.json').read_text())
    if any(row['materialAuditSha256'] != measured['viewSnapshots'][0]['materialAuditSha256'] for row in results):
        raise ValueError('Actual Android object constructed material state differs from native original-qualified renderer')
    if any(row['projectionAuditSha256'] != measured['viewSnapshots'][0]['projectionAuditSha256'] for row in results):
        raise ValueError('Actual Android object UV matrices differ from original-qualified renderer')
    poisoned = bytearray(data['archive'])
    origin = poisoned.index(data['layout'])
    position, changed = 20, False
    for tag, block in data['sections']:
        if not changed and tag in [b'pan1', b'pic1']:
            struct.pack_into('<f', poisoned, origin + position + 44, 123.0)
            changed = True
        if tag == b'mat1':
            first = struct.unpack_from('<I', block, 12)[0]
            struct.pack_into('<I', poisoned, origin + position + first + 44, 0x7fc00000)
        position += len(block)
    cpu.mem_write(source, bytes(poisoned))
    failed = invoke('component_request', path)
    if invoke('component_claim') != failed or invoke('component_complete', failed, source, len(poisoned)) & 0xffffffff != 0xffffffff:
        raise ValueError('Actual Android source scene bad material did not reject normally')
    for view in [0, 1]:
        pixels = invoke('component_pixels', view)
        frame_sha = __import__('hashlib').sha256(rgba(struct.unpack('<76800I', cpu.mem_read(pixels, 307200)))).hexdigest()
        materials = [invoke('component_material', view, index, field) for index in range(19) for field in range(80)]
        if frame_sha != expected or invoke('component_scene_stat', view, 14) != 1 or __import__('hashlib').sha256(struct.pack('<1520I', *materials)).hexdigest() != results[view]['materialAuditSha256']:
            raise ValueError('Actual Android source scene rejected import changed published state')
        projections = [invoke('component_projection', view, picture, reference, field) for picture in range(17) for reference in range(2) for field in range(8)]
        if __import__('hashlib').sha256(struct.pack('<272I', *projections)).hexdigest() != results[view]['projectionAuditSha256']:
            raise ValueError('Actual Android material rejection changed published UV matrices')
    singular = bytearray(data['archive'])
    position, changed = 20, False
    for tag, block in data['sections']:
        if not changed and tag == b'pic1':
            index = struct.unpack_from('<H', block, 100)[0]
            if (invoke('component_material', 0, index, 47) >> 8) & 255 == 4:
                struct.pack_into('<f', singular, origin + position + 68, 0.)
                changed = True
        position += len(block)
    if not changed:
        raise ValueError('Actual owner has no measured projected-picture control')
    cpu.mem_write(source, bytes(singular))
    failed = invoke('component_request', path)
    if invoke('component_claim') != failed or invoke('component_complete', failed, source, len(singular)) & 0xffffffff != 0xffffffff:
        raise ValueError('Actual Android singular projected geometry failed normal rejection')
    for view in [0, 1]:
        pixels = invoke('component_pixels', view)
        frame_sha = __import__('hashlib').sha256(rgba(struct.unpack('<76800I', cpu.mem_read(pixels, 307200)))).hexdigest()
        projections = [invoke('component_projection', view, picture, reference, field) for picture in range(17) for reference in range(2) for field in range(8)]
        if frame_sha != expected or invoke('component_scene_stat', view, 14) != 1 or __import__('hashlib').sha256(struct.pack('<272I', *projections)).hexdigest() != results[view]['projectionAuditSha256']:
            raise ValueError('Actual Android singular projection changed published frame/UV state')
    invoke('component_surface', 1, 8, 1)
    if invoke('component_touch', 1, 640, 480, 320, 240, 1) != 1:
        raise ValueError('Android source scene secondary touch routing failed')
    invoke('component_resume', 0)
    if invoke('component_step', 0, 16666) != 0:
        raise ValueError('Android source scene paused clock advanced')
    report = {'schemaVersion': 1, 'status': 'actual-android-scene-objects-model-executed', 'build': receipt,
        'views': results, 'returnedApiCalls': len(calls), 'calleeSavedIntegerVfpSpAndX18Preserved': True,
        'sourceArcAndArenaAboveFourGiB': True, 'arenaFourAlignedButNotEightAligned': True,
        'sourceHeapAndResourceServicesExecutedAsC': True, 'noEmulatedHeapOrResourceCallback': True,
        'cpu': 'Cortex-A72', 'flatMemoryModel': True, 'sctlrEl1': cpu.cpr_read(3, 0, 1, 0, 0),
        'independentFramebufferReferenceEqual': True, 'touchAndPauseLogicalEventsTested': True,
        'lateMaterialFailurePreservesBothViewsAndMaterialAudits': True,
        'lateMaterialFailurePreservesBothViewUvMatrices': True, 'singularProjectionRejectedAndBothViewFramesAndUvMatricesPreserved': True,
        'originalExecutableImageMapped': False, 'originalInstructionDependencies': [],
        'androidOperatingSystemExecuted': False, 'androidDeviceExecuted': False, 'aynThorExecuted': False,
        'nativeGameBuild': False, 'additionalRecoveredSourceBytes': 0, 'originalPayloadsPublished': False}
    (OUT / 'android-model.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'views': 2, 'actualMaterials': 19,
        'frameReferenceEqual': True, 'androidDeviceExecuted': False}))


if __name__ == '__main__':
    run()
