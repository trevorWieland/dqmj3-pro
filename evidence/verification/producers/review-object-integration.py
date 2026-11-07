import copy
import hashlib
import json
from pathlib import Path
import shutil
import sys


ROOT = Path.cwd()
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_table_lookup019_model as model


def read(path):
    return json.loads(Path(path).read_text())


def pin(path):
    path = Path(path)
    data = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'sha256': hashlib.sha256(data).hexdigest(), 'bytes': len(data)}


def normalize_native(packet):
    result = copy.deepcopy(packet)
    observations = result['native']['observations']
    assert len(observations) == 120
    normalized = []
    for case, row in zip(model.cases(), observations):
        parsed = model.parse(row['words'])
        semantic = model.validate(row['words'], case)
        normalized.append({'case': case, 'semantic': semantic, 'events': parsed['events'],
            'operations': parsed['operations'], 'strings': parsed['strings'], 'counters': parsed['counters'],
            'headerExceptNativeFreeIndex': parsed['header'][:14] + parsed['header'][15:]})
    result['native']['observations'] = normalized
    result['native'].pop('commands')
    return result


bundle_path = ROOT / 'evidence/verification/object-integration-isolated-60a1c0c.json'
bundle = read(bundle_path)
assert bundle['status'] == 'passed' and all(row['returncode'] == 0 for row in bundle['steps'])
fresh = Path(bundle['replayRoot'])
compiled = read(fresh / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
assert compiled['unitCount'] == 199 and len(compiled['results']) == 553
assert all(row['status'] == 'compiled' for row in compiled['results'])
driver = ROOT / 'evidence/verification/producers/object-integration-60a1c0c-replay.py'
shutil.copyfile(ROOT / 'work/replay-object-integration.py', driver)
assert pin(driver)['sha256'] == bundle['replayDriverSha256']
script_path = ROOT / 'evidence/lanes/squirrel-script-create018/execution.json'
a, b = read(script_path), read(fresh / script_path.relative_to(ROOT))
for packet in (a, b):
    packet['nativeTests'].pop('log')
assert a == b and a['cases'] == 84 and a['comparisonsAgainstOriginal'] == 252
assert a['originalControllerInstructionAddressesVisited'] == 259
assert a['originalControllerInstructionAddressesTotal'] == 276
assert len(a['unvisitedOriginalControllerInstructionAddresses']) == 17
assert not a['completeVmLookupErrorProviderOrSourceGraphQualified']
assert not a['sourceModeOriginalImageCodeDataOrServicesMapped']
primary_path = ROOT / 'work/squirrel-table-lookup019/qualification-120/report.json'
assert pin(primary_path)['sha256'] == 'c12cbce21780d6a68cf7a8caba8eec5299485ab6736191107ee55d63b0c51bc3'
secondary_path = fresh / 'work/squirrel-table-lookup019/committed-root/report.json'
x, y = read(primary_path), read(secondary_path)
assert normalize_native(x) == normalize_native(y)
assert x['originalReturns'] == x['sourceReturns'] == x['nativeReturns'] == x['androidModelReturns'] == 120
assert x['originalGetInstructionsVisited'] == x['originalGetInstructions'] == 72
assert not x['fpscrExceptionStatusUniversallyEqual'] and not x['sourceOriginalModuleMapped']
assert not x['nativeOriginalBucketsCopied'] and not x['vtableNormalization']
assert x['mandatoryFloatingControlAndCalleeSavedVfpAbiPreserved']
assert x['completeOwnedArmHeapCompared'] and x['independentNativeTopologyValidated']
assert not x['fullVtableBeyondLifetimeSlotsQualified'] and not x['fullBroadLookup198578Qualified']
legacy = read(fresh / 'evidence/verification/legacy006-get-name-transition.json')
assert all(legacy['checks'].values()) and len(legacy['androidObjects']) == 40
receipt = {'schemaVersion': 1, 'status': 'qualified-corrected-object-integration-bundle',
    'sourceRevision': bundle['sourceRevision'], 'completeCorrectedBundleReplayPassed': True,
    'rawReplay': pin(bundle_path), 'executedDriver': pin(driver), 'tests': 85, 'publicUnits': 199,
    'publicCompilations': 553, 'legacy006VerificationBinariesAndWindowsObservationsIdentical': True,
    'script018': {'primary': pin(script_path), 'independent': pin(fresh / script_path.relative_to(ROOT)),
        'cases': 84, 'comparisonsAgainstOriginal': 252, 'allPacketFieldsIdenticalExceptNativeTestLog': True,
        'instructionsVisited': 259, 'instructions': 276, 'gapsExplicit': 17,
        'completeVmProviderGraphQualified': False, 'functionalOrMatchingCreditGranted': 0},
    'table019': {'privatePrimary': pin(primary_path), 'privateIndependent': pin(secondary_path),
        'cases': 120, 'comparisonsAgainstOriginal': 360, 'getInstructionsVisited': 72, 'getInstructions': 72,
        'allArmAndA64CasesFloatingEvidenceInputsControlsAndBinaryHashesIdentical': True,
        'nativeLogicalMapOperationsOrderedEventsStringsCountersAndHeaderExceptFreeIndexIdentical': True,
        'nativeRawPointersHashesTopologyAndFreeIndexValidatedAgainstEachRunsOwnNativeAddresses': True,
        'nativeRawWordsNotClaimedIdenticalAcrossRuns': True, 'fpscrExceptionStatusUniversallyEqual': False,
        'fullVtableOrBroadLookupQualified': False, 'newPhysicalInventoryCredit': 0},
    'priorMissingHeaderScopeAndManifestAndFixtureListFailuresRetained': True,
    'wholeVmGameOrAndroidDeviceClaimed': False, 'sourceAdmissionGranted': False,
    'producer': pin(Path(__file__))}
(ROOT / 'evidence/verification/object-integration-coordinator-60a1c0c.json').write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
print(json.dumps({'tests': 85, 'publicCompilations': 553, 'scriptCases': 84, 'tableCases': 120}))
