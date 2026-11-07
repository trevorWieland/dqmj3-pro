import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path.cwd().resolve()
sys.path.insert(0, str(ROOT / 'toolscripts'))
import ci_native_build as ci
import functional_report
import native_callback_inventory


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


coordinator_path = ROOT / 'evidence/verification/controller055-coordinator-f0b7e73.json'
coordinator = read(coordinator_path)
assert coordinator['byteIdenticalRuntimeArtifacts'] == 4 and coordinator['runnerTests'] == 93
assert coordinator['caseSets'] == 569 and coordinator['observationsPerRun'] == 2276
assert coordinator['canonicalInstructionBytes'] == 14600 and coordinator['producerTests'] == 15
registry = read(ROOT / 'config/functional-functions.json')
assert len(registry['functions']) == 366
census, overlays = native_callback_inventory.compose(ROOT, read(ROOT / registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
existing = {int(row['name'][3:], 16) for row in registry['functions']}
existing.update(int(row['symbol'][3:], 16) for row in ci.accepted_functions(ROOT))
address = 0x6fb25c
assert address not in existing
original = canonical[address]
base = ROOT / 'evidence/lanes/native-state055/controller-v5-public'
claim = read(base / 'claim.json')
assert original['mode'] == claim['mode'] == 'ARM' and original['textBodyBytes'] == claim['instructionBytes'] == 14600
assert [(p['start'], p['endExclusive']) for p in original['ranges']] == [
    (p['start'], p['endExclusive']) for p in claim['instructionRanges']]
assert all(max(a['start'], b['start']) >= min(a['endExclusive'], b['endExclusive'])
           for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges'])
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
assert hashlib.sha256(image).hexdigest() == registry['moduleSha256']
body = b''.join(image[p['start'] - 0x100000:p['endExclusive'] - 0x100000] for p in original['ranges'])
entry = next(p for p in original['ranges'] if p['start'] <= address < p['endExclusive'])
aliases = [row for row in read(ROOT / 'config/source-names.json')['mappings'] if row['symbol'] == 'fn_006fb25c']
assert len(aliases) == 1 and aliases[0]['sourceName'] == 'state_apply_controller055'
alias = aliases[0]
function = dict(symbol=alias['symbol'], source=pin(ROOT / alias['sourcePath']), sourceName=alias['sourceName'],
    symbolNames=pin(ROOT / 'include/bytematch_names.h'),
    canonicalIdentity=dict(address=address, mode='ARM', programId=registry['programId'], moduleSha256=registry['moduleSha256']),
    originalInstructionBytes=14600, originalInstructionRanges=original['ranges'],
    originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=entry['endExclusive'] - address,
    exactObjectSpan=False, exactLinkedSpan=False, functionalConfidence='medium',
    behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
        independentSourceComponentReplay=pin(coordinator_path), originalInstructionPcs=3650,
        originalInstructionPcsVisited=3633, unexecutedOriginalPcs=coordinator['invariantProvedUnexecutedPcs'],
        unexecutedInstructionsNeverClaimedExecuted=True, conditionalClosedGraphArgument=pin(base / 'control-invariants.json'),
        actualWindowsAndHighAddressA64=True, sourceGraphOriginalCodeMapped=False,
        returningSourceControlExecutions=30, originalProductionInitializationAllocatorOrCompleteOwnerLayoutsQualified=False,
        originalReturnRegisterResidueDiagnosticOnly=True, completeRawCallerStackEqualityClaimed=False,
        packetHeadersAndParametersComparedSeparatelyFromPadding=True,
        domain='Declared initialized nonvolatile component views and typed resource/index/provider storage. Binary32 nearest-even without FZ/DAZ or trapped exceptions; floating-status equality is excluded. Nonreentrant storage providers and backed output/scratch spans are required. Original stack-derived command padding is preserved in separate audits and excluded from packet-content equality. OOM, malformed owners, production initialization/allocator, actual GPU and whole-game execution remain unqualified.',
        physicalAndroidWholeGameOrUniversalEquivalenceClaimed=False,
        confidenceJustification='Medium: all seven canonical instruction ranges,569 cases across four profiles in independent and copied-source runs, byte-identical raw runtime rows and four runtime artifacts, thirty returning controls per run and fifteen verification tests. Seventeen original PCs remain unexecuted under recorded invariants. Component ownership, callback, floating and packet-padding domains remain explicit.'))
dependencies = {p.relative_to(ROOT).as_posix(): pin(p)
                for p in (ROOT / 'src/native/wave055/controller-v5').iterdir() if p.suffix in ['.c', '.h']}
for name in ['state055.c', 'state055.h', 'selector055.h', 'address055.h',
             'controller-deps-v1/helpers055.c', 'controller-deps-v1/helpers055.h',
             'controller-deps-v1/resource055.c', 'controller-deps-v1/resource055.h']:
    path = ROOT / 'src/native/wave055' / name
    dependencies[path.relative_to(ROOT).as_posix()] = pin(path)
deps = [dependencies[key] for key in sorted(dependencies)]
packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-full-controller055-algorithm',
    moduleSha256=registry['moduleSha256'], functions=[function],
    headers=[row for row in deps if row['path'].endswith('.h')], sourceDependencies=deps,
    qualificationOnlySourceNames=['program_fixture055.c', 'storage_fixture055.c'],
    originalPackets=[pin(base / 'stage-inputs.json'), pin(base / 'claim.json'), pin(coordinator_path)],
    producer=pin(Path(__file__).resolve()), acceptedSourceCreditGranted=0,
    exactMatchingClaimed=False, confirmedOverallSourceCoverageClaimed=False)
output = ROOT / 'evidence/functional/controller055.json'
output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
fragment = copy.deepcopy(registry)
fragment['functions'] = [dict(name='fn_006fb25c', confidence='medium', packet=pin(output), sourceLookup='repository-function-index')]
progress = read(ROOT / 'work/clean-replay/controller055-f0b7e73/build/update-content0/report.json')
assert len(functional_report.generate(ROOT, progress, fragment)['functions']) == 1
work = ROOT / 'work/controller055-public/admission'
work.mkdir(parents=True, exist_ok=True)
controls = []
for name in ['missing-owned-ranges', 'wrong-byte-count', 'wrong-source', 'unsupported-confidence']:
    wrong = copy.deepcopy(packet)
    first = wrong['functions'][0]
    if name == 'missing-owned-ranges': first['originalInstructionRanges'] = first['originalInstructionRanges'][:1]
    elif name == 'wrong-byte-count': first['originalInstructionBytes'] += 4
    elif name == 'wrong-source': first['source'] = pin(ROOT / 'src/native/wave055/controller-v5/apply_controller055.h')
    else: first['functionalConfidence'] = 'high'
    bad = work / (name + '.json')
    bad.write_text(json.dumps(wrong, indent=2) + '\n', encoding='utf-8')
    test = copy.deepcopy(fragment)
    test['functions'][0]['packet'] = pin(bad)
    try:
        functional_report.generate(ROOT, progress, test)
    except ValueError as error:
        controls.append(dict(case=name, rejected=True, reason=str(error)))
    else:
        raise ValueError('Malformed controller055 proof accepted: ' + name)
validation = dict(status='controller055-one-medium-function-schema-validated-pending-registry',
    proof=pin(output), functions=fragment['functions'], controls=controls, instructionFootprintBytes=14600,
    sourceCreditGranted=0, exactMatchingCreditGranted=0, gpuWholeGameOrDeviceClaimed=False,
    producer=pin(Path(__file__).resolve()))
(ROOT / 'evidence/verification/controller055-functional-validation.json').write_text(
    json.dumps(validation, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(functions=1, controls=len(controls), instructionFootprint=14600)))
