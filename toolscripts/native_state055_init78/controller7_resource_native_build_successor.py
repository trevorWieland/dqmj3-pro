import json
from pathlib import Path
from controller7_measure import ROOT,WORK,pin
from native_state055_build import command


def build(folder=None,source_file=None,tree=None):
    tree=Path(tree).resolve()if tree else ROOT
    source=tree/'work/native-state055/controller-init-v7/resource-source-v1'
    folder=Path(folder).resolve()if folder else WORK/'resource-native-build-successor';folder.mkdir(parents=True,exist_ok=True)
    source_file=Path(source_file).resolve()if source_file else source/'resource7.c'
    clang=ROOT/'tools/clang-21/clang.exe';linker=ROOT/'tools/clang-21/ld.lld.exe'
    flags=['-std=c11','-O2','-ffreestanding','-fno-builtin','-fno-stack-protector','-ffunction-sections','-fdata-sections','-fno-unwind-tables','-fno-asynchronous-unwind-tables','-Wall','-Wextra','-Werror','-I',source,'-I',tree/'src/native/wave055','-I',tree/'src/native/wave055/controller-deps-v1']
    script=folder/'a64.ld';script.write_text('SECTIONS { .text 0xf10000 : { *(.text*) } .rodata 0xf40000 : { *(.rodata*) } .data 0xf50000 : { *(.data*) } .bss 0xf60000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.eh_frame*) } }\n')
    commands=[]
    for name,target,extra in[('windows','x86_64-pc-windows-msvc',[]),('a64','aarch64-linux-android21',['-march=armv8-a','-mno-outline-atomics'])]:
        objects=[]
        for path in[source_file,tree/'work/native-state055/controller-init-v7/source/context7.c',source/'native_fixture7.c']:
            obj=folder/(name+'-'+path.stem+'.o');objects.append(obj);commands.append(command([clang,'--target='+target,*extra,*flags,'-c',path,'-o',obj]))
        if name=='windows':commands.append(command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/timestamp:0','/out:'+str(folder/'resource7.dll'),*objects]))
        else:commands.append(command([linker,'-T',script,'-e','fixture_resource_run7',*objects,'-o',folder/'a64.elf']))
    result=dict(status='real-Windows-and-high-A64-resource-family-build-before-native-execution',producer=pin(__file__),sources=[pin(path)for path in[source_file,source/'resource7.h',source/'native_fixture7.c',tree/'work/native-state055/controller-init-v7/source/context7.c',tree/'work/native-state055/controller-init-v7/source/context7.h']],compiler=pin(clang),linker=pin(linker),commands=commands,artifacts=[pin(folder/name)for name in['resource7.dll','a64.elf']],sourceCreditGranted=0)
    out=folder/'build.json';out.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(pin(out)))


if __name__=='__main__':build()
