import hashlib
import json
from pathlib import Path
import re
import sys

ROOT = Path.cwd().resolve()
sys.path.insert(0, str(ROOT / 'toolscripts'))
from replay_packet_compare import PacketComparison


def read(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data),
                sha256=hashlib.sha256(data).hexdigest())


class Comparison(PacketComparison):
    def text(self, value, root):
        value = super().text(value, root)
        for prefix, label in [('evidence/lanes/native-sampled-key053/stage-v1', '<OUTPUT>'),
                              ('work/replay053/proof', '<OUTPUT>'),
                              ('work/sampled-key053/sealing-v1', '<RUN>'),
                              ('work/replay053/run', '<RUN>')]:
            value = value.replace(prefix, label).replace(prefix.replace('/', chr(92)), label)
        return value


raw_path = ROOT / 'evidence/verification/sampled-key053-isolated-91af291.json'
raw = read(raw_path)
assert raw['status'] == 'passed'
assert raw['sourceRevision'] == '91af291cfd782d7b927f468cc307b836d21dd32a'
assert raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
assert all(row['returncode'] == 0 for row in raw['steps'])
fresh = Path(raw['replayRoot']).resolve()
assert fresh == ROOT / 'work/clean-replay/sampled-key053-91af291'
base = ROOT / 'evidence/lanes/native-sampled-key053/stage-v1'
other = fresh / 'work/replay053/proof'
primary, independent = read(base / 'packet.json'), read(other / 'packet.json')
assert pin(base / 'packet.json')['sha256'] == '26e525a1030bc2d0ba378fdddbea71e9bd58a1fc6c5ba6b6d5616d650e48905a'
comparison = Comparison(ROOT, fresh)
comparison.compare(primary, independent, 'packet')
comparison.compare(read(base / 'verification.json'), read(other / 'verification.json'), 'verification')
assert len(comparison.variants) == 15
assert sum(row['kind'] == 'coff-timestamp-only' for row in comparison.variants) == 13
assert all(row['kind'] in ['coff-timestamp-only', 'recursively-compared-json',
                          'verified-root-output-paths-or-unittest-timing-text'] for row in comparison.variants)
for row in read(base.parent / 'review/coordinator-handoff-manifest.json')['files']:
    assert pin(ROOT / row['path']) == row
    assert hashlib.sha256((fresh / row['path']).read_bytes()).hexdigest() == row['sha256']
assert primary['candidateFunctions'] == 9 and primary['candidateInstructionBytes'] == 11000
assert primary['segmentCases'] == 4608 and primary['floorBitPatterns'] == 3072
assert primary['actualWindowsExecution'] and primary['highAarch64Execution']
for key in ['windowsCalleeSavedRegistersDirectlyObserved', 'sourceMapsOriginalImageOrSdk',
            'originalRegisterReturnContractQualified', 'selectorAndGameReachabilityQualified',
            'animationIdentityQualified', 'floatingPointStatusEquivalenceClaimed',
            'arbitraryUnsafeInputEquivalenceClaimed', 'wholeMemoryEquivalenceClaimed',
            'universalEquivalenceClaimed', 'completeNativeGameQualified', 'androidOsOrDeviceExecuted']:
    assert primary[key] is False
cases = read(ROOT / primary['caseRows']['path'])
assert cases['cases'] == len(cases['rows']) == 4608
for row in cases['rows']:
    assert row['originalReturnedNormally'] and row['originalCalleeSavedGuardsPreserved']
    assert set(row['sources']) == {'windows', 'arm', 'a64'}
    for profile, value in row['sources'].items():
        assert value['returnedNormally'] and value['callerGuardsPreserved']
        assert value['result'] == row['original']
        if profile == 'windows':
            assert value['nativePointersAbove32Bits'] and value['inputAndKeyBytesPreserved'] and value['paddingPreserved']
        else:
            assert value['sourceOnlyExecution'] and not value['mapsOriginalImageOrSdk']
floor = read(ROOT / primary['floorRows']['path'])
assert floor['patterns'] == len(floor['rows']) == 3072
assert not floor['floatingPointStatusEquivalenceClaimed']
for row in floor['rows']:
    assert set(row['sourceResultBits']) == {'windows', 'arm', 'a64'}
    assert all(value == row['originalResultBits'] for value in row['sourceResultBits'].values())
controls = read(ROOT / primary['returningControls']['path'])
assert controls['controlCount'] == len(controls['rows']) == 7 and controls['sourcePlatformExecutions'] == 21
for row in controls['rows']:
    assert len(row['profiles']) == 3
    for profile in row['profiles']:
        assert profile['returnedNormally'] and profile['callerGuardsPreserved']
        assert profile['semanticMismatchDetected'] and profile['sourceOnlyExecution']
pcs = 0
for row in primary['functions']:
    expected = {pc for part in row['instructionRanges'] for pc in range(part['start'], part['endExclusive'], 4)}
    assert set(row['observedInstructionAddresses']) == expected and not row['unobservedInstructionAddresses']
    pcs += len(expected)
assert pcs == 2750
tests = primary['testReceipt']['actualWindowsTestsPassed']
assert tests == 19
for step in raw['steps']:
    if step['name'].endswith('-tests'):
        log = (fresh / step['log']).read_text(encoding='utf-8')
        found = re.search(r'Ran (\d+) tests', log)
        assert found and log.strip().endswith('OK')
        tests += int(found[1])
assert tests == 113, tests
compiled = read(fresh / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
assert compiled['unitCount'] == 429 and len(compiled['results']) == 1217
assert all(row['status'] == 'compiled' for row in compiled['results'])
cleanup = read(fresh / 'intake-cleanup.json')
assert cleanup['status'] == 'removed-verified-replay-input-copies'
assert sum(row['bytes'] for row in cleanup['copiedInputs']) == 1607322944
receipt = dict(schemaVersion=1, status='qualified-independent-sampled-key053-bounded-records-and-floor',
               sourceRevision=raw['sourceRevision'], rawReplay=pin(raw_path),
               primaryPacket=pin(base / 'packet.json'), independentPacket=pin(other / 'packet.json'),
               recursiveComparisonPassed=True, variants=comparison.variants,
               varianceLimit='Only verified four-byte PE/COFF timestamps, declared root/output paths and test timing; no instruction/section/relocation or semantic differences.',
               handoffManifest=pin(base.parent / 'review/coordinator-handoff-manifest.json'),
               segmentCases=4608, floorBitPatterns=3072, observedOriginalInstructionPcs=pcs,
               returningControls=7, returningControlExecutions=21, tests=tests,
               publicUnits=429, publicCompilations=1217,
               candidateFunctions=9, instructionFootprintBytes=11000,
               originalReturnRegistersOrFpuExceptionStateQualified=False,
               selectorGameAnimationUnsafeMemoryOrUniversalEquivalenceClaimed=False,
               androidOsOrDeviceExecuted=False, sourceAdmissionGranted=False,
               exactMatchingCreditGranted=0, producer=pin(Path(__file__).resolve()))
output = ROOT / 'evidence/verification/sampled-key053-coordinator-91af291.json'
output.write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(passed=True, tests=tests, originalPcs=pcs, variants=len(comparison.variants))))
