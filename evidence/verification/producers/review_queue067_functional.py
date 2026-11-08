import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[3]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import ci_native_build as ci
import functional_report
import native_shader_inventory as inventory


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
    proof_path = ROOT / 'evidence/verification/queue067-coordinator-000282d.json'
    proof = read(proof_path)
    require(proof['status'] == 'coordinator-reviewed-committed-queue-replay-passed'
            and proof['pipelineTests'] == 120 and proof['completeNativeArtifactComparisons'] == 990
            and len(proof['completeLogicalCorpora']) == 63 and proof['applicableSemanticRejections'] == 20,
            'Complete independently committed queue qualification is absent')
    require(pin(ROOT / proof['producer']['path']) == proof['producer']
            and pin(ROOT / proof['rawReplay']['path']) == proof['rawReplay'], 'Queue reviewer/replay identity differs')
    physical_path = ROOT / 'evidence/verification/thor-queue067-physical.json'
    physical = read(physical_path)
    require(len(physical['cases']) == 5 and all(x['originalGraphAndBudgetsMatch']
            and x['liveNativeHandlesAfterJoinClose'] == 0 for x in physical['cases']),
            'Separate physical queue capture review differs')
    registry = read(ROOT / 'config/functional-functions.json')
    require(len(registry['functions']) == 479, 'Unexpected pre-admission queue registry')
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = {row['address']: row for row in census['functions']}
    existing = {int(row['name'][3:], 16) for row in registry['functions']}
    existing.update(row['address'] for row in ci.accepted_functions(ROOT))
    witness_path = ROOT / 'evidence/lanes/native-file-queue067/source-v1/candidate-functions.json'
    witness = read(witness_path)
    require(witness['excludedHelper']['address'] == 0x15e304
            and witness['excludedHelper']['sourceCreditGranted'] == 0, 'Partial join-helper exclusion differs')
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    require(hashlib.sha256(image).hexdigest() == registry['moduleSha256'], 'Original queue module differs')
    functions = []
    for candidate in witness['functions']:
        address = candidate['address']
        require(address not in existing, 'Queue entry already has source credit')
        original = canonical[address]
        ranges = [{key: row[key] for key in ('start', 'endExclusive', 'bytes')}
                  for row in candidate['instructionRanges']]
        require(original['mode'] == candidate['mode'] == 'ARM' and ranges == original['ranges'],
                'Complete canonical queue extent differs')
        require(not any(max(a['start'], b['start']) < min(a['endExclusive'], b['endExclusive'])
                        for owner in existing for a in ranges for b in canonical[owner]['ranges']),
                'Queue instruction body overlaps previous source accounting')
        for row in candidate['instructionRanges'] + candidate['readonlyLiteralSpans']:
            data = image[row['start'] - 0x100000:row['endExclusive'] - 0x100000]
            require(len(data) == row['bytes'] and hashlib.sha256(data).hexdigest() == row['sha256'],
                    'Original queue body/pool witness differs')
        body = b''.join(image[row['start'] - 0x100000:row['endExclusive'] - 0x100000] for row in ranges)
        entry = next(row for row in ranges if row['start'] <= address < row['endExclusive'])
        functions.append(dict(symbol=f'fn_{address:08x}', source=pin(ROOT / candidate['sourcePath']),
            sourceName=candidate['sourceSymbol'], symbolNames=pin(ROOT / 'include/bytematch_names.h'),
            canonicalIdentity=dict(address=address, mode='ARM', programId=registry['programId'],
                                   moduleSha256=registry['moduleSha256']),
            originalInstructionBytes=len(body), originalInstructionRanges=ranges,
            originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=entry['endExclusive'] - address,
            literalPoolsExcluded=candidate['readonlyLiteralSpans'], exactObjectSpan=False,
            exactLinkedSpan=False, functionalConfidence='medium',
            behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
                independentSourceComponentReplay=pin(proof_path), completeCanonicalWitnesses=pin(witness_path),
                actualWindowsAndHighAddressA64=True, sourceCodeOriginalImageMapped=False,
                pipelineTests=120, completeNativeArtifactComparisons=990, completeLogicalCaseFiles=63,
                returningControlChecks=21, applicableSemanticRejections=20,
                arm32NarrowingControlInapplicable=True, persistentCaughtAttemptControls=11,
                separatePhysicalAndroidCaptureReview=pin(physical_path),
                quiescentTaskObservationsOnly=True, arbitraryConcurrentPollingQualified=False,
                unvisitedOriginalPCs=candidate['unvisitedPCs'],
                noConditionSatisfiedWitnessPCs=candidate['noConditionSatisfiedWitnessPCs'],
                domain=witness['boundedDomain'],
                limits=[
                    'Queue links/counts use the measured recursive mutex; clear is before start or after join.',
                    'Portable running/current fields are atomic; frozen066 ready/error/payload fields remain ordinary C.',
                    'Task reads/destruction require before-start, paused-event acquire or joined state; arbitrary polling is unqualified.',
                    'Source selectors use measured066 mode5 and explicit allocator/filesystem service domains.',
                    'Queue/block allocation and thread create/join services retain measured normal-return domains; terminal errors are separate.',
                    'The original asynchronous read-error lost-buffer leak is preserved; no universal memory-safety claim.',
                    'The partial15e304 join helper receives no independent source admission.',
                    'Missing and condition-false-only PCs are recorded explicitly, not treated as exercised paths.',
                    'Five physical pthread captures are separate component evidence; no historical scheduler, full bootstrap or native-game claim.'
                ], confidenceJustification='Medium: complete implemented canonical bodies, independent committed original/source/native replay, exact typed ownership/budgets/file-operation order, returning wrong-source controls and persistent access boundaries. Finite domains; no exact or universal equivalence claim.')))
    require(len(functions) == 7 and sum(x['originalInstructionBytes'] for x in functions) == 1628,
            'Queue complete-body roster differs')
    manifest = read(ROOT / 'evidence/lanes/native-file-queue067/public-inputs-v1/manifest.json')
    dependencies = [pin(ROOT / row['proposedPublicPath']) for row in manifest['productionAndFixtures']
                    if row['role'] in {'production-algorithm', 'header'}]
    require(len(dependencies) == 64, 'Queue production/header dependency closure differs')
    packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-file-queue-manager-worker',
        moduleSha256=registry['moduleSha256'], functions=functions, sourceDependencies=dependencies,
        headers=[row for row in dependencies if row['path'].endswith('.h')]
                + [pin(ROOT / 'include/bytematch_names.h')],
        qualificationOnlySources=[row['proposedPublicPath'] for row in manifest['productionAndFixtures']
                                  if row['role'].startswith('qualification-')],
        originalPackets=[pin(proof_path), pin(witness_path), pin(physical_path)],
        producer=pin(Path(__file__).resolve()), acceptedSourceCreditGranted=0, exactMatchingClaimed=False,
        overallConfirmedSourceCoverageClaimed=False, wholeBootstrapFilesystemSchedulerOrGameClaimed=False)
    output = ROOT / 'evidence/functional/queue067.json'
    require(not output.exists(), 'Preserve existing queue functional packet')
    output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    fragment = copy.deepcopy(registry)
    fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
                                  sourceLookup='repository-function-index') for row in functions]
    progress = read(ROOT / 'work/clean-replay/queue067-000282d/build/update-content0/report.json')
    require(len(functional_report.generate(ROOT, progress, fragment)['functions']) == 7,
            'Queue complete functional schema failed')
    folder = ROOT / 'work/queue067-admission/negative-proofs-v1'
    folder.mkdir(parents=True, exist_ok=False)
    controls = []
    for name in ('pool-as-code', 'wrong-byte-count', 'wrong-mode', 'wrong-source',
                 'wrong-source-name', 'wrong-entry', 'wrong-confidence'):
        malformed = copy.deepcopy(packet)
        row = malformed['functions'][0]
        if name == 'pool-as-code':
            row['originalInstructionRanges'][0]['endExclusive'] += 4
            row['originalInstructionRanges'][0]['bytes'] += 4
        elif name == 'wrong-byte-count':
            row['originalInstructionBytes'] -= 4
        elif name == 'wrong-mode':
            row['canonicalIdentity']['mode'] = 'Thumb'
        elif name == 'wrong-source':
            row['source'] = pin(ROOT / 'src/native/wave067-queue/file_queue.h')
        elif name == 'wrong-source-name':
            row['sourceName'] = 'unimplemented_queue_helper'
        elif name == 'wrong-entry':
            row['reportEntryBytes'] -= 4
        else:
            row['functionalConfidence'] = 'high'
        path = folder / (name + '.json')
        path.write_text(json.dumps(malformed, indent=2) + '\n', encoding='utf-8')
        bad = copy.deepcopy(fragment)
        for item in bad['functions']:
            item['packet'] = pin(path)
        try:
            functional_report.generate(ROOT, progress, bad)
        except ValueError as error:
            controls.append(dict(case=name, rejected=True, reason=str(error)))
        else:
            raise ValueError('Malformed queue functional proof accepted: ' + name)
    result = dict(status='seven-medium-queue-helpers-schema-validated-pending-registry',
        functions=fragment['functions'], instructionFootprintBytes=1628, controls=controls,
        packet=pin(output), sourceCreditGranted=0, exactMatchingCreditGranted=0)
    (ROOT / 'evidence/verification/queue067-functional-validation.json').write_text(
        json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(functions=7, instructionBytes=1628, malformedProofControls=len(controls))))


if __name__ == '__main__':
    main()
