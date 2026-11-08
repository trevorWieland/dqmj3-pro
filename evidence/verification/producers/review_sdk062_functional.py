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
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=path.stat().st_size,
                sha256=hashlib.sha256(path.read_bytes()).hexdigest())


def main():
    coordinator_path = ROOT / 'evidence/verification/sdk062-coordinator-a96256d.json'
    coordinator = read(coordinator_path)
    if (coordinator['status'] != 'complete-public-SDK-replay-reviewed-by-coordinator'
            or coordinator['pipelineTests'] != 128 or coordinator['freshStageTests'] != 59
            or coordinator['returningControls'] != 99 or len(coordinator['identicalNativeArtifacts']) != 1761):
        raise ValueError('Complete independent SDK qualification absent')
    registry = read(ROOT / 'config/functional-functions.json')
    if len(registry['functions']) != 396:
        raise ValueError('Unexpected pre-admission SDK registry')
    proposal_path = ROOT / 'evidence/verification/sdk062-complete-entry-proposal.json'
    proposal = read(proposal_path)
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = {row['address']: row for row in census['functions']}
    existing = {int(row['name'][3:], 16) for row in registry['functions']}
    existing.update(row['address'] for row in ci.accepted_functions(ROOT))
    aliases = {row['symbol']: row for row in read(ROOT / 'config/source-names.json')['mappings']}
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if hashlib.sha256(image).hexdigest() != registry['moduleSha256']:
        raise ValueError('Original SDK module differs')
    functions = []
    for candidate in proposal['completeEntryCandidates']:
        address = candidate['entry']
        symbol = f'fn_{address:08x}'
        alias = aliases.get(symbol)
        original = canonical[address]
        if (alias is None or alias['sourceName'] != candidate['sourceFunction']
                or alias['sourcePath'] != candidate['sourcePath'] or address in existing
                or original['mode'] != candidate['mode']
                or original['textBodyBytes'] != candidate['instructionBytes']):
            raise ValueError('Complete SDK identity/source alias differs')
        if any(max(a['start'], b['start']) < min(a['endExclusive'], b['endExclusive'])
               for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges']):
            raise ValueError('SDK function overlaps prior source accounting')
        body = b''.join(image[p['start'] - 0x100000:p['endExclusive'] - 0x100000] for p in original['ranges'])
        for row in candidate['instructionRanges'] + candidate['referencedPcRelativeData']:
            if hashlib.sha256(image[row['start'] - 0x100000:row['endExclusive'] - 0x100000]).hexdigest() != row['sha256']:
                raise ValueError('SDK original instruction/literal witness differs')
        functions.append(dict(symbol=symbol, source=pin(ROOT / alias['sourcePath']),
            sourceName=alias['sourceName'], symbolNames=pin(ROOT / 'include/bytematch_names.h'),
            canonicalIdentity=dict(address=address, mode=original['mode'], programId=registry['programId'],
                                   moduleSha256=registry['moduleSha256']),
            originalInstructionBytes=len(body), originalInstructionRanges=original['ranges'],
            originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=len(body),
            exactObjectSpan=False, exactLinkedSpan=False, functionalConfidence='medium',
            behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
                independentSourceComponentReplay=pin(coordinator_path),
                originalEntryAndDataWitnesses=pin(proposal_path), actualWindowsAndHighAddressA64=True,
                sourceGraphOriginalImageMapped=False, returningSourceGraphControls=99,
                pipelineTests=128, freshStageTests=59, sourceOnlyUnits=536,
                hookVisitsDoNotProvePredicateSatisfiedExecution=True,
                functionSpecificDomain=candidate['domain'], globalDomain=proposal['globalDomain'],
                limits=['Successful bounded custom allocation; default allocator and forced-left insertion are not separately admitted.',
                    'Arbitration is staged with declared service/ownership preconditions; arbitrary concurrency and other kernel modes are unproved.',
                    'Live external references exclude the measured object finalizer callsites; full finalizers remain dependencies.',
                    'Task prerequisites receive the explicit measured tag; complete factory/task caller ownership is unproved.',
                    'Original and source clock inputs retain their actual values; independent arithmetic validates the real Windows readings.',
                    'Void default/runtime callbacks exclude raw volatile register-return equality.',
                    'Physical Android, GPU, SDK cold startup and complete native game builds are unproved.'],
                confidenceJustification='Medium: complete canonical instruction/data witnesses and real original calls; fresh committed source-only CPU/native Windows/high-address A64 replay; whole-arena and explicit typed-pointer models; all 99 wrong-source controls return and reject; 1761 raw artifacts reproduce exactly. No exact linked/object or universal behavior claim.')))
    if len(functions) != 43 or sum(row['originalInstructionBytes'] for row in functions) != 4240:
        raise ValueError('Complete bounded SDK candidate roster differs')
    manifest = read(ROOT / 'evidence/lanes/native-sdk062/public-inputs-v1/source-manifest.json')
    dependencies = [pin(ROOT / row['path']) for row in manifest['files']
                    if row['role'] in ('production-algorithm', 'header')]
    dependencies.append(pin(ROOT / 'include/bytematch_names.h'))
    packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-SDK-context-arbitration-object-task-clock',
        moduleSha256=registry['moduleSha256'], functions=functions,
        headers=[row for row in dependencies if row['path'].endswith('.h')], sourceDependencies=dependencies,
        qualificationOnlySources=[row['path'] for row in manifest['files'] if row['role'] in ('qualification-fixture', 'cpu-model')],
        producer=pin(Path(__file__).resolve()), originalPackets=[pin(coordinator_path), pin(proposal_path)],
        acceptedSourceCreditGranted=0, exactMatchingClaimed=False, confirmedOverallSourceCoverageClaimed=False,
        fullSdkStartupFactoryTaskGpuOrGameClaimed=False)
    output = ROOT / 'evidence/functional/sdk062.json'
    if output.exists():
        raise ValueError('Preserve existing SDK functional packet')
    output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    fragment = copy.deepcopy(registry)
    fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
        sourceLookup='repository-function-index') for row in functions]
    progress = read(ROOT / 'work/clean-replay/sdk062-a96256d/build/update-content0/report.json')
    if len(functional_report.generate(ROOT, progress, fragment)['functions']) != 43:
        raise ValueError('SDK complete functional schema validation failed')
    folder = ROOT / 'work/sdk062-admission/negative-proofs-v1'
    folder.mkdir(parents=True, exist_ok=False)
    controls = []
    for name in ('partial-range', 'wrong-byte-count', 'wrong-mode', 'wrong-source', 'wrong-alias', 'wrong-entry'):
        malformed = copy.deepcopy(packet)
        row = malformed['functions'][0]
        if name == 'partial-range':
            row['originalInstructionRanges'][0]['endExclusive'] -= 4
            row['originalInstructionRanges'][0]['bytes'] -= 4
        elif name == 'wrong-byte-count':
            row['originalInstructionBytes'] -= 4
        elif name == 'wrong-mode':
            row['canonicalIdentity']['mode'] = 'Thumb'
        elif name == 'wrong-source':
            row['source'] = pin(ROOT / 'src/native/wave062-sdk/include/sdk062s.h')
        elif name == 'wrong-alias':
            row['sourceName'] = 'not_the_reviewed_sdk_source'
        else:
            row['reportEntryBytes'] -= 4
        path = folder / (name + '.json')
        path.write_text(json.dumps(malformed, indent=2) + '\n', encoding='utf-8')
        registry_control = copy.deepcopy(fragment)
        for entry in registry_control['functions']:
            entry['packet'] = pin(path)
        try:
            functional_report.generate(ROOT, progress, registry_control)
        except ValueError as error:
            controls.append(dict(case=name, rejected=True, reason=str(error)))
        else:
            raise ValueError('Malformed SDK proof accepted: ' + name)
    report = dict(status='43-medium-SDK-functions-schema-validated-pending-registry',
        functions=fragment['functions'], controls=controls, instructionFootprintBytes=4240,
        packet=pin(output), sourceCreditGranted=0, exactMatchingCreditGranted=0)
    (ROOT / 'evidence/verification/sdk062-functional-validation.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(functions=43, instructionBytes=4240, malformedProofControls=len(controls))))


if __name__ == '__main__':
    main()
