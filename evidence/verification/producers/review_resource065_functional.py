import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[3]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import ci_native_build as ci
import functional_report
import native_sdk_inventory as inventory


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def require(value, reason):
    if not value:
        raise ValueError(reason)


def main():
    coordinator_path = ROOT / 'evidence/verification/resource065-coordinator-5c2b215.json'
    coordinator = read(coordinator_path)
    require(coordinator['status'] == 'complete-public-resource-CPU-replay-reviewed-by-coordinator'
            and coordinator['identicalNativeArtifacts'] == 461 and coordinator['returningControls'] == 39
            and coordinator['rawHeaderChecks'] == 156 and not coordinator['blockedWorkAccesses'], 'Complete resource qualification is absent')
    registry = read(ROOT / 'config/functional-functions.json')
    require(len(registry['functions']) == 439, 'Unexpected pre-admission resource registry')
    proposal_path = ROOT / 'evidence/lanes/native-effect065/resource-cpu-v1/intake-proposal.json'
    boundary_path = ROOT / 'evidence/lanes/native-effect065/resource-cpu-v1/boundaries-and-coverage.json'
    proposal, boundaries = read(proposal_path), read(boundary_path)
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = {row['address']: row for row in census['functions']}
    existing = {int(row['name'][3:], 16) for row in registry['functions']}
    existing.update(row['address'] for row in ci.accepted_functions(ROOT))
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    require(hashlib.sha256(image).hexdigest() == registry['moduleSha256'], 'Canonical original resource module differs')
    functions = []
    for address in proposal['canonicalKernelCandidates']:
        candidates = [row for row in boundaries['functions'] if row['entry'] == address]
        require(len(candidates) == 1 and address not in existing, 'Resource identity duplicates prior accounting or lacks a unique proof')
        candidate, original = candidates[0], canonical[address]
        keys = ('start', 'endExclusive', 'bytes')
        require(candidate['mode'] == original['mode'] and candidate['instructionBytes'] == original['textBodyBytes']
                and [tuple(row[key] for key in keys) for row in candidate['instructionRanges']]
                == [tuple(row[key] for key in keys) for row in original['ranges']], 'Complete canonical resource body differs')
        require(not any(max(a['start'], b['start']) < min(a['endExclusive'], b['endExclusive'])
                        for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges']), 'Resource function overlaps prior source accounting')
        data = candidate['originalDataSpans']
        witnesses = candidate['instructionRanges'] + data['fixedPCRelativeDataReads'] + data['interiorNoninstructionRanges']
        for row in witnesses:
            raw = image[row['start'] - 0x100000:row['endExclusive'] - 0x100000]
            require(len(raw) == row['bytes'] and hashlib.sha256(raw).hexdigest() == row['sha256'], 'Resource original instruction/data witness differs')
        body = b''.join(image[row['start'] - 0x100000:row['endExclusive'] - 0x100000] for row in original['ranges'])
        entry = [row for row in original['ranges'] if row['start'] <= address < row['endExclusive']]
        require(len(entry) == 1, 'Resource entry has ambiguous canonical ownership')
        functions.append(dict(symbol=f'fn_{address:08x}', source=pin(ROOT / candidate['sourcePath']),
            canonicalIdentity=dict(address=address, mode=original['mode'], programId=registry['programId'], moduleSha256=registry['moduleSha256']),
            originalInstructionBytes=len(body), originalInstructionRanges=original['ranges'],
            originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=entry[0]['endExclusive'] - address,
            originalDataWitnesses=data, exactObjectSpan=False, exactLinkedSpan=False, functionalConfidence='medium',
            behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
                independentSourceComponentReplay=pin(coordinator_path), originalEntryAndDataWitnesses=pin(boundary_path),
                actualWindowsAndHighAddressA64=True, returningSourceGraphControls=39,
                pipelineTests=coordinator['pipelineTests'], observerTests=15, sourceOnlyUnits=547,
                fullCanonicalColdFragmentsIncluded=True, hookVisitsDoNotProvePredicateSatisfiedExecution=True,
                limits=['Vertex and attribute domains retain the explicit available-binding and index preconditions.',
                    'Constant floating values are compared as opaque bit patterns; rendering is unproved.',
                    'Texture dimensions through 32x32 retain complete backing and a 4096-byte usable scratch allocation even for zero requests.',
                    'Serialized U32 offsets, device words and actual widened native pointers remain separately typed.',
                    'The main resource constructor/finalizer, supplemental entries, SDK cold startup, GPU, physical Android and complete native games remain unqualified.'],
                confidenceJustification='Medium: complete canonical instruction/data extents including discontiguous cold fragments; original/source/model CPU comparisons; independent committed replay; all 461 raw artifacts reproduce; 39 wrong-source controls genuinely return and reject. No universal or exact matching claim.')))
    require(len(functions) == 9 and sum(row['originalInstructionBytes'] for row in functions) == 3396, 'Complete resource candidate roster differs')
    manifest = read(ROOT / 'evidence/lanes/native-effect065/resource-public-inputs-v1/inputs.json')
    dependencies = [pin(ROOT / row['path']) for row in manifest['files'] if row['path'].startswith('src/native/')]
    packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-resource-CPU-kernels',
        moduleSha256=registry['moduleSha256'], functions=functions, sourceDependencies=dependencies,
        headers=[row for row in dependencies if row['path'].endswith('.h')],
        qualificationOnlySources=[row['path'] for row in manifest['files'] if row['path'].startswith('toolscripts/') and row['path'].endswith('.c')],
        producer=pin(Path(__file__).resolve()), originalPackets=[pin(coordinator_path), pin(proposal_path), pin(boundary_path)],
        acceptedSourceCreditGranted=0, exactMatchingClaimed=False, confirmedOverallSourceCoverageClaimed=False,
        fullResourceCtorFinalizerGpuPhysicalAndroidOrGameClaimed=False)
    output = ROOT / 'evidence/functional/resource065.json'
    require(not output.exists(), 'Preserve existing resource functional packet')
    output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    fragment = copy.deepcopy(registry)
    fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output), sourceLookup='repository-function-index') for row in functions]
    progress = read(ROOT / 'work/clean-replay/resource065-5c2b215/build/update-content0/report.json')
    require(len(functional_report.generate(ROOT, progress, fragment)['functions']) == 9, 'Complete resource functional schema validation failed')
    folder = ROOT / 'work/resource065-admission/negative-proofs-v1'
    folder.mkdir(parents=True, exist_ok=False)
    controls = []
    selected = next(index for index, row in enumerate(functions) if len(row['originalInstructionRanges']) > 1)
    for name in ('missing-cold-fragment', 'partial-range', 'wrong-byte-count', 'wrong-mode', 'wrong-source', 'wrong-entry'):
        malformed = copy.deepcopy(packet)
        row = malformed['functions'][selected]
        if name == 'missing-cold-fragment':
            row['originalInstructionRanges'].pop()
        elif name == 'partial-range':
            row['originalInstructionRanges'][0]['endExclusive'] -= 4
            row['originalInstructionRanges'][0]['bytes'] -= 4
        elif name == 'wrong-byte-count':
            row['originalInstructionBytes'] -= 4
        elif name == 'wrong-mode':
            row['canonicalIdentity']['mode'] = 'Thumb'
        elif name == 'wrong-source':
            row['source'] = pin(ROOT / 'src/native/wave065-resource/effect_vertex.h')
        else:
            row['reportEntryBytes'] -= 4
        path = folder / (name + '.json')
        path.write_text(json.dumps(malformed, indent=2) + '\n', encoding='utf-8')
        control_registry = copy.deepcopy(fragment)
        for entry in control_registry['functions']:
            entry['packet'] = pin(path)
        try:
            functional_report.generate(ROOT, progress, control_registry)
        except ValueError as error:
            controls.append(dict(case=name, rejected=True, reason=str(error)))
        else:
            raise ValueError('Malformed resource proof accepted: ' + name)
    report = dict(status='9-medium-resource-kernels-schema-validated-pending-registry', functions=fragment['functions'],
        controls=controls, instructionFootprintBytes=3396, packet=pin(output), sourceCreditGranted=0, exactMatchingCreditGranted=0)
    (ROOT / 'evidence/verification/resource065-functional-validation.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(functions=9, instructionBytes=3396, malformedProofControls=len(controls))))


if __name__ == '__main__':
    main()
