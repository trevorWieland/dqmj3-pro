import hashlib
import json
import re
import struct
from controller8_measure import ROOT,WORK,pin
from controller8_build_v2 import build
from controller8_targets_v2 import cpu_run,windows,expected_object
from controller8_catalogue_model_v2 import catalogue,registers
from controller8_defaults_model import groups


def roster():
    selected=set();pending=list((WORK/'source-v2').glob('*.c'))+list((WORK/'source-v2').glob('*.h'));roots=[ROOT/'src/native/wave055',ROOT/'src/native/wave055/controller-deps-v1']
    while pending:
        path=pending.pop().resolve()
        if path in selected:continue
        selected.add(path)
        for name in re.findall(r'^\s*#include\s+"([^"]+)"',path.read_text(),re.M):
            target=next((candidate for folder in[path.parent,*roots]if(candidate:=folder/name).is_file()),None)
            assert target is not None,(path,name)
            pending.append(target)
    return sorted(selected)


def observe(folder,seed,skew):
    expected_catalogue=catalogue();expected_registers=registers();sets=groups();expected_masks=[]
    for indices in[sets[0],sets[1]+sets[2],sets[3]]:
        words=[0]*6
        for index in indices:words[index//32]|=1<<(index&31)
        expected_masks+=words
    results=[]
    for target in['arm','windows','a64']:
        arena,global_bytes,reg_bytes,masks,actual,raw,row=windows(seed,skew,folder)if target=='windows'else cpu_run(target,seed,skew,folder)
        native=target!='arm';width=8 if native else 4;expected=bytearray([seed])*0x40000;obj=expected_object(native);expected[0x1000:0x1000+len(obj)]=obj
        mismatches=[i for i,(a,b)in enumerate(zip(expected,arena))if a!=b]
        logical=[{k:v for k,v in item.items()if k!='pointer'}for item in actual]
        flags=list(struct.unpack_from('<II',global_bytes));published=int.from_bytes(global_bytes[8:8+width],'little');stage=struct.unpack_from('<I',global_bytes,8+width)[0]
        names_match=logical==expected_catalogue;registers_match=list(struct.unpack('<189I',reg_bytes))==expected_registers;masks_match=list(struct.unpack('<18I',masks))==expected_masks
        row.update(mismatchOffsets=mismatches,arenaSha256=hashlib.sha256(arena).hexdigest(),rawDescriptorSha256=hashlib.sha256(raw).hexdigest(),actualNamePointerWords=[item['pointer']for item in actual],
                   catalogueLogicalSha256=hashlib.sha256(json.dumps(logical,separators=(',',':')).encode()).hexdigest(),logicalCatalogueEqual=names_match,registersEqual=registers_match,masksEqual=masks_match,
                   flags=flags,publishedPointer=published,stageMode=stage,modelAccepted=not mismatches and names_match and registers_match and masks_match and flags==[1,1]and published==row['object']and stage==0xffffffff)
        results.append(row)
    return results


def compare(primary,copied):
    assert len(primary)==len(copied);aliases=[]
    for a,b in zip(primary,copied):
        if a['target']=='real-Windows-x64':
            delta=b['actualNamePointerWords'][0]-a['actualNamePointerWords'][0]
            assert all(y-x==delta for x,y in zip(a['actualNamePointerWords'],b['actualNamePointerWords']))
            keys={'actualNamePointerWords','rawDescriptorSha256','actualLoadedDllPath'}
            assert{k:v for k,v in a.items()if k not in keys}=={k:v for k,v in b.items()if k not in keys}
            aliases.append(dict(seed=a['seed'],skew=a['skew'],namePointerDelta=delta,typedPointerFields=297,
                                rawPrimaryDescriptorSha256=a['rawDescriptorSha256'],rawCopiedDescriptorSha256=b['rawDescriptorSha256'],rawArenaSha256Equal=a['arenaSha256']==b['arenaSha256']))
        else:assert a==b
    return aliases


def run():
    stage=WORK/'source-replay-v2';assert not stage.exists();stage.mkdir();tree=stage/'source-tree';selected=roster();pins={path:pin(path)for path in selected}
    for path in selected:
        target=tree/path.relative_to(ROOT);target.parent.mkdir(parents=True,exist_ok=True);target.write_bytes(path.read_bytes())
    primary=WORK/'build-v2';build(primary);build(stage/'build',tree=tree)
    artifacts=[]
    for name in['arm.elf','cache8.dll','a64.elf']:
        a,b=primary/name,stage/'build'/name;assert a.read_bytes()==b.read_bytes();artifacts.append(dict(primary=pin(a),copied=pin(b),byteIdentical=True))
    primary_rows=[];copy_rows=[]
    for seed in[0,0xa5,0xff]:
        for skew in[0,16,224]:
            primary_rows+=observe(primary,seed,skew);copy_rows+=observe(stage/'build',seed,skew)
    assert all(row['modelAccepted']for row in primary_rows+copy_rows);aliases=compare(primary_rows,copy_rows)
    changes=[('wrong-parameter-type','catalogue8.c','"perspectiveShadow",0x8b56','"perspectiveShadow",0x1406'),
             ('wrong-last-register','registers8.c','0x1d2,0x1d9','0x1d2,0x1d8'),
             ('wrong-light-default','defaults8.c','value=0x3f000;','value=0x3e000;'),
             ('omit-primary-category','cache8.c','    include_group8(state_cache_masks8[1],state_apply_globals055.list_primary,6);','')]
    controls=[]
    for name,filename,old,new in changes:
        source=(WORK/'source-v2'/filename).read_text();assert source.count(old)==1
        folder=stage/'controls'/name;folder.mkdir(parents=True);path=folder/filename;path.write_text(source.replace(old,new));build(folder/'build',tree=tree,overrides={filename:path})
        rows=observe(folder/'build',0xa5,224);assert all(not row['modelAccepted']for row in rows)
        if name!='wrong-light-default':assert all(not row['mismatchOffsets']for row in rows)
        controls.append(dict(name=name,source=pin(path),normallyReturned=True,sameFinalArena=name!='wrong-light-default',rows=rows))
    assert all(pin(path)==expected for path,expected in pins.items())
    result=dict(status='full-cache-source-closure-copy-and-four-three-target-returning-controls',producer=pin(__file__),
                sourceSnapshot=dict(files=[dict(primary=expected,copied=pin(tree/path.relative_to(ROOT)))for path,expected in pins.items()],bytes=sum(row['bytes']for row in pins.values())),
                primary=primary_rows,copied=copy_rows,artifacts=artifacts,returningControls=controls,
                postExecutionAddressComparison=dict(windowsAliases=aliases,fields=['typed constchar*name fields only','raw descriptor SHA changes explained by those pointer words','verified actually loaded DLL path'],
                                                    originalExecutedHeapRegistersCodeOrLiteralsModified=False,rawPrimaryAndCopiedRowsPreserved=True,comparisonBuildsNewPythonViewsOnly=True,scalarCountTypeNameContentAndArenaBytesMustStillMatch=True),
                sourceCreditGranted=0,completeOwnerShaderHardwareOrGameClaimed=False)
    out=WORK/'source-replay-comparison-v2.json';out.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(dict(receipt=pin(out),sourceFiles=len(selected),snapshotBytes=result['sourceSnapshot']['bytes'],primary=len(primary_rows),copied=len(copy_rows),controls=len(controls))))


if __name__=='__main__':run()
