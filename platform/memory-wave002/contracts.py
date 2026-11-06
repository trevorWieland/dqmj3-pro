import hashlib
import importlib.metadata
import json
import re
import sys
from pathlib import Path

import capstone
from capstone.arm import ARM_CC_AL, ARM_OP_MEM, ARM_OP_REG, ARM_REG_LR, ARM_REG_R0, ARM_REG_R1
import unicorn


MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def contained(root, path):
    target = (root / path).resolve(strict=True)
    if not target.is_relative_to(root.resolve()):
        raise RuntimeError('Pinned input escapes root')
    return target


def checked(root, pin):
    path = contained(root, pin['path'])
    if sha(path) != pin['sha256']:
        raise RuntimeError('Pinned source/tool input changed: ' + pin['path'])
    return path


def validate_venv(path, runtime, launcher_sha, visited=None):
    path = Path(path).resolve(strict=True)
    visited = set() if visited is None else visited
    if path in visited or len(visited) >= 8:
        raise RuntimeError('Cyclic/unqualified venv creator chain')
    visited.add(path)
    config = dict(line.split('=', 1) for line in path.read_text().splitlines() if '=' in line)
    config = {key.strip(): value.strip() for key, value in config.items()}
    base = Path(runtime['basePrefix']).resolve()
    if (config.get('include-system-site-packages') != 'false'
            or config.get('version') != '.'.join(str(value) for value in sys.version_info[:3])
            or Path(config.get('home', '')).resolve() != base):
        raise RuntimeError('Venv isolation/version/runtime home mismatch')
    executable = Path(config.get('executable', '')).resolve(strict=True)
    expected = {Path(pin['path']).resolve(): pin['sha256'] for pin in runtime['pins']}
    if executable == base / 'python.exe':
        if sha(executable) != expected.get(executable):
            raise RuntimeError('Venv base executable differs from pinned CPython')
    else:
        if sha(executable) != launcher_sha:
            raise RuntimeError('Venv creator is not a qualified launcher')
        validate_venv(executable.parent.parent / 'pyvenv.cfg', runtime, launcher_sha, visited)
    return {'includeSystemSitePackages': False, 'version': config['version'], 'home': str(base),
            'creatorExecutableSha256': sha(executable), 'creatorChainDepth': len(visited)}


def preflight_tools(root, spec, runtime):
    for pin in spec['toolPins']:
        checked(root, pin)
    launcher = next(pin for pin in spec['toolPins'] if pin['path'] == 'tools/python/Scripts/python.exe')
    return {'effectiveToolPinsChecked': len(spec['toolPins']),
            'venvStructure': validate_venv(root / 'tools/python/pyvenv.cfg', runtime, launcher['sha256'])}


def native_descriptor(row, raw):
    identity = row['canonicalIdentity']
    expected = {'build': 'owner-archive-update', 'programId': '0004000e001acb00',
                'module': 'content0/.code-decompressed', 'moduleSha256': MODULE_SHA,
                'address': row['address'], 'mode': 'ARM'}
    if identity != expected or row['size'] != 12 or row['address'] & 3:
        raise RuntimeError('Canonical function identity/extent changed')
    code = raw[row['address'] - 0x100000:row['address'] - 0x100000 + row['size']]
    if hashlib.sha256(code).hexdigest() != row['originalSpanSha256']:
        raise RuntimeError('Canonical original span changed')
    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    engine.detail = True
    instructions = list(engine.disasm(code, row['address']))
    if len(instructions) != 3 or any(i.cc != ARM_CC_AL or i.writeback for i in instructions):
        raise RuntimeError('Unsupported canonical memory leaf instructions')
    first, field, returned = instructions
    def access(instruction, mnemonic, register, offset):
        operands = instruction.operands
        return (instruction.mnemonic == mnemonic and len(operands) == 2 and operands[0].type == ARM_OP_REG
                and operands[0].reg == register and operands[1].type == ARM_OP_MEM
                and operands[1].mem.base == ARM_REG_R0 and not operands[1].mem.index
                and operands[1].mem.disp == offset)
    if not access(first, 'ldr', ARM_REG_R0, row['pointerOffset']):
        raise RuntimeError('Native pointer offset differs from frozen layout')
    getter = {1: 'ldrsb' if row['signed'] else 'ldrb', 2: 'ldrsh' if row['signed'] else 'ldrh', 4: 'ldr'}
    setter = {1: 'strb', 2: 'strh', 4: 'str'}
    mnemonic = getter[row['width']] if row['kind'] == 'getter' else setter[row['width']]
    if not access(field, mnemonic, ARM_REG_R0 if row['kind'] == 'getter' else ARM_REG_R1, row['fieldOffset']):
        raise RuntimeError('Native scalar offset/width/sign/direction differs from descriptor')
    if returned.mnemonic != 'bx' or len(returned.operands) != 1 or returned.operands[0].reg != ARM_REG_LR:
        raise RuntimeError('Canonical memory leaf does not return through LR')


def validate_functions(root, spec, descriptor, raw):
    functions = descriptor['functions']
    counts = {kind: sum(row['kind'] == kind for row in functions) for kind in ('getter', 'setter')}
    if counts != {'getter': 257, 'setter': 58} or len({row['symbol'] for row in functions}) != 315:
        raise RuntimeError('Missing/duplicate platform memory function')
    if len({row['address'] for row in functions}) != 315 or spec['compiledUnqualifiedFunctions']:
        raise RuntimeError('Duplicate address or extra compiled unqualified function')
    acceptance = json.loads(contained(root, descriptor['getterAcceptancePath']).read_text())
    if acceptance['status'] != 'accepted' or acceptance['moduleSha256'] != MODULE_SHA:
        raise RuntimeError('Immutable parent acceptance does not qualify getters')
    accepted = {row['address']: row for row in acceptance['functions']}
    layouts = {row['address']: row for row in json.loads(contained(root, descriptor['getterLayoutsPath']).read_text())['layouts']}
    boundaries = {row['address']: row for row in json.loads(contained(root, descriptor['qualifiedSetterBoundaryPath']).read_text())['functions']}
    defined = set()
    for source in sorted({row['sourcePath'] for row in functions}):
        defined.update(re.findall(r'\b(fn_[0-9a-f]+)\([^;{}]*\)\s*\{', contained(root, source).read_text()))
    if defined != {row['symbol'] for row in functions}:
        raise RuntimeError('Compiled source symbol inventory changed')
    for row in functions:
        native_descriptor(row, raw)
        if sha(contained(root, row['sourcePath'])) != row['sourceSha256'] or sha(contained(root, row['headerPath'])) != row['headerSha256']:
            raise RuntimeError('Canonical source/header binding changed')
        layout = row['nativeLayout']
        if row['kind'] == 'getter':
            if layout != layouts[row['address']]:
                raise RuntimeError('Getter layout differs from immutable semantic descriptor')
            witness = accepted[row['address']]
            if any(witness[key] != row[key] for key in ('symbol', 'sourcePath', 'sourceSha256', 'originalSpanSha256')):
                raise RuntimeError('Getter differs from immutable accepted source identity')
            if witness['instructionBytes'] != row['size']:
                raise RuntimeError('Accepted getter extent changed')
            pairs = {'pointerFieldOffset': 'pointerOffset', 'recordFieldOffset': 'fieldOffset', 'width': 'width', 'signed': 'signed',
                     'source': 'sourcePath', 'header': 'headerPath', 'handleType': 'handleType', 'recordType': 'recordType',
                     'fieldName': 'fieldName', 'returnType': 'returnType'}
        else:
            witness = boundaries[row['address']]
            if witness['originalSpanSha256'] != row['originalSpanSha256'] or witness['bodyBytes'] != row['size'] or not witness['callerReferenceConfirmed']:
                raise RuntimeError('Setter differs from immutable complete boundary')
            site = witness['instructionAddress']
            call = raw[site - 0x100000:site - 0x100000 + 4]
            word = int.from_bytes(call, 'little')
            displacement = (word & 0xffffff) << 2
            displacement -= 0x4000000 if displacement & 0x2000000 else 0
            if (hashlib.sha256(call).hexdigest() != witness['instructionSha256'] or word & 0x0e000000 != 0x0a000000
                    or word >> 28 == 15 or site + 8 + displacement != row['address']):
                raise RuntimeError('Setter qualified original caller differs')
            if layout['pointerOffsets'] != [row['pointerOffset']] or layout['sourceReturnType'] != row['returnType']:
                raise RuntimeError('Setter pointer/ABI descriptor changed')
            pairs = {'fieldOffset': 'fieldOffset', 'fieldWidth': 'width', 'address': 'address'}
        if any(layout[key] != row[value] for key, value in pairs.items()):
            raise RuntimeError('Fixture/native descriptor disagreement')
    return functions


def load(root, platform, path=None):
    spec = json.loads(Path(path or platform / 'inputs.json').read_text())
    if spec['schemaVersion'] != 2 or spec['moduleSha256'] != MODULE_SHA:
        raise RuntimeError('Unsupported stable manifest identity')
    if any(pin['path'].endswith('/packet.json') for pin in spec['inputs']):
        raise RuntimeError('Mutable runtime packet is forbidden as stable input')
    for pin in spec['inputs'] + spec['toolPins']:
        checked(root, pin)
    descriptor_path = checked(root, {'path': spec['descriptorPath'], 'sha256': spec['descriptorSha256']})
    raw = contained(root, spec['modulePath']).read_bytes()
    if hashlib.sha256(raw).hexdigest() != MODULE_SHA:
        raise RuntimeError('Original ARM module changed')
    descriptor = json.loads(descriptor_path.read_text())
    spec['functions'] = validate_functions(root, spec, descriptor, raw)
    runtime = json.loads(checked(root, spec['runtimeDescriptor']).read_text())
    preflight_tools(root, spec, runtime)
    if Path(sys.base_prefix).resolve() != Path(runtime['basePrefix']).resolve():
        raise RuntimeError('Effective CPython base differs from pinned runtime')
    for pin in runtime['pins']:
        target = Path(pin['path']).resolve(strict=True)
        if not target.is_relative_to(Path(runtime['basePrefix']).resolve()) or sha(target) != pin['sha256']:
            raise RuntimeError('Pinned installed CPython runtime changed')
    return spec


def effective_runtime():
    return {'python': sys.version, 'pythonBasePrefix': sys.base_prefix,
            'unicornDistribution': importlib.metadata.version('unicorn'), 'unicornBinding': unicorn.__version__,
            'unicornNative': unicorn.uc_version(), 'capstoneDistribution': importlib.metadata.version('capstone'),
            'capstoneNative': capstone.cs_version(), 'pyelftoolsDistribution': importlib.metadata.version('pyelftools')}
