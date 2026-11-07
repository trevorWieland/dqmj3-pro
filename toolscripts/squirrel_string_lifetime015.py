import hashlib
import json
import struct
import sys

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_REG_R1
import unicorn
from native_wave014_oracle import original_image
from squirrel_string_lifetime015_build import ROOT, SOURCE, WORK, arm, windows, android, command, pin, save
from squirrel_string_lifetime015_oracle import Arm, Windows, ROOTS, SPANS
from squirrel_string_lifetime015_android import Android
from squirrel_string_lifetime015_controls import run as controls


EVIDENCE = ROOT / 'evidence/lanes/squirrel-string-lifetime015'
PREDECESSORS = [
    ('evidence/lanes/squirrel-prototype-release011/ready.json', '75b42c5dcaed077735ece2421f12cc26b71127ad297e7ea9a56dd56e2b6ec092'),
    ('evidence/lanes/squirrel-reference-prefix012/types-ready.json', 'bcd20ae34361b01ea681598e5fefdc2a6f162395a02feb166d784eb9078e0ee1'),
    ('evidence/lanes/squirrel-weak-reference014/ready.json', 'cf161d3eb1630b1272143669774db030327a69616b21b58f6b20c908858c7929')]


def sha(value):
    return hashlib.sha256(value).hexdigest()


def registered_domain(image):
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    code = {row.address: row for row in decoder.disasm(image[0x24d9e0 - 0x100000:0x24da70 - 0x100000], 0x24d9e0)}
    expected = {0x24d9ec: ('ldr', 'r3, [r1, #0x18]'), 0x24d9f8: ('and', 'r3, r3, r4'),
        0x24da00: ('ldr', 'r4, [ip, r3, lsl #2]'), 0x24da08: ('beq', '#0x24da68'),
        0x24da0c: ('cmp', 'r4, r1'), 0x24da10: ('bne', '#0x24da58'),
        0x24da5c: ('ldr', 'r4, [r4, #0x10]'), 0x24da64: ('bne', '#0x24da0c'),
        0x24da68: ('nop', ''), 0x24da6c: ('bl', '#0x146590')}
    for address, pair in expected.items():
        if (code[address].mnemonic, code[address].op_str) != pair:
            raise ValueError('Registered removal control-flow witness changed')
    lookup = [row for address, row in code.items() if 0x24d9e0 <= address < 0x24da14 or 0x24da58 <= address < 0x24da68]
    if any(row.mnemonic.startswith(('bl', 'svc')) or ARM_REG_R1 in row.regs_access()[1] for row in lookup):
        raise ValueError('Lookup changes its target or invokes an external observer before finding it')
    return {'precondition': 'finite stable computed-hash bucket chain contains actual removal target; positive use count',
        'preconditionCheckedIndependentlyBeforeArmExecution': True, 'lookupCallsOrTargetMutationBeforeFound': False,
        'raceOrCycleProofClaimed': False, 'unexecutedInstructionAddresses': [0x24da68, 0x24da6c],
        'unexecutedInstructionBytes': 8, 'originalMissingTargetAbortOrReturnBehaviorQualified': False,
        'missingTargetDependency': 0x146590, 'universalDeadCodeClaimed': False}


def validate():
    claim = json.loads((EVIDENCE / 'claim.json').read_text())
    image = original_image()
    if sha(image) != claim['moduleSha256']:
        raise ValueError('Measured string module changed')
    for row in claim['functions'] + claim['originalByteHelpers']:
        start, end = row['entry'] - 0x100000, row['endExclusive'] - 0x100000
        if sha(image[start:end]) != row['instructionSha256'] or sha(image[end:end + row['poolBytes']]) != row['poolSha256']:
            raise ValueError('Measured string body/helper/pool changed')
    prerequisites = []
    for path, expected in PREDECESSORS:
        source = ROOT / path
        if sha(source.read_bytes()) != expected:
            raise ValueError('Frozen string prerequisite receipt changed: ' + path)
        record = json.loads(source.read_text())
        for row in record['files'] if 'files' in record else [record['header']]:
            current = ROOT / row['path']
            if sha(current.read_bytes()) != row['sha256'] or current.stat().st_size != row['bytes']:
                raise ValueError('Frozen string prerequisite file changed: ' + row['path'])
        prerequisites.append(pin(source))
    return claim, prerequisites, registered_domain(image)


def main():
    claim, prerequisites, membership = validate()
    sections, symbols, functions, build = arm(WORK / 'replay/arm')
    native_path = windows(WORK / 'replay/windows')
    mobile_sections, mobile_symbols, mobile_build = android(WORK / 'replay/android')
    original, source = Arm(sections, symbols, functions, True), Arm(sections, symbols, functions)
    native, mobile = Windows(native_path), Android(mobile_sections, mobile_symbols)
    if native.layout != [24, 48, 16, 56, 40]:
        raise ValueError('String/prefix/table/nominal-header/weak natural layout changed')
    cases, digest = [], hashlib.sha256()
    for root in ROOTS:
        for variant in range(16):
            expected, heap = original.execute(root, variant)
            actual, source_heap = source.execute(root, variant)
            host, android_state = native.execute(root, variant), mobile.execute(root, variant)
            if actual != expected or source_heap != heap or host != expected or android_state != expected:
                raise ValueError('Actual source string family differs: ' + root + '/' + str(variant))
            words = struct.pack('<' + 'I' * len(expected), *expected)
            digest.update(words)
            cases.append({'root': root, 'variant': variant, 'caseClass': 'callback-interference' if variant in [10, 11, 12] else 'typed-byte-string-lifetime',
                'observationWords': len(expected), 'orderedObservationsSha256': sha(words),
                'wholeNormalizedArmHeapSha256': sha(heap), 'wholeArmHeapEqual': True,
                'sourceArmEqual': True, 'actualWindowsEqual': True, 'actualAndroidObjectsCpuModelEqual': True})
    instructions = {address for start, end in SPANS[:4] for address in range(start, end, 4)}
    visited = instructions & original.coverage
    if instructions - visited != {0x24da68, 0x24da6c} or len(instructions) != 179:
        raise ValueError('String execution coverage differs from its declared registered domain')
    if original.registered_membership_checks != 80 or source.registered_membership_checks != 80:
        raise ValueError('Registered target predicate was not checked for every applicable case')
    save(WORK / 'replay/private-instruction-coverage.json', {'originalAddresses': sorted(original.coverage), 'sourceAddresses': sorted(source.coverage)})
    semantic = controls()
    test = "import sys,unittest; suite=unittest.defaultTestLoader.discover(" + repr(str(ROOT / 'tests')) + ",pattern='test_squirrel_string_lifetime015.py'); assert suite.countTestCases()==14; result=unittest.TextTestRunner(stream=sys.stdout,verbosity=2).run(suite); sys.exit(not result.wasSuccessful() or bool(result.skipped))"
    command([sys.executable, '-c', test], WORK / 'replay/tests.json')
    report = {'schemaVersion': 1, 'status': 'qualified-bounded-source-byte-string-interning-and-registered-lifetime-family',
        'program': claim['program'], 'version': claim['version'], 'module': claim['module'], 'moduleSha256': claim['moduleSha256'],
        'claim': pin(EVIDENCE / 'claim.json'), 'completeMeasuredBodies': claim['functions'],
        'measuredPhysicalInstructionUnionBytes': 716, 'logicalBodyBytesIncludingSharedTail': 860, 'poolBytes': 12,
        'newReleaseAndDestructorRequireCensusReview': True, 'sharedRemoveTailPhysicalOwner': 0x24d9e0,
        'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0, 'coordinatorAdmissionRequired': True,
        'duplicateTailOrBorrowedHelperCreditAllowed': False, 'frozenPrerequisites': prerequisites,
        'cases': len(cases), 'comparisonsAgainstOriginal': len(cases) * 3, 'sourceArmWholeHeapComparisons': len(cases),
        'casesByRoot': cases, 'orderedCaseDigest': digest.hexdigest(), 'registeredTargetProof': membership,
        'independentRegisteredMembershipChecks': {'originalArm': 80, 'sourceArm': 80},
        'originalInstructionAddressesVisited': len(visited), 'originalInstructionAddressesTotal': len(instructions),
        'executedNewInstructionBytes': len(visited) * 4, 'unexecutedNewInstructionBytes': 8,
        'allOriginalInstructionsExecutedClaimed': False, 'actualWindowsExecuted': True,
        'actualAndroidObjectsCpuModelExecuted': True, 'androidReturnedApis': mobile.calls,
        'androidModel': 'Cortex-A72 AArch64 above 4 GiB with x18/saved integer/floating-point/stack checks',
        'androidOperatingSystemOrDeviceExecuted': False, 'wholeVmOrGameExecuted': False,
        'actualEncodingScope': '8-bit storage; signed byte converted to unsigned16 for 32-bit sampled hash',
        'utf16OrGeneralUnicodeDecoderQualified': False, 'targetStringPrefixBytes': 12, 'targetPayloadOffset': 28,
        'targetNominalAllocationHeaderBytes': 32, 'targetTableBytes': 12,
        'nativeLayoutBytes': dict(zip(['prefix', 'payloadOffset', 'table', 'nominalAllocationHeader', 'weak'], native.layout)),
        'sharedStateAdapter': claim['sharedStateAdapter'], 'fullSharedStateOrFutureAdjacentOpaqueFieldNonoverlapQualified': False,
        'sourceModeOriginalCodeDataOrServicesMapped': False, 'sourceClosureUndefinedSymbols': [],
        'originalByteHelpersExecutedUnmodified': claim['originalByteHelpers'],
        'byteHelperInterface': 'length result; comparison zero/nonzero; exact copied/zeroed bytes; copy/clear return values unused',
        'broaderLibcAbiOrNewIntervalCreditQualified': False, 'legacySqRefVtableReinterpretationQualified': False,
        'exactFrozenPrefixAndOpaqueVtableCallbacks': True, 'actualWeak014BothDestructionOrdersQualified': True,
        'weakApiAccessBeyondStringPrefixOrAfterLogicalStringDisposalAllowed': False,
        'allocatorRecovered': False, 'allocationFailureMissingRegistrationCyclesRacesGcAndUniversalVmQualified': False,
        'allocationAndDisposalContract': 'explicit successful aligned nonoverlapping typed storage and retained-storage disposal observers',
        'returningSourceControls': semantic, 'nativeTests': {'passed': 14, 'log': pin(WORK / 'replay/tests.json')},
        'armBuild': build, 'actualWindowsLibrary': pin(native_path), 'androidBuild': mobile_build,
        'toolIdentities': [pin(ROOT / 'tools/clang-21/clang.exe'), pin(ROOT / 'tools/clang-21/ld.lld.exe')],
        'unicornWrapperVersion': unicorn.__version__, 'unicornNativeVersion': list(unicorn.uc_version()),
        'originalPayloadsOrRawOriginalInstructionsPublished': False,
        'reproduction': ['tools/python/Scripts/python.exe', 'toolscripts/squirrel_string_lifetime015.py']}
    save(EVIDENCE / 'execution.json', report)
    files = sorted(SOURCE.glob('*')) + sorted((ROOT / 'toolscripts').glob('squirrel_string_lifetime015*.py'))
    files += [ROOT / 'tests/test_squirrel_string_lifetime015.py', EVIDENCE / 'claim.json', EVIDENCE / 'execution.json']
    save(EVIDENCE / 'ready.json', {'schemaVersion': 1, 'status': 'frozen-ready-for-independent-review',
        'files': [pin(path) for path in files if path.is_file()], 'measuredCompletePhysicalBodyUnionBytes': 716,
        'executedNewInstructionBytes': 708, 'unexecutedOutsideRegisteredDomainBytes': 8,
        'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0, 'coordinatorAdmissionRequired': True,
        'allocatorFullSharedStateGcUniversalVmGameOrDeviceClaims': False, 'noOriginalPayloads': True})
    print(json.dumps({'cases': len(cases), 'comparisonsAgainstOriginal': len(cases) * 3,
        'visitedNewInstructionAddresses': len(visited), 'measuredNewInstructionAddresses': len(instructions),
        'androidReturnedApis': mobile.calls, 'ready': pin(EVIDENCE / 'ready.json')}))


if __name__ == '__main__':
    main()
