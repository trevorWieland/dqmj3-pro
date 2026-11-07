import hashlib
import json
import struct
import sys

import unicorn
from native_wave014_oracle import original_image
from squirrel_native_closure_release013_build import ROOT, SOURCE, WORK, arm, windows, android, command, pin, save
from squirrel_native_closure_release013_oracle import Arm, Windows, SPANS
from squirrel_native_closure_release013_android import Android
from squirrel_native_closure_release013_controls import run as returning_controls


EVIDENCE = ROOT / 'evidence/lanes/squirrel-native-closure-release013'


def sha(value):
    return hashlib.sha256(value).hexdigest()


def validate_inputs():
    claim = json.loads((EVIDENCE / 'claim.json').read_text())
    image = original_image()
    if sha(image) != claim['moduleSha256']:
        raise ValueError('Measured original module identity changed')
    for row in claim['functions']:
        start, end = row['entry'] - 0x100000, row['endExclusive'] - 0x100000
        if sha(image[start:end]) != row['instructionSha256'] or sha(image[end:end + row['poolBytes']]) != row['poolSha256']:
            raise ValueError('Measured native-closure body or pool identity changed')
    predecessor = ROOT / 'evidence/lanes/squirrel-prototype-release011/ready.json'
    if sha(predecessor.read_bytes()) != '75b42c5dcaed077735ece2421f12cc26b71127ad297e7ea9a56dd56e2b6ec092':
        raise ValueError('Frozen actual-prototype predecessor receipt changed')
    for row in json.loads(predecessor.read_text())['files']:
        if sha((ROOT / row['path']).read_bytes()) != row['sha256']:
            raise ValueError('Frozen actual-prototype predecessor changed')
    types = ROOT / 'evidence/lanes/squirrel-reference-prefix012/types-ready.json'
    if sha(types.read_bytes()) != 'bcd20ae34361b01ea681598e5fefdc2a6f162395a02feb166d784eb9078e0ee1':
        raise ValueError('Shared named collectable type receipt changed')
    record = json.loads(types.read_text())['header']
    if sha((ROOT / record['path']).read_bytes()) != record['sha256']:
        raise ValueError('Shared named collectable header changed')
    return claim, predecessor, types


def main():
    claim, predecessor, types = validate_inputs()
    sections, symbols, functions, build = arm(WORK / 'replay/arm')
    native_path = windows(WORK / 'replay/windows')
    android_sections, android_symbols, android_build = android(WORK / 'replay/android')
    original = Arm(sections, symbols, functions, True)
    source = Arm(sections, symbols, functions)
    native = Windows(native_path)
    mobile = Android(android_sections, android_symbols)
    if native.layout != [128, 40, 24, 56, 72, 88, 104, 112]:
        raise ValueError('Actual native closure/shared-prefix layout differs')
    digest, rows = hashlib.sha256(), []
    for root in ['release', 'destructor']:
        for variant in range(24):
            expected, heap = original.execute(root, variant)
            actual, source_heap = source.execute(root, variant)
            host = native.execute(root, variant)
            android_state = mobile.execute(root, variant)
            if actual != expected or heap != source_heap or host != expected or android_state != expected:
                raise ValueError('Source native-closure lifetime differs: ' + root + '/' + str(variant))
            if expected[2] != 0:
                raise ValueError('Original lifetime unexpectedly invoked the stored native callable')
            words = struct.pack('<' + 'I' * len(expected), *expected)
            digest.update(words)
            rows.append({'root': root, 'variant': variant, 'observationWords': len(expected),
                'caseClass': 'unsigned-count-edge' if variant in [3, 18] else 'callback-interference' if variant in [4, 5, 6, 7, 8, 19, 20, 21, 23] else 'typed-lifetime',
                'orderedObservationSha256': sha(words), 'wholeNormalizedArmHeapSha256': sha(heap),
                'wholeArmHeapEqual': True, 'sourceArmEqual': True, 'actualWindowsEqual': True,
                'actualAndroidObjectsCpuModelEqual': True, 'storedNativeCallableInvocations': 0})
    expected_instructions = {address for start, end in SPANS[:2] for address in range(start, end, 4)}
    covered = original.coverage & expected_instructions
    if covered != expected_instructions:
        raise ValueError('A complete original native-closure instruction was not executed')
    save(WORK / 'replay/private-instruction-coverage.json', {'originalAddresses': sorted(original.coverage),
        'sourceAddresses': sorted(source.coverage)})
    controls = returning_controls()
    test_command = "import sys,unittest; suite=unittest.defaultTestLoader.discover(" + repr(str(ROOT / 'tests')) + ",pattern='test_squirrel_native_closure_release013.py'); assert suite.countTestCases()==10; result=unittest.TextTestRunner(stream=sys.stdout,verbosity=2).run(suite); sys.exit(not result.wasSuccessful() or bool(result.skipped))"
    command([sys.executable, '-c', test_command], WORK / 'replay/tests.json')
    report = {'schemaVersion': 1, 'status': 'qualified-bounded-source-real-native-closure-lifetime-component',
        'program': claim['program'], 'version': claim['version'], 'module': claim['module'],
        'moduleSha256': claim['moduleSha256'], 'claim': pin(EVIDENCE / 'claim.json'),
        'completeBodies': claim['functions'], 'measuredNewInstructionBytes': 284, 'poolBytes': 12,
        'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0, 'coordinatorAdmissionRequired': True,
        'newDestructorRequiresCensusReview': True, 'duplicateIntervalCreditAllowed': False,
        'reusedUnlinkOuterDestructionAndPrototypePhysicalCredit': 0,
        'prototypePredecessor': pin(predecessor), 'sharedTypesReceipt': pin(types),
        'cases': len(rows), 'comparisonsAgainstOriginal': len(rows) * 3,
        'sourceArmWholeHeapComparisons': len(rows), 'originalInstructionsVisited': len(covered),
        'originalInstructionsTotal': len(expected_instructions), 'all71OriginalInstructionsVisited': True,
        'actualWindowsExecuted': True, 'androidActualObjectsCpuModelExecuted': True,
        'androidModel': 'Cortex-A72 AArch64 above4GiB; shared named opaque prefix/collectable types',
        'androidReturnedApis': mobile.calls, 'androidX18SavedRegistersAndStackPassed': True,
        'androidOperatingSystemOrDeviceExecutedForThisComponent': False,
        'physicalAndroidOrAynThorExecuted': False, 'wholeVmOrGameExecuted': False,
        'orderedCaseDigest': digest.hexdigest(), 'casesByRoot': rows,
        'nativeTypeLayoutBytes': dict(zip(['nativeClosure', 'collectable', 'noncollectablePrefix', 'typeChecksOffset',
            'outersOffset', 'environmentOffset', 'callableOffset', 'nameOffset'], native.layout)),
        'sourceModeOriginalCodeDataOrServicesMapped': False, 'sourceClosureUndefinedSymbols': [],
        'allocatorRecovered': False, 'deallocationService': 'typed C retained-allocation observer',
        'realComposedGraph': ['native closure013', 'actual prototype011', 'another native closure013'],
        'allSharedPrefixesAreSameNamedTypes': True, 'exactOpaqueVtableCallbacks': True,
        'bareGenericReferenceAccessRestrictedToActual12BytesOnArm': True,
        'prototypeCastToCollectableOrInsertedInChain': False,
        'legacySqRefCallbacksOrVtableReinterpretationQualified': False,
        'storedCallablePreservationQualified': True, 'storedCallableInvocationOrLegacyCallNativeAbiQualified': False,
        'fixtureCallableType': 'I32(void*) storage sentinel; exact typed adapter required before legacy invocation',
        'emptyPodElementDestructorLoopElided': True, 'compilerConstructorGcAndActualAllocatorQualified': False,
        'returningSourceControls': controls, 'nativeTests': {'passed': 10, 'log': pin(WORK / 'replay/tests.json')},
        'armBuild': build, 'nativeLibrary': pin(native_path), 'androidBuild': android_build,
        'toolIdentities': [pin(ROOT / 'tools/clang-21/clang.exe'), pin(ROOT / 'tools/clang-21/ld.lld.exe')],
        'unicornWrapperVersion': unicorn.__version__, 'unicornNativeVersion': list(unicorn.uc_version()),
        'originalPayloadsOrRawOriginalInstructionsPublished': False,
        'reproduction': ['tools/python/Scripts/python.exe', 'toolscripts/squirrel_native_closure_release013.py']}
    save(EVIDENCE / 'execution.json', report)
    files = sorted(SOURCE.glob('*')) + sorted((ROOT / 'toolscripts').glob('squirrel_native_closure_release013*.py'))
    files += [ROOT / 'tests/test_squirrel_native_closure_release013.py', EVIDENCE / 'claim.json', EVIDENCE / 'execution.json']
    save(EVIDENCE / 'ready.json', {'schemaVersion': 1, 'status': 'frozen-ready-for-independent-review',
        'files': [pin(path) for path in files if path.is_file()], 'requestedExactBytes': 0,
        'acceptedSourceCreditGranted': 0, 'coordinatorAdmissionRequired': True,
        'measuredNewCompleteBodyBytes': 284, 'legacyCollectableOrWholeVmQualified': False,
        'nativeInvocationPhysicalAndroidOrGameClaims': False, 'noOriginalPayloads': True})
    print(json.dumps({'cases': len(rows), 'comparisonsAgainstOriginal': len(rows) * 3,
        'originalInstructions': len(covered), 'androidReturnedApis': mobile.calls,
        'ready': pin(EVIDENCE / 'ready.json')}))


if __name__ == '__main__':
    main()
