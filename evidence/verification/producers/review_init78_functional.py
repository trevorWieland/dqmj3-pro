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
    coor_path = ROOT / 'evidence/verification/init78-coordinator-173c9fd.json'
    coor = read(coor_path)
    if (coor['status'] != 'complete-public-initialization78-replay-reviewed-by-coordinator'
            or coor['pipelineTests'] != 113 or coor['frozenRosterPinsChecked'] != 396
            or coor['contextExecutedPcs'] != 275 or coor['contextInvariantOnlyPcs'] != 9
            or coor['cacheExecutedPcs'] != 502 or coor['dataAuditRows'] != 54
            or len(coor['workerIdenticalBinaryArtifacts']) != 162
            or len(coor['workerCoffHeaderTimestampOnlyDifferences']) != 55):
        raise ValueError('Complete independently reviewed construction proof absent')
    registry = read(ROOT / 'config/functional-functions.json')
    if len(registry['functions']) != 388:
        raise ValueError('Unexpected pre-admission functional registry')
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = {row['address']: row for row in census['functions']}
    existing = {int(row['name'][3:], 16) for row in registry['functions']}
    existing.update(row['address'] for row in ci.accepted_functions(ROOT))
    mappings = [row for row in read(ROOT / 'config/source-names.json')['mappings']
        if row['symbol'] in ['fn_0012ab74', 'fn_0012a32c']]
    if len(mappings) != 2:
        raise ValueError('Unique constructor aliases absent')
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if hashlib.sha256(image).hexdigest() != registry['moduleSha256']:
        raise ValueError('Original module identity changed')
    coverage = read(ROOT / 'work/native-state055/controller-init-v7/context-coverage-v1.json')
    functions = []
    for alias in mappings:
        address = int(alias['symbol'][3:], 16)
        original = canonical[address]
        if address in existing or any(max(a['start'], b['start']) < min(a['endExclusive'], b['endExclusive'])
                for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges']):
            raise ValueError('Constructor overlaps already credited instructions')
        context = address == 0x12ab74
        unvisited = coverage['unexecutedPcs'] if context else []
        byte_count, visited = (1136, 275) if context else (2008, 502)
        if original['textBodyBytes'] != byte_count:
            raise ValueError('Complete canonical constructor body changed')
        body = b''.join(image[row['start'] - 0x100000:row['endExclusive'] - 0x100000]
            for row in original['ranges'])
        entry = next(row for row in original['ranges'] if row['start'] <= address < row['endExclusive'])
        functions.append(dict(symbol=alias['symbol'], source=pin(ROOT / alias['sourcePath']),
            sourceName=alias['sourceName'], symbolNames=pin(ROOT / 'include/bytematch_names.h'),
            canonicalIdentity=dict(address=address, mode=original['mode'], programId=registry['programId'],
                moduleSha256=registry['moduleSha256']), originalInstructionBytes=len(body),
            originalInstructionRanges=original['ranges'], originalBodySha256=hashlib.sha256(body).hexdigest(),
            reportEntryBytes=entry['endExclusive'] - address, exactObjectSpan=False, exactLinkedSpan=False,
            functionalConfidence='medium', behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
                independentSourceComponentReplay=pin(coor_path), originalInstructionPcs=byte_count // 4,
                originalInstructionPcsVisited=visited, unexecutedOriginalPcs=unvisited,
                unexecutedInstructionsNeverClaimedExecuted=True, conditionalClosedGraphArgument=pin(coor_path),
                actualWindowsAndHighAddressA64=True, sourceGraphOriginalCodeMapped=False,
                returningSourceControlExecutions=18 if context else 24,
                resourceHelpersSdkFreeGpuPhysicalAndroidOrWholeGameClaimed=False,
                domain=('Live naturally aligned complete declared context component, disjoint from globals, code and caller stack. '
                    'Scalar target storage and genuine native pointer sidecars have their declared widths; null representation is the measured supported ABI. '
                    'The constructor publishes the context, initializes the full typed object and constant attributes, and returns status zero. '
                    'Nine RGB nonzero-exponent instructions are invariant-only after the dominating zero initialization. '
                    'Original zero/fill helpers are reference dependencies, without separate broader-domain admission.' if context else
                    'Live naturally aligned complete declared cache owner, disjoint from globals, code and caller stack, with the exact measured constant category/list input schema. '
                    'Name storage belongs to source globals and remains stable; descriptors contain native const-char pointers of their actual width. '
                    'Complete cache bytes, register IDs, masks, publication and logical descriptor count/type/name contents agree with actual original construction. '
                    'Raw pointer words and loaded DLL paths remain captured; only typed name fields have separate post-execution logical comparisons.'),
                confidenceJustification='Medium: complete canonical instruction extents, actual original execution and byte witnesses; independent committed-source replay; native Windows and high-address A64; independently rebuilt source copies and returning wrong-source controls. The full pipeline passed113 tests and the producers passed17+11 tests. Windows COFF timestamps remain raw and differ; linked/source behavior and declared code/data bytes are validated separately. No exact object or universal equivalence claim.')))
    wanted = {row['source']['path'] for row in functions}
    wanted.update('src/native/wave055/controller-init-v8/source-v2/' + name
        for name in ['catalogue8.c', 'defaults8.c', 'registers8.c'])
    wanted.update(['src/native/wave055/controller-v5/apply_bindings055.c', 'src/native/wave055/state055.c'])
    dependencies = {}
    for unit in read(ROOT / 'config/build-units.json')['units']:
        if unit['source'] in wanted:
            for relative in [unit['source'], *unit['headers']]:
                dependencies[relative] = pin(ROOT / relative)
    if not wanted <= set(dependencies):
        raise ValueError('Complete production constructor/global dependency closure absent')
    ordered = [dependencies[key] for key in sorted(dependencies)]
    packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-context-and-complete-cache-construction',
        moduleSha256=registry['moduleSha256'], functions=functions,
        headers=[row for row in ordered if row['path'].endswith('.h')], sourceDependencies=ordered,
        qualificationOnlySourceNames=['context_global7.c', 'native_fixture7.c', 'cache_fixture8.c'],
        originalPackets=[pin(coor_path)], producer=pin(Path(__file__).resolve()), acceptedSourceCreditGranted=0,
        resource7FunctionsAdmitted=False, exactMatchingClaimed=False, confirmedOverallSourceCoverageClaimed=False)
    output = ROOT / 'evidence/functional/init78.json'
    if output.exists():
        raise ValueError('Existing construction functional packet must be preserved')
    output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    fragment = copy.deepcopy(registry)
    fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
        sourceLookup='repository-function-index') for row in functions]
    progress = read(ROOT / 'build/update-content0/report.json')
    if len(functional_report.generate(ROOT, progress, fragment)['functions']) != 2:
        raise ValueError('Construction functional schema incomplete')
    folder = ROOT / 'work/init78-admission/negative-proofs-v1'
    folder.mkdir(parents=True, exist_ok=False)
    controls = []
    for name in ['missing-fragment', 'wrong-byte-count', 'wrong-source', 'wrong-mode', 'wrong-entry-extent']:
        value = copy.deepcopy(packet)
        row = next(item for item in value['functions'] if item['symbol'] == 'fn_0012ab74')
        if name == 'missing-fragment':
            row['originalInstructionRanges'] = row['originalInstructionRanges'][:1]
        elif name == 'wrong-byte-count':
            row['originalInstructionBytes'] -= 4
        elif name == 'wrong-source':
            row['source'] = pin(ROOT / 'src/native/wave055/controller-init-v7/source/context7.h')
        elif name == 'wrong-mode':
            row['canonicalIdentity']['mode'] = 'Thumb'
        else:
            row['reportEntryBytes'] -= 4
        path = folder / (name + '.json')
        path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')
        malformed = copy.deepcopy(fragment)
        for item in malformed['functions']:
            item['packet'] = pin(path)
        try:
            functional_report.generate(ROOT, progress, malformed)
        except ValueError as error:
            controls.append(dict(case=name, rejected=True, reason=str(error)))
        else:
            raise ValueError('Malformed construction proof accepted: ' + name)
    result = dict(status='two-medium-construction-functions-schema-validated-pending-registry', packet=pin(output),
        functions=fragment['functions'], controls=controls, instructionFootprintBytes=3144,
        sourceCreditGranted=0, exactMatchingCreditGranted=0, resource7FunctionsAdmitted=False,
        wholeOwnerGpuOrGameClaim=False, producer=pin(Path(__file__).resolve()))
    (ROOT / 'evidence/verification/init78-functional-validation.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(functions=2, instructionBytes=3144, malformedProofControls=len(controls))))


if __name__ == '__main__':
    main()
