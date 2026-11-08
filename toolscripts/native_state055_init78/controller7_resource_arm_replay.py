import json
from controller7_measure import ROOT,WORK,pin
from controller7_resource_arm_build_successor import build
from controller7_resource_arm_targets import execute
from controller7_allocation_fixture import build as callbacks


def run():
    stage=WORK/'resource-source-replay-v1';tree=stage/'source-tree'
    primary=WORK/'resource-arm-build-successor';copied=stage/'arm-build';assert not copied.exists()
    build(primary);build(copied,tree=tree)
    assert(primary/'source.elf').read_bytes()==(copied/'source.elf').read_bytes()
    fixture=callbacks();rows=json.loads((ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text())['functions']
    expected=json.loads((WORK/'resource-index-queue-reference-v3.private.json').read_text())['cases'];results=[]
    for original in expected:
        seed,fail_at=original['seed'],original['failAt'];a=execute(seed,fail_at,b'',rows,fixture,primary/'source.elf');b=execute(seed,fail_at,b'',rows,fixture,copied/'source.elf')
        assert a==b
        assert all(a[key]==original[key]for key in['finalArenaSha256','returned','status','allocations','frees'])
        results.append(dict(seed=seed,failAt=fail_at,primary=a,copied=b,originalArenaSha256=original['finalArenaSha256'],wholeArenaAndOrderedAllocationReleaseEventsEqual=True))
    controls=[]
    for name in['swap-extra-index-release-order','wrong-default-level','missing-head-publication']:
        folder=stage/'controls'/name;build(folder/'arm-build',source_file=folder/'resource7.c',tree=tree)
        result=execute(0xa5,1,b'',rows,fixture,folder/'arm-build/source.elf');original=next(row for row in expected if row['seed']==0xa5 and row['failAt']==1)
        assert result['returned']and result['status']==0xffffffff
        matches_arena=result['finalArenaSha256']==original['finalArenaSha256'];matches_order=result['frees']==original['frees']
        assert not(matches_arena and matches_order)
        if name=='swap-extra-index-release-order':assert matches_arena and not matches_order
        controls.append(dict(name=name,returned=True,sameFinalArena=matches_arena,releaseOrderEqual=matches_order,result=result))
    result=dict(status='authored-ARM-tiny-source-copy-whole-arena-and-order-control-replay',producer=pin(__file__),sourceExecutionMapsOriginalImage=False,
                expectedOriginalModuleSha256=json.loads((ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text())['codeSha256'],
                original=pin(WORK/'resource-index-queue-reference-v3.private.json'),primaryArtifact=pin(primary/'source.elf'),copiedArtifact=pin(copied/'source.elf'),artifactByteIdentical=True,
                cases=results,returningControls=controls,sourceCreditGranted=0,terminalDomain='Third allocation failure observed original null-clear versus explicit authored terminal trap; no returning or SDK deallocation claim.')
    out=WORK/'resource-arm-replay-comparison-v1.json';out.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(dict(receipt=pin(out),primary=12,copied=12,returningControls=len(controls))))


if __name__=='__main__':run()
