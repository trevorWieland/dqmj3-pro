import hashlib
import json
import struct
from controller8_measure import ROOT,WORK,pin
from controller8_targets_v2 import cpu_run,expected_object
from controller8_catalogue_model_v2 import catalogue,registers
from controller8_defaults_model import groups
from native_state055_build import command


def link(source,folder):
    folder.mkdir(parents=True,exist_ok=True);script=folder/'high.ld'
    script.write_text('SECTIONS { .text 0x130f10000 : { *(.text*) } .rodata 0x130f40000 : { *(.rodata*) } .data 0x130f50000 : { *(.data*) } .bss 0x130f60000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.eh_frame*) } }\n')
    objects=[source/('a64-'+name+'.o')for name in['cache8','catalogue8','registers8','defaults8','fixture8']]
    linker=ROOT/'tools/clang-21/ld.lld.exe';result=command([linker,'-T',script,'-e','fixture_cache_run8',*objects,'-o',folder/'a64.elf'])
    record=dict(status='ordinary-relink-of-unchanged-compiler-objects-with-high-A64-code-and-globals',linker=pin(linker),objects=[pin(path)for path in objects],command=result,artifact=pin(folder/'a64.elf'),compilerOrExecutableBytesPatched=False)
    (folder/'link.json').write_text(json.dumps(record,indent=2)+'\n')


def run():
    primary=WORK/'high-a64-v2';copied=WORK/'source-replay-v2/high-a64';assert not primary.exists()and not copied.exists()
    link(WORK/'build-v2',primary);link(WORK/'source-replay-v2/build',copied);assert(primary/'a64.elf').read_bytes()==(copied/'a64.elf').read_bytes()
    headers=registers();logical=catalogue();sets=groups();mask_words=[]
    for indices in[sets[0],sets[1]+sets[2],sets[3]]:
        words=[0]*6
        for index in indices:words[index//32]|=1<<(index&31)
        mask_words+=words
    results=[]
    for seed in[0,0xa5,0xff]:
        for skew in[0,16,224]:
            pair=[]
            for folder in[primary,copied]:
                arena,global_bytes,reg_bytes,masks,actual,raw,row=cpu_run('a64',seed,skew,folder)
                expected=bytearray([seed])*0x40000;obj=expected_object(True);expected[0x1000:0x1000+len(obj)]=obj
                assert arena==expected and[{k:v for k,v in item.items()if k!='pointer'}for item in actual]==logical
                assert list(struct.unpack('<189I',reg_bytes))==headers and list(struct.unpack('<18I',masks))==mask_words
                assert all(item['pointer']>0xffffffff for item in actual)and all(pc>0xffffffff for pc in row['sourcePcs'])
                assert int.from_bytes(global_bytes[8:16],'little')==row['object']
                row.update(arenaSha256=hashlib.sha256(arena).hexdigest(),rawDescriptorSha256=hashlib.sha256(raw).hexdigest(),actualNamePointerWords=[item['pointer']for item in actual],
                           allCodeObjectAndNameAddressesExceedU32=True,allWholeArenaAndLogicalDataEqual=True,ordinaryLinkRelocationsOnly=True)
                pair.append(row)
            assert pair[0]==pair[1];results.append(dict(primary=pair[0],copied=pair[1]))
    result=dict(status='additional-high-code-and-global-A64-name-pointer-qualification',producer=pin(__file__),primaryArtifact=pin(primary/'a64.elf'),copiedArtifact=pin(copied/'a64.elf'),artifactByteIdentical=True,cases=results,
                earlierA64GlobalsWereValidLowAddresses=True,earlierA64ObjectAddressesWereHigh=True,physicalAndroidExecution=False,sourceCreditGranted=0)
    path=WORK/'high-a64-comparison-v2.json';path.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(dict(report=pin(path),primary=9,copied=9,allCodeNamesAndObjectsHigh=True)))


if __name__=='__main__':run()
