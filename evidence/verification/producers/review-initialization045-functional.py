import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path.cwd().resolve()
sys.path.insert(0, str(ROOT / 'toolscripts'))
import ci_native_build as ci
import functional_report
import native_census_overlay
from elftools.elf.elffile import ELFFile

OUTPUT = ROOT / 'work/functional-admission045-proposal'
BASE = ROOT / 'evidence/lanes/squirrel-state040/initialization045-v1'


def read(path):
    return json.loads(Path(path).read_text())


def pin(path):
    path = Path(path)
    blob = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(blob), sha256=hashlib.sha256(blob).hexdigest())


def checked(row):
    path = ROOT / row['path']
    assert pin(path) == row, row['path']
    return path


def save(name, value):
    folder = ROOT / 'evidence/functional/initialization045' if name in ['proof.json', 'provider-closure.json'] else OUTPUT
    folder.mkdir(parents=True, exist_ok=True)
    path = folder / name
    path.write_text(json.dumps(value, indent=2) + '\n')
    return pin(path)


def overlap(first, second):
    return any(max(a['start'], b['start']) < min(a['endExclusive'], b['endExclusive']) for a in first for b in second)


def original_range(image, row):
    blob = image[row['start']-0x100000:row['endExclusive']-0x100000]
    assert len(blob) == row['bytes'] and hashlib.sha256(blob).hexdigest() == row['sha256']


coordinator_path = ROOT / 'evidence/verification/initialization045-coordinator-77bc997.json'
coordinator = read(coordinator_path)
assert coordinator['status'] == 'qualified-independent-initialization045-bounded-shared-initialization'
assert coordinator['completeUnmodifiedBatchReplayPassed'] and coordinator['recursiveComparisonPassed']
assert coordinator['tests'] == 83 and coordinator['publicUnits'] == 413 and coordinator['publicCompilations'] == 1169
packet_path, verification_path = BASE / 'packet.json', BASE / 'verification.json'
packet, verification = read(packet_path), read(verification_path)
assert pin(packet_path) == coordinator['primaryPacket']
assert pin(verification_path) == coordinator['primaryVerification']
assert verification['packet'] == pin(packet_path)
for key in ['sharedRows', 'maskRows', 'negativeControls', 'sharedState', 'coreAbiManifest', 'originalInputIdentity']:
    checked(packet[key])
assert packet['sharedRows'] == coordinator['sharedRows'] and packet['maskRows'] == coordinator['maskRows']
old_proposal_path = BASE / 'functional-proof-proposal.json'
old_proposal = read(old_proposal_path)
extents_path = ROOT / 'evidence/lanes/squirrel-state040/initialization045-complete-extents.json'
extent_pin = next(row for row in old_proposal['originalPackets'] if row['path'] == extents_path.relative_to(ROOT).as_posix())
checked(extent_pin)
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
assert hashlib.sha256(image).hexdigest() == packet['moduleSha256']
registry_path = ROOT / 'config/functional-functions.json'
registry = read(registry_path)
inventory = read(ROOT / 'evidence/inventory/update-content0.json')
assert registry['moduleSha256'] == inventory['codeSha256'] == packet['moduleSha256']
assert registry['programId'] == inventory['programId']
census_path = checked({**registry['census'], 'bytes': (ROOT / registry['census']['path']).stat().st_size})
census, overlays = native_census_overlay.compose(ROOT, read(census_path))
canonical = {row['address']: row for row in census['functions']}
accepted = ci.accepted_functions(ROOT)
owned_names = {row['symbol'] for row in accepted} | {row['name'] for row in registry['functions']}
owned = [canonical[int(name[3:], 16)] for name in owned_names]
definitions = functional_report.repository_definitions(ROOT)
protected = [registry_path, ROOT / 'config/source-names.json', ROOT / 'include/bytematch_names.h',
             packet_path, verification_path, old_proposal_path]
protected += list((ROOT / 'source/squirrel-wave045').glob('*.c')) + list((ROOT / 'source/squirrel-wave045').glob('*.h'))
protected += list(BASE.glob('*.json'))
protected += list((ROOT / 'evidence/lanes/squirrel-state049/stage-v1').glob('*.json'))
before = {str(path): pin(path) for path in protected}
names_count = len(read(ROOT / 'config/source-names.json')['mappings'])
assert names_count == 64
dependencies = [row for row in packet['inputs'] if row['path'].endswith(('.c', '.h'))]
assert len(dependencies) == 57
for row in packet['inputs']:
    checked(row)
dependency_paths = {row['path'] for row in dependencies}
graphs = {}
for key in ['armSourceGraph', 'highAarch64SourceGraph']:
    graph = packet[key]
    assert graph['retainedOriginalExecutableBytes'] == 0
    linked = checked(graph['linkedElf'])
    with linked.open('rb') as handle:
        symbols = ELFFile(handle).get_section_by_name('.symtab')
        undefined = [symbol.name for symbol in symbols.iter_symbols()
                     if symbol.name and symbol['st_shndx'] == 'SHN_UNDEF']
    assert not undefined, undefined
    for value in graph['functions'].values():
        origin = value['objectOrigin']
        assert origin and origin['source']['path'] in dependency_paths
        checked(origin['source'])
    graphs[key] = dict(linkedElf=graph['linkedElf'], sourceFunctions=len(graph['functions']),
                       undefinedSymbols=undefined, originalExecutableBytes=0)
assert packet['androidPicComponent']['undefinedDynamicSymbols'] == []
assert packet['unresolvedUninvokedEngineCallbacks'] == 56
closure = dict(sourceDependencies=dependencies, sourceGraphs=graphs,
    explicitlyModeledServices=['Typed portable heap allocation/resize/free with measured logical budgets and alignments.',
                              'Ordinary byte-memory services and exact opaque reference/value dispatch.',
                              'Fixture observation, guards, terminal unsupported-provider services and typed complete040 accessors.'],
    uninvokedEngineCallbacks=56, storedCallbackIdentitiesDoNotQualifyInvocation=True,
    originalReferenceExecutesAuthoredAllocatorOrHelper=packet['referenceExecutesAuthoredAllocatorOrHelper'],
    sourceMapsOriginalImageOrSdk=packet['sourceMapsOriginalImageOrSdk'],
    reusedProvidersCarryNoDuplicateCredit=True, originalSdkHeapRepresentationForcedEqual=False)
assert not closure['originalReferenceExecutesAuthoredAllocatorOrHelper'] and not closure['sourceMapsOriginalImageOrSdk']
closure_pin = save('provider-closure.json', closure)
old_by_name = {row['symbol']: row for row in old_proposal['functions']}
functions, ownership = [], []
limits = ['Cold, genuinely constructed complete shared state; successful bounded allocations and one uncontended thread.',
          '56 stored engine callbacks are not invoked; fail-closed provider identities do not reconstruct their algorithms.',
          'OOM/assert exits, arbitrary repeated initialization and unexecuted old-owner/finalizer/error paths remain unqualified.',
          'SDK private slack/heap representation, native padding and uninitialized spare vector capacity are not compared as live state.',
          'No full root factory, VM initialization, interpreter/game, general GC, Android OS/device or universal equivalence claim.']
for row in packet['functions']:
    original = canonical[row['entry']]
    candidate = copy.deepcopy(old_by_name[row['symbol']])
    ranges = original['ranges']
    assert original['mode'] == 'ARM' and original['textBodyBytes'] == row['instructionBytes']
    assert [(part['start'], part['endExclusive']) for part in ranges] == [(part['start'], part['endExclusive']) for part in row['instructionRanges']]
    conflicts = [owner['address'] for owner in owned if overlap(ranges, owner['ranges'])]
    assert not conflicts and row['symbol'] not in owned_names, (row['symbol'], conflicts)
    source = checked(candidate['source'])
    assert definitions.get(row['symbol']) == {source.resolve()}
    assert candidate['canonicalIdentity']['programId'] == registry['programId']
    assert candidate['canonicalIdentity']['moduleSha256'] == packet['moduleSha256']
    for part in row['instructionRanges'] + candidate['originalPoolRanges']:
        original_range(image, part)
    body = b''.join(image[part['start']-0x100000:part['endExclusive']-0x100000] for part in ranges)
    assert hashlib.sha256(body).hexdigest() == candidate['originalSpanSha256']
    assert not overlap(ranges, candidate['originalPoolRanges'])
    pieces = sorted(row['instructionRanges'] + candidate['originalPoolRanges'], key=lambda value: value['start'])
    physical = candidate['completePhysicalExtent']
    original_range(image, physical)
    assert pieces[0]['start'] == physical['start'] and pieces[-1]['endExclusive'] == physical['endExclusive']
    assert all(first['endExclusive'] == second['start'] for first, second in zip(pieces, pieces[1:]))
    assert sum(part['bytes'] for part in pieces) == physical['bytes']
    for caller in candidate['callerWitnesses']:
        blob = image[caller['pc']-0x100000:caller['pc']-0x100000+caller['bytes']]
        assert hashlib.sha256(blob).hexdigest() == caller['sha256'] and caller['target'] == row['entry']
    expected_pcs = {address for part in ranges for address in range(part['start'], part['endExclusive'], 4)}
    observed, missing = set(row['observedInstructionAddresses']), set(row['unobservedInstructionAddresses'])
    assert not observed & missing and observed | missing == expected_pcs
    checked(candidate['candidateObject'])
    candidate.update(sourceName=row['symbol'], functionalConfidence='medium', sourceCreditRequested=0)
    candidate['behavior'].update(independentCleanReplayClaimed=True,
        independentSourceComponentReplay=pin(coordinator_path), providerClosure=closure_pin,
        qualifiedDomain=packet['declaredDomain'], limits=limits,
        originalInstructionCoverageComplete=not missing, unexecutedPathsProvenImpossible=False,
        unexecutedPathsRemainExplicit=True, confidenceJustification=
        'Medium: independently replayed original/source ARM, actual Windows and high-AArch64 logical state; returning semantic controls and exact live ownership topology/budgets. Physical complete C bodies are present, but unexecuted paths, provisioned services, cold-state and allocation/thread limits prevent universal or exact confidence.')
    candidate['behavior']['provenExcludedInstructionAddresses'] = []
    candidate['behavior']['functionSpecificConfidenceJustification'] = {
        'fn_0014a6a0': '1468/1838 original PCs; 16 cold shared-state cases preserve the measured 227 allocation roles, 71 interned strings, 13 tables, 66 closures and 79 GC nodes. 370 PCs remain unexecuted, not proven impossible.',
        'fn_00159264': '142/156 original PCs in measured immutable delegate-descriptor construction. 14 cleanup/assert/error PCs remain unexecuted; arbitrary descriptors and repeated initialization are excluded.',
        'fn_001688cc': '31/31 original PCs in bounded owned-vector construction/parameter parsing. Full PC coverage does not extend the measured heap, aliasing, lifetime or callback contracts.',
        'fn_0017875c': '114/114 original PCs across 560 masks plus actual registration. All profiles preserve raw parser return/vector states; physically backed terminated strings and the declared service domain remain required.'
    }[row['symbol']]
    functions.append(candidate)
    ownership.append(dict(symbol=row['symbol'], conflictingAcceptedOwners=conflicts,
                          instructionBytes=row['instructionBytes'], observedInstructionCount=len(observed),
                          unexecutedInstructionCount=len(missing), literalPoolBytesExcluded=sum(part['bytes'] for part in candidate['originalPoolRanges']),
                          reportEntryBytes=candidate['reportEntryBytes'], uniqueDefinition=candidate['source']))
assert len(functions) == 4 and sum(row['originalInstructionBytes'] for row in functions) == 8556
assert [row['unexecutedInstructionCount'] for row in ownership] == [370, 14, 0, 0]
assert sum(row['literalPoolBytesExcluded'] for row in ownership) == 424
proof = dict(schemaVersion=1, status='independently-reviewed-bounded-functional-initialization045',
    programId=registry['programId'], moduleSha256=packet['moduleSha256'], acceptedSourceCreditGranted=0,
    functions=functions, headers=[row for row in dependencies if row['path'].endswith('.h')],
    sourceDependencies=dependencies, providerClosure=closure_pin, ownershipChecks=ownership,
    candidateOriginalInstructionBytes=8556, classifiedNoninstructionBytesNotCredited=424,
    sourceAdmissionGranted=False, boundedFunctionalAdmissionGranted=True, exactMatchingClaimed=False, wholeVmGameOrDeviceClaimed=False,
    sdkCreditGranted=0, grossCodeByteDenominatorChanged=False, sharedRegistryChanged=False,
    frozenPrimaryPacket=pin(packet_path), frozenOriginalProposal=pin(old_proposal_path),
    independentCoordinatorReview=pin(coordinator_path), census=pin(census_path), supplementalInventory=overlays,
    producer=pin(Path(__file__).resolve()))
proof_pin = save('proof.json', proof)
fragment = copy.deepcopy(registry)
fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=proof_pin,
                              sourceLookup='repository-function-index') for row in functions]
fragment_pin = save('registry-proposal.json', fragment)
report_path = ROOT / 'build/update-content0/report.json'
report = read(report_path)
emitted = functional_report.generate(ROOT, report, fragment)
assert len(emitted['functions']) == 4
negatives = []
for label in ['missing-cold-ranges', 'pool-counted-as-instructions', 'confidence-differs', 'wrong-source-definition']:
    wrong = copy.deepcopy(proof)
    selected = wrong['functions'][0]
    if label == 'missing-cold-ranges':
        selected['originalInstructionRanges'] = selected['originalInstructionRanges'][:1]
    elif label == 'pool-counted-as-instructions':
        selected['originalInstructionBytes'] += 368
    elif label == 'confidence-differs':
        selected['functionalConfidence'] = 'high'
    else:
        selected['source'] = functions[1]['source']
    wrong_pin = save('negative-' + label + '.json', wrong)
    wrong_registry = copy.deepcopy(fragment)
    for item in wrong_registry['functions']:
        item['packet'] = wrong_pin
    try:
        functional_report.generate(ROOT, report, wrong_registry)
    except ValueError as error:
        negatives.append(dict(label=label, rejected=True, reason=str(error)))
    else:
        raise ValueError('045 strict schema accepted ' + label)
assert all(pin(Path(path)) == value for path, value in before.items())
validation = dict(schemaVersion=1, status='passed-private-functional-proposal-only',
    packet=proof_pin, registryProposal=fragment_pin, report=pin(report_path), emittedFunctions=emitted['functions'],
    originalInstructionBytes=8556, classifiedNoninstructionBytesNotCredited=424,
    unexecutedOriginalInstructions=384, ownershipChecks=ownership, rejectedSchemaControls=negatives,
    currentGlobalNamesMapEntries=names_count, globalSourceNamesMapChanged=False,
    frozen049MetadataChanged=False, protectedInputsUnchanged=list(before.values()),
    sharedRegistryChanged=False, sourceAdmissionGranted=False, matchingCreditGranted=0,
    producer=pin(Path(__file__).resolve()))
print(json.dumps(save('validation.json', validation)))
