import hashlib
import json
import subprocess
from pathlib import Path

import capstone
from capstone.arm import ARM_INS_B, ARM_INS_BL

from module_link import digest, integrate, write_json
from native_cohort import MODULE_SHA, ROOT, prepare, verify_record


def original_call(image, site, target, branch=False):
    if not 0x100000 <= site < 0x100000 + len(image) - 3:
        raise ValueError('Caller is outside original image')
    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    engine.detail = True
    instructions = list(engine.disasm(image[site - 0x100000:site - 0x100000 + 4], site))
    if len(instructions) != 1 or instructions[0].id != (ARM_INS_B if branch else ARM_INS_BL):
        raise ValueError('Qualified direct caller encoding does not match its class')
    if instructions[0].operands[0].imm != target:
        raise ValueError('Qualified direct caller targets a different entry')


def catalogue_boundary(catalogue, address, size):
    if address not in catalogue:
        raise ValueError('Source entry absent from qualified function census')
    row = catalogue[address]
    if row['mode'] != 'ARM' or len(row['ranges']) != 1:
        raise ValueError('Source needs a complete single-range ARM body')
    extent = row['ranges'][0]
    if (extent['start'], extent['endExclusive']) != (address, address + size):
        raise ValueError('Source extent differs from frozen function body')


def verify_common(row, image):
    identity = row['canonicalIdentity']
    if identity['programId'] != '0004000e001acb00' or identity['moduleSha256'] != MODULE_SHA:
        raise ValueError('Mixed program or build namespace in source bundle')
    if identity['mode'] != 'ARM' or not row['exactObjectSpan'] or not row['exactLinkedSpan']:
        raise ValueError('Nonmatching or unknown-mode source cannot be proposed')
    address, size = identity['address'], row['instructionBytes']
    original = image[address - 0x100000:address - 0x100000 + size]
    if hashlib.sha256(original).hexdigest() != row['originalSpanSha256']:
        raise ValueError('Source packet original span hash is stale')
    if row['poolBytes'] or row['bodyRelocations'] or row['unresolvedSymbols']:
        raise ValueError('Source body exceeds no-pool/no-relocation leaf contract')
    for record in [row['source'], row['object'], row['linkedElf']]:
        verify_record(record)
    return address, size


def compile_sources(packet, records, output):
    output.mkdir(parents=True, exist_ok=True)
    clang = verify_record(packet['compiler'])
    verify_record(packet['linker'])
    verify_record(packet['script'])
    sources = []
    for record in records:
        path = verify_record(record)
        if not path.is_relative_to(ROOT / 'src/native'):
            raise ValueError('Reconstructed source escaped admitted native roots')
        if path.suffix == '.c':
            sources.append(path)
    objects, receipts = {}, []
    for index, source in enumerate(sources):
        obj = output / (str(index) + '.o')
        argv = [str(clang), *packet['configuration'], '-c', str(source), '-o', str(obj)]
        completed = subprocess.run(argv, capture_output=True, timeout=120)
        log = output / (str(index) + '.log')
        log.write_bytes(completed.stdout + completed.stderr)
        if completed.returncode:
            raise ValueError('Independent source bundle compilation failed')
        objects[source.resolve()] = obj
        receipts.append({'argv': argv, 'objectSha256': digest(obj), 'logSha256': digest(log)})
    return objects, receipts


def prepare_bundle():
    output = ROOT / 'work/integration-bundle001'
    output.mkdir(parents=True, exist_ok=True)
    first = prepare(output / 'wave001')
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    entries = list(first['functions'])
    receipts = []
    packets = [{'lane': 'wave001', 'sourceLinkedFunctions': 10, 'sourceLinkedBytes': 124}]
    for lane in ('wave002',):
        path = ROOT / f'evidence/lanes/{lane}-native/packet.json'
        packet = json.loads(path.read_text(encoding='utf-8'))
        records = packet.get('sourceInputs', packet.get('sources', [])) + packet.get('headers', [])
        objects, compiled = compile_sources(packet, records, output / lane)
        receipts.extend(compiled)
        census_record = packet['boundaryCensus'] if lane == 'wave002' else json.loads(
            (ROOT / 'evidence/lanes/wave003-native/boundary.json').read_text())['ghidraCatalogue']
        census = json.loads(verify_record(census_record).read_text())
        if census['codeSha256'] != MODULE_SHA:
            raise ValueError('Function census belongs to another build')
        catalogue = {row['address']: row for row in census['functions']}
        boundaries = {} if lane == 'wave002' else {row['address']: row for row in json.loads(
            (ROOT / 'evidence/lanes/wave003-native/boundary.json').read_text())['functions']}
        selected = packet['functions'] if lane == 'wave002' else [
            row for row in packet['functions'] if row['directCallerQualified']]
        expected_count = 257 if lane == 'wave002' else 58
        if len(selected) != expected_count:
            raise ValueError('Source family omitted or added unreviewed functions')
        for row in selected:
            address, size = verify_common(row, image)
            catalogue_boundary(catalogue, address, size)
            behavior = row['behavior']
            if not behavior['allPassed'] or behavior['cases'] < 24:
                raise ValueError('Incomplete original/source fixture family')
            if lane == 'wave002':
                control = behavior['wrongSourceControl']
                if not control['returnedToSentinel'] or not control['semanticRejection']:
                    raise ValueError('Getter wrong-source variant did not actually return and fail')
                if control['actualReturn'] == control['expectedReturn']:
                    raise ValueError('Getter negative control has no semantic discrepancy')
                call = row['boundaryEvidence']['caller']
                original_call(image, call['callsite'], address, call['kind'] == 'tail-branch')
                if behavior['originalActualReturns'] != behavior['cases'] or behavior['sourceActualReturns'] != behavior['cases']:
                    raise ValueError('Getter fixture lacks actual return evidence')
            else:
                boundary = boundaries[address]
                if not boundary['callerReferenceConfirmed']:
                    raise ValueError('Setter caller closure remains pending')
                original_call(image, boundary['instructionAddress'], address)
                if not all(behavior[key] for key in ('fullMemorySnapshotsCompared',
                        'semanticModelAgreed', 'calleeSavedSpLrPreserved', 'exactDeclaredReadWriteFootprint')):
                    raise ValueError('Setter complete state/ABI/effect comparison failed')
                controls = [control for control in packet['negativeControls']
                            if control.get('address') == address and control['kind'].startswith('compiled-wrong')]
                if len(controls) != 2 or not all(control['detected'] and control['returnedToSentinel']
                                               and control['failureClass'] == 'MemoryMismatch' for control in controls):
                    raise ValueError('Setter semantic wrong-source controls incomplete')
            source = verify_record(row['source'])
            obj = objects[source]
            entries.append({'address': address, 'size': size, 'symbol': row['symbol'], 'mode': 'ARM',
                            'objectPath': str(obj), 'objectSha256': digest(obj),
                            'sourcePath': source.relative_to(ROOT).as_posix(),
                            'sourceSha256': row['source']['sha256'], 'behaviorCases': behavior['cases'],
                            'originalSpanSha256': row['originalSpanSha256'], 'lane': lane})
        for record in records:
            verify_record(record)
        packets.append({'lane': lane, 'packetSha256': digest(path),
                        'sourceLinkedFunctions': len(selected),
                        'sourceLinkedBytes': sum(row['instructionBytes'] for row in selected)})
    module = integrate(entries, output / 'module')
    report = {'schemaVersion': 1, 'status': 'verified-ready-for-independent-replay',
              'producerSha256': digest(Path(__file__)), 'moduleSha256': MODULE_SHA,
              'sourceLinkedFunctions': len(entries), 'sourceLinkedBytes': sum(row['size'] for row in entries),
              'functions': entries, 'moduleIntegration': module, 'packets': packets,
              'compileReceipts': receipts, 'acceptedSourceCreditGranted': False,
              'pendingIndirectSetterFunctions': 3, 'pendingIndirectSetterBytes': 24,
              'pendingSetterReturnAbiFunctions': 58, 'pendingSetterReturnAbiBytes': 696,
              'sourceOnlyModule': False, 'sourceOnlyGame': False}
    write_json(ROOT / 'evidence/cohorts/bundle001/verification.json', report)
    print(json.dumps({key: report[key] for key in ('status', 'sourceLinkedFunctions', 'sourceLinkedBytes')}))
    return report


if __name__ == '__main__':
    prepare_bundle()
