import hashlib
import json
import re
import struct
import sys

import unicorn
from native_material_wave011_build import ROOT, pin, save, command
from squirrel_lookup020 import validate as frozen_validate
from squirrel_lookup020_oracle import Arm as FrozenArm, Windows as FrozenWindows
from squirrel_lookup020_android import Android
from squirrel_lookup023_build import WORK, SOURCE, SOURCES, arm, windows, android, entrypoints, CALL_READY, call_sources
from squirrel_lookup023_boundaries import measure
from squirrel_lookup023_member_witness import measure as member_witness
from squirrel_lookup023_float import compare_host
from squirrel_lookup023_sdk import discover
from squirrel_lookup023_oracle import Arm, Windows
from squirrel_lookup023_controls import run as controls
from squirrel_lookup023_native_inputs import receipt as native_inputs


EVIDENCE = ROOT / 'evidence/lanes/squirrel-lookup023'


def headers():
    pending, found = list(SOURCES), set()
    while pending:
        path = pending.pop().resolve()
        for name in re.findall(r'^\s*#include\s*"([^"]+)"', path.read_text(), re.M):
            target = (path.parent / name).resolve(); target.relative_to(ROOT)
            if target not in found: found.add(target); pending.append(target)
    return [pin(path) for path in sorted(found)]


def check(rows):
    for row in rows:
        path = ROOT / row['path']
        if path.stat().st_size != row['bytes'] or hashlib.sha256(path.read_bytes()).hexdigest() != row['sha256']:
            raise ValueError('023 consumed input changed during replay: ' + row['path'])


def run():
    claim, prerequisites = frozen_validate()
    own_claim = measure()
    member_witness()
    native_inputs()
    consumed = headers()
    source_inputs = [pin(path) for path in SOURCES]
    discovery = discover()
    sections, symbols, functions, build = arm(WORK / 'replay/arm')
    native_path = windows(WORK / 'replay/windows')
    mobile_sections, mobile_symbols, mobile_functions, mobile_build = android(WORK / 'replay/android')
    host_report = compare_host(native_path)
    baseline_reference = FrozenArm(sections, symbols, functions, True)
    baseline_source = FrozenArm(sections, symbols, functions)
    baseline_host = FrozenWindows(native_path)
    baseline_mobile = Android(mobile_sections, mobile_symbols)
    reference, source = Arm(sections, symbols, functions, True), Arm(sections, symbols, functions)
    host, mobile = Windows(native_path), Android(mobile_sections, entrypoints(mobile_symbols))
    records, digest = [], hashlib.sha256()
    frozen_report = json.loads((ROOT/'evidence/lanes/squirrel-lookup020/execution.json').read_text())
    frozen_observations = {(row['variant'],row['cleanup']):row['orderedObservationsSha256']
        for row in frozen_report['casesByProfile']}
    cohorts = [('immutable020', range(66), baseline_reference, baseline_source, baseline_host, baseline_mobile),
        ('successor023', list(range(22)) + list(range(64,160)), reference, source, host, mobile),
        ('actual-native022', range(200,207), reference, source, host, mobile)]
    for name, variants, original, authored, windows_host, android_model in cohorts:
        for cleanup in [0,1]:
            for variant in variants:
                expected, original_heap = original.execute(variant, cleanup)
                actual, authored_heap = authored.execute(variant, cleanup)
                native = windows_host.execute(variant, cleanup)
                a64 = android_model.execute(variant, cleanup)
                if actual != expected or original_heap != authored_heap or native != expected or a64 != expected:
                    raise ValueError('023 original/source/native replay differs: ' + str((name,variant,cleanup)))
                packed = struct.pack('<' + 'I' * len(expected), *expected)
                if name == 'immutable020' and hashlib.sha256(packed).hexdigest() != frozen_observations[variant,cleanup]:
                    raise ValueError('023 changed a frozen020 corpus observation')
                digest.update(packed)
                records.append({'cohort': name, 'variant': variant, 'cleanup': cleanup,
                    'orderedObservationSha256': hashlib.sha256(packed).hexdigest(),
                    'wholeArmArenaSha256': hashlib.sha256(original_heap).hexdigest(),
                    'originalSourceArmWholeArenaEqual': True, 'actualWindowsEqual': True,
                    'actualAarch64ObjectModelEqual': True})
            print(json.dumps({'cohort': name, 'cleanup': cleanup, 'cases': len(variants)}), flush=True)
    observed = baseline_reference.coverage | reference.coverage
    coverage = []
    for row in claim['functions']:
        addresses = set(range(row['entry'], row['endExclusive'], 4))
        visited = addresses & observed
        coverage.append({'role': row['role'], 'entry': row['entry'], 'instructions': len(addresses),
            'visited': len(visited), 'unvisited': sorted(addresses - visited)})
    provider = set(range(0x1cdaec,0x1cdb18,4))
    if not provider <= reference.coverage: raise ValueError('023 instance provider missed an instruction')
    if not {0x17ffac,0x196f6c,0x1b33dc} <= reference.coverage:
        raise ValueError('023 genuine original native dispatch path not executed')
    if not {symbols[name] for name in ['sq_vm_call022','sq_vm_call_native022','sq_vm_array_native022']} <= source.coverage:
        raise ValueError('023 genuine authored native dispatch path not executed')
    if next(row for row in coverage if row['entry']==0x18d4fc)['visited'] != 86:
        raise ValueError('023 metamethod controller did not cover all success/failure cleanup instructions')
    tests = "import sys,unittest; s=unittest.defaultTestLoader.discover(" + repr(str(ROOT/'tests')) + ",pattern='test_squirrel_lookup023.py'); assert s.countTestCases()==26; r=unittest.TextTestRunner(stream=sys.stdout,verbosity=2).run(s); sys.exit(not r.wasSuccessful() or bool(r.skipped))"
    command([sys.executable,'-c',tests], WORK / 'replay/tests.json')
    semantic = controls()
    check(consumed + source_inputs)
    frozen_validate()
    call_sources()
    report = {'schemaVersion': 1, 'status': 'qualified-bounded-lookup-finite-float-and-real-native-invocation-component',
        'frozen020Modified': False, 'claim': pin(EVIDENCE/'claim.json'),
        'normalMemberDescriptorWitness': pin(EVIDENCE/'member-descriptor-witness.json'),
        'frozenPrerequisites': prerequisites, 'quotedHeaders': consumed, 'sourceInputs': source_inputs,
        'cases': len(records), 'comparisonsAgainstOriginal': len(records)*3,
        'immutable020CasesReplayed': 132, 'new023Cases': 250, 'actualNative022Cases':14, 'casesByProfile': records,
        'immutable020ObservationsEqualFrozenReceipt': True,
        'orderedDigest': digest.hexdigest(), 'completeArmArenaBytesCompared': 0x40000,
        'arenaCapturedBeforeSnapshotWrites': True, 'coverageOfUnchanged020': coverage,
        'armAddressNormalization':'exact identities of three copied lifetime callbacks, one table-method bridge and the declared frozen022 native-array callable; data-only comparison tokens, no executing-byte changes',
        'sourceInstructionRegisterOrObjectPatching':False,
        'newInstanceProvider': {'entry': 0x1cdaec, 'bytes':44, 'poolBytes':0, 'visitedInstructions':11},
        'typeNameEightBytePrefixStandaloneFunction': False,
        'finiteFloatReference': pin(EVIDENCE/'float-host-reference.json'),
        'actualOriginalSdkReference': pin(EVIDENCE/'reference-sdk-exchange.json'),
        'actualOriginalLocaleInitializer': pin(EVIDENCE/'reference-locale-precondition.json'),
        'windowsExecuted': True, 'aarch64ObjectModelExecuted': True,
        'androidReturnedApis': baseline_mobile.calls + mobile.calls,
        'androidOperatingSystemOrPhysicalDeviceExecuted': False,
        'newNativeTestsPassed': 26, 'testsLog': pin(WORK/'replay/tests.json'),
        'normallyReturningControls': semantic, 'armBuild': build, 'windowsLibrary': pin(native_path),
        'androidBuild': mobile_build, 'sourceOriginalImageCodeDataOrSdkServicesMapped': False,
        'cachedOriginalAnswersFedToAuthoredCode': False,
        'generalPrintfArbitraryDoubleNonfiniteOrOtherLocalesQualified': False,
        'inherited019FloatingPointIocStatusLimitation':True,
        'floatingIndexAndNativeLengthDomain':'finite values representable as signed32; valid bounded array lengths',
        'mandatoryFpscrControlsAndSavedStateChecked':True,
        'cumulativeFloatingExceptionStatusUniversalEqualityClaimed':False,
        'normalDescriptorDomainExclusiveWriterWholeVmProof': False,
        'classInstanceFactoryLifetimeOrUninvokedVtableSlotsQualified': False,
        'boundedActualNativeCallCompositionQualified': True,
        'fullScriptExecuteClassFactoryTypeErrorOrWholeVmQualified': False,
        'nativeInvoke022Composition':pin(CALL_READY),
        'nativeProviderManifest':pin(ROOT/'evidence/lanes/squirrel-vm-call022/providers.json'),
        'nativeConsumedLiteralScope':pin(EVIDENCE/'native-consumed-literals.json'),
        'nativeProductionExclusions':['lookup_call_adapter.c replaced by exact fixture bridge','literal_format.c replaced by bounded023 string formatter','all022 fixtures and experimental018 parent adapter'],
        'originalNativeEndpointOverwritten':False,
        'nativeUnsupportedExecuteClassTypeErrorOrReallocationMarkersReached':False,
        'nativeCallPath':['198578','197b18','202cf4 or 1cdaec','18d4fc','17ffac','196f6c','1b33dc','665a44 and opaque012 lifetime'],
        'sameFinalArenaNativeFailureOrderingControlRequired':True,
        'remaining': '18 generic class descriptor reference instructions require the declared normal writer/copy invariant; four null-string assertion instructions remain excluded; full Execute/class/instance creation/lifetime/type errors/GC remain separate',
        'wholeVmGameGcAllocatorOrDeviceClaimed': False,
        'sourceOrInventoryCreditGranted': 0, 'originalPayloadsPublished': False,
        'unicornWrapper': unicorn.__version__, 'unicornNative': list(unicorn.uc_version()),
        'verifierCoreOrigin': pin(ROOT/'toolscripts/squirrel_lookup020_oracle.py'),
        'verifierRangeIndexPreservesExactUnionAndRejectsAccessOutsideUnion': True,
        'reproduction': ['tools/python/Scripts/python.exe','toolscripts/squirrel_lookup023.py']}
    save(EVIDENCE/'execution.json', report)
    files=sorted(SOURCE.glob('*'))+sorted((ROOT/'toolscripts').glob('squirrel_lookup023*.py'))
    files += [ROOT/'tests/test_squirrel_lookup023.py'] + sorted(EVIDENCE.glob('*.json'))
    files=[path for path in files if path.name not in ('ready.json','execution-candidate.json') and path.is_file()]
    save(EVIDENCE/'ready.json',{'schemaVersion':1,'status':'frozen-ready-for-independent-review',
        'files':[pin(path) for path in files],'cases':len(records),'comparisonsAgainstOriginal':len(records)*3,
        'requestedExactBytes':0,'acceptedSourceCreditGranted':0,'inventoryAdmissionGranted':0,
        'newOriginalInstanceProviderInstructionBytes':44,'finiteFloatServiceSdkCodeCredit':0,
        'wholeVmGameAllocatorGcOrDeviceClaimed':False,'originalPayloadsPublished':False,
        'canonicalMappingAndAdmissionOwnedByCoordinator':True})
    print(json.dumps({'cases': len(records), 'comparisons': len(records)*3,
        'status': report['status'], 'receipt': pin(EVIDENCE/'execution.json'),'ready':pin(EVIDENCE/'ready.json')}))
    return report


if __name__ == '__main__':
    run()
