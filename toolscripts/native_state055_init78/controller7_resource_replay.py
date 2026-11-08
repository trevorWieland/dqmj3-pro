import json
import re
from controller7_measure import ROOT,WORK,pin
from controller7_resource_native_build_successor import build
from controller7_resource_native_targets import windows,aarch64
from controller7_resource_native_model import model,decode_service


def source_roster():
    pending=[WORK/'source/context7.c',WORK/'resource-source-v1/resource7.c',WORK/'resource-source-v1/native_fixture7.c'];selected=set()
    roots=[ROOT/'src/native/wave055',ROOT/'src/native/wave055/controller-deps-v1']
    while pending:
        path=pending.pop().resolve()
        if path in selected:continue
        selected.add(path)
        for name in re.findall(r'^\s*#include\s+"([^"]+)"',path.read_text(),re.M):
            target=next((candidate for folder in[path.parent,*roots]if(candidate:=folder/name).is_file()),None)
            assert target is not None,(path,name)
            pending.append(target)
    return sorted(selected)


def observe(folder,seed,skew,fail_at):
    results=[]
    for backend in[windows,aarch64]:
        arena,service,status,row=backend(seed,skew,fail_at,folder)
        expected,events,summary=model(row['base'],seed,fail_at);observed,actual=decode_service(service)
        different=[i for i,(a,b)in enumerate(zip(expected,arena))if a!=b]
        matches=not different and events==observed and status==summary['status']and all(actual[k]==value for k,value in summary.items()if k!='status')
        row.update(seed=seed,skew=skew,failAt=fail_at,status=status,mismatchOffsets=different,events=observed,expectedEvents=events,serviceSummary=actual,
                   wholeArenaEqual=not different,orderedCallbacksEqual=events==observed,modelAccepted=matches)
        results.append(row)
    return results


def run():
    stage=WORK/'resource-source-replay-v1';assert not stage.exists();stage.mkdir();tree=stage/'source-tree'
    selected=source_roster();pins={path:pin(path)for path in selected}
    for path in selected:
        target=tree/path.relative_to(ROOT);target.parent.mkdir(parents=True,exist_ok=True);target.write_bytes(path.read_bytes())
        assert path.read_bytes()==target.read_bytes()
    primary=WORK/'resource-native-build-successor';build(primary);build(stage/'build',tree=tree)
    artifacts=[]
    for name in['resource7.dll','a64.elf']:
        a,b=primary/name,stage/'build'/name;assert a.read_bytes()==b.read_bytes();artifacts.append(dict(primary=pin(a),copied=pin(b),byteIdentical=True))
    primary_rows=[];copy_rows=[]
    for seed in[0,0xa5,0xff]:
        for skew in[0,16,224]:
            for fail_at in[0,1,2]:
                primary_rows+=observe(primary,seed,skew,fail_at);copy_rows+=observe(stage/'build',seed,skew,fail_at)
    assert primary_rows==copy_rows and all(row['modelAccepted']for row in primary_rows)
    source=(WORK/'resource-source-v1/resource7.c').read_text();controls=[]
    swap=source.replace('release_resource7(state_resource_index7->extra);','RELEASE_SWAP_TOKEN').replace('release_resource7(state_resource_index7);','release_resource7(state_resource_index7->extra);').replace('RELEASE_SWAP_TOKEN','release_resource7(state_resource_index7);')
    mutations=[('swap-extra-index-release-order',swap),('wrong-default-level',source.replace('settings->level=-1000;','settings->level=0;')),('missing-head-publication',source.replace('state_queue7->head=node;','state_queue7->head=0;'))]
    for name,variant in mutations:
        assert variant!=source
        folder=stage/'controls'/name;folder.mkdir(parents=True);path=folder/'resource7.c';path.write_text(variant)
        build(folder/'build',source_file=path,tree=tree);rows=observe(folder/'build',0xa5,224,1)
        assert all(not row['modelAccepted']and row['status']==-1 for row in rows)
        if name=='swap-extra-index-release-order':assert all(row['wholeArenaEqual']and not row['orderedCallbacksEqual']for row in rows)
        controls.append(dict(name=name,source=pin(path),normallyReturned=True,rows=rows,sameFinalArena=name=='swap-extra-index-release-order'))
    assert all(pin(path)==expected for path,expected in pins.items())
    result=dict(status='tiny-complete-quoted-source-resource-graph-copy-and-order-controls',producer=pin(__file__),
                sourceSnapshot=dict(files=[dict(primary=expected,copied=pin(tree/path.relative_to(ROOT)))for path,expected in pins.items()],bytes=sum(row['bytes']for row in pins.values())),
                primary=primary_rows,copied=copy_rows,rawExecutionRowsEqual=True,artifacts=artifacts,returningControls=controls,
                sourceCreditGranted=0,physicalAndroidSdkAllocatorOrWholeOwnerClaimed=False,oomDomain='Release requests retain physical storage through return; third allocation failure terminal is separate ARM-only observation.')
    out=WORK/'resource-replay-comparison-v1.json';out.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(dict(receipt=pin(out),snapshotFiles=len(selected),snapshotBytes=result['sourceSnapshot']['bytes'],primaryObservations=len(primary_rows),copiedObservations=len(copy_rows),returningControls=len(controls))))


if __name__=='__main__':run()
