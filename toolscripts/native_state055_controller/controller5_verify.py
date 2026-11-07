import hashlib
import json
from pathlib import Path
from controller5_measure import ROOT,WORK


def verify_execution(report):
    assert report['caseSets']==len(report['cases'])==569
    assert report['observations']==2276
    assert report['originalExecutedInstructions']==3633
    assert report['canonicalInstructions']==3650
    assert report['provedUnreachableInstructions']==17
    assert report['originalImageInAuthoredExecution']is False
    assert report['wholeGameOrHardwareClaimed']is False
    assert report['sourceCreditGranted']==0
    for row in report['cases']:
        original=row['original'];arm=row['authoredArm']
        assert original['returned']and original['savedIntegerVfpSpPreserved']
        assert arm['sourceMapsOriginalExecutable']is False and arm['savedIntegerFpRegistersAndSpPreserved']
        for field in ['finalArenaSha256','finalControlSha256','finalPair','finalStageMode']:
            assert original[field]==arm[field]
        for name in ['actualWindows','highAarch64']:
            native=row[name]
            assert native['returnedNormally']and native['wholeArenaMatchesIndependentModel']
            assert not native['independentModelDifferences']
            assert native['allUsedNativePointersFullWidth']
            assert native['storageObservations']==native['expectedStorageObservations']
    for item in report['pins']+report['artifacts']:
        path=ROOT/item['path'];data=path.read_bytes()
        assert len(data)==item['bytes']and hashlib.sha256(data).hexdigest()==item['sha256'],item['path']
    return True


def verify_controls(report):
    assert len(report['controls'])==10 and report['sourceUnchanged']
    identities=0;same=0
    for row in report['controls']:
        assert row['allThreeSourceExecutionsReturned']
        if row['armExpectedPointerWidthIdentity']:
            identities+=1;assert not row['armDifferent']
        else:assert row['armDifferent']
        for name in ['actualWindows','highAarch64']:
            assert row[name]['returnedNormally']and row[name]['independentModelDifferences']
        same+=row['armFinalArenaPreserved']
    assert identities==1 and same==4
    return True


def compare(primary,copied):
    verify_execution(primary);verify_execution(copied)
    assert primary['cases']==copied['cases'],'Raw execution rows differ'
    assert [(r['bytes'],r['sha256'])for r in primary['artifacts']]==[(r['bytes'],r['sha256'])for r in copied['artifacts']]
    assert primary['caseSets']==copied['caseSets']
    return True


if __name__=='__main__':
    primary=json.loads((WORK/'execution.json').read_text());copied=json.loads((WORK/'replay-v1/execution.json').read_text())
    compare(primary,copied)
    print(json.dumps(dict(status='verified',cases=569,observations=2276,artifactHashesIdentical=True,rawRuntimeRowsIdentical=True)))
