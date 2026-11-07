import argparse
import json
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_GRP_CALL
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
from native_wave013_common import ROOT, record, save, sha, MODULE_SHA


ENTRIES = {0x146994: 'root-vm-factory', 0x1544a0: 'vm-initialization',
    0x158fd0: 'base-library-registration', 0x158128: 'push-string-api',
    0x1580cc: 'push-integer-api', 0x173d14: 'push-root-table-api',
    0x173cb8: 'pop-stack-api', 0x166f0c: 'new-slot-api',
    0x177160: 'set-native-closure-name-api', 0x177270: 'set-native-parameter-checks-api'}


def run(folder):
    folder.mkdir(parents=True, exist_ok=True)
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != MODULE_SHA:
        raise ValueError('049 original module differs')
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    by = {row['address']: row for row in json.loads(census_path.read_text())['functions']}
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    rows = []
    for entry, role in ENTRIES.items():
        owner = by[entry]
        if owner['mode'] != 'ARM':
            raise ValueError('049 candidate mode differs')
        ranges, calls, pools, lines = [], [], {}, []
        for region in owner['ranges']:
            raw = image[region['start'] - 0x100000:region['endExclusive'] - 0x100000]
            decoded = list(decoder.disasm(raw, region['start']))
            if sum(ins.size for ins in decoded) != len(raw):
                raise ValueError('049 complete instruction decode failed')
            ranges.append({**region, 'sha256': sha(raw)})
            for ins in decoded:
                lines.append(f'{ins.address:08x} {ins.mnemonic} {ins.op_str}')
                if ins.group(CS_GRP_CALL):
                    calls.append({'pc': ins.address,
                        'target': ins.operands[0].imm if ins.operands[0].type == ARM_OP_IMM else None})
                for operand in ins.operands:
                    if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                        address = ins.address + 8 + operand.mem.disp
                        width = 8 if ins.mnemonic.startswith('ldrd') else 4
                        pools[(address, width)] = {'address': address, 'bytes': width,
                            'sha256': sha(image[address - 0x100000:address - 0x100000 + width])}
        (folder / f'{entry:08x}.private.asm').write_text('\n'.join(lines) + '\n')
        rows.append({'entry': entry, 'mode': 'ARM', 'role': role,
            'instructionBytes': owner['textBodyBytes'], 'instructionRanges': ranges,
            'literalReadWitnesses': list(pools.values()), 'calls': calls,
            'knownCensusCallers': [row['address'] for row in by.values()
                if entry in row.get('calledFunctionAddresses', [])]})
    target = ROOT / 'evidence/lanes/squirrel-state049/claim.json'
    save(target, {'schemaVersion': 1, 'status': 'pre-source-measured-vm-and-factory-closure',
        'moduleSha256': MODULE_SHA, 'census': record(census_path), 'functions': rows,
        'candidateInstructionBytes': sum(row['instructionBytes'] for row in rows),
        'frozenCoreAbi': record(ROOT / 'evidence/lanes/squirrel-state040/core-abi-v1/frozen-manifest.json'),
        'frozenSharedInitialization': record(ROOT / 'evidence/lanes/squirrel-state040/initialization045-v1/coordinator-handoff-manifest.json'),
        'typedVmTargetBytes': 168, 'typedVmNativeBytes': 264,
        'typedSharedTargetBytes': 180, 'typedSharedNativeBytes': 448,
        'sourceRoot': 'source/squirrel-wave049', 'sourcePresentAtInitialClaim': False,
        'sourceCreditGranted': 0, 'matchingCreditGranted': 0,
        'producer': record(Path(__file__))})
    print(json.dumps([{'entry': hex(row['entry']), 'bytes': row['instructionBytes'],
        'directCallees': sorted({hex(call['target']) for call in row['calls'] if call['target']})}
        for row in rows]))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--work', type=Path, default=ROOT / 'work/squirrel-state049/measurement')
    run(parser.parse_args().work.resolve())
