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

PUBLIC = ROOT / 'evidence/lanes/native-sdk-owner062/public-inputs-v2'


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
    proof_path = ROOT / 'evidence/verification/sdk-owner062-coordinator-3208f36.json'
    proof = read(proof_path)
    require(proof['status'] == 'coordinator-reviewed-committed-owner-replay-passed'
            and proof['pipelineTests'] == 122 and proof['nativeArtifactComparisons'] == 3708
            and proof['metadataBoundaryTests'] == 21, 'Independent complete owner qualification absent')
    require(pin(ROOT / proof['producer']['path']) == proof['producer'], 'Owner replay reviewer changed')
    require(pin(ROOT / proof['rawReplay']['path']) == proof['rawReplay'], 'Owner committed replay receipt changed')
    registry = read(ROOT / 'config/functional-functions.json')
    require(len(registry['functions']) == 473, 'Unexpected pre-admission owner registry')
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = {row['address']: row for row in census['functions']}
    existing = {int(row['name'][3:], 16) for row in registry['functions']}
    existing.update(row['address'] for row in ci.accepted_functions(ROOT))
    roster_path = PUBLIC / 'provenance/entry-roster-v1.json'
    roster = read(roster_path)
    source_manifest = read(PUBLIC / 'source-manifest-v1.json')
    source_paths = {Path(row['proposedPath']).name: row['proposedPath'] for row in source_manifest['files']}
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    require(hashlib.sha256(image).hexdigest() == registry['moduleSha256'] == roster['moduleSha256'],
            'Original owner module identity differs')
    functions = []
    for witness in roster['entries']:
        address = int(witness['address'], 16)
        require(address not in existing, 'Owner entry already has source credit')
        original = canonical[address]
        ranges = [{key: int(part[key], 16) if key != 'bytes' else part[key]
                   for key in ('start', 'endExclusive', 'bytes')} for part in witness['instructionRanges']]
        require(ranges == original['ranges'] and witness['mode'] == original['mode'],
                'Complete owner body differs from canonical inventory')
        require(not any(max(a['start'], b['start']) < min(a['endExclusive'], b['endExclusive'])
                        for owner in existing for a in ranges for b in canonical[owner]['ranges']),
                'Owner body overlaps prior source accounting')
        for part in witness['instructionRanges'] + witness.get('literalRanges', []):
            raw = image[int(part['start'], 16) - 0x100000:int(part['endExclusive'], 16) - 0x100000]
            require(len(raw) == part['bytes'] and hashlib.sha256(raw).hexdigest() == part['sha256'],
                    'Original owner instruction/pool witness differs')
        body = b''.join(image[part['start'] - 0x100000:part['endExclusive'] - 0x100000] for part in ranges)
        entry = next(part for part in ranges if part['start'] <= address < part['endExclusive'])
        source = ROOT / source_paths[Path(witness['sourcePath']).name]
        functions.append(dict(symbol=f'fn_{address:08x}', source=pin(source), sourceName=witness['sourceFunction'],
            symbolNames=pin(ROOT / 'include/bytematch_names.h'),
            canonicalIdentity=dict(address=address, mode=original['mode'], programId=registry['programId'],
                                   moduleSha256=registry['moduleSha256']),
            originalInstructionBytes=len(body), originalInstructionRanges=ranges,
            originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=entry['endExclusive'] - address,
            literalPoolsExcluded=witness.get('literalRanges', []), exactObjectSpan=False,
            exactLinkedSpan=False, functionalConfidence='medium',
            behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
                independentSourceComponentReplay=pin(proof_path), completeOriginalEntryWitnesses=pin(roster_path),
                actualWindowsAndHighAddressA64=True, sourceOnlyOriginalConstructions=0,
                returningControlsPerReplay=27, sameFinalPrimaryArenaControls=9,
                metadataBoundaryTests=21, pipelineTests=122, completeRawNativeArtifactComparisons=3708,
                primaryInsertionPcVisits=206, combinedInsertionPcVisits=246, domain=witness['domain'],
                limits=[
                    'Configuration selector uses provisioned slots and measured indices0/1/3; global startup is unqualified.',
                    'Owner initialization uses successful declared SDK allocation and context-disabled defaults.',
                    'The52/56-byte active-record producers and complete4b5afc/4b5c8c callers are unqualified.',
                    'Default allocator/free branches and null deleting-wrapper epilogue retain explicit exclusions.',
                    'Callbacks, timer transport and allocator services retain their measured fixture domains.',
                    'The primary insertion trace covers206 positions; only the combined rotation corpus covers246.',
                    'Native pointer-dependent arenas are checked against independent typed models per run.',
                    'No physical Android, GPU, complete SDK startup, universal equivalence or whole-game claim.'
                ], confidenceJustification='Medium: complete canonical instruction extents, immutable original witnesses, independent committed source replay, full typed arena/ownership observations, returning semantic controls and persistent metadata/read boundaries; exact matching remains separate.')))
    require(len(functions) == 6 and sum(row['originalInstructionBytes'] for row in functions) == 2368,
            'Owner complete-body admission roster differs')
    dependencies = [pin(ROOT / row.get('proposedPath', row.get('path')))
                    for row in source_manifest['files'] + source_manifest['existingSdkInputs']
                    if row['role'] != 'qualification-fixture']
    require(len(dependencies) == 33, 'Owner production/header dependency closure differs')
    packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-owner-config-insert-destroy',
        moduleSha256=registry['moduleSha256'], functions=functions, sourceDependencies=dependencies,
        headers=[row for row in dependencies if row['path'].endswith('.h')]
                + [pin(ROOT / 'include/bytematch_names.h')],
        qualificationOnlySources=[row.get('proposedPath', row.get('path'))
            for row in source_manifest['files'] + source_manifest['existingSdkInputs']
            if row['role'] == 'qualification-fixture'],
        originalPackets=[pin(proof_path), pin(roster_path)], producer=pin(Path(__file__).resolve()),
        acceptedSourceCreditGranted=0, exactMatchingClaimed=False,
        confirmedOverallSourceCoverageClaimed=False, wholeFactoryAllocatorStartupOrGameClaimed=False)
    output = ROOT / 'evidence/functional/sdk-owner062.json'
    require(not output.exists(), 'Preserve existing owner functional packet')
    output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    fragment = copy.deepcopy(registry)
    fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
                                  sourceLookup='repository-function-index') for row in functions]
    progress = read(ROOT / 'work/ci-review-3208f36/artifact/update-content0_report/report.json')
    require(len(functional_report.generate(ROOT, progress, fragment)['functions']) == 6,
            'Complete owner functional schema failed')
    folder = ROOT / 'work/sdk-owner062-admission/negative-proofs-v1'
    folder.mkdir(parents=True, exist_ok=False)
    controls = []
    for name in ('pool-as-code', 'wrong-byte-count', 'wrong-mode', 'wrong-source',
                 'wrong-source-name', 'wrong-entry', 'wrong-confidence'):
        malformed = copy.deepcopy(packet)
        row = malformed['functions'][0]
        if name == 'pool-as-code':
            row['originalInstructionRanges'][0]['endExclusive'] += 24
            row['originalInstructionRanges'][0]['bytes'] += 24
        elif name == 'wrong-byte-count':
            row['originalInstructionBytes'] -= 4
        elif name == 'wrong-mode':
            row['canonicalIdentity']['mode'] = 'Thumb'
        elif name == 'wrong-source':
            row['source'] = pin(ROOT / 'src/native/wave062-owner/include/owner062ab.h')
        elif name == 'wrong-source-name':
            row['sourceName'] = 'unimplemented_owner_helper'
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
            raise ValueError('Malformed owner proof accepted: ' + name)
    result = dict(status='six-medium-owner-helpers-schema-validated-pending-registry',
        functions=fragment['functions'], instructionFootprintBytes=2368, controls=controls,
        packet=pin(output), sourceCreditGranted=0, exactMatchingCreditGranted=0)
    (ROOT / 'evidence/verification/sdk-owner062-functional-validation.json').write_text(
        json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(functions=6, instructionBytes=2368, malformedProofControls=len(controls))))


if __name__ == '__main__':
    main()
