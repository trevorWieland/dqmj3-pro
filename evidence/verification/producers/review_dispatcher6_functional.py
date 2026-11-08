import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[3]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import ci_native_build as ci
import functional_report
import native_provider_inventory as inventory


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def main():
    coor_path = ROOT / 'evidence/verification/dispatcher6-coordinator-97197d7.json'
    coor = read(coor_path)
    if (coor['status'] != 'complete-public-dispatcher-replay-reviewed-by-coordinator'
            or coor['pipelineTests'] != 112 or coor['producerTests'] != 12
            or coor['executedPcs'] != 4569 or coor['invariantOnlyPcs'] != 5
            or coor['returningControlExecutionsPerCopy'] != 24
            or coor['byteIdenticalControlArtifactPairs'] != 24):
        raise ValueError('Complete dispatcher independent replay review absent')
    registry = read(ROOT / 'config/functional-functions.json')
    if len(registry['functions']) != 387:
        raise ValueError('Unexpected pre-admission registry')
    composed, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = {x['address']: x for x in composed['functions']}
    original = canonical[0x73b7a4]
    existing = {int(x['name'][3:], 16) for x in registry['functions']}
    existing.update(x['address'] for x in ci.accepted_functions(ROOT))
    if original['address'] in existing or any(
            max(a['start'], b['start']) < min(a['endExclusive'], b['endExclusive'])
            for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges']):
        raise ValueError('Dispatcher overlaps previously credited source')
    source = ROOT / 'src/native/wave055/dispatcher-v6/source/dispatch6.c'
    aliases = read(ROOT / 'config/source-names.json')['mappings']
    alias = dict(symbol='fn_0073b7a4', sourceName='state_dispatch6', sourcePath=source.relative_to(ROOT).as_posix())
    if aliases.count(alias) != 1:
        raise ValueError('Unique dispatcher source alias absent')
    lane = ROOT / 'work/native-state055/dispatcher-v6'
    claim = read(lane / 'claim.json')
    invariants_path = lane / 'control-invariants.json'
    invariants = read(invariants_path)
    execution = read(lane / 'execution.json')
    supplement = read(lane / 'final-path-supplement.json')
    visited = set(execution['originalVisitedPcs'])
    visited.update(pc for row in supplement['cases'] for pc in row['original']['visitedPcs'])
    unhit = [x['start'] for x in invariants['individualOriginalByteWitnesses']]
    all_pcs = {pc for part in original['ranges'] for pc in range(part['start'], part['endExclusive'], 4)}
    if (len(all_pcs) != 4574 or len(visited) != 4569 or len(unhit) != 5
            or visited & set(unhit) or visited | set(unhit) != all_pcs
            or original['textBodyBytes'] != 18296 or claim['instructionBytes'] != 18296):
        raise ValueError('Canonical dispatcher original-PC accounting differs')
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if hashlib.sha256(image).hexdigest() != registry['moduleSha256']:
        raise ValueError('Original image identity changed')
    body = b''.join(image[x['start'] - 0x100000:x['endExclusive'] - 0x100000] for x in original['ranges'])
    entry = next(x for x in original['ranges'] if x['start'] <= original['address'] < x['endExclusive'])
    production = []
    manifest = read(ROOT / 'evidence/lanes/native-state055/dispatcher-v6-public/stage-inputs.json')
    for row in manifest['files']:
        relative = row['publicInput']['path']
        if relative.startswith('src/native/') and Path(relative).suffix in ['.c', '.h']:
            production.append(pin(ROOT / relative))
    if len(production) != 20:
        raise ValueError('Production source/header dependency closure differs')
    for name in ['apply_bindings055.h', 'apply_types055.h', 'resource_view055.h']:
        snapshot = next(x for x in production if x['path'].endswith('/controller-v5/source/' + name))
        row = pin(ROOT / 'src/native/wave055/controller-v5' / name)
        if (row['sha256'], row['bytes']) != (snapshot['sha256'], snapshot['bytes']):
            raise ValueError('Existing quoted header differs from frozen source snapshot')
        production.append(row)
    function = dict(symbol=alias['symbol'], source=pin(source), sourceName=alias['sourceName'],
        symbolNames=pin(ROOT / 'include/bytematch_names.h'),
        canonicalIdentity=dict(address=original['address'], mode=original['mode'],
            programId=registry['programId'], moduleSha256=registry['moduleSha256']),
        originalInstructionBytes=len(body), originalInstructionRanges=original['ranges'],
        originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=entry['endExclusive'] - original['address'],
        exactObjectSpan=False, exactLinkedSpan=False, functionalConfidence='medium',
        behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
            independentSourceComponentReplay=pin(coor_path), originalInstructionPcs=4574,
            originalInstructionPcsVisited=4569, unexecutedOriginalPcs=unhit,
            unexecutedInstructionsNeverClaimedExecuted=True,
            conditionalClosedGraphArgument=pin(ROOT / 'evidence/verification/dispatcher6-coordinator-97197d7.json'),
            actualWindowsAndHighAddressA64=True, sourceGraphOriginalCodeMapped=False,
            returningSourceControlExecutions=48, wholeOwnerOrGpuOrPhysicalAndroidOrGameClaimed=False,
            domain='Complete declared typed state component with naturally aligned live storage, bounded nonalias input/output views and backed descriptors. Native pointers retain their full width separately from serialized U32 fields. Nonfinite-product payload propagation, floating exception status, asynchronous observers, unknown callers and undeclared return ABIs remain unsupported. Actual original wrapper behavior is checked; owner construction, allocator startup and GPU execution remain separate.',
            confidenceJustification='Medium: complete canonical18296-byte function;3086 primary cases and2 supplemental data conditions;4569 executed PCs and5 separately reviewed invariant-only PCs; independent committed-source replay; complete raw worker/source-copy observations; native Windows/highA64 execution;3 main and24 control artifact pairs;8 returning controls across3 source targets per copy. Bounded behavior is not universal equivalence.'))
    packet = dict(schemaVersion=1, status='coordinator-reviewed-complete-bounded-graphics-dispatcher',
        moduleSha256=registry['moduleSha256'], functions=[function],
        headers=[x for x in production if x['path'].endswith('.h')], sourceDependencies=production,
        qualificationOnlySourceNames=['dispatch_fixture6.c'], originalPackets=[pin(coor_path)],
        producer=pin(Path(__file__).resolve()), acceptedSourceCreditGranted=0,
        exactMatchingClaimed=False, confirmedOverallSourceCoverageClaimed=False)
    output = ROOT / 'evidence/functional/dispatcher6.json'
    if output.exists():
        raise ValueError('Existing dispatcher functional packet must be preserved')
    output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    fragment = copy.deepcopy(registry)
    fragment['functions'] = [dict(name=alias['symbol'], confidence='medium', packet=pin(output),
        sourceLookup='repository-function-index')]
    report = read(ROOT / 'build/update-content0/report.json')
    if len(functional_report.generate(ROOT, report, fragment)['functions']) != 1:
        raise ValueError('Dispatcher functional schema incomplete')
    folder = ROOT / 'work/dispatcher6-admission/negative-proofs-v1'
    folder.mkdir(parents=True, exist_ok=False)
    controls = []
    for name in ['missing-range', 'wrong-byte-count', 'wrong-source', 'wrong-mode', 'wrong-entry-extent']:
        value = copy.deepcopy(packet)
        row = value['functions'][0]
        if name == 'missing-range':
            row['originalInstructionRanges'] = []
        elif name == 'wrong-byte-count':
            row['originalInstructionBytes'] -= 4
        elif name == 'wrong-source':
            row['source'] = pin(source.with_name('dispatch_types6.h'))
        elif name == 'wrong-mode':
            row['canonicalIdentity']['mode'] = 'Thumb'
        else:
            row['reportEntryBytes'] -= 4
        path = folder / (name + '.json')
        path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')
        candidate = copy.deepcopy(fragment)
        candidate['functions'][0]['packet'] = pin(path)
        try:
            functional_report.generate(ROOT, report, candidate)
        except ValueError as error:
            controls.append(dict(case=name, rejected=True, reason=str(error)))
        else:
            raise ValueError('Malformed dispatcher proof accepted: ' + name)
    result = dict(status='complete-medium-dispatcher-schema-validated-pending-registry',
        packet=pin(output), functions=fragment['functions'], controls=controls,
        instructionFootprintBytes=18296, sourceCreditGranted=0, exactMatchingCreditGranted=0,
        wholeOwnerOrGpuOrGameClaim=False, producer=pin(Path(__file__).resolve()))
    target = ROOT / 'evidence/verification/dispatcher6-functional-validation.json'
    target.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(functions=1, instructionBytes=18296, malformedProofControls=len(controls))))


if __name__ == '__main__':
    main()
