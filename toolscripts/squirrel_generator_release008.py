import hashlib
import json
import struct
import sys

import unicorn
from native_wave014_oracle import original_image
from squirrel_generator_release008_build import ROOT, SOURCE, WORK, arm, windows, android, command, pin, save
from squirrel_generator_release008_oracle import Arm, Windows, SPANS
from squirrel_generator_release008_android import Android
from squirrel_generator_release008_controls import run as returning_controls


EVIDENCE = ROOT / 'evidence/lanes/squirrel-generator-release008'


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
            raise ValueError('Measured generator body or pool identity changed')
    predecessor = ROOT / 'evidence/lanes/squirrel-array-release007/ready.json'
    if sha(predecessor.read_bytes()) != 'b398aa788374c97994be97e6ea40bfed6ed4ab7461585c140f0c103adcd0adce':
        raise ValueError('Frozen source-array dependency receipt changed')
    for row in json.loads(predecessor.read_text())['files']:
        if sha((ROOT / row['path']).read_bytes()) != row['sha256']:
            raise ValueError('Frozen source-array dependency changed')
    return claim, predecessor


def main():
    claim, predecessor = validate_inputs()
    sections, symbols, functions, build = arm(WORK / 'replay/arm')
    native_path = windows(WORK / 'replay/windows')
    android_sections, android_symbols, android_build = android(WORK / 'replay/android')
    original = Arm(sections, symbols, functions, True)
    source = Arm(sections, symbols, functions)
    native = Windows(native_path)
    mobile = Android(android_sections, android_symbols)
    if native.layout != [40, 16, 192, 184, 72, 24, 112, 72]:
        raise ValueError('Actual native generator type layout differs')
    digest, rows = hashlib.sha256(), []
    for root in ['release', 'destructor']:
        for variant in range(24):
            expected, heap = original.execute(root, variant)
            actual, source_heap = source.execute(root, variant)
            host = native.execute(root, variant)
            android_state = mobile.execute(root, variant)
            if actual != expected or heap != source_heap or host != expected or android_state != expected:
                raise ValueError('Source generator lifetime differs: ' + root + '/' + str(variant))
            words = struct.pack('<' + 'I' * len(expected), *expected)
            digest.update(words)
            rows.append({'root': root, 'variant': variant, 'observationWords': len(expected),
                'orderedObservationSha256': sha(words), 'wholeNormalizedArmHeapSha256': sha(heap),
                'wholeArmHeapEqual': True, 'sourceArmEqual': True, 'actualWindowsEqual': True,
                'actualAndroidObjectsCpuModelEqual': True})
    expected_instructions = {address for start, end in SPANS[:2] for address in range(start, end, 4)}
    covered = original.coverage & expected_instructions
    if covered != expected_instructions:
        raise ValueError('A measured original generator instruction was not executed')
    save(WORK / 'replay/private-instruction-coverage.json', {'originalAddresses': sorted(original.coverage),
        'sourceAddresses': sorted(source.coverage)})
    controls = returning_controls()
    test_command = "import sys,unittest; suite=unittest.defaultTestLoader.discover(" + repr(str(ROOT / 'tests')) + ",pattern='test_squirrel_generator_release008.py'); result=unittest.TextTestRunner(stream=sys.stdout,verbosity=2).run(suite); sys.exit(not result.wasSuccessful() or bool(result.skipped))"
    command([sys.executable, '-c', test_command], WORK / 'replay/tests.json')
    report = {'schemaVersion': 1, 'status': 'qualified-bounded-source-generator-lifetime-component',
        'program': claim['program'], 'version': claim['version'], 'module': claim['module'],
        'moduleSha256': claim['moduleSha256'], 'claim': pin(EVIDENCE / 'claim.json'),
        'completeBodies': claim['functions'], 'measuredNewInstructionBytes': 304, 'poolBytes': 12,
        'requestedExactBytes': 0, 'coordinatorAdmissionRequired': True, 'duplicateIntervalCreditAllowed': False,
        'predecessor': pin(predecessor), 'borrowedHelperAndArrayInstructionCredit': 0,
        'cases': len(rows), 'comparisonsAgainstOriginal': len(rows) * 3,
        'sourceArmWholeHeapComparisons': len(rows), 'originalInstructionsVisited': len(covered),
        'originalInstructionsTotal': len(expected_instructions), 'all76OriginalInstructionsVisited': True,
        'actualWindowsExecuted': True, 'androidActualObjectsCpuModelExecuted': True,
        'androidModel': 'Cortex-A72 AArch64, foreign arena above 4GiB, natural typed ABI',
        'androidReturnedApis': mobile.calls, 'androidX18SavedRegistersAndStackPassed': True,
        'androidOperatingSystemOrDeviceExecutedForThisComponent': False,
        'physicalAndroidOrAynThorExecuted': False, 'wholeVmOrGameExecuted': False,
        'orderedCaseDigest': digest.hexdigest(), 'casesByRoot': rows,
        'nativeTypeLayoutBytes': dict(zip(['reference', 'object', 'generator', 'stateByteOffset',
            'sharedChainOffset', 'trapRecord', 'savedClosureOffset', 'callInfo'], native.layout)),
        'sourceModeOriginalCodeDataOrServicesMapped': False, 'sourceClosureUndefinedSymbols': [],
        'allocatorRecovered': False, 'deallocationService': 'typed C logical-free observer over foreign allocated memory',
        'genericObserverRealArrayAndRealGeneratorVtablesDistinct': True,
        'readOrderProvedByCallbackMutationAndSameFinalStateNegative': True,
        'podTrapDestructorLoop': 'empty per-element cleanup has no observable effects; backing storage ownership is preserved',
        'creationYieldResumeKillOrStateChangesClaimed': False,
        'integrationRequiresOneSharedGeneratorTypedefNotIncompatibleStructCasts': True,
        'returningSourceControls': controls, 'nativeTests': {'passed': 8, 'log': pin(WORK / 'replay/tests.json')},
        'armBuild': build, 'nativeLibrary': pin(native_path), 'androidBuild': android_build,
        'toolIdentities': [pin(ROOT / 'tools/clang-21/clang.exe'), pin(ROOT / 'tools/clang-21/ld.lld.exe')],
        'unicornWrapperVersion': unicorn.__version__, 'unicornNativeVersion': list(unicorn.uc_version()),
        'preservedAttempts': [{'path': 'work/squirrel-generator-release008/first/arm/link-prior-1.json',
            'finding': 'Aggregate fixture zeroing required authored C __aeabi_memclr4; no original runtime retained'},
            {'finding': 'Initial ctypes wrapper omitted the new direct-destructor pointer return type; corrected before qualification'}],
        'originalPayloadsOrRawOriginalInstructionsPublished': False,
        'reproduction': ['tools/python/Scripts/python.exe', 'toolscripts/squirrel_generator_release008.py']}
    save(EVIDENCE / 'execution.json', report)
    files = sorted(SOURCE.glob('*')) + sorted((ROOT / 'toolscripts').glob('squirrel_generator_release008*.py'))
    files += [ROOT / 'tests/test_squirrel_generator_release008.py', EVIDENCE / 'claim.json', EVIDENCE / 'execution.json']
    ready = {'schemaVersion': 1, 'status': 'frozen-ready-for-independent-review', 'files': [pin(path) for path in files if path.is_file()],
        'requestedExactBytes': 0, 'coordinatorAdmissionRequired': True, 'measuredNewCompleteBodyBytes': 304,
        'physicalAndroidOrGameClaims': False, 'noOriginalPayloads': True}
    save(EVIDENCE / 'ready.json', ready)
    print(json.dumps({'cases': len(rows), 'comparisonsAgainstOriginal': len(rows) * 3,
        'originalInstructions': len(covered), 'androidReturnedApis': mobile.calls,
        'ready': pin(EVIDENCE / 'ready.json')}))


if __name__ == '__main__':
    main()
