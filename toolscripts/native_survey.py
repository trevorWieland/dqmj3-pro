import argparse
import collections
import hashlib
import importlib.metadata
import json
import platform
import re
import struct
import sys
from pathlib import Path

import capstone
from capstone.arm import ARM_CC_AL, ARM_OP_IMM, ARM_OP_REG, ARM_REG_LR, ARM_REG_PC


ROOT = Path(__file__).resolve().parents[1]
ALLOWED = {'mov', 'mvn', 'add', 'sub', 'rsb', 'and', 'orr', 'eor', 'bic',
           'lsl', 'lsr', 'asr', 'ror', 'cmp', 'cmn', 'tst', 'teq', 'mul',
           'clz', 'rev', 'rev16', 'revsh', 'uxtb', 'uxth', 'sxtb', 'sxth'}
CONDITIONS = {'eq', 'ne', 'hs', 'lo', 'mi', 'pl', 'vs', 'vc', 'hi', 'ls',
              'ge', 'lt', 'gt', 'le', 'al'}


def sha(data):
    return hashlib.sha256(data).hexdigest()


def dump(path, data):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, indent=2) + '\n', encoding='utf-8')


def mnemonic_base(name):
    if name in ALLOWED:
        return name
    if name[-2:] in CONDITIONS:
        name = name[:-2]
    if name.endswith('s') and name[:-1] in ALLOWED:
        name = name[:-1]
    return name


def target_refs(text, address):
    refs = collections.defaultdict(list)
    for off in range(0, len(text) - 3, 4):
        word = struct.unpack_from('<I', text, off)[0]
        if word >> 24 == 0xEB:
            delta = (word & 0xFFFFFF) << 2
            if delta & 0x2000000:
                delta -= 0x4000000
            target = address + off + 8 + delta
            refs[(target, 'ARM')].append({'address': address + off, 'encoding': 'ARM-BL'})
        elif word & 0xFE000000 == 0xFA000000:
            delta = ((word & 0xFFFFFF) << 2) | ((word >> 23) & 2)
            if delta & 0x2000000:
                delta -= 0x4000000
            target = address + off + 8 + delta
            refs[(target, 'Thumb')].append({'address': address + off, 'encoding': 'ARM-BLX'})
    for off in range(0, len(text) - 3, 2):
        first, second = struct.unpack_from('<HH', text, off)
        if first & 0xF800 == 0xF000 and second & 0xF800 == 0xF800:
            delta = ((first & 0x7FF) << 12) | ((second & 0x7FF) << 1)
            if delta & 0x400000:
                delta -= 0x800000
            target = address + off + 4 + delta
            refs[(target, 'Thumb')].append({'address': address + off, 'encoding': 'Thumb-BL'})
    return refs


def leaf_at(data, offset, address, mode, engine):
    instructions = []
    for insn in engine.disasm(data[offset:offset + 64], address):
        if insn.id == capstone.arm.ARM_INS_BX:
            if insn.cc != ARM_CC_AL:
                return None
            if len(insn.operands) != 1 or insn.operands[0].reg != ARM_REG_LR:
                return None
            instructions.append(insn)
            if len(instructions) < 2:
                return None
            size = sum(x.size for x in instructions)
            return {'address': address, 'mode': mode, 'instructionBytes': size,
                    'poolBytes': 0, 'sha256': sha(data[offset:offset + size]),
                    'instructionCount': len(instructions)}, instructions
        if mnemonic_base(insn.mnemonic) not in ALLOWED:
            return None
        if any(op.type not in (ARM_OP_REG, ARM_OP_IMM) for op in insn.operands):
            return None
        regs_read, regs_written = insn.regs_access()
        if ARM_REG_PC in regs_read or ARM_REG_PC in regs_written:
            return None
        if any(x in insn.op_str for x in ('sp', 'lr', 'r4', 'r5', 'r6', 'r7',
                                         'r8', 'sb', 'sl', 'fp')):
            return None
        instructions.append(insn)
        if len(instructions) >= 10:
            return None
    return None


def offset_address(off, segments):
    for seg in segments:
        start = seg['codeBinOffset']
        if start <= off < start + seg['pages'] * 4096:
            return seg['address'] + off - start
    raise ValueError('Unmapped file offset')


def inspect(label, limit):
    source = ROOT / 'evidence' / 'inventory' / (label + '.json')
    inventory = json.loads(source.read_text(encoding='utf-8'))
    code_path = ROOT / 'generated' / label / 'code.bin'
    data = code_path.read_bytes()
    if sha(data) != inventory['codeSha256']:
        raise ValueError('Code hash does not match frozen inventory')
    segments = inventory['layout']['segments']
    textseg = next(s for s in segments if s['name'] == 'text')
    text = data[textseg['codeBinOffset']:textseg['codeBinOffset'] + textseg['initializedBytes']]
    engines = {}
    for name, mode in [('ARM', capstone.CS_MODE_ARM), ('Thumb', capstone.CS_MODE_THUMB)]:
        engine = capstone.Cs(capstone.CS_ARCH_ARM, mode | capstone.CS_MODE_LITTLE_ENDIAN)
        engine.detail = True
        engines[name] = engine
    refs = target_refs(text, textseg['address'])
    candidates = []
    listings = []
    contexts = []
    for (address, mode), incoming in sorted(refs.items(), key=lambda x: (-len(x[1]), x[0])):
        if not textseg['address'] <= address < textseg['address'] + len(text):
            continue
        off = address - textseg['address'] + textseg['codeBinOffset']
        result = leaf_at(data, off, address, mode, engines[mode])
        if not result:
            continue
        row, insns = result
        row.update({'fileOffset': off, 'referenceCandidates': incoming[:8],
                    'referenceCandidateCount': len(incoming),
                    'requiresManualBoundaryReview': True,
                    'calls': [], 'memoryOperands': 0,
                    'status': 'unaccepted-candidate',
                    'scope': 'straight-line integer register operations ending in bx lr'})
        candidates.append(row)
        listings.append(f'{label} 0x{address:08x} {mode} bytes={row["instructionBytes"]} refs={len(incoming)}')
        listings.extend(f'{i.address:08x}: {i.mnemonic} {i.op_str}' for i in insns)
        listings.append('')
        contexts.append(f'{label} 0x{address:08x} {mode} candidate boundary context')
        context_start = max(0, off - 24)
        contexts.extend(f'{i.address:08x}: {i.mnemonic} {i.op_str}' for i in engines[mode].disasm(
            data[context_start:off + row['instructionBytes'] + 24], address + context_start - off))
        for ref in incoming[:2]:
            caller_mode = 'Thumb' if ref['encoding'] == 'Thumb-BL' else 'ARM'
            caller = ref['address']
            caller_off = caller - textseg['address'] + textseg['codeBinOffset']
            start = max(0, caller_off - 20)
            contexts.append(f'Caller candidate 0x{caller:08x} {caller_mode}')
            contexts.extend(f'{i.address:08x}: {i.mnemonic} {i.op_str}' for i in engines[caller_mode].disasm(
                data[start:caller_off + 24], caller + start - caller_off))
        contexts.append('')
        if len(candidates) >= limit:
            break
    versions = []
    private_strings = []
    pattern = rb'(?i)squirrel|armcc|rvct|realview|CTR-SDK|NintendoSDK|ARM Compiler|GCC:'
    for match in re.finditer(rb'[\x20-\x7e]{6,}', data):
        if not re.search(pattern, match.group()):
            continue
        value = match.group().decode('ascii')
        versions.append({'fileOffset': match.start(),
                         'address': offset_address(match.start(), segments),
                         'value': value,
                         'interpretation': 'residual component string; not compiler identity'})
        private_strings.append(f'{match.start():08x} {value}')
    module_paths = []
    magic_candidates = []
    for row in inventory['romfsFiles']:
        if Path(row['path']).suffix.lower() in {'.cro', '.crr', '.crs', '.elf', '.axf', '.dll'}:
            module_paths.append(row)
        magic = bytes.fromhex(row['magic16'])
        if magic[:4] in {b'\x7fELF', b'CRO0', b'CRR0', b'CRS0', b'NCCH', b'NCSD'}:
            magic_candidates.append(row)
    private = ROOT / 'work' / 'native-survey'
    private.mkdir(parents=True, exist_ok=True)
    (private / (label + '-candidates.txt')).write_text('\n'.join(listings), encoding='utf-8')
    (private / (label + '-contexts.txt')).write_text('\n'.join(contexts), encoding='utf-8')
    (private / (label + '-version-strings.txt')).write_text('\n'.join(private_strings), encoding='utf-8')
    entry = list(engines['ARM'].disasm(text[:64], textseg['address']))
    (private / (label + '-entry.txt')).write_text('\n'.join(
        f'{i.address:08x}: {i.mnemonic} {i.op_str}' for i in entry), encoding='utf-8')
    return {'label': label, 'programId': inventory['programId'],
            'codeSha256': sha(data), 'codeBytes': len(data),
            'inventorySha256': sha(source.read_bytes()), 'layout': inventory['layout'],
            'entryMode': 'ARM', 'entryModeBasis': 'entry disassembly and immediate BLX transfer',
            'entryDirectTransfers': [
                {'address': i.address, 'operation': i.mnemonic,
                 'target': i.operands[0].imm} for i in entry
                if i.mnemonic in {'bl', 'blx', 'b'} and i.operands[0].type == ARM_OP_IMM],
            'versionEvidence': versions, 'compilerIdentified': False,
            'moduleFilenameCandidates': module_paths,
            'first16ByteModuleMagicCandidates': magic_candidates,
            'nativeExecutableInventoryComplete': False,
            'scanLimits': ['Only standalone filename suffixes and first 16 bytes checked for module candidates',
                           'Nested/compressed containers and custom loaders not excluded',
                           'Direct branch encodings in text can occur in literal pools or other mode data',
                           'No complete function census or mode map is claimed',
                           'Candidates require caller-context and boundary review in Ghidra'],
            'leafCandidates': candidates}


def self_test():
    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    engine.detail = True
    trials = [([0xE1A00000, 0xE12FFF1E], True),
              ([0xE3500000, 0x012FFF1E, 0xE1A00000, 0xE12FFF1E], False),
              ([0xE5900000, 0xE12FFF1E], False),
              ([0xEB000000, 0xE12FFF1E], False),
              ([0xE2800001], False),
              ([0xE2804001, 0xE12FFF1E], False)]
    for words, expected in trials:
        data = struct.pack('<' + 'I' * len(words), *words)
        actual = leaf_at(data, 0, 0x100000, 'ARM', engine) is not None
        if actual != expected:
            raise AssertionError('Leaf boundary or closure negative control failed')
    print(json.dumps({'selfTestPassed': True, 'syntheticCases': len(trials)}))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--label', action='append')
    parser.add_argument('--limit', type=int, default=20)
    parser.add_argument('--self-test', action='store_true')
    args = parser.parse_args()
    if args.self_test:
        self_test()
        return
    if not 1 <= args.limit <= 100:
        raise ValueError('Candidate limit outside 1..100')
    labels = args.label or ['base-content0', 'update-content0']
    if any(label not in {'base-content0', 'update-content0'} for label in labels):
        raise ValueError('Unknown frozen inventory label')
    native = Path(capstone._cs._name)
    output = {'schemaVersion': 1, 'scriptSha256': sha(Path(__file__).read_bytes()),
              'python': sys.version, 'platform': platform.platform(),
              'pythonExecutable': str(Path(sys.executable).resolve()),
              'capstoneDistributionVersion': importlib.metadata.version('capstone'),
              'capstoneApiVersion': capstone.cs_version(),
              'capstoneNativeLibrary': str(native),
              'capstoneNativeSha256': sha(native.read_bytes()),
              'reproductionArgv': [str(Path(sys.executable).resolve()), str(Path(__file__).resolve()), *sys.argv[1:]],
              'inventories': [inspect(label, args.limit) for label in labels],
              'acceptedRecoveredFunctions': 0, 'acceptedRecoveredBytes': 0}
    dump(ROOT / 'evidence' / 'native-survey' / 'survey.json', output)
    print(json.dumps({'inventories': len(output['inventories']),
                      'candidates': sum(len(x['leafCandidates']) for x in output['inventories']),
                      'compilerIdentified': False, 'acceptedRecoveredFunctions': 0}))


if __name__ == '__main__':
    main()
