import json
from pathlib import Path

import functional_report
import native_census_overlay
from native_wave013_common import ROOT, record, save, sha


def propose():
    folder = ROOT / 'evidence/lanes/squirrel-state049/stage-v1'
    path = folder / 'packet.json'
    packet = json.loads(path.read_text())
    verification = json.loads((folder / 'verification.json').read_text())
    if verification['packet'] != record(path) or verification['status'] != 'verified-bounded-root-factory-and-caller-stage-not-admission':
        raise ValueError('049 packet verification is absent or stale')
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    composed, overlays = native_census_overlay.compose(ROOT, json.loads(census_path.read_text()))
    canonical = {row['address']: row for row in composed['functions']}
    registry = json.loads((ROOT / 'config/functional-functions.json').read_text())
    existing = {row['name'] for row in registry['functions']}
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    rows = []
    for row in packet['functions']:
        original = canonical[row['entry']]
        ranges = original['ranges']
        symbol = row['symbol']
        if symbol in existing or original['mode'] != 'ARM' or original['textBodyBytes'] != row['instructionBytes']:
            raise ValueError('049 candidate is duplicated or lacks a complete canonical body')
        entry_bytes = next(part['endExclusive']-row['entry'] for part in ranges
            if part['start'] <= row['entry'] < part['endExclusive'])
        raw = b''.join(image[part['start']-0x100000:part['endExclusive']-0x100000] for part in ranges)
        source, origin = row['source'], row['source']['objectOrigin']
        behavior = {'allPassed': True, 'boundedNotUniversalEquivalence': True,
            'frozenPacket': record(path), 'rootFactoryAndCallerCases': 27,
            'normallyReturningCompiledControlsRejected': 7, 'normallyReturningControlPlatformExecutions': 21,
            'actualWindowsObserverTests': 15, 'originalInstructions': row['instructionBytes']//4,
            'originalInstructionsReached': len(row['observedInstructionAddresses']),
            'unhitInstructionAddresses': row['unobservedInstructionAddresses'], 'provenExcludedInstructionAddresses': [],
            'everyLiveAndNonPrivateByteCompared': False,
            'everyDefinedLiveGraphFieldAndNonPrivateCallerByteCompared': True,
            'wholeMemoryEquivalenceClaimed': False, 'universalEquivalenceClaimed': False,
            'independentCleanReplayClaimed': False, 'qualifiedDomain': packet['declaredDomain'],
            'allocatorDomain': 'Actual original SDK versus typed portable source; exact source budgets and all live roles, with SDK physical rounding kept separate.',
            'limits': ['No SDK credit or invoked unresolved engine handlers',
                'No allocation failure, arbitrary repeated initialization or parent-VM qualification',
                'No class/metamethod/underflow formatted-error path qualification',
                'No VM destruction, complete interpreter/game or Android OS/device execution',
                'Constructor-unwritten fields, native padding and uninitialized spare capacity are private',
                'Every unhit canonical PC stays explicit; no universal or whole-memory equivalence']}
        proposed = {'canonicalIdentity': {'programId': registry['programId'],
            'moduleSha256': packet['moduleSha256'], 'address': row['entry'], 'mode': 'ARM'},
            'symbol': symbol, 'sourceSymbol': row['sourceSymbol'], 'source': origin['source'],
            'functionalConfidence': 'medium', 'originalMode': 'ARM',
            'originalInstructionBytes': row['instructionBytes'], 'originalInstructionRanges': ranges,
            'reportEntryBytes': entry_bytes, 'originalSpanSha256': sha(raw),
            'originalPoolRanges': row['noninstructionDataRanges'], 'callerWitnesses': row['callerWitnesses'],
            'completePhysicalExtent': row['physicalSpan'], 'fallthroughContinuation': row['fallthroughContinuation'],
            'candidateObject': origin['object'], 'candidateInstructionAndPoolBytes': source['bytes'],
            'candidateLinkedSpanSha256': source['linkedSpanSha256'], 'exactObjectSpan': False,
            'exactLinkedSpan': False, 'sourceCreditRequested': 0, 'behavior': behavior}
        if row['sourceSymbol'] != symbol:
            proposed['sourceName'] = row['sourceSymbol']
            proposed['symbolNames'] = record(ROOT / 'include/bytematch_names.h')
        rows.append(proposed)
    if len(rows) != 13 or sum(row['originalInstructionBytes'] for row in rows) != 2508:
        raise ValueError('049 proposed canonical selection differs')
    target = folder / 'functional-proof-proposal.json'
    save(target, {'schemaVersion': 1, 'programId': registry['programId'],
        'moduleSha256': packet['moduleSha256'],
        'status': 'proposed-functional-proof-pending-coordinator-review-and-independent-replay',
        'acceptedSourceCreditGranted': 0, 'functions': rows,
        'headers': [row for row in packet['inputs'] if row['path'].endswith('.h')],
        'originalPackets': [record(path), record(folder / 'verification.json'), packet['completeExtents']],
        'producer': record(Path(__file__)), 'census': record(census_path), 'supplementalInventory': overlays,
        'originalInstructionBytes': 2508, 'underlyingSdkCreditGranted': 0,
        'previousConstructorSharedInitArrayPushAndAbsoluteSlotCreditExcluded': True,
        'independentCleanReplayClaimed': False, 'sharedRegistryChanged': False})
    registry['functions'] = [{'name': row['symbol'], 'confidence': 'medium',
        'packet': record(target), 'sourceLookup': 'repository-function-index'} for row in rows]
    save(folder / 'functional-registry-proposal.json', {'status': 'proposal-only-no-shared-registry-change',
        'functions': registry['functions'], 'sourceCreditRequested': 0})
    report_path = ROOT / 'build/update-content0/report.json'
    emitted = functional_report.generate(ROOT, json.loads(report_path.read_text()), registry)
    if len(emitted['functions']) != 13:
        raise ValueError('049 functional schema did not emit every proposed entry')
    save(folder / 'functional-schema-validation.json', {'status': 'passed', 'producer': record(Path(__file__)),
        'packet': record(target), 'report': record(report_path), 'emittedFunctions': emitted['functions'],
        'sharedRegistryChanged': False, 'sourceCreditGranted': 0})
    print(json.dumps({'functions': 13, 'instructionBytes': 2508, 'proposal': record(target)}), flush=True)


if __name__ == '__main__':
    propose()
