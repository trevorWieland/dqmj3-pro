import hashlib
import json
import re
import struct
from controller7_measure import ROOT,WORK,pin
from controller7_context_build_successor import build
from controller7_context_targets import cpu_run,windows


def roster():
    paths=set();pending=[WORK/'source/context7.c',WORK/'source/context7.h']
    roots=[ROOT/'src/native/wave055',ROOT/'src/native/wave055/controller-deps-v1']
    while pending:
        path=pending.pop().resolve()
        if path in paths:continue
        paths.add(path)
        for name in re.findall(r'^\s*#include\s+"([^"]+)"',path.read_text(),re.M):
            selected=next((candidate for folder in[path.parent,*roots]if(candidate:=folder/name).is_file()),None)
            assert selected is not None,(path,name)
            pending.append(selected)
    return sorted(paths)


def observe(folder,seed):
    reference=json.loads((WORK/'context-constructor-reference.private.json').read_text())
    expected_words=next(row['contextWords']for row in reference['cases']if row['seed']==seed)
    expected_context=struct.pack('<538I',*expected_words);rows=[]
    for target in['arm','windows','a64']:
        actual,row,before=windows(seed,folder)if target=='windows'else cpu_run(target,seed,folder)
        expected=bytearray(before);size=row['objectBytes'];expected[0x1000:0x1000+size]=expected_context+bytes(size-len(expected_context))
        different=[i for i,(a,b)in enumerate(zip(expected,actual))if a!=b]
        row.update(mismatchOffsets=different,correctGlobalPublication=row['publishedPointer']==row['object'],fullArenaEqual=not different,
                   modelAccepted=not different and row['publishedPointer']==row['object'],comparisonDataNeverSuppliedToAuthoredExecution=True)
        rows.append(row)
    return rows


def run():
    stage=WORK/'context-source-replay-v1';assert not stage.exists();stage.mkdir()
    selected=roster();before={path:pin(path)for path in selected};tree=stage/'source-tree'
    for path in selected:
        target=tree/path.relative_to(ROOT);target.parent.mkdir(parents=True,exist_ok=True);target.write_bytes(path.read_bytes())
        assert target.read_bytes()==path.read_bytes()
    build(WORK/'context-build-successor');build(stage/'build',tree=tree)
    artifacts=[]
    for name in['arm.elf','a64.elf','context7.dll']:
        primary=WORK/'context-build-successor'/name;copied=stage/'build'/name
        assert primary.read_bytes()==copied.read_bytes()
        artifacts.append(dict(primary=pin(primary),copied=pin(copied),byteIdentical=True))
    primary=[row for seed in[0,0xa5,0xff]for row in observe(WORK/'context-build-successor',seed)]
    copied=[row for seed in[0,0xa5,0xff]for row in observe(stage/'build',seed)]
    assert all(row['modelAccepted']for row in primary+copied)
    assert primary==copied
    controls=[];source=(WORK/'source/context7.c').read_text()
    changes=[('omit-global-publication','    state_apply_context055=context;',''),
             ('wrong-attribute-alpha','context_word7(context,base+12,0x3f800000);','context_word7(context,base+12,0);'),
             ('omit-ff-tail','context_byte7(context,0x828+i,0xff);','context_byte7(context,0x828+i,0);')]
    for name,old,new in changes:
        assert source.count(old)==1
        folder=stage/'controls'/name;folder.mkdir(parents=True);variant=folder/'context7.c';variant.write_text(source.replace(old,new))
        build(folder/'build',source_file=variant,tree=tree)
        rows=observe(folder/'build',0xa5)
        assert all(row['returned']and not row['modelAccepted']for row in rows)
        if name=='omit-global-publication':assert all(row['fullArenaEqual']and not row['correctGlobalPublication']for row in rows)
        controls.append(dict(name=name,source=pin(variant),normallyReturning=True,sameFinalArena=name=='omit-global-publication',rows=rows))
    assert all(pin(path)==expected for path,expected in before.items())
    result=dict(status='tiny-copied-source-context-constructor-replay-and-returning-controls',producer=pin(__file__),
                sourceSnapshot=dict(files=[dict(primary=expected,copied=pin(tree/path.relative_to(ROOT)))for path,expected in before.items()],bytes=sum(row['bytes']for row in before.values())),
                primary=primary,copied=copied,allRawExecutionRowsEqual=True,artifacts=artifacts,returningControls=controls,
                sourceCreditGranted=0,wholeOwnerOrControllerCompositionClaimed=False,physicalAndroidExecution=False)
    out=WORK/'context-replay-comparison-v1.json';out.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(receipt=pin(out),sourceFiles=len(selected),snapshotBytes=result['sourceSnapshot']['bytes'],primary=len(primary),copied=len(copied),controls=len(controls),controlExecutions=sum(len(row['rows'])for row in controls))))


if __name__=='__main__':run()
