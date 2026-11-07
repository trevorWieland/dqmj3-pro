import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path.cwd().resolve()
FRESH = ROOT / 'work/clean-replay/compose057-5d394c8'
sys.path.insert(0, str(ROOT / 'toolscripts'))
from replay_packet_compare import PacketComparison

PREFIX = 'evidence/lanes/squirrel-compose057/stage-v1'
OTHER = 'work/squirrel-compose057/independent-review'
EXTRA = {'tools/python/Lib/site-packages/unicorn/unicorn_py3/arch/arm.py',
         'tools/python/Lib/site-packages/unicorn/unicorn_py3/arch/arm64.py',
         *{'toolscripts/squirrel_compose057_' + name + '.py' for name in
           ['controls', 'frames', 'layout', 'replay', 'reuse', 'verify', 'windows']}}


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def pin(path, root=ROOT):
    data = path.read_bytes()
    return dict(path=path.relative_to(root).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


class Comparison(PacketComparison):
    def text(self, value, root):
        return super().text(value, root).replace(PREFIX + '/', '<COMPOSITION-OUTPUT>/').replace(OTHER + '/', '<COMPOSITION-OUTPUT>/')


def compare():
    original = read(ROOT / PREFIX / 'packet.json')
    fresh = read(FRESH / OTHER / 'packet.json')
    comparison = Comparison(ROOT, FRESH)
    extras = []
    for key, expected in [('ownedProducersAndLayout', {'toolscripts/squirrel_compose057_replay.py'}),
                          ('importedProducers', EXTRA)]:
        a, b = ({row['path']: row for row in value[key]} for value in [original, fresh])
        assert a.keys() <= b.keys() and b.keys() - a.keys() == expected
        for path in sorted(expected):
            assert pin(ROOT / path) == b[path] == pin(FRESH / path, FRESH)
            extras.append(dict(role=key, pin=b[path]))
        fresh[key] = [row for row in fresh[key] if row['path'] not in expected]
    comparison.compare(original, fresh, 'complete-cold-packet')
    public = read(ROOT / PREFIX / 'ready.json')
    for key, other in [('sameVmReuse', 'frame-lifetime/reuse.json'), ('returningControls', 'controls/results.json')]:
        frozen = public[key]
        assert pin(ROOT / frozen['path']) == frozen
        comparison.compare(read(ROOT / frozen['path']), read(FRESH / 'work/squirrel-compose057' / other), key)
    return dict(passed=True, variants=comparison.variants, extraImportsVerified=extras)


if __name__ == '__main__':
    import re
    raw_path = ROOT / 'evidence/verification/compose057-isolated-5d394c8.json'
    raw = read(raw_path)
    assert raw['status'] == 'passed' and raw['sourceRevision'] == '5d394c8bad331f1be64c41d07eeff22044be4c63'
    assert raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
    assert all(row['returncode'] == 0 for row in raw['steps'])
    comparison = compare()
    assert len(comparison['variants']) == 3
    assert all(row['path'].startswith('work/squirrel-compose057/layout-probes/') and
               row['path'].endswith('/probes.json') for row in comparison['variants'])
    packet = read(FRESH / OTHER / 'packet.json')
    assert packet['caseSets'] == len(packet['rows']) == 14
    assert packet['fullColdTypedGraphEquality'] and not packet['fullPostGraphEqualityClaimed']
    assert not packet['vmSharedFixtureProvisioningUsed'] and not packet['sourceMapsOriginalImageOrSdk']
    assert packet['all68NativeOpaquePrefixBytesPreserved'] and packet['nonOwningInactiveFrameResidualsRetained']
    for row in packet['rows']:
        original = row['original']
        for source in [*row['authored'].values(), row['windows']]:
            for field in ['startup', 'metamethod', 'program', 'afterCleanup', 'coldGraphSha256']:
                assert source[field] == original[field]
            assert source['heapBefore']['active'] == original['heapBefore']['active']
            assert source['heapAfter']['active'] == original['heapAfter']['active']
            for residual in source['rawPostGraphResiduals']:
                assert row['input']['profile'] == 8
                assert re.fullmatch(r'\.vm\.calls\.frames\[1\]\.(instruction|literals|target|root)', residual['path'])
    artifacts = packet['mappedSourceArtifactsAndLayouts'][:4]
    assert len(artifacts) == 4
    assert all(pin(ROOT / row['path']) == row == pin(FRESH / row['path'], FRESH) for row in artifacts)
    for name in ['reference-trace.json', 'typed-graphs.json']:
        assert (ROOT / PREFIX / name).read_bytes() == (FRESH / OTHER / name).read_bytes()
    controls = read(FRESH / 'work/squirrel-compose057/controls/results.json')
    assert len(controls['rows']) == 13
    assert all(row['normallyReturnedApi'] and row['observerRejected'] for row in controls['rows'])
    reuse = read(FRESH / 'work/squirrel-compose057/frame-lifetime/reuse.json')
    assert len(reuse['rows']) == 21 and reuse['windowsActualExecution']
    assert all(row['callerVisibleResultAndLiveStateEqual'] for row in reuse['rows'])
    assert not any(reuse['retiredFieldsReadBeforeReinitialization'].values())
    assert not reuse['fullPostGraphEqualityClaimed'] and not reuse['universalLifetimeEquivalenceClaimed']
    tests = 0
    for step in raw['steps']:
        if step['name'].endswith('-tests'):
            log = (FRESH / step['log']).read_text(encoding='utf-8')
            match = re.search(r'Ran (\d+) tests?', log)
            assert match and log.strip().endswith('OK')
            tests += int(match[1])
    assert tests == 111
    compiled = read(FRESH / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
    assert compiled['unitCount'] == 465 and len(compiled['results']) == 1323
    assert all(row['status'] == 'compiled' for row in compiled['results'])
    physical_path = ROOT / 'evidence/verification/thor-compose057-physical.json'
    physical = read(physical_path)
    android = next(row for row in artifacts if row['path'].endswith('/compose057.so'))
    assert physical['libraries'][0]['sha256'] == android['sha256']
    assert physical['nativeProgramExecutions'] == 21 and not physical['fixtureVmSharedProvisioningUsed']
    tiny_path = ROOT / 'evidence/verification/compose057-source-only-copy-5d394c8.json'
    tiny = read(tiny_path)
    assert tiny['sourceOnly'] and not tiny['originalImagesSdkToolsOrCiaCopied']
    assert tiny['outsideCopyProjectReadsRestrictedToSharedTools']
    assert tiny['sourceTargetExecutions'] == 42 and tiny['copiedFiles'] == 171 and tiny['copyBytes'] == 485466
    assert sum(row['bytes'] for row in tiny['copiedInputs']) == tiny['copyBytes']
    for row in tiny['copiedInputs']:
        assert pin(ROOT / row['path']) == row == pin(FRESH / row['path'], FRESH)
    assert {row['sha256'] for row in tiny['compiledArtifacts']} == {row['sha256'] for row in artifacts}
    assert all(row['byteIdenticalToMainPublicComponent'] for row in tiny['compiledArtifacts'])
    assert not tiny['fullPostGraphEqualityClaimed'] and tiny['sourceCreditGranted'] == 0
    result = dict(schemaVersion=1, status='independently-replayed-genuine-source-startup-and-typed-vm-composition057',
        sourceRevision=raw['sourceRevision'], rawReplay=pin(raw_path), frozenReady=pin(ROOT / PREFIX / 'ready.json'),
        independentPacket=pin(FRESH / OTHER / 'packet.json'), comparison=comparison,
        fourComponentBinariesByteIdentical=True, artifacts=artifacts, fullColdTraceAndTypedGraphsByteIdentical=True,
        coldCases=14, coldTargetExecutions=56, sameVmSequenceSteps=7, sameVmTargetExecutions=28,
        returningControlExecutions=13, runnerTests=tests, publicUnits=465, publicCompilations=1323,
        genuineRecoveredFactoryAndStartupUsed=True, fixtureVmSharedProvisioningUsed=False,
        physicalThorReceipt=pin(physical_path), physicalThorLibraryMatchesIndependentBuild=True,
        independentTinySourceOnlyCopy=pin(tiny_path), tinySourceTargetExecutions=42,
        tinyCompiledBinariesByteIdentical=4, tinyOutsideCopyProjectReadsRestrictedToSharedTools=True,
        fullOriginalPostGraphEqualityClaimed=False, inactiveFrameResidualsRetained=True,
        physicalHardwarePerInstructionReadsQualified=False, singleActiveVm=True,
        completeInterpreterDestructionAllocationFailuresOrGameClaimed=False,
        sourceOrSdkCreditGranted=0, overallSourceCoverageClaimed=False,
        producer=pin(Path(__file__).resolve()))
    (ROOT / 'evidence/verification/compose057-coordinator-5d394c8.json').write_text(
        json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(passed=True, tests=tests, identicalBinaries=4, coldCases=14, returningControls=13)))


