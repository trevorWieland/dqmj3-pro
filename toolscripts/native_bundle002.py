import hashlib
import json
from pathlib import Path

import capstone
from capstone.arm import ARM_INS_B, ARM_INS_BL, ARM_INS_BLX, ARM_OP_IMM

from module_link import digest, integrate, write_json
from native_bundle import catalogue_boundary, compile_sources, verify_common
from native_cohort import MODULE_SHA, ROOT, verify_record


LANES = {'wave003-abi': (58, 696), 'wave004-native': (26, 208),
         'wave005-native': (2, 28), 'wave006-native': (3, 24)}


def direct_witness(image, site, target, mode='ARM', tail=False, expected_hash=None):
    if mode not in ('ARM', 'Thumb') or site < 0x100000 or site + 4 > 0x100000 + len(image):
        raise ValueError('Caller mode or address invalid')
    raw = image[site - 0x100000:site - 0x100000 + 4]
    if expected_hash and hashlib.sha256(raw).hexdigest() != expected_hash:
        raise ValueError('Original caller hash changed')
    engine = capstone.Cs(capstone.CS_ARCH_ARM,
                         capstone.CS_MODE_ARM if mode == 'ARM' else capstone.CS_MODE_THUMB)
    engine.detail = True
    instructions = list(engine.disasm(raw, site, count=1))
    expected = ARM_INS_B if tail else (ARM_INS_BL if mode == 'ARM' else ARM_INS_BLX)
    if not instructions or instructions[0].id != expected:
        raise ValueError('Original caller encoding or ARM target interworking differs')
    instruction = instructions[0]
    if instruction.size != 4 or not instruction.operands or instruction.operands[0].type != ARM_OP_IMM:
        raise ValueError('Caller is not a complete direct instruction')
    if instruction.operands[0].imm != target:
        raise ValueError('Original caller targets another entry')


def scalar_boundary(lane, row, image):
    boundary = json.loads((ROOT / f'evidence/lanes/{lane}/boundary.json').read_text())
    if boundary['moduleSha256'] != MODULE_SHA:
        raise ValueError('Boundary belongs to another module')
    census = json.loads(verify_record(boundary['ghidraCatalogue']).read_text())
    catalogue_boundary({item['address']: item for item in census['functions']},
                       row['canonicalIdentity']['address'], row['instructionBytes'])
    selected = [item for item in boundary['functions']
                if item['address'] == row['canonicalIdentity']['address']]
    if len(selected) != 1:
        raise ValueError('Missing or ambiguous scalar boundary')
    proof = selected[0]
    address, size = row['canonicalIdentity']['address'], row['instructionBytes']
    if not proof['callerReferenceConfirmed'] or (proof['bodyMin'], proof['bodyMax'], proof['bodyBytes']) != (
            address, address + size - 1, size):
        raise ValueError('Scalar body or direct context is incomplete')
    witnesses = proof.get('directCallWitnesses', [proof])
    for witness in witnesses:
        direct_witness(image, witness['instructionAddress'], address, witness.get('mode', 'ARM'),
                       expected_hash=witness['instructionSha256'])


def field_boundary(lane, packet, row, image):
    address, size = row['canonicalIdentity']['address'], row['instructionBytes']
    if lane == 'wave004-native':
        boundary = json.loads(verify_record(packet['independentBoundaries']).read_text())
        if boundary['codeSha256'] != MODULE_SHA:
            raise ValueError('Independent field census belongs to another image')
        catalogue_boundary({item['address']: item for item in boundary['functions']}, address, size)
        proof = row['boundaryEvidence']
        direct_witness(image, proof['callsite'], address,
                       tail=proof['callerFlowType'].endswith('JUMP'),
                       expected_hash=proof['callsiteSha256'])
    else:
        census = json.loads(verify_record(packet['boundaryCensus']).read_text())
        if census['codeSha256'] != MODULE_SHA:
            raise ValueError('VM boundary census belongs to another image')
        catalogue_boundary({item['address']: item for item in census['functions']}, address, size)
        proof = row['boundaryEvidence']['caller']
        direct_witness(image, proof['callsite'], address, expected_hash=proof['callsiteSha256'])


def verify_behavior(lane, packet, row):
    behavior = row['behavior']
    if not behavior['allPassed'] or behavior['cases'] < (9 if lane == 'wave005-native' else 24):
        raise ValueError('Missing bounded fixture family')
    address = row['canonicalIdentity']['address']
    if lane in ('wave003-abi', 'wave006-native'):
        controls = [item for item in packet['negativeControls'] if item.get('address') == address
                    and item.get('returnedToSentinel')]
        expected = {'wrong-value', 'wrong-field', 'wrong-return'} if lane == 'wave003-abi' else {
            'compiled-wrong-constant'}
        if {item['kind'] for item in controls} != expected or not all(item['detected'] for item in controls):
            raise ValueError('Compiled wrong-source controls did not return and fail semantically')
        if lane == 'wave003-abi':
            required = ('fullMemorySnapshotsCompared', 'actualOriginalAndSourceR0Compared',
                        'declaredTypedReturnAgreed', 'semanticModelAgreed',
                        'calleeSavedSpLrPreserved', 'exactDeclaredReadWriteFootprint')
        else:
            required = ('allSixteenInputFlagCombinations', 'ARMThumbReturnInterworkingTested',
                        'generalRegistersVaried', 'allOtherRegistersPreserved',
                        'noMemoryAccess', 'fullStackAndScratchSnapshotsCompared')
        if not all(behavior[key] for key in required):
            raise ValueError('Scalar/setter state or return ABI proof incomplete')
    else:
        control = behavior['wrongSourceControl']
        if not control['returnedToSentinel'] or not control['semanticRejection']:
            raise ValueError('Wrong field/VM source did not return and fail semantically')
        if behavior['originalActualReturns'] != behavior['cases'] or behavior['sourceActualReturns'] != behavior['cases']:
            raise ValueError('Fixture family lacks actual returns')
        if not behavior['semanticModelAgreed']:
            raise ValueError('Source and original disagree with independent model')
        if behavior['ownedInstructionAddresses'] != list(range(address, address + row['instructionBytes'], 4)):
            raise ValueError('Owned original instruction coverage is incomplete')


def prepare():
    output = ROOT / 'work/integration-bundle002'
    baseline_path = ROOT / 'evidence/cohorts/bundle001/verification.json'
    baseline = json.loads(baseline_path.read_text())
    accepted = json.loads((ROOT / 'evidence/cohorts/bundle001/acceptance.json').read_text())
    previous = {row['address']: row for row in accepted['functions']}
    if baseline['producerSha256'] != digest(ROOT / 'toolscripts/native_bundle.py'):
        raise ValueError('First cohort producer changed')
    entries = list(baseline['functions'])
    if len(entries) != 267 or {row['address'] for row in entries} != set(previous):
        raise ValueError('First accepted source cohort changed')
    for row in entries:
        prior = previous[row['address']]
        row['sourcePath'] = Path(row['sourcePath']).as_posix()
        if (row['sourcePath'], row['sourceSha256'], row['size']) != (
                prior['sourcePath'], prior['sourceSha256'], prior['instructionBytes']):
            raise ValueError('Prior admitted source or extent changed')
        if digest(ROOT / row['sourcePath']) != row['sourceSha256']:
            raise ValueError('Prior source changed in working tree')
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    packets, receipts = [], []
    for lane, (count, size) in LANES.items():
        path = ROOT / f'evidence/lanes/{lane}/packet.json'
        packet = json.loads(path.read_text())
        selected = [row for row in packet['functions'] if row['exactObjectSpan'] and row['exactLinkedSpan']]
        if len(selected) != count or sum(row['instructionBytes'] for row in selected) != size:
            raise ValueError('Lane differs from independently reviewed source scope')
        records = packet.get('sourceInputs', packet.get('sources', [])) + packet.get('headers', [])
        objects, compiled = compile_sources(packet, records, output / lane)
        receipts.extend(compiled)
        for row in selected:
            address, extent = verify_common(row, image)
            verify_behavior(lane, packet, row)
            if lane in ('wave003-abi', 'wave006-native'):
                scalar_boundary(lane, row, image)
            else:
                field_boundary(lane, packet, row, image)
            source = verify_record(row['source'])
            obj = objects[source]
            entries.append({'address': address, 'size': extent, 'symbol': row['symbol'], 'mode': 'ARM',
                            'objectPath': str(obj), 'objectSha256': digest(obj),
                            'sourcePath': source.relative_to(ROOT).as_posix(),
                            'sourceSha256': row['source']['sha256'], 'behaviorCases': row['behavior']['cases'],
                            'originalSpanSha256': row['originalSpanSha256'], 'lane': lane})
        packets.append({'lane': lane, 'packetSha256': digest(path),
                        'sourceLinkedFunctions': count, 'sourceLinkedBytes': size})
    module = integrate(entries, output / 'module')
    report = {'schemaVersion': 1, 'status': 'verified-ready-for-independent-replay',
              'producerSha256': digest(Path(__file__)), 'moduleSha256': MODULE_SHA,
              'parentAcceptanceSha256': digest(ROOT / 'evidence/cohorts/bundle001/acceptance.json'),
              'sourceLinkedFunctions': len(entries), 'sourceLinkedBytes': sum(row['size'] for row in entries),
              'newFunctions': 89, 'newInstructionBytes': 956, 'functions': entries,
              'moduleIntegration': module, 'packets': packets, 'compileReceipts': receipts,
              'acceptedSourceCreditGranted': False, 'sourceOnlyModule': False, 'sourceOnlyGame': False,
              'domain': 'Bounded aligned typed-field fixtures; VM subtraction fits s32 and slot stays in one array'}
    write_json(ROOT / 'evidence/cohorts/bundle002/verification.json', report)
    print(json.dumps({key: report[key] for key in ('status', 'sourceLinkedFunctions', 'sourceLinkedBytes')}))
    return report


if __name__ == '__main__':
    prepare()
