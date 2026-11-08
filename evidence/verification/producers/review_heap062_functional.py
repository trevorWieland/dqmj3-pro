import copy
import hashlib
import json
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[3]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import ci_native_build as ci
import functional_report
import native_heap_inventory as inventory


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(raw), sha256=hashlib.sha256(raw).hexdigest())


def require(value, reason):
    if not value:
        raise ValueError(reason)


def main():
    proof_path = ROOT / 'evidence/verification/heap062-coordinator-c9a8c54.json'
    proof = read(proof_path)
    require(proof['status'] == 'coordinator-reviewed-committed-heap-source-replay-passed'
            and proof['pipelineTests'] == 116 and proof['completeNativeArtifactsChecked'] == 1222
            and proof['mandatoryPackets'] == 58 and proof['sourceOnlyProfilesPerRoot'] == 117
            and proof['normallyReturningSemanticRejectionsPerFullRoot'] == 27
            and proof['persistentBoundaryControlsPerRoot'] == 11, 'Independent committed heap proof incomplete')
    require(pin(ROOT / proof['producer']['path']) == proof['producer']
            and pin(ROOT / proof['rawReplay']['path']) == proof['rawReplay'], 'Heap coordinator inputs differ')
    registry = read(ROOT / 'config/functional-functions.json')
    require(len(registry['functions']) == 486, 'Unexpected pre-admission heap registry')
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    require(census['functionCount'] == 26660, 'Heap initializer inventory split missing')
    canonical = {row['address']: row for row in census['functions']}
    existing = {int(row['name'][3:], 16) for row in registry['functions']}
    existing.update(row['address'] for row in ci.accepted_functions(ROOT))
    witness_path = ROOT / 'evidence/lanes/native-sdk-heap062/entry-roster-v1.json'
    witness = read(witness_path)
    require(witness['totalEntries'] == 22 and witness['totalInstructionBytes'] == 2440
            and witness['automaticCreditGranted'] == 0, 'Heap measured entry roster differs')
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    require(hashlib.sha256(image).hexdigest() == registry['moduleSha256'] == witness['moduleSha256'],
            'Heap original module identity differs')
    functions, overlaps = [], []
    for entry in witness['entries']:
        address = int(entry['address'], 16)
        if address in existing:
            overlaps.append(address)
            continue
        original = canonical[address]
        ranges = [dict(start=int(row['start'], 16), endExclusive=int(row['endExclusive'], 16),
                       bytes=row['instructionBytes']) for row in entry['instructionRanges']]
        require(original['mode'] == entry['mode'] == 'ARM' and original['ranges'] == ranges
                and original['textBodyBytes'] == entry['instructionBytes'], 'Heap complete canonical extent differs')
        require(not any(max(a['start'], b['start']) < min(a['endExclusive'], b['endExclusive'])
                for owner in existing for a in ranges for b in canonical[owner]['ranges']),
                'Heap instruction body overlaps prior source accounting')
        for declared, part in zip(entry['instructionRanges'], ranges):
            raw = image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]
            require(len(raw) == part['bytes'] and hashlib.sha256(raw).hexdigest() == declared['sha256'],
                    'Heap original instruction witness differs')
        source = ROOT / 'src/native/wave062-heap' / Path(entry['sourcePath']).name
        require(pin(source)['sha256'] == entry['sourceSha256']
                and source.read_bytes() == subprocess.check_output(['git', 'show', proof['sourceRevision'] + ':'
                   + source.relative_to(ROOT).as_posix()], cwd=ROOT), 'Heap committed source changed')
        pools = {}
        for reader in entry['literalReaderWitnesses']:
            slot, count = int(reader['slot'], 16), reader['bytes']
            raw = image[slot - 0x100000:slot - 0x100000 + count]
            require(len(raw) == count and hashlib.sha256(raw).hexdigest() == reader['sha256'],
                    'Heap excluded literal witness differs')
            pools[slot] = dict(start=slot, endExclusive=slot + count, bytes=count, sha256=reader['sha256'])
        body = b''.join(image[row['start'] - 0x100000:row['endExclusive'] - 0x100000] for row in ranges)
        first = next(row for row in ranges if row['start'] <= address < row['endExclusive'])
        require(entry['encounteredInstructionPcs'] == len(body) // 4 and not entry['unencounteredInstructionPcs'],
                'Heap instruction-position corpus incomplete')
        functions.append(dict(symbol=f'fn_{address:08x}', source=pin(source), sourceName=entry['sourceFunction'],
            symbolNames=pin(ROOT / 'include/bytematch_names.h'),
            canonicalIdentity=dict(address=address, mode='ARM', programId=registry['programId'], moduleSha256=registry['moduleSha256']),
            originalInstructionBytes=len(body), originalInstructionRanges=ranges,
            originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=first['endExclusive'] - address,
            literalPoolsExcluded=list(pools.values()), exactObjectSpan=False, exactLinkedSpan=False,
            functionalConfidence='medium', behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
                independentSourceComponentReplay=pin(proof_path), completeCanonicalWitnesses=pin(witness_path),
                actualWindowsAndHighAddressA64=True, physicalAndroidExecutionClaimed=False,
                sourceCodeOriginalImageMapped=False, pipelineTests=116, completeNativeArtifactChecks=1222,
                returningSemanticRejectionsPerFullRoot=27, equalFinalStateControlsPerFullRoot=3,
                persistentCaughtAttemptControlsPerRoot=11, sourceOnlyProfilesPerRoot=117,
                allInstructionPositionsEncountered=True, allConditionalOutcomesProven=False,
                domain='Live initialized finite heap/registry graphs; exact live payload freed once; nonwrapping sizes<=65536; alignments4/8/16/32/64; uncontended recursive lock; measured enabled/disabled default profiles.',
                limits=['Native pointer-bearing headers use native alignment/layout; request alignment4 is upgraded to8 on64-bit.',
                    'Outer class identity is a supplied noncalled token; opaque prefix and unimplemented virtual methods remain excluded.',
                    'Enabled89a508 and nonzero opaque TLS identity are explicit prerequisites; full startup is unqualified.',
                    'SDK prefix allocation requires success; terminal146594 initialization failure remains an external nonreturning service.',
                    'Valid initialized storage, exact once-only live frees, nonconcurrency and nonwrapping arithmetic bound these results.',
                    'Instruction-PC encounter does not prove every predicate outcome; no universal equivalence or general memory-safety claim.',
                    'No physical Android heap run, contended OS/thread execution, complete owner lifecycle or native game claim.'],
                confidenceJustification='Medium: complete ordinary C bodies with independent committed original/ARM/native replay, complete arenas and independent ownership models, returning wrong-source controls and persistent input boundaries. Explicit finite ABI/service domains.')))
    require(overlaps == [0x170b94] and len(functions) == 21
            and sum(row['originalInstructionBytes'] for row in functions) == 2408, 'Heap additional accounting differs')
    manifest = read(ROOT / 'evidence/lanes/native-sdk-heap062/public-inputs-v1/source-map-v1.json')
    dependencies = [pin(ROOT / row['target']) for row in manifest['files'] if row['role'] == 'production']
    dependencies += [pin(ROOT / row['path']) for row in manifest['readOnlyHelpers'] if row['path'].endswith(('.c', '.h'))]
    require(len(dependencies) == 13, 'Heap production/header dependency closure differs')
    packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-sdk-default-heap', moduleSha256=registry['moduleSha256'],
        functions=functions, sourceDependencies=dependencies,
        headers=[row for row in dependencies if row['path'].endswith('.h')] + [pin(ROOT / 'include/bytematch_names.h')],
        qualificationOnlySources=[row['target'] for row in manifest['files'] if row['role'] == 'qualification'],
        excludedExistingWorkingC='fn_00170b94', originalPackets=[pin(proof_path), pin(witness_path)],
        producer=pin(Path(__file__).resolve()), acceptedSourceCreditGranted=0, exactMatchingClaimed=False,
        overallConfirmedSourceCoverageClaimed=False, wholeGameClaimed=False)
    output = ROOT / 'evidence/functional/heap062.json'
    require(not output.exists(), 'Preserve existing heap functional packet')
    output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    fragment = copy.deepcopy(registry)
    fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
                                  sourceLookup='repository-function-index') for row in functions]
    report = read(ROOT / 'build/update-content0/report.json')
    require(len(functional_report.generate(ROOT, report, fragment)['functions']) == 21, 'Heap functional schema rejected')
    folder = ROOT / 'work/heap062-admission/negative-proofs-v1'
    folder.mkdir(parents=True, exist_ok=False)
    controls = []
    for name in ['pool-as-code', 'wrong-byte-count', 'wrong-mode', 'wrong-source', 'wrong-source-name', 'wrong-entry', 'wrong-confidence']:
        bad = copy.deepcopy(packet)
        row = bad['functions'][0]
        if name == 'pool-as-code':
            row['originalInstructionRanges'][0]['endExclusive'] += 4
            row['originalInstructionRanges'][0]['bytes'] += 4
        elif name == 'wrong-byte-count': row['originalInstructionBytes'] -= 4
        elif name == 'wrong-mode': row['canonicalIdentity']['mode'] = 'Thumb'
        elif name == 'wrong-source': row['source'] = pin(ROOT / 'src/native/wave062-heap/heap062ac.h')
        elif name == 'wrong-source-name': row['sourceName'] = 'unimplemented_heap_helper'
        elif name == 'wrong-entry': row['reportEntryBytes'] -= 4
        else: row['functionalConfidence'] = 'high'
        path = folder / (name + '.json')
        path.write_text(json.dumps(bad, indent=2) + '\n', encoding='utf-8')
        invalid = copy.deepcopy(fragment)
        for item in invalid['functions']: item['packet'] = pin(path)
        try:
            functional_report.generate(ROOT, report, invalid)
        except ValueError as error:
            controls.append(dict(case=name, rejected=True, reason=str(error)))
        else:
            raise ValueError('Malformed heap proof accepted: ' + name)
    target = ROOT / 'evidence/verification/heap062-functional-validation.json'
    target.write_text(json.dumps(dict(status='21-medium-heap-functions-schema-validated-pending-registry',
        functions=fragment['functions'], instructionFootprintBytes=2408, packet=pin(output), controls=controls,
        excludedExistingWorkingC='fn_00170b94', exactMatchingCreditGranted=0), indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(functions=21, instructionBytes=2408, malformedProofControls=len(controls))))


if __name__ == '__main__':
    main()
