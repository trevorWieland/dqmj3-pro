import json
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_GRP_CALL
from capstone.arm import ARM_OP_IMM
from native_wave013_common import ROOT, record, save, sha, MODULE_SHA
from squirrel_state049_measure import ENTRIES


ADDITIONAL = {0x1581d0: 'literal-error-api', 0x173cd0: 'pop-objects-body',
    0x173d4c: 'relative-stack-slot'}
SOURCE_ALIASES = {0x173d4c: 'sq_startup_relative049'}
CONTINUATIONS = {0x173cb8: 0x173cd0, 0x173d14: 0x173d1c}


def snapshot():
    path = ROOT / 'evidence/lanes/squirrel-state049/source-registry-snapshot.json'
    if path.exists():
        return path, json.loads(path.read_text())
    functional_path, recovery_path = ROOT / 'config/functional-functions.json', ROOT / 'recovery.json'
    functional = json.loads(functional_path.read_text())
    recovery = json.loads(recovery_path.read_text())
    exact, cohorts = {}, []
    for pin in recovery['acceptedCohorts']:
        cohort_path = ROOT / pin['path']
        actual = record(cohort_path)
        if actual['sha256'] != pin['sha256']:
            raise ValueError('049 accepted cohort identity changed')
        cohorts.append(actual)
        for row in json.loads(cohort_path.read_text())['functions']:
            exact[row['address']] = row
    value = {'status': 'owned-source-registry-snapshot-not-live-input-guard',
        'functionalRegistryAtCapture': record(functional_path), 'recoveryRegistryAtCapture': record(recovery_path),
        'exactCohortsAtCapture': cohorts, 'functionalFunctions': functional['functions'],
        'exactFunctions': list(exact.values()), 'sourceCreditGranted': 0, 'producer': record(Path(__file__))}
    save(path, value)
    return path, value


def measure():
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != MODULE_SHA:
        raise ValueError('049 extent image differs')
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    functions = json.loads(census_path.read_text())['functions']
    by = {row['address']: row for row in functions}
    snapshot_path, registry = snapshot()
    admitted = {row['name'] for row in registry['functionalFunctions']}
    admitted.update(row['symbol'] for row in registry['exactFunctions'])
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    rows = []
    for entry, role in {**ENTRIES, **ADDITIONAL}.items():
        owner = by[entry]
        if owner['mode'] != 'ARM':
            raise ValueError('049 extent mode differs')
        ranges = owner['ranges']
        end = min(value for value in by if value >= max(span['endExclusive'] for span in ranges) and value != entry)
        cursor, data, instructions, decoded = entry, [], [], []
        for span in ranges:
            if span['start'] < cursor or span['endExclusive'] > end:
                raise ValueError('049 instruction/physical ownership overlaps')
            if cursor < span['start']:
                data.append({'start': cursor, 'endExclusive': span['start']})
            raw = image[span['start']-0x100000:span['endExclusive']-0x100000]
            instructions.append({**span, 'sha256': sha(raw)})
            batch = list(decoder.disasm(raw, span['start']))
            if sum(ins.size for ins in batch) != len(raw):
                raise ValueError('049 extent does not completely decode')
            decoded.extend(batch)
            cursor = span['endExclusive']
        if cursor < end:
            data.append({'start': cursor, 'endExclusive': end})
        for span in data:
            span['bytes'] = span['endExclusive']-span['start']
            span['sha256'] = sha(image[span['start']-0x100000:span['endExclusive']-0x100000])
        callers = []
        for caller in functions:
            if caller['mode'] != 'ARM' or entry not in caller.get('calledFunctionAddresses', []):
                continue
            for span in caller['ranges']:
                for ins in decoder.disasm(image[span['start']-0x100000:span['endExclusive']-0x100000], span['start']):
                    if ins.group(CS_GRP_CALL) and ins.operands[0].type == ARM_OP_IMM and ins.operands[0].imm == entry:
                        callers.append({'caller': caller['address'], 'pc': ins.address, 'target': entry,
                            'mode': 'ARM', 'bytes': ins.size, 'sha256': sha(bytes(ins.bytes))})
        transfers = []
        for ins in decoded:
            if ins.mnemonic.startswith('b') and ins.operands and ins.operands[0].type == ARM_OP_IMM:
                target = ins.operands[0].imm
                if not any(span['start'] <= target < span['endExclusive'] for span in ranges):
                    transfers.append({'pc': ins.address, 'target': target, 'mnemonic': ins.mnemonic})
        continuation = CONTINUATIONS.get(entry)
        rows.append({'entry': entry, 'symbol': f'fn_{entry:08x}', 'mode': 'ARM', 'role': role,
            'sourceSymbol': SOURCE_ALIASES.get(entry, f'fn_{entry:08x}'),
            'instructionBytes': owner['textBodyBytes'], 'instructionRanges': instructions,
            'physicalSpan': {'start': entry, 'endExclusive': end, 'bytes': end-entry,
                'sha256': sha(image[entry-0x100000:end-0x100000])},
            'noninstructionDataRanges': data, 'noninstructionDataBytes': sum(span['bytes'] for span in data),
            'noninstructionClassification': 'PC-relative literals, inline ASCII constants, and their alignment; zero instruction/data credit.',
            'callerWitnesses': callers, 'outgoingImmediateTransfers': transfers,
            'fallthroughContinuation': {'entry': continuation, 'mode': 'ARM',
                'canonicalInstructionBytes': by[continuation]['textBodyBytes'], 'separateOwnership': True} if continuation else None,
            'alreadyAdmitted': f'fn_{entry:08x}' in admitted, 'sourceCreditGranted': 0})
    if any(row['alreadyAdmitted'] for row in rows):
        raise ValueError('049 candidate selection includes an already admitted body')
    target = ROOT / 'evidence/lanes/squirrel-state049/complete-extents.json'
    save(target, {'schemaVersion': 1, 'status': 'measured-canonical-entry-and-complete-physical-extents-not-admission',
        'producer': record(Path(__file__)), 'moduleSha256': MODULE_SHA, 'census': record(census_path),
        'sourceRegistrySnapshot': record(snapshot_path), 'initialClaim': record(ROOT / 'evidence/lanes/squirrel-state049/claim.json'),
        'functions': rows, 'candidateFunctions': len(rows),
        'candidateInstructionBytes': sum(row['instructionBytes'] for row in rows),
        'existingAbsoluteSlotExcluded': {'entry': 0x173d40, 'mode': 'ARM', 'instructionBytes': 12,
            'sourceBinding': 'sq_startup_absolute049', 'alreadyAdmittedExact': True},
        'inventoryOrSourceCreditGranted': 0, 'nativeTextDenominatorChanged': False})
    print(json.dumps({'functions': len(rows), 'instructionBytes': sum(row['instructionBytes'] for row in rows),
        'dataBytes': sum(row['noninstructionDataBytes'] for row in rows), 'output': record(target)}))


if __name__ == '__main__':
    measure()
