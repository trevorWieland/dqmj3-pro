import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[3]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import ci_native_build as ci
import functional_report
import native_file_inventory as inventory

ENTRIES = {
    0x5f35bc: ('effect_request_load066', 'request_task.c'),
    0x5f3324: ('effect_request_provider_reset066', 'request_provider.c'),
    0x6ec778: ('effect_request_provider_bytes066', 'request_provider.c'),
    0x6ec780: ('effect_request_length066', 'request_control.c'),
    0x6ec748: ('effect_request_selector066', 'request_control.c'),
    0x6ec754: ('effect_request_path066', 'request_control.c'),
}


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data),
                sha256=hashlib.sha256(data).hexdigest())


def require(value, reason):
    if not value:
        raise ValueError(reason)


def main():
    proof_path = ROOT / 'evidence/verification/file066-coordinator-06fa4e1.json'
    proof = read(proof_path)
    require(proof['status'] == 'complete-public-file066-CPU-replay-reviewed-by-coordinator'
            and proof['pipelineTests'] == 125 and proof['completeIdenticalNativeArtifacts'] == 686
            and proof['returningSemanticObservations'] == 18
            and proof['applicableSemanticRejections'] == 17,
            'Independent complete file066 qualification is absent')
    registry = read(ROOT / 'config/functional-functions.json')
    require(len(registry['functions']) == 467, 'Unexpected pre-admission file registry')
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = {row['address']: row for row in census['functions']}
    existing = {int(row['name'][3:], 16) for row in registry['functions']}
    existing.update(row['address'] for row in ci.accepted_functions(ROOT))
    witness_path = ROOT / 'evidence/verification/file-callable-inventory-witnesses.json'
    witness = read(witness_path)
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    require(hashlib.sha256(image).hexdigest() == registry['moduleSha256']
            == witness['moduleSha256'], 'Original file module identity differs')
    functions = []
    for address, (name, filename) in ENTRIES.items():
        require(address not in existing, 'File entry already has source credit')
        original = canonical[address]
        source = ROOT / 'src/native/wave066-request' / filename
        ranges = original['ranges']
        require(not any(max(a['start'], b['start']) < min(a['endExclusive'], b['endExclusive'])
                        for owner in existing for a in ranges for b in canonical[owner]['ranges']),
                'File body overlaps prior source accounting')
        body = b''.join(image[row['start'] - 0x100000:row['endExclusive'] - 0x100000]
                        for row in ranges)
        candidate = next(row for row in witness['functions'] if row['address'] == address)
        require([{key: part[key] for key in ('start', 'endExclusive', 'bytes')}
                 for part in candidate['instructionRanges']] == ranges,
                'Complete file callable body differs from reviewed inventory')
        for part in candidate['instructionRanges']:
            raw = image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]
            require(len(raw) == part['bytes'] and hashlib.sha256(raw).hexdigest() == part['sha256'],
                    'Original file instruction witness differs')
        entry = next(row for row in ranges if row['start'] <= address < row['endExclusive'])
        functions.append(dict(symbol=f'fn_{address:08x}', source=pin(source), sourceName=name,
            symbolNames=pin(ROOT / 'include/bytematch_names.h'),
            canonicalIdentity=dict(address=address, mode=original['mode'],
                programId=registry['programId'], moduleSha256=registry['moduleSha256']),
            originalInstructionBytes=len(body), originalInstructionRanges=ranges,
            originalBodySha256=hashlib.sha256(body).hexdigest(),
            reportEntryBytes=entry['endExclusive'] - address,
            indexedDispatchData=witness['dispatch'] if address == 0x5f35bc else None,
            exactObjectSpan=False, exactLinkedSpan=False, functionalConfidence='medium',
            behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
                independentSourceComponentReplay=pin(proof_path),
                completeOriginalEntryAndTableWitnesses=pin(witness_path),
                actualWindowsAndHighAddressA64=True, sourceGraphOriginalImageMapped=False,
                returningSemanticObservations=18, applicableSemanticRejections=17,
                arm32PointerTruncationMutationInapplicable=True,
                persistentCaughtAttemptControls=6, pipelineTests=125,
                sourceOnlyProductionUnits=577, hookVisitsDoNotProvePredicateSatisfiedExecution=True,
                domain='Valid initialized live task/control/provider objects with the measured base operation tables; exact typed pointer fields and unsigned selector/length words. Dispatcher uses qualified base-provider load/reset callbacks under the frozen synchronous file domains. Getter U64 values retain both words; void volatile-register returns are excluded.',
                limits=[
                    'Derived, reentrant or concurrently replaced operation tables are unqualified.',
                    'The load/reset dependencies retain explicit memory-filesystem, allocator and normal-return domains.',
                    'Source resolver modes outside5, factory error/async startup, full queue, cache teardown and populated lower renderer remain unqualified.',
                    'The20-byte indexed table is data and adds no instruction/source credit.',
                    'Physical Android, GPU and complete native game execution are not established by this CPU replay.'
                ],
                confidenceJustification='Medium: complete original instruction extents and table/caller identity; independent committed original/ARM/native Windows/high-A64 replay;686 identical raw native artifacts; full declared typed observations and returning semantic/provenance controls. No exact or universal equivalence claim.')))
    require(len(functions) == 6 and sum(row['originalInstructionBytes'] for row in functions) == 192,
            'Complete file helper admission roster differs')
    inputs = read(ROOT / 'evidence/lanes/native-effect-request066/public-inputs-v1/manifest.json')
    dependencies = [pin(ROOT / row['path']) for row in inputs['productionAndFixtures']
                    if row['role'] != 'qualification-fixture']
    require(len(dependencies) == 59, 'File production/header closure differs')
    packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-file-dispatch-provider-getters',
        moduleSha256=registry['moduleSha256'], functions=functions,
        sourceDependencies=dependencies,
        headers=[row for row in dependencies if row['path'].endswith('.h')]
                + [pin(ROOT / 'include/bytematch_names.h')],
        qualificationOnlySources=[row['proposedPublicPath'] for row in inputs['productionAndFixtures']
                                  if row['role'] == 'qualification-fixture'],
        originalPackets=[pin(proof_path), pin(witness_path)], producer=pin(Path(__file__).resolve()),
        acceptedSourceCreditGranted=0, exactMatchingClaimed=False,
        confirmedOverallSourceCoverageClaimed=False,
        partialResolverFactoryQueueRendererOrWholeGameClaimed=False)
    output = ROOT / 'evidence/functional/file066.json'
    require(not output.exists(), 'Preserve existing file functional packet')
    output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    fragment = copy.deepcopy(registry)
    fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
                                  sourceLookup='repository-function-index') for row in functions]
    progress = read(ROOT / 'work/clean-replay/file066-06fa4e1/build/update-content0/report.json')
    require(len(functional_report.generate(ROOT, progress, fragment)['functions']) == 6,
            'Complete file functional schema validation failed')
    folder = ROOT / 'work/file066-admission/negative-proofs-v1'
    folder.mkdir(parents=True, exist_ok=False)
    controls = []
    for name in ('missing-fragment', 'table-as-code', 'wrong-byte-count', 'wrong-mode',
                 'wrong-source', 'wrong-source-name', 'wrong-entry'):
        malformed = copy.deepcopy(packet)
        row = next(row for row in malformed['functions'] if row['symbol'] == 'fn_005f35bc')
        if name == 'missing-fragment':
            row['originalInstructionRanges'].pop()
        elif name == 'table-as-code':
            row['originalInstructionRanges'][0]['endExclusive'] += 20
            row['originalInstructionRanges'][0]['bytes'] += 20
        elif name == 'wrong-byte-count':
            row['originalInstructionBytes'] -= 4
        elif name == 'wrong-mode':
            row['canonicalIdentity']['mode'] = 'Thumb'
        elif name == 'wrong-source':
            row['source'] = pin(ROOT / 'src/native/wave066-request/request.h')
        elif name == 'wrong-source-name':
            row['sourceName'] = 'unimplemented_file_helper'
        else:
            row['reportEntryBytes'] -= 4
        path = folder / (name + '.json')
        path.write_text(json.dumps(malformed, indent=2) + '\n', encoding='utf-8')
        bad_registry = copy.deepcopy(fragment)
        for item in bad_registry['functions']:
            item['packet'] = pin(path)
        try:
            functional_report.generate(ROOT, progress, bad_registry)
        except ValueError as error:
            controls.append(dict(case=name, rejected=True, reason=str(error)))
        else:
            raise ValueError('Malformed file proof accepted: ' + name)
    result = dict(status='six-medium-file-helpers-schema-validated-pending-registry',
        functions=fragment['functions'], instructionFootprintBytes=192,
        controls=controls, packet=pin(output), sourceCreditGranted=0,
        exactMatchingCreditGranted=0)
    (ROOT / 'evidence/verification/file066-functional-validation.json').write_text(
        json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(functions=6, instructionBytes=192, malformedProofControls=len(controls))))


if __name__ == '__main__':
    main()
