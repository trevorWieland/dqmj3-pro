import hashlib
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_file_inventory as inventory
from native_sdk_inventory import decode


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def main():
    base = ROOT / 'work/native-state055/controller-cache-v17'
    reference = base / 'reference-constructor-checkpoint-v1.json'
    proposal_path = base / 'reference-entry-proposal-v1.json'
    assert pin(reference)['sha256'] == '124d0899a82aff792f646a0aa763b530bffeea0919341f049d543323395373c6'
    assert pin(proposal_path)['sha256'] == 'a40645815ea77d73cc51c8320589c1a44dea6c191af1ae8d1700f3c39a934829'
    frozen = read(reference)
    for row in frozen['files']:
        assert pin(ROOT / row['path']) == row
    proposal = read(proposal_path)
    report_path = ROOT / frozen['report']['path']
    assert pin(report_path) == frozen['report']
    report = read(report_path)
    assert report['error'] is None and report['objectReadyByte'] == 1
    assert report['sourceGameCodeWritten'] is False and report['sourceCredit'] == 0
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    assert hashlib.sha256(image).hexdigest() == proposal['moduleSha256']
    registry = read(ROOT / 'config/functional-functions.json')
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = {row['address']: row for row in census['functions']}
    assert 0x17199c not in canonical and 0x171a14 in canonical
    low, high = 0x17199c, 0x171a0c
    assert not any(max(low, r['start']) < min(high, r['endExclusive'])
                   for f in canonical.values() for r in f['ranges'])
    for part in proposal['instructionRanges'] + proposal['excludedPools']:
        data = image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]
        assert len(data) == part['bytes'] and hashlib.sha256(data).hexdigest() == part['sha256']
    code = decode(image, 0x100000, low, high - low)
    assert len(code) == 28 and code[-1].address == 0x171a08
    assert code[-1].mnemonic == 'bx' and code[-1].op_str == 'lr'
    assert not any(x.mnemonic in ['bl', 'blx'] for x in code)
    trace = [row for row in report['actualGameInstructions'] if low <= row['pc'] < 0x171a14]
    assert len(trace) == 28 and {x['pc'] for x in trace} == set(range(low, high, 4))
    for row in trace:
        data = image[row['pc'] - 0x100000:row['pc'] - 0x100000 + 4]
        assert row['mode'] == 'ARM' and row['bytes'] == 4 and row['canonicalOwner'] is None
        assert hashlib.sha256(data).hexdigest() == row['sha256']
    calls = [row for row in report['actualCalls']
             if row['entry'] == 0x101a1c and row['args'][1] == low]
    assert len(calls) == 1 and calls[0]['mode'] == 'Thumb'
    assert calls[0]['args'][0] != 0 and calls[0]['args'][2:] == [0x28c, 1]
    assert calls[0]['lr'] == 0x160644
    caller = decode(image, 0x100000, 0x160628, 0x1c)
    chosen = {x.address: x for x in caller}
    assert chosen[0x160638].mnemonic == 'ldr' and chosen[0x160638].op_str == 'r1, [pc, #0x5bc]'
    assert chosen[0x160628].mnemonic == 'ldr' and chosen[0x160628].op_str == 'r3, [r4, #0x18]'
    assert chosen[0x16063c].mnemonic == 'mov' and chosen[0x16063c].operands[1].imm == 0x28c
    assert chosen[0x160640].mnemonic == 'blx' and chosen[0x160640].operands[0].imm == 0x101a1c
    literal = image[0x160bfc - 0x100000:0x160c00 - 0x100000]
    assert int.from_bytes(literal, 'little') == low
    assert hashlib.sha256(literal).hexdigest() == proposal['caller']['selectedLiteral']['sha256']
    witness = dict(status='coordinator-reviewed-unowned-original-shader-array-callback',
        moduleSha256=proposal['moduleSha256'], entry=low, mode='ARM',
        instructionRanges=proposal['instructionRanges'], excludedPools=proposal['excludedPools'],
        followingCanonical=0x171a14, predecessorDiscoveredFunctions=census['functionCount'],
        actualArrayCall=calls[0], countOrigin='Caller R3 loaded from record field0x18; measured value1',
        instructionsObserved=trace,
        staticCaller=dict(start=0x160628,endExclusive=0x160644,bytes=28,sha256=hashlib.sha256(image[0x160628-0x100000:0x160644-0x100000]).hexdigest()),
        callbackLiteral=dict(start=0x160bfc,endExclusive=0x160c00,bytes=4,sha256=hashlib.sha256(literal).hexdigest()),
        originalReference=pin(reference), proposal=pin(proposal_path),
        originalExecution=pin(report_path), producer=pin(Path(__file__).resolve()),
        sourceCreditGranted=0, inventoryAdmissionGranted=False, nativeTextDenominatorChanged=False)
    output = ROOT / 'evidence/verification/shader-callable-witnesses.json'
    assert not output.exists()
    output.write_text(json.dumps(witness, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(status=witness['status'], instructionBytes=112, excludedPoolBytes=8,
                         executedInstructionPositions=28, sourceCreditGranted=0)))


if __name__ == '__main__':
    main()
