import hashlib
import json
import struct
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_INS_ADD, ARM_INS_BL, ARM_INS_BLX, ARM_OP_IMM, ARM_OP_MEM, ARM_OP_REG, ARM_REG_PC


ROOT = next(parent for parent in Path(__file__).resolve().parents
            if (parent/'AGENTS.md').is_file() and (parent/'config/build-units.json').is_file())
WORK = ROOT/'work/native-stream056/public-stage-v1'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
CENSUS_SHA = '338f478921eef3955e17f7e6b438a65f58ec9aa183b0012a9ab7dd872878dc55'
FUNCTIONS = {
    0x733e28: [(0x733e28, 0x734340), (0x734364, 0x73455c)],
    0x739d08: [(0x739d08, 0x73a220), (0x73a244, 0x73a438)],
}


def sha(data):
    return hashlib.sha256(data).hexdigest()


def save(path, value):
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def measure():
    module_path = ROOT / 'generated/update-content0/code.bin'
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    module, census_raw = module_path.read_bytes(), census_path.read_bytes()
    if sha(module) != MODULE_SHA or sha(census_raw) != CENSUS_SHA:
        raise ValueError('056 canonical module or census changed')
    census = json.loads(census_raw)['functions']
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    result = []
    for entry, ranges in FUNCTIONS.items():
        original = next(row for row in census if row['address'] == entry)
        if original['mode'] != 'ARM' or original['calledFunctionAddresses'] or ranges != [
                (span['start'], span['endExclusive']) for span in original['ranges']]:
            raise ValueError('056 complete leaf ownership changed')
        instructions, dependencies = [], []
        for start, end in ranges:
            raw = module[start-0x100000:end-0x100000]
            decoded = list(decoder.disasm(raw, start))
            if len(decoded) * 4 != len(raw):
                raise ValueError('056 census extent does not decode completely')
            instructions.extend(decoded)
        for instruction in instructions:
            if instruction.id in (ARM_INS_BL, ARM_INS_BLX):
                raise ValueError('056 supposed leaf calls another endpoint')
            for operand in instruction.operands:
                if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                    address = instruction.address + 8 + operand.mem.disp
                    raw = module[address-0x100000:address-0x100000+4]
                    dependencies.append(dict(kind='compiler-integer-literal', instruction=instruction.address,
                                             address=address, size=4, sha256=sha(raw), value=struct.unpack('<I', raw)[0]))
            operands = instruction.operands
            if instruction.id == ARM_INS_ADD and len(operands) == 3 and operands[1].type == ARM_OP_REG \
                    and operands[1].reg == ARM_REG_PC and operands[2].type == ARM_OP_IMM:
                address = instruction.address + 8 + operands[2].imm
                text = module[address-0x100000:address-0x100000+128].split(b'\0')[0]
                expected = [b'invalid distance too far back', b'invalid distance code', b'invalid literal/length code']
                if text not in expected:
                    raise ValueError('056 unknown static string dependency')
                dependencies.append(dict(kind='diagnostic-string', instruction=instruction.address,
                                         address=address, size=len(text)+1, sha256=sha(text+b'\0'), text=text.decode('ascii')))
        callers = []
        for caller in census:
            if entry not in caller['calledFunctionAddresses']:
                continue
            for span in caller['ranges']:
                for instruction in decoder.disasm(module[span['start']-0x100000:span['endExclusive']-0x100000], span['start']):
                    if instruction.id in (ARM_INS_BL, ARM_INS_BLX) and instruction.operands[0].type == ARM_OP_IMM \
                            and instruction.operands[0].imm == entry:
                        callers.append(dict(censusEntry=caller['address'], instruction=instruction.address,
                                            target=entry, sha256=sha(instruction.bytes)))
        result.append(dict(address=entry, symbol='fn_'+format(entry, '08x'), mode='ARM',
                           instructionBytes=sum(end-start for start, end in ranges),
                           instructionRanges=[dict(start=start, endExclusive=end, size=end-start,
                                                   sha256=sha(module[start-0x100000:end-0x100000])) for start, end in ranges],
                           instructionAddresses=[instruction.address for instruction in instructions],
                           dependencies=dependencies, directCallees=[], callers=callers,
                           abi=dict(arguments=['r0: stream pointer', 'r1: caller initial available output, uint32'],
                                    result='void; stream next/available input/output, message; state mode/hold/bits',
                                    streamReadOffsets=[0,4,12,16,28], streamWriteOffsets=[0,4,12,16,24],
                                    stateReadOffsets=[40,44,48,52,56,60,76,80,84,88,7104],
                                    stateWriteOffsets=[0,56,60], modeStoreBytes=1)))
    return dict(schemaVersion=1, status='reference-measured-complete-leaf-family-before-source',
                canonicalIdentity=dict(build='owner-archive-update', programId='0004000e001acb00',
                                       module='content0/.code-decompressed', moduleSha256=MODULE_SHA),
                censusSha256=CENSUS_SHA, functions=result, instructionBytes=3612,
                identification='Measured fast literal/length/distance Huffman stream decode with circular history',
                references=['https://github.com/madler/zlib/blob/v1.2.7/inffast.c',
                            'https://www.rfc-editor.org/rfc/rfc1951'],
                proposedDomain=dict(availableInputAtLeast=6, availableOutputAtLeast=258,
                                    initialBits='0..7, hold contains only those bits',
                                    initialOutput='caller start >= current available; produced-prefix backing exists',
                                    tables='valid allocated root/subtables; op/bits/value are uint8/uint8/uint16',
                                    history='valid window size/next/backing; all possible reads initialized',
                                    lengths='well-formed literal and length/distance tables; match length 3..258',
                                    callbacks='none', allocation='none'),
                sourceAuthored=False, exactMatchClaimed=False, sourceCreditGranted=0)


if __name__ == '__main__':
    save(WORK / 'claim.json', measure())
