from pathlib import Path
import hashlib
import json
import struct
import re
import sys

ROOT = Path.cwd().resolve()
sys.path.insert(0, str(ROOT / 'toolscripts'))
from replay_packet_compare import PacketComparison

FRESH = ROOT / 'work/clean-replay/state055-49799dd'
HISTORICAL = {'work/native-state055/ready-leaf.json', 'work/native-state055/state055.c',
              'work/native-state055/state055.h', 'work/native-state055/caller-v1/ready.json'}
HISTORICAL.update('work/native-state055/caller-v1/' + name for name in
                  ['selector055.c', 'selector055.h', 'address055.c', 'address055.h'])


class Comparison(PacketComparison):
    def compare(self, a, b, context=''):
        if isinstance(a, dict) and {'path', 'sha256', 'bytes'} <= a.keys():
            if a['path'] in HISTORICAL:
                assert a == b, (context, 'historical-pin-changed')
                data = (ROOT / a['path']).read_bytes()
                assert len(data) == a['bytes'] and hashlib.sha256(data).hexdigest() == a['sha256']
                assert not (FRESH / a['path']).exists()
                return
            if a['path'].endswith('.o'):
                first, second = (ROOT / a['path']).read_bytes(), (FRESH / b['path']).read_bytes()
                if first != second and struct.unpack_from('<H', first)[0] == 0x8664:
                    assert len(first) == len(second) == a['bytes'] == b['bytes']
                    assert hashlib.sha256(first).hexdigest() == a['sha256']
                    assert hashlib.sha256(second).hexdigest() == b['sha256']
                    assert a.keys() == b.keys() and a['path'] == b['path']
                    assert {i for i, (x, y) in enumerate(zip(first, second)) if x != y} <= set(range(4, 8))
                    self.variants.append(dict(path=a['path'], kind='coff-object-timestamp-only',
                                              primarySha256=a['sha256'], independentSha256=b['sha256']))
                    for key in a.keys() - {'path', 'sha256', 'bytes'}:
                        self.compare(a[key], b[key], context + '/' + key)
                    return
        return super().compare(a, b, context)


def read(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


raw_path = ROOT / 'evidence/verification/state055-isolated-49799dd.json'
raw = read(raw_path)
assert raw['status'] == 'passed' and raw['sourceRevision'] == '49799dd2d7f22c8dfcd4b7501b3b1b4f2057d1c4'
assert raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
assert Path(raw['replayRoot']).resolve() == FRESH
assert all(row['returncode'] == 0 for row in raw['steps'])
comparison = Comparison(ROOT, FRESH)
ready_pins = []
expected = ['db59edb0e2c398e4f784e9d4373a142e82fd056cfc705dc2f0083a8d6a1c5273',
            'af9beb722fe132c35fc6ff949dd526abd7508be420063bb2cad7f0fdf5c6c014']
for group, sha in zip(['leaf-v1', 'caller-public-v1'], expected):
    path = Path('evidence/lanes/native-state055') / group / 'ready.json'
    assert pin(ROOT / path)['sha256'] == sha
    comparison.compare(read(ROOT / path), read(FRESH / path), group)
    ready_pins.append(dict(primary=pin(ROOT / path), independent=pin(FRESH / path)))
assert len(comparison.variants) == 48
assert sum(row['kind'] == 'coff-object-timestamp-only' for row in comparison.variants) == 2
assert all(row['kind'] in ['coff-object-timestamp-only', 'recursively-compared-json',
                          'verified-root-output-paths-or-unittest-timing-text'] for row in comparison.variants)
base = ROOT / 'evidence/lanes/native-state055'
leaf = read(base / 'leaf-v1/execution.json')
assert leaf['caseSets'] == len(leaf['cases']) == 83 and leaf['targetObservations'] == 332
assert leaf['allOriginalSourceFullDataArenasEqual'] and not leaf['originalModuleInSourceExecution']
for row in leaf['cases']:
    assert row['original']['returned'] and row['original']['modelArenaEqual']
    for target in ['authoredArm', 'actualWindows', 'highAarch64']:
        assert row[target]['actualFunctionReturned'] and row[target]['independentModelPassed']
invariant = read(base / 'leaf-v1/invariant.json')
assert invariant['admittedCountMaximum'] == 4096 and len(invariant['unvisitedInstructionAddresses']) == 7
selector = read(base / 'caller-public-v1/selector-execution.json')
address = read(base / 'caller-public-v1/address-execution.json')
assert selector['caseSets'] == len(selector['cases']) == 424 and selector['targetObservations'] == 1696
assert selector['allOriginalSourceFullInitializedDataArenasEqual'] and selector['originalCallerInstructionPcsVisited'] == 986
assert address['caseSets'] == len(address['cases']) == 156 and address['targetObservations'] == 624
assert address['originalInstructionPcsVisited'] == 109 and address['mapHelperLengthDomain'] == [1]
for report in [selector, address]:
    assert report['actualWindows'] and report['highAddressAarch64CpuModel']
    assert not report['originalExecutableInSourceExecution'] and not report['productionGlobalInitializationQualified']
    for row in report['cases']:
        assert row['original']['actualOriginalReturned']
        for target in ['authoredArm', 'actualWindows', 'highAarch64']:
            assert row[target]['actualFunctionReturned'] and not row[target]['nativePointerTruncated']
            assert row[target]['returned'] == row['original']['returned']
leaf_controls = read(base / 'leaf-v1/controls.json')
assert leaf_controls['returningControls'] == 5 and leaf_controls['platformExecutions'] == 15
assert all(row['allActuallyReturned'] and row['rejectedByIndependentStateModel'] for row in leaf_controls['rows'])
selector_controls = read(base / 'caller-public-v1/selector-controls.json')
address_controls = read(base / 'caller-public-v1/address-controls.json')
assert selector_controls['normallyReturningControls'] == 6 and selector_controls['platformExecutions'] == 18
assert address_controls['normallyReturningControls'] == 4 and address_controls['platformExecutions'] == 12
for row in selector_controls['cases']:
    assert len(row['observations']) == 3
    assert all(v['returnedNormally'] and v['rejectedByIndependentModel'] for v in row['observations'])
assert all(row['allReturnedNormally'] and row['allRejectedByIndependentModel'] for row in address_controls['cases'])
tests = 0
for step in raw['steps']:
    if step['name'].endswith('-tests'):
        log = (FRESH / step['log']).read_text(encoding='utf-8')
        found = re.search(r'Ran (\d+) tests', log)
        assert found and log.strip().endswith('OK')
        tests += int(found[1])
assert tests == 114, tests
compiled = read(FRESH / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
assert compiled['unitCount'] == 433 and len(compiled['results']) == 1229
assert all(row['status'] == 'compiled' for row in compiled['results'])
receipt = dict(schemaVersion=1, status='qualified-independent-state055-bounded-leaf-selector-address-family',
    sourceRevision=raw['sourceRevision'], rawReplay=pin(raw_path), ready=ready_pins,
    recursiveSemanticComparisonPassed=True, variants=comparison.variants,
    historicalProvenancePins=sorted(HISTORICAL), historicalReferencesNotIndependentBuildInputs=True,
    runnerTests=114, producerInnerTests=20, primaryCaseSets=663, primaryFourTargetObservations=2652,
    ownSourceSnapshotReplayAlsoPassed=True, returningControls=15, returningControlExecutions=45,
    originalInstructionPcsVisited=dict(leaf=49, selector=986, addressHelpers=109),
    leafDomainUnreachablePcs=7, helperMapLengthDomain=1, nativeAddressTokensAreData=True,
    windowsCalleeSavedRegistersDirectlyObserved=False, publicUnits=433, publicCompilations=1229,
    candidateFunctions=13, candidateInstructionBytes=4604, sourceAdmissionGranted=False,
    exactMatchingCreditGranted=0, productionGlobalInitRendererGameHardwareFpuStatusOrUniversalClaimed=False,
    producer=pin(Path(__file__).resolve()))
output = ROOT / 'evidence/verification/state055-coordinator-49799dd.json'
output.write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(passed=True, runnerTests=114, producerTests=20, variants=len(comparison.variants))))
