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
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=path.stat().st_size,
                sha256=hashlib.sha256(path.read_bytes()).hexdigest())


def main():
    coor_path = ROOT / 'evidence/verification/effect065-coordinator-81fb34b.json'
    coor = read(coor_path)
    if (coor['status'] != 'complete-public-effect-foundation-replay-reviewed-by-coordinator'
            or coor['pipelineTests'] != 124 or coor['producerTests'] != 10
            or coor['originalBodies'] != 6 or coor['instructionFootprintBytes'] != 1144
            or coor['returningControlChecks'] != 39 or coor['semanticControlRejections'] != 37
            or coor['pointerWidthInapplicableChecks'] != 2
            or len(coor['identicalWorkerArtifacts']) != 144
            or len(coor['coffHeaderTimestampOnlyArtifacts']) != 48):
        raise ValueError('Complete independent effect replay absent')
    registry = read(ROOT / 'config/functional-functions.json')
    if len(registry['functions']) != 390:
        raise ValueError('Unexpected pre-admission registry')
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = {row['address']: row for row in census['functions']}
    existing = {int(row['name'][3:], 16) for row in registry['functions']}
    existing.update(row['address'] for row in ci.accepted_functions(ROOT))
    boundaries = read(ROOT / 'evidence/lanes/native-effect065/foundation-v1/original-boundaries.json')
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if hashlib.sha256(image).hexdigest() != registry['moduleSha256']:
        raise ValueError('Original module changed')
    reuse = read(ROOT / 'work/clean-replay/effect065-81fb34b/work/native-effect065/public-replay-v1/preview-reuse/report.json')
    functions = []
    domains = dict(shader=('Live complete typed binding and thirty-entry shader pool, with stable borrowed command buffers. '
        'Constructor clears only its measured owned fields; selection reads packed integer keys and sets borrowed ownership. '
        'Release invokes the actual declared allocator release operation only for nonnull, nonempty owned storage. '
        'Logical release retains fixture backing; repeated owned destruction, arbitrary allocator callbacks and GPU execution are not qualified.'),
        preview=('Live naturally aligned typed cache, entry, primary preview and pointer vector; begin<=end<=capacity within one allocation. '
        'Serialized input is complete and disjoint from outputs, with supported signed counts, allocation success and growth below overflow limits. '
        'Providers preserve caller vector fields and expose logical target budgets separately from actual native pointer storage. '
        'Real scalar translation uses the measured floating-point mode and supported finite inputs. '
        'Null input clears the primary preview; existing vector elements survive reuse/growth, with old backing retained only by the fixture after logical release. '
        'Thirty-eight original sites have reviewed byte-bound static exclusions under these preconditions; they are not dynamically executed coverage. '
        'Heap signatures/readiness are supplied fixture preconditions, without a heap-startup or general allocator qualification.'))
    for entry in boundaries['functions']:
        address = entry['entry']
        original = canonical[address]
        if address in existing or any(max(a['start'], b['start']) < min(a['endExclusive'], b['endExclusive'])
                for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges']):
            raise ValueError('Effect body overlaps prior source accounting')
        if original['textBodyBytes'] != entry['instructionBytes']:
            raise ValueError('Effect canonical extent differs')
        body = b''.join(image[row['start'] - 0x100000:row['endExclusive'] - 0x100000]
                        for row in original['ranges'])
        preview = entry['sourcePath'].endswith('effect_preview.c')
        behavior = dict(allPassed=True, boundedNotUniversalEquivalence=True,
            independentSourceComponentReplay=pin(coor_path), actualWindowsAndHighAddressA64=True,
            sourceGraphOriginalCodeMapped=False, completeWorkerLogicalCorporaIdentical=True,
            sourceCopyFiles=18, sourceCopyBytes=35009, returningSourceGraphControls=39,
            semanticallyRejectedSourceGraphControls=37, inapplicableWidthControls=2,
            hookVisitsDoNotProvePredicateSatisfiedExecution=True,
            domain=domains['preview' if preview else 'shader'],
            shaderSets=16544, releaseSets=93, previewSets=14, reuseSets=7,
            physicalAndroidGpuFullEffectFamilyOrGameClaimed=False,
            confidenceJustification='Medium: complete canonical bodies and original instruction/data witnesses, actual original execution, independent committed-source replay, native Windows and high-address A64, complete logical observation equality, independent tiny source-copy rebuild and returning wrong-source controls. All 124 pipeline tests and 10 producer tests passed. The original instruction-hook counts are visited addresses; static exclusions are scoped separately. Raw Windows COFF timestamps differ only in header bytes 4..7; no compiler outputs were patched. Exact object or universal equivalence is not established.')
        if address == 0x2a41c4:
            behavior.update(originalInstructionPcs=179, originalInstructionPcsVisited=141,
                staticallyExcludedOriginalPcs=reuse['unhitCanonicalPCs'],
                conditionalClosedGraphArgument=pin(ROOT / 'evidence/verification/effect065-preview-invariants.json'))
        functions.append(dict(symbol=entry['symbol'], source=pin(ROOT / entry['sourcePath']),
            canonicalIdentity=dict(address=address, mode=original['mode'], programId=registry['programId'],
                moduleSha256=registry['moduleSha256']), originalInstructionBytes=len(body),
            originalInstructionRanges=original['ranges'], originalBodySha256=hashlib.sha256(body).hexdigest(),
            reportEntryBytes=len(body), exactObjectSpan=False, exactLinkedSpan=False,
            functionalConfidence='medium', behavior=behavior))
    dependencies = read(ROOT / 'evidence/lanes/native-effect065/foundation-intake-v1/source-dependency-closure.json')
    dependencies += [pin(ROOT / ('src/native/wave065/' + name))
        for name in ['effect_shader.c', 'effect_shader.h', 'effect_services.h']]
    for row in dependencies:
        if pin(ROOT / row['path']) != row:
            raise ValueError('Production dependency changed')
    packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-effect-foundation',
        moduleSha256=registry['moduleSha256'], functions=functions,
        headers=[row for row in dependencies if row['path'].endswith('.h')], sourceDependencies=dependencies,
        originalPackets=[pin(coor_path)], producer=pin(Path(__file__).resolve()), acceptedSourceCreditGranted=0,
        exactMatchingClaimed=False, confirmedOverallSourceCoverageClaimed=False, fullResourceConstructorClaimed=False)
    output = ROOT / 'evidence/functional/effect065.json'
    if output.exists():
        raise ValueError('Existing effect packet must be preserved')
    output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    fragment = copy.deepcopy(registry)
    fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
        sourceLookup='repository-function-index') for row in functions]
    progress = read(ROOT / 'build/update-content0/report.json')
    if len(functional_report.generate(ROOT, progress, fragment)['functions']) != 6:
        raise ValueError('Functional proof schema incomplete')
    folder = ROOT / 'work/effect065-admission/negative-proofs-v1'
    folder.mkdir(parents=True, exist_ok=False)
    controls = []
    for name in ['partial-range', 'wrong-byte-count', 'wrong-source', 'wrong-mode', 'wrong-entry-extent', 'wrong-dependency']:
        value = copy.deepcopy(packet)
        row = value['functions'][0]
        if name == 'partial-range':
            row['originalInstructionRanges'][0]['endExclusive'] -= 4
            row['originalInstructionRanges'][0]['bytes'] -= 4
        elif name == 'wrong-byte-count':
            row['originalInstructionBytes'] -= 4
        elif name == 'wrong-source':
            row['source'] = pin(ROOT / 'src/native/wave065/effect_shader.h')
        elif name == 'wrong-mode':
            row['canonicalIdentity']['mode'] = 'Thumb'
        elif name == 'wrong-entry-extent':
            row['reportEntryBytes'] -= 4
        else:
            value['sourceDependencies'][0]['sha256'] = '0' * 64
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
            raise ValueError('Malformed effect proof accepted: ' + name)
    result = dict(status='six-medium-effect-functions-schema-validated-pending-registry', packet=pin(output),
        functions=fragment['functions'], controls=controls, instructionFootprintBytes=1144,
        sourceCreditGranted=0, exactMatchingCreditGranted=0, fullEffectGraphOrGameClaim=False,
        producer=pin(Path(__file__).resolve()))
    (ROOT / 'evidence/verification/effect065-functional-validation.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(functions=6, instructionBytes=1144, malformedProofControls=len(controls))))


if __name__ == '__main__':
    main()
