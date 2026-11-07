from pathlib import Path
import copy
import hashlib
import json
import struct
import sys

ROOT = Path.cwd().resolve()
FRESH = ROOT / 'work/clean-replay/state-deps055-63bceb3'
sys.path.insert(0, str(ROOT / 'toolscripts'))
from replay_packet_compare import PacketComparison

HISTORICAL = {'work/native-state055/family-v2/ready.json', 'work/native-state055/resource-v3/ready.json',
              'work/native-state055/family-v2/helpers055.c', 'work/native-state055/family-v2/helpers055.h',
              'work/native-state055/resource-v3/resource055.c', 'work/native-state055/resource-v3/resource055.h',
              'work/native-state055/resource-v3/fixture055.c'}
HISTORICAL.update({'work/native-state055/family-v2/build/arm.elf',
                   'work/native-state055/family-v2/build/a64.elf',
                   'work/native-state055/family-v2/build/helpers055.dll',
                   'work/native-state055/resource-v3/build/arm.elf',
                   'work/native-state055/resource-v3/build/a64.elf',
                   'work/native-state055/resource-v3/build/resource055.dll'})


def windows_view(value):
    result = copy.deepcopy(value)
    if {'actualDeclaredPairAddress', 'actualLibraryLoadBase', 'actualDeclaredPairRva'} <= result.keys():
        assert result['actualWindows'] and result['declaredPointerBytes'] == 8
        address, base, rva = (result[key] for key in ['actualDeclaredPairAddress', 'actualLibraryLoadBase', 'actualDeclaredPairRva'])
        assert address > 0xffffffff and base > 0xffffffff and address - base == rva
        if result['returnKind'] == 'pair-pointer':
            assert result['actualReturnObservationExpected'] and result['returned'] == address
            result['returned'] = dict(declaredObject='state_pair055', rva=rva)
        result['actualDeclaredPairAddress'] = dict(declaredObject='state_pair055', rva=rva)
        result['actualLibraryLoadBase'] = '<verified-load-base>'
    if {'primaryRawReturn', 'snapshotRawReturn', 'primaryDeclaredPair', 'snapshotDeclaredPair',
        'primaryModuleBase', 'snapshotModuleBase', 'stablePairRva'} <= result.keys():
        rva = result['stablePairRva']
        for prefix, returned in [('primary', 'primaryRawReturn'), ('snapshot', 'snapshotRawReturn')]:
            assert result[returned] == result[prefix + 'DeclaredPair']
            assert result[prefix + 'DeclaredPair'] - result[prefix + 'ModuleBase'] == rva
            result[returned] = dict(declaredObject='state_pair055', rva=rva)
            result[prefix + 'DeclaredPair'] = dict(declaredObject='state_pair055', rva=rva)
            result[prefix + 'ModuleBase'] = '<verified-load-base>'
    return result


class Comparison(PacketComparison):
    def compare(self, a, b, context=''):
        if isinstance(a, dict):
            if {'path', 'sha256', 'bytes'} <= a.keys():
                if a['path'] in HISTORICAL:
                    assert a == b
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
                        self.variants.append(dict(path=a['path'], kind='coff-object-timestamp-only'))
                        for key in a.keys() - {'path', 'sha256', 'bytes'}:
                            self.compare(a[key], b[key], context + '/' + key)
                        return
            first, second = windows_view(a), windows_view(b)
            if first != a or second != b:
                assert first.keys() == second.keys()
                for key in first:
                    self.compare(first[key], second[key], context + '/' + key)
                self.variants.append(dict(context=context, kind='post-execution-verified-declared-pair-rva'))
                return
        return super().compare(a, b, context)


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


if __name__ == '__main__':
    import collections
    import re
    raw_path = ROOT / 'evidence/verification/state-deps055-isolated-63bceb3.json'
    raw = read(raw_path)
    assert raw['status'] == 'passed' and raw['sourceRevision'].startswith('63bceb3')
    assert all(step['returncode'] == 0 for step in raw['steps'])
    ready_path = Path('evidence/lanes/native-state055/controller-deps-public-v1/ready.json')
    ready = read(ROOT / ready_path)
    assert ready['productionInstructionBytes'] == 532 and ready['excludedLiteralPoolBytes'] == 16
    assert ready['testsPassed'] == 19 and ready['copiedSourceArtifactsIdentical'] == 6
    comparison = Comparison(ROOT, FRESH)
    comparison.compare(ready, read(FRESH / ready_path), 'state-deps055')
    historical = []
    for relative in sorted(HISTORICAL):
        assert not (FRESH / relative).exists()
        historical.append(pin(ROOT / relative))
    for pair in ready['privateToPublicArtifactIdentity']:
        assert pair['byteIdentical'] and pair['privateFrozen']['sha256'] == pair['publicRebuilt']['sha256']
        assert hashlib.sha256((FRESH / pair['publicRebuilt']['path']).read_bytes()).hexdigest() == pair['privateFrozen']['sha256']
    base = ROOT / 'work/native-state055-deps-public/v1'
    writers, resource = read(base / 'writers/execution.json'), read(base / 'resource/execution.json')
    assert (writers['caseSets'], writers['targetObservations']) == (152, 608)
    assert (resource['caseSets'], resource['targetObservations']) == (51, 204)
    platforms = ['authoredArm', 'actualWindows', 'highAarch64']
    for case in writers['cases']:
        assert case['original']['actualOriginalReturned'] and case['original']['independentModelPassed']
        for platform in platforms:
            row = case[platform]
            assert row['actualFunctionReturned'] and row['independentModelPassed']
            assert row['actualReturnObservationExpected'] and row['actualPairExpected'] and row['actualWholePlatformArenaExpected']
            assert not row['nativePointersTruncated']
    for case in resource['cases']:
        assert case['original']['actualGetterReturned'] and case['original']['fullTargetInputArenaUnchanged']
        for platform in platforms:
            row = case[platform]
            assert row['actualFunctionReturned'] and row['actualResourcePointerMatched'] and row['fullPlatformInputArenaUnchanged']
            assert not row['nativePointerTruncated']
    writer_controls, resource_controls = read(base / 'writers/controls.json'), read(base / 'resource/controls.json')
    assert (writer_controls['normallyReturningControls'], writer_controls['platformExecutions']) == (5, 15)
    for case in writer_controls['cases']:
        assert all(case[p]['actualFunctionReturned'] and not case[p]['independentModelPassed'] for p in platforms)
    assert (resource_controls['normallyReturningControls'], resource_controls['platformExecutions'],
            resource_controls['rejectedObservations'], resource_controls['expectedArmIdentityObservations']) == (3, 9, 8, 1)
    assert all(case['allReturnedNormally'] for case in resource_controls['cases'])
    sample = next(case['actualWindows'] for case in writers['cases'] if case['actualWindows']['returnKind'] == 'pair-pointer')
    shifted = copy.deepcopy(sample)
    for key in ['actualDeclaredPairAddress', 'actualLibraryLoadBase', 'returned']:
        shifted[key] += 0x100000
    assert windows_view(sample) == windows_view(shifted)
    controls = []
    for name in ['wrong-return-address', 'wrong-rva', 'wrong-arena-hash', 'wrong-pair-offset']:
        wrong = copy.deepcopy(sample)
        if name == 'wrong-return-address': wrong['returned'] += 8
        elif name == 'wrong-rva': wrong['actualDeclaredPairRva'] += 8
        elif name == 'wrong-arena-hash': wrong['fullPlatformDataArenaSha256'] = '0' * 64
        else: wrong['pairOffsets'][0] += 4
        try:
            Comparison(ROOT, FRESH).compare(sample, wrong, name)
        except AssertionError:
            controls.append(dict(case=name, rejected=True))
        else:
            raise AssertionError('Overbroad pointer comparison: ' + name)
    runner_tests = 0
    for step in raw['steps']:
        if step['name'].endswith('-tests'):
            text = (FRESH / step['log']).read_text(encoding='utf-8')
            counts = re.findall(r'Ran (\d+) tests? in ', text)
            assert len(counts) == 1 and '\nOK' in text
            runner_tests += int(counts[0])
    assert runner_tests == 122
    result = dict(schemaVersion=1, status='independently-replayed-controller-dependencies055',
        sourceRevision=raw['sourceRevision'], isolatedReplay=pin(raw_path), publicReady=pin(ROOT / ready_path),
        recursiveSemanticComparisonPassed=True, runnerTests=runner_tests, producerInnerTests=19,
        candidateFunctions=3, candidateInstructionBytes=532, excludedLiteralPoolBytes=16,
        writerAndLegacyTokenCaseSets=152, writerAndLegacyTokenObservations=608,
        legacyTokenLookupExcludedFromProductionCandidates=True, actualResourcePointerCaseSets=51,
        actualResourcePointerObservations=204, returningControls=8, controlExecutions=24,
        rejectedControlObservations=23, expectedArm32PointerTruncationIdentity=1,
        historicalPrimaryPinsVerifiedAndAbsentFromFresh=historical, linkedArtifactsByteIdentical=6,
        comparisonVariants=comparison.variants,
        comparisonVariantKinds=dict(collections.Counter(x['kind'] for x in comparison.variants)),
        comparisonVisitsMayRepeatTheSamePinnedReport=True, comparisonControls=controls,
        rawAddressesAndReportsRetained=True, executedMemoryOrRegistersModifiedForComparison=False,
        windowsOnlyPostExecutionDeclaredPairRvaComparison=True, allOtherStateAndPointerFieldsCompared=True,
        productionResourceTypeOpaque=True, fullResourceOwnerOrGlobalInitializationQualified=False,
        fullControllerGameOrPhysicalDeviceClaimed=False, exactMatchingOrOverallSourceCreditGranted=0,
        producer=pin(Path(__file__).resolve()))
    output = ROOT / 'evidence/verification/state-deps055-coordinator-63bceb3.json'
    output.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(passed=True, runnerTests=runner_tests, comparisonControls=len(controls))))


