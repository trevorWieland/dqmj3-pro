import hashlib
import json
import math
import random
import struct
from pathlib import Path

from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_C1_C0_2, UC_ARM_REG_FPEXC


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/platform-engine-wave004'
IMAGE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'


def machine():
    path = ROOT / 'generated/update-content0/code.bin'
    if not path.exists():
        path = ROOT / 'work/native-ci-local-validation/private/generated/update-content0/code.bin'
    data = path.read_bytes()
    if hashlib.sha256(data).hexdigest() != IMAGE_SHA:
        raise ValueError('Canonical original update image differs')
    cpu = Uc(UC_ARCH_ARM, UC_MODE_ARM)
    cpu.mem_map(0x100000, (len(data) + 4095) & -4096)
    cpu.mem_write(0x100000, data)
    for address, size in ((0x10000000, 0x10000), (0x11000000, 0x20000), (0x12000000, 0x10000), (0x2000000, 4096)):
        cpu.mem_map(address, size)
    cpu.reg_write(UC_ARM_REG_C1_C0_2, 0xf00000)
    cpu.reg_write(UC_ARM_REG_FPEXC, 0x40000000)
    cpu.reg_write(UC_ARM_REG_SP, 0x11010000)
    return cpu, data


def pointer_prefix(cpu, data):
    cpu.mem_write(0x10000000, data)
    cpu.mem_write(0x11010000, b'\0' * 256)
    cpu.reg_write(UC_ARM_REG_R4, 0x12000000)
    cpu.reg_write(UC_ARM_REG_R5, 0x10000000)
    cpu.reg_write(UC_ARM_REG_SP, 0x11010000)
    cpu.emu_start(0x554b00, 0x554c9c, timeout=100000, count=256)
    if cpu.reg_read(UC_ARM_REG_PC) != 0x554c9c:
        raise ValueError('Original pointer prefix did not reach its bound')
    slots = {name: struct.unpack('<I', cpu.mem_read(0x11010000 + offset, 4))[0] for name, offset in
             (('texturePointer', 0x50), ('mappingPointer', 0x4c), ('simpleCombinerPointer', 0x68),
              ('projectionPointer', 0x58), ('detailedHeaderPointer', 0x78), ('detailedStagesPointer', 0x74),
              ('detailedStageCount', 0x3c), ('detailedEnabled', 0x28))}
    return {key: value - 0x10000000 if key.endswith('Pointer') else value for key, value in slots.items()}


def texture_matrix(cpu, transform):
    cpu.mem_write(0x10000000, struct.pack('<5f', *transform))
    cpu.mem_write(0x12000000, b'\0' * 24)
    cpu.reg_write(UC_ARM_REG_R0, 0x12000000)
    cpu.reg_write(UC_ARM_REG_R1, 0x10000000)
    cpu.reg_write(UC_ARM_REG_SP, 0x11010000)
    cpu.reg_write(UC_ARM_REG_LR, 0x2000000)
    cpu.emu_start(0x55492c, 0x2000000, timeout=300000, count=100000)
    if cpu.reg_read(UC_ARM_REG_PC) != 0x2000000:
        raise ValueError('Original texture matrix did not return')
    return struct.unpack('<6f', cpu.mem_read(0x12000000, 24))


def projection_matrix(cpu, dimensions=(32, 32), translation=(0, 0), scale=(1, 1), srt=(0.5, 0.5, 0, 1, 1)):
    runtime, material, pane, draw, output = 0x12001000, 0x12000000, 0x10006000, 0x10004000, 0x12003000
    cpu.mem_write(material, b'\0' * 256)
    cpu.mem_write(runtime, b'\0' * 256)
    cpu.mem_write(pane, b'\0' * 256)
    cpu.mem_write(draw, b'\0' * 256)
    cpu.mem_write(material + 0x74, struct.pack('<HHI', 0x15, 0, runtime))
    cpu.mem_write(runtime + 4, struct.pack('<HH', *dimensions))
    cpu.mem_write(runtime + 32, struct.pack('<5f', *srt))
    cpu.mem_write(runtime + 60, struct.pack('<4fI', 0, 0, 1, 1, 4))
    cpu.mem_write(pane + 0x3c, struct.pack('<2f', 1024, 1024))
    world = (scale[0], 0, 0, translation[0], 0, scale[1], 0, translation[1], 0, 0, 1, 0)
    identity = (1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0)
    cpu.mem_write(pane + 0x48, struct.pack('<12f', *world))
    cpu.mem_write(draw + 0x74, struct.pack('<12f', *identity))
    cpu.mem_write(0x11010000, struct.pack('<III', 0, 4, 0))
    for register, value in ((UC_ARM_REG_R0, output), (UC_ARM_REG_R1, draw), (UC_ARM_REG_R2, pane), (UC_ARM_REG_R3, material),
                            (UC_ARM_REG_SP, 0x11010000), (UC_ARM_REG_LR, 0x2000000)):
        cpu.reg_write(register, value)
    cpu.emu_start(0x54befc, 0x2000000, timeout=300000, count=100000)
    if cpu.reg_read(UC_ARM_REG_PC) != 0x2000000:
        raise ValueError('Original pane projection did not return')
    return struct.unpack('<8f', cpu.mem_read(output, 32))


def shader_registers(cpu, wire):
    wire = bytes(wire)
    context, commands, material, runtime = 0x10004000, 0x10008000, 0x12000000, 0x12001000
    cpu.mem_write(context, b'\0' * 4096); cpu.mem_write(commands, b'\0' * 4096)
    cpu.mem_write(material, b'\0' * 256); cpu.mem_write(runtime, b'\0' * 512)
    cpu.mem_write(material + 0x6c, wire[28:36])
    cpu.mem_write(material + 0x74, struct.pack('<HHI', 0x306a, 0x206a, runtime))
    cpu.mem_write(runtime + 120, wire[152:164])
    cpu.mem_write(runtime + 152, wire[124:152])
    for register, value in ((UC_ARM_REG_R0, context), (UC_ARM_REG_R1, commands), (UC_ARM_REG_R2, material),
                            (UC_ARM_REG_SP, 0x11010000), (UC_ARM_REG_LR, 0x2000000)):
        cpu.reg_write(register, value)
    cpu.emu_start(0x54df04, 0x2000000, timeout=300000, count=100000)
    end = cpu.reg_read(UC_ARM_REG_R0)
    if cpu.reg_read(UC_ARM_REG_PC) != 0x2000000 or not commands < end <= commands + 4096 or (end - commands) % 8:
        raise ValueError('Original material GPU command emission did not return within its bound')
    command_data = bytes(cpu.mem_read(commands, end - commands))
    words = struct.unpack('<' + 'I' * (len(command_data) // 4), command_data)
    registers, position = {}, 0
    while position < len(words):
        first, header = words[position:position + 2]
        count = (header >> 20 & 0x7ff) + 1
        if position + count + 1 > len(words):
            raise ValueError('Original GPU command group exceeds captured buffer')
        parameters = (first, *words[position + 2:position + count + 1])
        mask = sum(255 << (byte * 8) for byte in range(4) if header >> (16 + byte) & 1)
        for index, parameter in enumerate(parameters):
            address = (header & 0xffff) + (index if header >> 31 else 0)
            registers[address] = registers.get(address, 0) & ~mask | parameter & mask
        position += count + 1
        position += position % 2
    return registers, command_data


def material_records():
    from platform_engine_texture_reference import sarc
    archive = (WORK / 'private/NaviMap.arc').read_bytes()
    if hashlib.sha256(archive).hexdigest() != 'a56be941dd4e8b4f71abd12141efd47916ebcf50174379cc86735fd78b8a5099':
        raise ValueError('Private measured material archive differs')
    layouts = [data for data in sarc(archive).values() if data.startswith(b'FLYT')]
    if len(layouts) != 1:
        raise ValueError('Expected one measured layout')
    layout, position = layouts[0], 20
    while position < len(layout):
        size = struct.unpack_from('<I', layout, position + 4)[0]
        if layout[position:position + 4] == b'mat1':
            block = layout[position:position + size]
            count = struct.unpack_from('<I', block, 8)[0]
            rows = []
            for i in range(count):
                start = struct.unpack_from('<I', block, 12 + i * 4)[0]
                end = struct.unpack_from('<I', block, 16 + i * 4)[0] if i + 1 < count else size
                rows.append({'index': i, 'hex': block[start:end].hex()})
            (WORK / 'private/material-trace.json').write_text(json.dumps(rows, indent=2) + '\n')
            return rows
        position += size
    raise ValueError('Material table absent')


def main():
    cpu, image = machine()
    materials = material_records()
    measured = []
    for material in materials:
        wire = bytes.fromhex(material['hex'])
        offsets = pointer_prefix(cpu, wire)
        if material['index'] == 2 and (offsets['projectionPointer'], offsets['detailedHeaderPointer'], offsets['detailedStagesPointer'], offsets['detailedStageCount']) != (104, 124, 152, 1):
            raise ValueError('Original detailed material wire mapping differs')
        measured.append({'materialIndex': material['index'], 'recordBytes': len(wire), 'originalObservedOffsets': offsets})
    randomizer = random.Random(20261106)
    owner = set()
    for row in materials:
        wire = bytes.fromhex(row['hex'])
        flags = struct.unpack_from('<I', wire, 36)[0]
        for i in range(flags >> 2 & 3):
            owner.add(struct.unpack_from('<5f', wire, 40 + (flags & 3) * 4 + i * 20))
    transforms = sorted(owner)
    owner_cases = len(transforms)
    transforms += [(randomizer.uniform(-1, 1), randomizer.uniform(-1, 1), randomizer.uniform(-180, 180), randomizer.uniform(0.2, 3), randomizer.uniform(0.2, 3)) for unused in range(32)]
    maximum = owner_maximum = 0
    private_rows = []
    for index, transform in enumerate(transforms):
        transform = struct.unpack('<5f', struct.pack('<5f', *transform))
        actual = texture_matrix(cpu, transform)
        x, y, angle, sx, sy = transform
        cosine, sine = math.cos(math.radians(angle)), math.sin(math.radians(angle))
        a, b, c, d = cosine * sx, -sine * sy, sine * sx, cosine * sy
        expected = (a, b, x + 0.5 - 0.5 * (a + b), -c, -d, 1 - (y + 0.5 - 0.5 * (c + d)))
        maximum = max(maximum, max(abs(a - b) for a, b in zip(actual, expected)))
        if index < owner_cases:
            owner_maximum = max(owner_maximum, max(abs(a - b) for a, b in zip(actual, expected)))
        private_rows.append({'transform': transform, 'originalMatrix': actual, 'referenceMatrix': expected})
    (WORK / 'private/original-matrix-samples.json').write_text(json.dumps(private_rows, indent=2) + '\n')
    if maximum > 0.0003:
        raise ValueError('Original trig approximation exceeds measured matrix-study bound')
    projection_cases = []
    for dimensions, translation, scale in [((32, 32), (0, 0), (1, 1)), ((32, 32), (0, -47), (1, 1)),
                                           ((32, 32), (-23, -47), (1, 1)), ((16, 64), (20, 30), (2, 3))]:
        actual = projection_matrix(cpu, dimensions, translation, scale)
        sx, sy = 1 / dimensions[0] / scale[0], 1 / dimensions[1] / scale[1]
        expected = (sx, 0, 0, 1 - translation[0] * sx, 0, sy, 0, -translation[1] * sy)
        error = max(abs(a - b) for a, b in zip(actual, expected))
        if error > 0.000002:
            raise ValueError('Original pane projection differs from inverse-pane texture-dimension interpretation')
        projection_cases.append({'dimensions': dimensions, 'paneTranslation': translation, 'paneScale': scale,
                                 'maximumAbsoluteError': error, 'nativeReturnVerified': True})
    wire = bytes.fromhex(materials[2]['hex'])
    registers, commands = shader_registers(cpu, wire)
    color_flags, alpha_flags, selectors = struct.unpack_from('<III', wire, 152)
    sources = sum((color_flags >> (i * 4) & 15) << (i * 4) for i in range(3))
    sources |= sum((alpha_flags >> (i * 4) & 15) << (16 + i * 4) for i in range(3))
    if registers[0xf8] != sources or registers[0xf9] != 0 or registers[0xfa] != ((color_flags >> 24 & 15) | ((alpha_flags >> 24 & 15) << 16)):
        raise ValueError('Original detailed GPU program disagrees with decoded stage')
    if registers[0xfb] != 0xffffffff or registers[0xfc] != 0 or registers[0x101] != 0x76760000:
        raise ValueError('Measured detailed constants, scale or source-over blend state differs')
    changed = bytearray(wire)
    struct.pack_into('<I', changed, 156, alpha_flags & ~0x01000000)
    changed_registers, negative_commands = shader_registers(cpu, changed)
    if changed_registers[0xfa] == registers[0xfa] or negative_commands == commands:
        raise ValueError('Negative alpha-operation control did not alter original GPU output')
    report = {'schemaVersion': 1, 'imageSha256': IMAGE_SHA, 'module': 'update-content0',
              'originalPointerPrefix': {'start': '0x00554b00', 'endExclusive': '0x00554c9c',
                  'rangeSha256': hashlib.sha256(image[0x454b00:0x454c9c]).hexdigest(), 'scope': 'Bounded original constructor arithmetic with explicit wire-pointer and stack preconditions; not full constructor equivalence'},
              'materials': measured, 'originalTextureMatrix': {'entry': '0x0055492c', 'cases': len(transforms), 'maximumAbsoluteError': maximum,
                  'ownerRotationZeroCases': owner_cases, 'ownerProfileMaximumAbsoluteError': owner_maximum,
                  'nativeReturnsVerified': True, 'consoleTextureYAxisFlipExplicit': True,
                  'nonzeroRotationStudyUsesMeasuredApproximationBound': True},
              'originalProjection': {'entry': '0x0054befc', 'profile': 'Pane-based source4, adjust flag4, identity draw-info matrix',
                  'cases': projection_cases, 'originalWorldInverseExecuted': True},
              'originalDetailedShader': {'entry': '0x0054df04', 'commandSha256': hashlib.sha256(commands).hexdigest(),
                  'capturedCommandBytes': len(commands), 'nativeReturnVerified': True, 'externalCallsStubbed': False,
                  'rgbEquation': 'texture0.rgb', 'alphaEquation': 'texture1.alpha multiplied by selected white constant alpha',
                  'automaticBlackWhiteRemapApplied': False, 'sourceOverBlendVerified': True,
                  'alphaOperationNegativeControlChangedCommands': True, 'gpuHardwarePixelExecution': False},
              'recoveredSourceCreditBytes': 0, 'completeConstructorClaim': False, 'originalPayloadsPublished': False}
    import unicorn
    import unicorn.unicorn_py3.unicorn as native
    library = Path(native.uclib._name)
    report['unicorn'] = {'pythonPackageVersion': unicorn.__version__, 'nativeApiVersion': list(unicorn.uc_version()),
                         'nativeLibraryPath': library.relative_to(ROOT).as_posix(),
                         'nativeLibrarySha256': hashlib.sha256(library.read_bytes()).hexdigest()}
    output = ROOT / 'evidence/lanes/platform-engine-wave004/original-material-semantics.json'
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': 'original-material-prefix-and-matrix-qualified', 'materials': len(materials), 'matrixCases': len(transforms), 'maximumError': maximum}))


if __name__ == '__main__':
    main()
