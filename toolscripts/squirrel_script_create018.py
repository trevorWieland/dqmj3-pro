import hashlib
import json
import re
import struct
import sys

import unicorn
from native_wave014_oracle import original_image
from squirrel_script_create018_build import ROOT, SOURCE, WORK, SOURCES, arm, windows, android, command, pin, save
from squirrel_script_create018_oracle import Arm, Windows, ROOTS
from squirrel_script_create018_android import Android
from squirrel_script_create018_controls import run as controls
from squirrel_script_create018_boundaries import measure


EVIDENCE = ROOT / 'evidence/lanes/squirrel-script-create018'
PREDECESSORS = [
    ('evidence/lanes/squirrel-prototype-release011/ready.json', '75b42c5dcaed077735ece2421f12cc26b71127ad297e7ea9a56dd56e2b6ec092'),
    ('evidence/lanes/squirrel-reference-prefix012/types-ready.json', 'bcd20ae34361b01ea681598e5fefdc2a6f162395a02feb166d784eb9078e0ee1'),
    ('evidence/lanes/squirrel-reference-prefix012/core-ready.json', '04d700df6bb0c3f42c7018302c43a79ba4fa78b11b1d3635d477df6ef57409cd'),
    ('evidence/lanes/squirrel-native-closure-release013/ready.json', '4ea663042fca72d9b6fa158e478247cd7de9786341cf92e65024b1860f89aae1'),
    ('evidence/lanes/squirrel-weak-reference014/ready.json', 'cf161d3eb1630b1272143669774db030327a69616b21b58f6b20c908858c7929'),
    ('evidence/lanes/squirrel-string-lifetime015/ready.json', '82e86302072925742becef9de94ccbc62cfd5fd76cfe51a6daa5fe62706f4ee4'),
    ('evidence/lanes/squirrel-native-create016/ready.json', '1e068cd99000f572a91935331e01f48a47993598534fbc93cf40d2015c93b45d'),
    ('evidence/lanes/squirrel-script-closure017/ready.json', 'ab060f71e2783a6c879ea5d82d06644f20674df9a0e875d9e62117805ec9ee15'),
    ('evidence/lanes/squirrel-table-lookup019/types-ready.json', '2cb40df64ffb0e237a8c12bc1cc4d39ebc53eeefb8a325c86f8e3cf738bcd3e2')]


def sha(value):
    return hashlib.sha256(value).hexdigest()


def check(row):
    path = ROOT / row['path']
    if sha(path.read_bytes()) != row['sha256'] or path.stat().st_size != row['bytes']:
        raise ValueError('018 immutable input changed: ' + row['path'])


def headers():
    pending, found = list(SOURCES), set()
    while pending:
        path = pending.pop().resolve()
        for name in re.findall(r'^\s*#include\s*"([^"]+)"', path.read_text(), re.M):
            target = (path.parent / name).resolve()
            target.relative_to(ROOT)
            if target not in found:
                found.add(target)
                pending.append(target)
    return [pin(path) for path in sorted(found)]


def validate():
    measure()
    claim = json.loads((EVIDENCE / 'claim.json').read_text())
    image = original_image()
    body = claim['completeController']
    start, end = body['entry'] - 0x100000, body['endExclusive'] - 0x100000
    if sha(image) != claim['moduleSha256'] or sha(image[start:end]) != body['instructionSha256'] or sha(image[end:end + body['poolBytes']]) != body['poolSha256']:
        raise ValueError('018 complete original controller identity changed')
    prerequisites = []
    for path, expected in PREDECESSORS:
        receipt = ROOT / path
        if sha(receipt.read_bytes()) != expected:
            raise ValueError('018 immutable prerequisite receipt changed: ' + path)
        record = json.loads(receipt.read_text())
        rows = record.get('files', []) + record.get('pins', []) + record.get('ownedFiles', [])
        if 'header' in record:
            rows.append(record['header'])
        for row in rows:
            check(row)
        prerequisites.append(pin(receipt))
    return claim, prerequisites


def main():
    claim, prerequisites = validate()
    consumed_headers = headers()
    sections, symbols, functions, build = arm(WORK / 'replay/arm')
    native_path = windows(WORK / 'replay/windows')
    mobile_sections, mobile_symbols, mobile_build = android(WORK / 'replay/android')
    original, source = Arm(sections, symbols, functions, True), Arm(sections, symbols, functions)
    native, mobile = Windows(native_path), Android(mobile_sections, mobile_symbols)
    if native.layout != [112, 40, 24, 48, 64, 80, 96]:
        raise ValueError('018 exact named-type layout differs')
    cases, digest = [], hashlib.sha256()
    for root in ROOTS:
        for variant in range(28):
            expected, heap = original.execute(root, variant)
            actual, source_heap = source.execute(root, variant)
            host, android_state = native.execute(root, variant), mobile.execute(root, variant)
            if actual != expected or source_heap != heap or host != expected or android_state != expected:
                raise ValueError('018 source ownership/controller differs: ' + root + '/' + str(variant))
            words = struct.pack('<' + 'I' * len(expected), *expected)
            digest.update(words)
            mode = 'actual-original-table-string-hit' if variant == 15 else 'explicit-lookup-error-interface-contract' if variant in [3, 4, 5, 10, 13] else 'local-parent-default-controller'
            cases.append({'root': root, 'variant': variant, 'evidenceMode': mode,
                'observationWords': len(expected), 'orderedObservationsSha256': sha(words),
                'wholeNormalizedArmHeapSha256': sha(heap), 'wholeArmHeapEqual': True,
                'sourceArmEqual': True, 'actualWindowsEqual': True, 'actualAndroidObjectsCpuModelEqual': True})
        print(json.dumps({'positiveRootPassed': root, 'cases': 28}), flush=True)
    instructions = set(range(0x196b08, 0x196f58, 4))
    visited = original.coverage & instructions
    table_visited = original.coverage & set(range(0x1a1dc8, 0x1a1ee8, 4))
    get_visited = original.coverage & set(range(0x198578, 0x1987dc, 4))
    if not table_visited or not get_visited:
        raise ValueError('018 optional original table/string provider path was not actually executed')
    save(WORK / 'replay/private-instruction-coverage.json', {'originalAddresses': sorted(original.coverage), 'sourceAddresses': sorted(source.coverage)})
    semantic = controls()
    test = "import sys,unittest; suite=unittest.defaultTestLoader.discover(" + repr(str(ROOT / 'tests')) + ",pattern='test_squirrel_script_create018.py'); assert suite.countTestCases()==20; result=unittest.TextTestRunner(stream=sys.stdout,verbosity=2).run(suite); sys.exit(not result.wasSuccessful() or bool(result.skipped))"
    command([sys.executable, '-c', test], WORK / 'replay/tests.json')
    for row in consumed_headers:
        check(row)
    report = {'schemaVersion': 1, 'status': 'qualified-bounded-script-creation-controller-under-explicit-provider-contracts',
        'program': claim['program'], 'version': claim['version'], 'module': claim['module'], 'moduleSha256': claim['moduleSha256'],
        'claim': pin(EVIDENCE / 'claim.json'), 'completeMeasuredController': claim['completeController'],
        'measuredInstructionBytes': 1104, 'poolBytes': 20, 'distinctSourceApi': 'sq_script_create018',
        'canonicalMappingOwnedByCoordinator': True, 'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0,
        'coordinatorAdmissionRequired': True, 'helperAndInheritedLifetimeDuplicateCreditAllowed': False,
        'frozenPrerequisites': prerequisites, 'consumedQuotedIncludeHeaders': consumed_headers,
        'cases': len(cases), 'comparisonsAgainstOriginal': len(cases) * 3, 'sourceArmWholeHeapComparisons': len(cases),
        'casesByRoot': cases, 'orderedCaseDigest': digest.hexdigest(),
        'originalControllerInstructionAddressesVisited': len(visited), 'originalControllerInstructionAddressesTotal': len(instructions),
        'unvisitedOriginalControllerInstructionAddresses': sorted(instructions - visited),
        'actualOriginalIndexedGetInstructionAddressesVisited': len(get_visited),
        'actualOriginalTableGetInstructionAddressesVisited': len(table_visited),
        'actualOriginalIndexedGetProviderMode': 'narrow actual table/string success only; other lookup/error modes are C interface fixtures',
        'actualOriginalIndexedErrorProviderExecuted': False,
        'fixtureNarrowLookupAlgorithm': 'independent authored scan of one declared019 table with actual015 key/013 value; not complete tableGet source qualification',
        'cachedOriginalProviderResultsFedIntoAuthoredCode': False,
        'completeMeasuredControllerReconstructedInOrdinaryC': True, 'universalWholeFunctionEquivalenceClaimed': False,
        'completeVmLookupErrorProviderOrSourceGraphQualified': False,
        'actualWindowsExecuted': True, 'actualAndroidObjectsCpuModelExecuted': True, 'androidReturnedApis': mobile.calls,
        'androidModel': 'Cortex-A72 AArch64 above 4 GiB; x18/saved integer/floating-point/stack checks',
        'androidOperatingSystemOrPhysicalDeviceExecuted': False, 'wholeVmOrGameExecuted': False,
        'targetClosureBytes': 64, 'targetActualPrototypePrefixBytes': 12,
        'nativeClosureBytes': 112, 'exactFrozenNamedTypesAndOpaqueCallbacks': True,
        'realComposedPayloads': ['compact prototype011 including final-owner destruction', 'raw8-bit string015',
            'native closure013 captured/default values; stored callable uninvoked', 'script017 parent/captured values', 'weak014 with both destruction orders'],
        'targetVmBinding': claim['vmBinding'], 'fullVmOrCallInfoLayoutQualified': False,
        'vmBindingUsesByteCopiesAndReservedStorage': True, 'prototypeCastToFullCollectable': False,
        'legacyLifetimeBodiesOrIncompatibleCallbacksConsumed': False,
        'allocationCallbackObservesIncompleteNewFields': False,
        'newSharedAndListFieldsInitializedAfterPrototypeTemporaryOwnership': True,
        'lookupFailurePreservesUnpublishedLinkedZeroCountClosure': True,
        'stringSharedOpaqueProvisionerBoundaryInheritedUnchanged': True,
        'fullSharedStateOrFutureAdjacentOpaqueFieldNonoverlapQualified': False,
        'sourceModeOriginalImageCodeDataOrServicesMapped': False, 'sourceClosureUndefinedSymbols': [],
        'externalServices': ['typed successful allocation/reallocation with retained foreign storage',
            'explicit indexed lookup/error interface contracts; optional independent narrow table-hit fixture',
            'frozen typed retained-storage disposal and returning observer callbacks'],
        'unsupportedDomains': ['NULL allocation/reallocation/prototype and assert146590 paths',
            'negative counts, arithmetic overflow, invalid indices/pointers or exhausted storage',
            'complete indexedGet/error provider, allocator backend, GC/cycles/races or universal VM behavior',
            'portable full VM/shared state or native callable invocation'],
        'returningSourceControls': semantic, 'nativeTests': {'passed': 20, 'log': pin(WORK / 'replay/tests.json')},
        'armBuild': build, 'actualWindowsLibrary': pin(native_path), 'androidBuild': mobile_build,
        'toolIdentities': [pin(ROOT / 'tools/clang-21/clang.exe'), pin(ROOT / 'tools/clang-21/ld.lld.exe')],
        'unicornWrapperVersion': unicorn.__version__, 'unicornNativeVersion': list(unicorn.uc_version()),
        'originalPayloadsOrRawOriginalInstructionsPublished': False,
        'reproduction': ['tools/python/Scripts/python.exe', 'toolscripts/squirrel_script_create018.py']}
    save(EVIDENCE / 'execution.json', report)
    files = sorted(SOURCE.glob('*')) + sorted((ROOT / 'toolscripts').glob('squirrel_script_create018*.py'))
    files += [ROOT / 'tests/test_squirrel_script_create018.py', EVIDENCE / 'claim.json', EVIDENCE / 'execution.json']
    save(EVIDENCE / 'ready.json', {'schemaVersion': 1, 'status': 'frozen-ready-for-independent-review',
        'files': [pin(path) for path in files if path.is_file()], 'measuredCompleteControllerBytes': 1104,
        'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0, 'canonicalNamesDistinctPendingCoordinatorMapping': True,
        'completeVmProviderGraphQualified': False, 'coordinatorAdmissionRequired': True,
        'allocatorGcUniversalVmGameOrDeviceClaims': False, 'noOriginalPayloads': True})
    print(json.dumps({'cases': len(cases), 'comparisonsAgainstOriginal': len(cases) * 3,
        'originalControllerAddresses': len(visited), 'androidReturnedApis': mobile.calls,
        'returningControls': len(semantic['controls']), 'ready': pin(EVIDENCE / 'ready.json')}))


if __name__ == '__main__':
    main()
