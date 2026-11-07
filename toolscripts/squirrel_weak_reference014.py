import hashlib
import json
import struct
import sys

import unicorn
from native_wave014_oracle import original_image
from squirrel_weak_reference014_build import ROOT, SOURCE, WORK, arm, windows, android, command, pin, save
from squirrel_weak_reference014_oracle import Arm, Windows, ROOTS, SPANS
from squirrel_weak_reference014_android import Android
from squirrel_weak_reference014_controls import run as controls


EVIDENCE = ROOT / 'evidence/lanes/squirrel-weak-reference014'
PREDECESSORS = [
    ('evidence/lanes/squirrel-prototype-release011/ready.json', '75b42c5dcaed077735ece2421f12cc26b71127ad297e7ea9a56dd56e2b6ec092'),
    ('evidence/lanes/squirrel-native-closure-release013/ready.json', '4ea663042fca72d9b6fa158e478247cd7de9786341cf92e65024b1860f89aae1'),
    ('evidence/lanes/squirrel-reference-prefix012/types-ready.json', 'bcd20ae34361b01ea681598e5fefdc2a6f162395a02feb166d784eb9078e0ee1')]


def sha(value):
    return hashlib.sha256(value).hexdigest()


def validate():
    claim = json.loads((EVIDENCE / 'claim.json').read_text())
    image = original_image()
    if sha(image) != claim['moduleSha256']:
        raise ValueError('Measured module identity changed')
    for row in claim['functions']:
        start, end = row['entry'] - 0x100000, row['endExclusive'] - 0x100000
        if sha(image[start:end]) != row['instructionSha256'] or sha(image[end:end + row['poolBytes']]) != row['poolSha256']:
            raise ValueError('Measured weak body or pool changed')
    receipts = []
    for path, expected in PREDECESSORS:
        source = ROOT / path
        if sha(source.read_bytes()) != expected:
            raise ValueError('Frozen prerequisite receipt changed: ' + path)
        record = json.loads(source.read_text())
        files = record['files'] if 'files' in record else [record['header']]
        for row in files:
            current = ROOT / row['path']
            if sha(current.read_bytes()) != row['sha256'] or current.stat().st_size != row['bytes']:
                raise ValueError('Frozen prerequisite file changed: ' + row['path'])
        receipts.append(pin(source))
    return claim, receipts


def main():
    claim, prerequisites = validate()
    sections, symbols, functions, build = arm(WORK / 'replay/arm')
    native_path = windows(WORK / 'replay/windows')
    mobile_sections, mobile_symbols, mobile_build = android(WORK / 'replay/android')
    original, source = Arm(sections, symbols, functions, True), Arm(sections, symbols, functions)
    native, mobile = Windows(native_path), Android(mobile_sections, mobile_symbols)
    if native.layout != [40, 24, 40, 128, 24, 184]:
        raise ValueError('Native weak/prefix/collectable/prototype alignment changed')
    digest, cases = hashlib.sha256(), []
    for root in ROOTS:
        for variant in range(12):
            expected, heap = original.execute(root, variant)
            actual, source_heap = source.execute(root, variant)
            host, android_state = native.execute(root, variant), mobile.execute(root, variant)
            if expected != actual or heap != source_heap or host != expected or android_state != expected:
                raise ValueError('Weak source lifetime differs: ' + root + '/' + str(variant))
            words = struct.pack('<' + 'I' * len(expected), *expected)
            digest.update(words)
            cases.append({'root': root, 'variant': variant, 'owner': 'actual-native-closure013' if variant % 2 else 'actual-prototype011',
                'caseClass': 'unsigned-count-or-tag-edge' if variant // 2 == 3 else 'callback-interference' if variant // 2 in [4, 5] else 'typed-lifetime',
                'observationWords': len(expected), 'orderedObservationsSha256': sha(words),
                'wholeNormalizedArmHeapSha256': sha(heap), 'wholeArmHeapEqual': True,
                'sourceArmEqual': True, 'actualWindowsEqual': True, 'actualAndroidObjectsCpuModelEqual': True})
    instructions = {address for start, end in SPANS[:3] for address in range(start, end, 4)}
    visited = instructions & original.coverage
    if visited != instructions:
        raise ValueError('An original weak-family instruction was not executed')
    save(WORK / 'replay/private-instruction-coverage.json', {'originalAddresses': sorted(original.coverage), 'sourceAddresses': sorted(source.coverage)})
    semantic = controls()
    test = "import sys,unittest; suite=unittest.defaultTestLoader.discover(" + repr(str(ROOT / 'tests')) + ",pattern='test_squirrel_weak_reference014.py'); assert suite.countTestCases()==12; result=unittest.TextTestRunner(stream=sys.stdout,verbosity=2).run(suite); sys.exit(not result.wasSuccessful() or bool(result.skipped))"
    command([sys.executable, '-c', test], WORK / 'replay/tests.json')
    report = {'schemaVersion': 1, 'status': 'qualified-bounded-source-weak-reference-lifetime-and-lazy-creation',
        'program': claim['program'], 'version': claim['version'], 'module': claim['module'], 'moduleSha256': claim['moduleSha256'],
        'claim': pin(EVIDENCE / 'claim.json'), 'completeBodies': claim['functions'], 'measuredNewInstructionBytes': 196, 'poolBytes': 12,
        'newReleaseAndDestructorRequireCensusReview': True, 'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0,
        'coordinatorAdmissionRequired': True, 'duplicateIntervalCreditAllowed': False, 'reusedPrototypeNativeAndBasePhysicalCredit': 0,
        'frozenPrerequisites': prerequisites, 'cases': len(cases), 'comparisonsAgainstOriginal': len(cases) * 3,
        'sourceArmWholeHeapComparisons': len(cases), 'casesByRoot': cases, 'orderedCaseDigest': digest.hexdigest(),
        'originalInstructionAddressesVisited': len(visited), 'originalInstructionAddressesTotal': len(instructions),
        'all49NewOriginalInstructionAddressesVisited': True, 'actualWindowsExecuted': True,
        'actualAndroidObjectsCpuModelExecuted': True, 'androidReturnedApis': mobile.calls,
        'androidModel': 'Cortex-A72 AArch64 above4GiB with x18/saved integer/floating-point/stack checks',
        'androidOperatingSystemOrPhysicalDeviceExecuted': False, 'wholeVmOrGameExecuted': False,
        'targetWeakBytes': 20, 'targetPrefixBytes': 12, 'targetCollectableBytes': 20,
        'nativeLayoutBytes': dict(zip(['weak', 'prefix', 'collectable', 'nativeClosure', 'weakObjectOffset', 'prototypeInstructionOffset'], native.layout)),
        'sourceModeOriginalCodeDataOrServicesMapped': False, 'sourceClosureUndefinedSymbols': [],
        'actualSmallPrefixAndNamedCollectableOwnersQualified': True, 'prototypeCastToCollectable': False,
        'weakApiAccessBeyondActualOwnerPrefixAllowed': False, 'weakApiReadOfLogicallyDisposedOwnerAllowed': False,
        'targetOwnedOrRetainedByWeak': False, 'cachedTagRefreshed': False, 'exactOpaqueVtableCallbacks': True,
        'legacySqRefVtableReinterpretationQualified': False, 'nativeCallInvocationOrLegacyCallableAbiQualified': False,
        'weakOfWeakAndBothOwnerDestructionOrdersQualified': True,
        'allocatorRecovered': False, 'allocationContract': 'aligned nonNULL nonoverlapping typed storage; callback returns normally',
        'disposalContract': 'explicit typed C retained-storage observer; actual allocator/free outside scope',
        'sourceNullAllocationExecutedOrAdmitted': False, 'gcArbitraryCyclesRacesAndWholeVmQualified': False,
        'returningSourceControls': semantic, 'nativeTests': {'passed': 12, 'log': pin(WORK / 'replay/tests.json')},
        'armBuild': build, 'actualWindowsLibrary': pin(native_path), 'androidBuild': mobile_build,
        'toolIdentities': [pin(ROOT / 'tools/clang-21/clang.exe'), pin(ROOT / 'tools/clang-21/ld.lld.exe')],
        'unicornWrapperVersion': unicorn.__version__, 'unicornNativeVersion': list(unicorn.uc_version()),
        'originalPayloadsOrRawOriginalInstructionsPublished': False,
        'reproduction': ['tools/python/Scripts/python.exe', 'toolscripts/squirrel_weak_reference014.py']}
    save(EVIDENCE / 'execution.json', report)
    files = sorted(SOURCE.glob('*')) + sorted((ROOT / 'toolscripts').glob('squirrel_weak_reference014*.py'))
    files += [ROOT / 'tests/test_squirrel_weak_reference014.py', EVIDENCE / 'claim.json', EVIDENCE / 'execution.json']
    save(EVIDENCE / 'ready.json', {'schemaVersion': 1, 'status': 'frozen-ready-for-independent-review',
        'files': [pin(path) for path in files if path.is_file()], 'measuredNewCompleteBodyBytes': 196,
        'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0, 'coordinatorAdmissionRequired': True,
        'allocatorGcWholeVmGameOrDeviceClaims': False, 'noOriginalPayloads': True})
    print(json.dumps({'cases': len(cases), 'comparisonsAgainstOriginal': len(cases) * 3,
        'allNewInstructionAddresses': len(visited), 'androidReturnedApis': mobile.calls, 'ready': pin(EVIDENCE / 'ready.json')}))


if __name__ == '__main__':
    main()
