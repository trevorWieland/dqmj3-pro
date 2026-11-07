import hashlib
import json
import struct
import sys

import unicorn
from native_wave014_oracle import original_image
from squirrel_script_closure017_build import ROOT, SOURCE, WORK, arm, windows, android, command, pin, save
from squirrel_script_closure017_oracle import Arm, Windows, ROOTS, SPANS
from squirrel_script_closure017_android import Android
from squirrel_script_closure017_controls import run as controls


EVIDENCE = ROOT / 'evidence/lanes/squirrel-script-closure017'
PREDECESSORS = [
    ('evidence/lanes/squirrel-closure-release010/ready.json', '6b9823d16fb23044cf9a376fb6757bccea551775a59e0cde2779870a9294cfd2'),
    ('evidence/lanes/squirrel-prototype-release011/ready.json', '75b42c5dcaed077735ece2421f12cc26b71127ad297e7ea9a56dd56e2b6ec092'),
    ('evidence/lanes/squirrel-reference-prefix012/types-ready.json', 'bcd20ae34361b01ea681598e5fefdc2a6f162395a02feb166d784eb9078e0ee1'),
    ('evidence/lanes/squirrel-native-closure-release013/ready.json', '4ea663042fca72d9b6fa158e478247cd7de9786341cf92e65024b1860f89aae1'),
    ('evidence/lanes/squirrel-weak-reference014/ready.json', 'cf161d3eb1630b1272143669774db030327a69616b21b58f6b20c908858c7929'),
    ('evidence/lanes/squirrel-string-lifetime015/ready.json', '82e86302072925742becef9de94ccbc62cfd5fd76cfe51a6daa5fe62706f4ee4')]


def sha(value):
    return hashlib.sha256(value).hexdigest()


def validate():
    claim = json.loads((EVIDENCE / 'claim.json').read_text())
    image = original_image()
    if sha(image) != claim['moduleSha256']:
        raise ValueError('017 measured original identity changed')
    for row in claim['completeBodies']:
        start, end = row['entry'] - 0x100000, row['endExclusive'] - 0x100000
        if sha(image[start:end]) != row['instructionSha256'] or sha(image[end:end + row['poolBytes']]) != row['poolSha256']:
            raise ValueError('017 complete original lifetime body/pool changed')
    prerequisites = []
    for path, expected in PREDECESSORS:
        source = ROOT / path
        if sha(source.read_bytes()) != expected:
            raise ValueError('017 immutable prerequisite receipt changed: ' + path)
        record = json.loads(source.read_text())
        for row in record['files'] if 'files' in record else [record['header']]:
            current = ROOT / row['path']
            if sha(current.read_bytes()) != row['sha256'] or current.stat().st_size != row['bytes']:
                raise ValueError('017 immutable prerequisite file changed: ' + row['path'])
        prerequisites.append(pin(source))
    return claim, prerequisites


def main():
    claim, prerequisites = validate()
    sections, symbols, functions, build = arm(WORK / 'replay/arm')
    native_path = windows(WORK / 'replay/windows')
    mobile_sections, mobile_symbols, mobile_build = android(WORK / 'replay/android')
    original, source = Arm(sections, symbols, functions, True), Arm(sections, symbols, functions)
    native, mobile = Windows(native_path), Android(mobile_sections, mobile_symbols)
    if native.layout != [112, 40, 24, 48, 64, 80, 96]:
        raise ValueError('017 exact named-type natural layout differs')
    cases, digest = [], hashlib.sha256()
    for root in ROOTS:
        for variant in range(18):
            expected, heap = original.execute(root, variant)
            actual, source_heap = source.execute(root, variant)
            host, android_state = native.execute(root, variant), mobile.execute(root, variant)
            if actual != expected or source_heap != heap or host != expected or android_state != expected:
                raise ValueError('017 real typed provider DAG differs: ' + root + '/' + str(variant))
            if root == 'release' and variant == 1 and (expected[2:4] != [0, 0] or any(expected[index:index + 2] != [6, 0] for index in [4, 19, 49, 57, 65, 73, 91, 105, 119, 133])):
                raise ValueError('017 normal rich DAG did not finish all actual owned finalizers')
            words = struct.pack('<' + 'I' * len(expected), *expected)
            digest.update(words)
            cases.append({'root': root, 'variant': variant,
                'caseClass': 'callback-interference' if variant in [4, 5, 6, 7, 8, 9] else 'unsigned-count-or-mark-edge' if variant in [10, 11] else 'typed-lifetime-with-explicit-external-owners',
                'observationWords': len(expected), 'orderedObservationsSha256': sha(words),
                'wholeNormalizedArmHeapSha256': sha(heap), 'wholeArmHeapEqual': True,
                'sourceArmEqual': True, 'actualWindowsEqual': True, 'actualAndroidObjectsCpuModelEqual': True})
    instructions = {address for start, end in SPANS[:2] for address in range(start, end, 4)}
    visited = original.coverage & instructions
    if visited != instructions or len(instructions) != 64:
        raise ValueError('017 did not execute every original lifetime instruction address')
    save(WORK / 'replay/private-instruction-coverage.json', {'originalAddresses': sorted(original.coverage), 'sourceAddresses': sorted(source.coverage)})
    semantic = controls()
    test = "import sys,unittest; suite=unittest.defaultTestLoader.discover(" + repr(str(ROOT / 'tests')) + ",pattern='test_squirrel_script_closure017.py'); assert suite.countTestCases()==14; result=unittest.TextTestRunner(stream=sys.stdout,verbosity=2).run(suite); sys.exit(not result.wasSuccessful() or bool(result.skipped))"
    command([sys.executable, '-c', test], WORK / 'replay/tests.json')
    report = {'schemaVersion': 1, 'status': 'qualified-bounded-real-opaque-script-closure-lifetime-provider',
        'program': claim['program'], 'version': claim['version'], 'module': claim['module'], 'moduleSha256': claim['moduleSha256'],
        'claim': pin(EVIDENCE / 'claim.json'), 'completeExistingBodies': claim['completeBodies'],
        'measuredExistingInstructionBytes': 256, 'poolBytes': 12, 'newPhysicalInstructionCredit': 0,
        'existingPhysicalOwner': claim['existingPhysicalFamily'], 'duplicateIntervalCreditAllowed': False,
        'distinctSourceApis': claim['distinctSourceApis'], 'canonicalPromotionAndMappingOwnedByCoordinator': True,
        'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0, 'coordinatorAdmissionRequired': True,
        'frozenPrerequisites': prerequisites, 'cases': len(cases), 'comparisonsAgainstOriginal': len(cases) * 3,
        'sourceArmWholeHeapComparisons': len(cases), 'casesByRoot': cases, 'orderedCaseDigest': digest.hexdigest(),
        'originalInstructionAddressesVisited': len(visited), 'originalInstructionAddressesTotal': len(instructions),
        'all64OriginalInstructionAddressesVisited': True, 'actualWindowsExecuted': True,
        'actualAndroidObjectsCpuModelExecuted': True, 'androidReturnedApis': mobile.calls,
        'androidModel': 'Cortex-A72 AArch64 above 4 GiB with x18/saved integer/floating-point/stack checks',
        'androidOperatingSystemOrPhysicalDeviceExecuted': False, 'wholeVmOrGameExecuted': False,
        'targetClosureBytes': 64, 'targetCollectableBytes': 20, 'actualCompactPrototypePrefixBytes': 12,
        'nativeLayoutBytes': dict(zip(['closure', 'collectable', 'noncollectablePrefix', 'environmentOffset', 'functionOffset', 'outersOffset', 'defaultsOffset'], native.layout)),
        'realComposedPayloads': ['actual compact prototype011 with nested prototype and counted string015 records',
            'actual native closure013 in defaults', 'nested actual script017 in captured values', 'actual weak014 environment and external weak references'],
        'normalOwnedDagFullyFinalizedAndUnlinked': True, 'bothClosureAndPrototypeWeakOrdersQualified': True,
        'actualStringByteRepresentationPreserved': True, 'stringSharedOpaqueProvisionerBoundaryInheritedUnchanged': True,
        'fullSharedStateOrFutureAdjacentOpaqueFieldNonoverlapQualified': False,
        'sourceModeOriginalImageCodeDataOrServicesMapped': False, 'sourceClosureUndefinedSymbols': [],
        'exactFrozenNamedPrefixValuesVectorsAndOpaqueCallbacks': True, 'prototypeCastToFullCollectable': False,
        'generic017AccessBeyondActualPrototypePrefixAllowed': False, 'weakReadOfLogicallyDisposedOwnerAllowed': False,
        'legacy010Or006CodeOrCallbacksConsumed': False, 'nativeStoredCallableInvoked': False,
        'closureCreationAllocatorGcCyclesRacesReentrantDestructionAndUniversalVmQualified': False,
        'allocationDuringQualifiedLifetimeAllowed': False,
        'externalServices': 'typed retained-storage disposal and explicitly returning observer callbacks; no actual allocator/free recovery',
        'returningSourceControls': semantic, 'nativeTests': {'passed': 14, 'log': pin(WORK / 'replay/tests.json')},
        'armBuild': build, 'actualWindowsLibrary': pin(native_path), 'androidBuild': mobile_build,
        'toolIdentities': [pin(ROOT / 'tools/clang-21/clang.exe'), pin(ROOT / 'tools/clang-21/ld.lld.exe')],
        'unicornWrapperVersion': unicorn.__version__, 'unicornNativeVersion': list(unicorn.uc_version()),
        'originalPayloadsOrRawOriginalInstructionsPublished': False,
        'reproduction': ['tools/python/Scripts/python.exe', 'toolscripts/squirrel_script_closure017.py']}
    save(EVIDENCE / 'execution.json', report)
    files = sorted(SOURCE.glob('*')) + sorted((ROOT / 'toolscripts').glob('squirrel_script_closure017*.py'))
    files += [ROOT / 'tests/test_squirrel_script_closure017.py', EVIDENCE / 'claim.json', EVIDENCE / 'execution.json']
    save(EVIDENCE / 'ready.json', {'schemaVersion': 1, 'status': 'frozen-ready-for-independent-review',
        'files': [pin(path) for path in files if path.is_file()], 'measuredExistingCompleteBodyBytes': 256,
        'newPhysicalInstructionCredit': 0, 'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0,
        'canonicalNamesDistinctPendingCoordinatorMapping': True, 'coordinatorAdmissionRequired': True,
        'creationAllocatorGcUniversalVmGameOrDeviceClaims': False, 'noOriginalPayloads': True})
    print(json.dumps({'cases': len(cases), 'comparisonsAgainstOriginal': len(cases) * 3,
        'originalInstructionAddresses': len(visited), 'androidReturnedApis': mobile.calls, 'ready': pin(EVIDENCE / 'ready.json')}))


if __name__ == '__main__':
    main()
