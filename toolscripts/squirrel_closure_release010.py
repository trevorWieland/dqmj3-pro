import hashlib
import json
import struct
import sys

import unicorn
from native_wave014_oracle import original_image
from squirrel_closure_release010_build import ROOT, SOURCE, WORK, arm, windows, android, command, pin, save
from squirrel_closure_release010_oracle import Arm, Windows, SPANS
from squirrel_closure_release010_android import Android
from squirrel_closure_release010_controls import run as returning_controls


EVIDENCE = ROOT / 'evidence/lanes/squirrel-closure-release010'


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
            raise ValueError('Measured closure body or pool identity changed')
    predecessors = [('squirrel-array-release007', 'b398aa788374c97994be97e6ea40bfed6ed4ab7461585c140f0c103adcd0adce'),
        ('squirrel-generator-release008', 'b01a7f74775289ff41f27c3a273111a1fb34d7ac162992b3f75cffa07801d6ce')]
    pins = []
    for lane, digest in predecessors:
        path = ROOT / 'evidence/lanes' / lane / 'ready.json'
        if sha(path.read_bytes()) != digest:
            raise ValueError('Frozen source lifetime dependency receipt changed')
        for row in json.loads(path.read_text())['files']:
            if sha((ROOT / row['path']).read_bytes()) != row['sha256']:
                raise ValueError('Frozen source lifetime dependency changed')
        pins.append(pin(path))
    return claim, pins


def main():
    claim, predecessors = validate_inputs()
    sections, symbols, functions, build = arm(WORK / 'replay/arm')
    native_path = windows(WORK / 'replay/windows')
    android_sections, android_symbols, android_build = android(WORK / 'replay/android')
    original = Arm(sections, symbols, functions, True)
    source = Arm(sections, symbols, functions)
    native = Windows(native_path)
    mobile = Android(android_sections, android_symbols)
    if native.layout != [112, 48, 64, 80, 96, 72, 16, 40]:
        raise ValueError('Actual native closure type layout differs')
    digest, rows = hashlib.sha256(), []
    for root in ['release', 'destructor']:
        for variant in range(24):
            expected, heap = original.execute(root, variant)
            actual, source_heap = source.execute(root, variant)
            host = native.execute(root, variant)
            android_state = mobile.execute(root, variant)
            if actual != expected or heap != source_heap or host != expected or android_state != expected:
                raise ValueError('Source closure lifetime differs: ' + root + '/' + str(variant))
            words = struct.pack('<' + 'I' * len(expected), *expected)
            digest.update(words)
            rows.append({'root': root, 'variant': variant, 'observationWords': len(expected),
                'orderedObservationSha256': sha(words), 'wholeNormalizedArmHeapSha256': sha(heap),
                'wholeArmHeapEqual': True, 'sourceArmEqual': True, 'actualWindowsEqual': True,
                'actualAndroidObjectsCpuModelEqual': True})
    expected_instructions = {address for start, end in SPANS[:2] for address in range(start, end, 4)}
    covered = original.coverage & expected_instructions
    if covered != expected_instructions:
        raise ValueError('A complete original closure instruction was not executed')
    save(WORK / 'replay/private-instruction-coverage.json', {'originalAddresses': sorted(original.coverage),
        'sourceAddresses': sorted(source.coverage)})
    controls = returning_controls()
    test_command = "import sys,unittest; suite=unittest.defaultTestLoader.discover(" + repr(str(ROOT / 'tests')) + ",pattern='test_squirrel_closure_release010.py'); result=unittest.TextTestRunner(stream=sys.stdout,verbosity=2).run(suite); sys.exit(not result.wasSuccessful() or bool(result.skipped))"
    command([sys.executable, '-c', test_command], WORK / 'replay/tests.json')
    report = {'schemaVersion': 1, 'status': 'qualified-bounded-source-script-closure-lifetime-component',
        'program': claim['program'], 'version': claim['version'], 'module': claim['module'],
        'moduleSha256': claim['moduleSha256'], 'claim': pin(EVIDENCE / 'claim.json'),
        'completeBodies': claim['functions'], 'measuredNewInstructionBytes': 256, 'poolBytes': 12,
        'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0, 'coordinatorAdmissionRequired': True,
        'newDestructorRequiresCensusReview': True, 'duplicateIntervalCreditAllowed': False,
        'predecessors': predecessors, 'borrowedHelperArrayAndGeneratorInstructionCredit': 0,
        'cases': len(rows), 'comparisonsAgainstOriginal': len(rows) * 3,
        'sourceArmWholeHeapComparisons': len(rows), 'originalInstructionsVisited': len(covered),
        'originalInstructionsTotal': len(expected_instructions), 'all64OriginalInstructionsVisited': True,
        'actualWindowsExecuted': True, 'androidActualObjectsCpuModelExecuted': True,
        'androidModel': 'Cortex-A72 AArch64, foreign arena above 4GiB, natural typed ABI',
        'androidReturnedApis': mobile.calls, 'androidX18SavedRegistersAndStackPassed': True,
        'androidOperatingSystemOrDeviceExecutedForThisComponent': False,
        'physicalAndroidOrAynThorExecuted': False, 'wholeVmOrGameExecuted': False,
        'orderedCaseDigest': digest.hexdigest(), 'casesByRoot': rows,
        'nativeTypeLayoutBytes': dict(zip(['closure', 'environmentOffset', 'functionObjectOffset', 'outersOffset',
            'defaultsOffset', 'sharedChainOffset', 'object', 'completeGenericReference'], native.layout)),
        'sourceModeOriginalCodeDataOrServicesMapped': False, 'sourceClosureUndefinedSymbols': [],
        'allocatorRecovered': False, 'deallocationService': 'typed C logical-free observer over foreign allocated memory',
        'compatibleReferenceKinds': ['complete typed generic SqRef callback target', 'SqArray', 'SqGenerator008', 'SqScriptClosure010'],
        'actual12BytePrototypeStoragePassedOrReinterpreted': False,
        'actualPrototypeFinalizationOrGcQualified': False,
        'prototypeSlotQualifiedOnlyWithCompatibleOpaqueReferenceServices': True,
        'broader12BytePrefixIntegrationRequiresSharedTypeOrAliasSafeServices': True,
        'gcVtableSlotsAndAdjacentFinalizeQualified': False,
        'genericObserverRealClosureArrayAndGeneratorVtablesDistinct': True,
        'readOrderProvedByCallbackMutationAndSameFinalStateNegatives': True,
        'integrationRequiresOneNamedSharedClosureTypeAndLegacyDraftNameTransition': True,
        'returningSourceControls': controls, 'nativeTests': {'passed': 7, 'log': pin(WORK / 'replay/tests.json')},
        'armBuild': build, 'nativeLibrary': pin(native_path), 'androidBuild': android_build,
        'toolIdentities': [pin(ROOT / 'tools/clang-21/clang.exe'), pin(ROOT / 'tools/clang-21/ld.lld.exe')],
        'unicornWrapperVersion': unicorn.__version__, 'unicornNativeVersion': list(unicorn.uc_version()),
        'boundaryAmendment': claim['boundaryAmendment'],
        'correctedPeerHandoffOffsets': {'existingLiveHeaderWasCorrect': True,
            'targetEnvironment': 24, 'targetFunction': 32, 'targetOuters': 40, 'targetDefaults': 52},
        'originalPayloadsOrRawOriginalInstructionsPublished': False,
        'reproduction': ['tools/python/Scripts/python.exe', 'toolscripts/squirrel_closure_release010.py']}
    save(EVIDENCE / 'execution.json', report)
    files = sorted(SOURCE.glob('*')) + sorted((ROOT / 'toolscripts').glob('squirrel_closure_release010*.py'))
    files += [ROOT / 'tests/test_squirrel_closure_release010.py', EVIDENCE / 'claim.json', EVIDENCE / 'execution.json']
    save(EVIDENCE / 'ready.json', {'schemaVersion': 1, 'status': 'frozen-ready-for-independent-review',
        'files': [pin(path) for path in files if path.is_file()], 'requestedExactBytes': 0,
        'acceptedSourceCreditGranted': 0, 'coordinatorAdmissionRequired': True,
        'measuredNewCompleteBodyBytes': 256, 'actual12BytePrototypesOrWholeVmQualified': False,
        'physicalAndroidOrGameClaims': False, 'noOriginalPayloads': True})
    print(json.dumps({'cases': len(rows), 'comparisonsAgainstOriginal': len(rows) * 3,
        'originalInstructions': len(covered), 'androidReturnedApis': mobile.calls,
        'ready': pin(EVIDENCE / 'ready.json')}))


if __name__ == '__main__':
    main()
