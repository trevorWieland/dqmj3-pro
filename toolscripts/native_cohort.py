import argparse
import hashlib
import json
import subprocess
from pathlib import Path

import capstone

from module_link import digest, integrate, write_json


ROOT = Path(__file__).resolve().parents[1]
EXPECTED = {0x3453a8: 12, 0x235c5c: 12, 0x235c74: 16,
            **{0x17481c + index * 12: 12 for index in range(7)}}
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'


def verify_record(record):
    path = Path(record['path'])
    path = (path if path.is_absolute() else ROOT / path).resolve(strict=True)
    if not path.is_relative_to(ROOT):
        raise ValueError('Packet runtime/source input escapes its declared project')
    if digest(path) != record['sha256']:
        raise ValueError('Packet input hash differs: ' + str(path))
    return path


def verify_boundary(boundary, selected, image):
    if boundary['codeSha256'] != MODULE_SHA or not boundary['importedMemoryMatchesCodeFile']:
        raise ValueError('Boundary analysis belongs to another native image')
    found = {row['address']: row for row in boundary['functions']}
    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    engine.detail = True
    for address, row in selected.items():
        extent = EXPECTED[address]
        if address not in found:
            raise ValueError('Missing independently corroborated function boundary')
        proof = found[address]
        if (proof['bodyMin'], proof['bodyMax'], proof['bodyBytes']) != (address, address + extent - 1, extent):
            raise ValueError('Boundary evidence does not cover the complete source span')
        raw = image[address - 0x100000:address - 0x100000 + extent]
        if hashlib.sha256(raw).hexdigest() != proof['originalSpanSha256']:
            raise ValueError('Boundary evidence span is stale')
        caller = proof['caller']
        code = image[caller - 0x100000:caller - 0x100000 + 4]
        instructions = list(engine.disasm(code, caller))
        if not proof['callerReferenceConfirmed'] or len(instructions) != 1:
            raise ValueError('Qualified caller evidence is missing')
        call = instructions[0]
        if call.mnemonic != 'bl' or call.operands[0].imm != address:
            raise ValueError('Independent original direct-call decoding disagrees')


def prepare(output=None):
    output = Path(output or ROOT / 'work/integration-wave001/coordinator').resolve()
    if not output.is_relative_to((ROOT / 'work').resolve()):
        raise ValueError('Cohort output must stay within repository work/')
    output.mkdir(parents=True, exist_ok=True)
    packet_path = ROOT / 'evidence/lanes/wave001-native/packet.json'
    boundary_path = ROOT / 'evidence/lanes/wave001-native/boundary.json'
    packet = json.loads(packet_path.read_text(encoding='utf-8'))
    boundary = json.loads(boundary_path.read_text(encoding='utf-8'))
    original = verify_record(packet['original'])
    if digest(original) != MODULE_SHA:
        raise ValueError('Wrong original module in source packet')
    sources = [verify_record(record) for record in packet['sources']]
    if any(not path.is_relative_to(ROOT / 'src/native/wave001') for path in sources):
        raise ValueError('Packet source is outside its frozen ownership root')
    clang = verify_record(packet['compiler'])
    verify_record(packet['linker'])
    verify_record(packet['script'])
    if not packet['negativeControls'] or not all(row['detected'] for row in packet['negativeControls']):
        raise ValueError('Compiled wrong-source controls are absent or failed')
    for control in packet['negativeControls']:
        if control['kind'].startswith('compiled-wrong'):
            if (not control.get('returnedToSentinel') or control.get('failureClass') != 'BehaviorMismatch'
                    or control['actualReturn'] == control['expectedReturn']):
                raise ValueError('Wrong-source rejection lacks an actual semantic failure after return')
    selected = {}
    for row in packet['functions']:
        if not row['exactObjectSpan'] or not row['exactLinkedSpan']:
            continue
        identity = row['canonicalIdentity']
        address = identity['address']
        if identity['programId'] != '0004000e001acb00' or identity['moduleSha256'] != MODULE_SHA:
            raise ValueError('Mixed build/program namespace in native packet')
        if identity['mode'] != 'ARM' or address not in EXPECTED or address in selected:
            raise ValueError('Unreviewed or duplicate source function in this cohort')
        if row['instructionBytes'] != EXPECTED[address] or row['poolBytes'] != 0:
            raise ValueError('Source extent or pool differs from reviewed first-wave contract')
        if row['bodyRelocations'] or row['unresolvedSymbols']:
            raise ValueError('Source dependencies exceed this closed-leaf contract')
        behavior = row['behavior']
        if not behavior['allPassed'] or not behavior['semanticModelAgreed'] or behavior['cases'] < 100:
            raise ValueError('Original/source bounded behavior evidence incomplete')
        if not behavior['calleeSavedSpLrPreserved'] or behavior['writes']:
            raise ValueError('Leaf ABI or memory effect contract failed')
        verify_record(row['source'])
        verify_record(row['object'])
        verify_record(row['linkedElf'])
        selected[address] = row
    if set(selected) != set(EXPECTED):
        raise ValueError('Source packet omitted a required function')
    verify_boundary(boundary, selected, original.read_bytes())
    objects = {}
    compile_receipts = []
    for index, source in enumerate(sources):
        obj = output / ('source-' + str(index) + '.o')
        argv = [str(clang), *packet['configuration'], '-c', str(source), '-o', str(obj)]
        completed = subprocess.run(argv, capture_output=True, timeout=120)
        log = output / ('compile-' + str(index) + '.log')
        log.write_bytes(completed.stdout + completed.stderr)
        if completed.returncode:
            raise ValueError('Independent coordinator source compilation failed')
        objects[source.resolve()] = obj
        compile_receipts.append({'argv': argv, 'objectSha256': digest(obj), 'logSha256': digest(log)})
    entries = []
    for address, row in sorted(selected.items()):
        obj = objects[Path(row['source']['path']).resolve()]
        entries.append({'address': address, 'size': EXPECTED[address], 'symbol': row['symbol'],
                        'mode': 'ARM', 'objectPath': str(obj), 'objectSha256': digest(obj),
                        'sourcePath': str(Path(row['source']['path']).relative_to(ROOT)),
                        'sourceSha256': row['source']['sha256'],
                        'originalSpanSha256': row['originalSpanSha256'],
                        'behaviorCases': row['behavior']['cases']})
    module = integrate(entries, output / 'module')
    for record in packet['sources']:
        verify_record(record)
    report = {'schemaVersion': 1, 'status': 'verified-ready-for-independent-replay',
              'producerSha256': digest(Path(__file__)), 'packetSha256': digest(packet_path),
              'boundarySha256': digest(boundary_path), 'codeSha256': MODULE_SHA,
              'programId': '0004000e001acb00', 'sourceLinkedFunctions': len(entries),
              'sourceLinkedBytes': sum(row['size'] for row in entries), 'functions': entries,
              'moduleIntegration': module, 'compileReceipts': compile_receipts,
              'historicalCompilerIdentified': False, 'acceptedSourceCreditGranted': False,
              'sourceOnlyModule': False, 'sourceOnlyGame': False}
    write_json(ROOT / 'evidence/cohorts/wave001/verification.json', report)
    return report


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path)
    args = parser.parse_args()
    report = prepare(args.output)
    print(json.dumps({key: report[key] for key in ('status', 'sourceLinkedFunctions',
                                                  'sourceLinkedBytes', 'sourceOnlyModule')}))


if __name__ == '__main__':
    main()
