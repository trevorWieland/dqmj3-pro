import json
from pathlib import Path
from controller5_measure import ROOT,WORK,pin
from native_state055_build import command


def build(stage=None,dependencies=None):
    work=Path(stage) if stage is not None else WORK
    dependency=Path(dependencies) if dependencies is not None else ROOT/'src/native/wave055'
    source=work/'source'
    folder=work/'storage-build'
    folder.mkdir(exist_ok=True)
    clang=ROOT/'tools/clang-21/clang.exe'
    linker=ROOT/'tools/clang-21/ld.lld.exe'
    flags=['-std=c11','-O2','-ffreestanding','-fno-builtin','-fno-stack-protector','-ffunction-sections','-fdata-sections',
           '-fno-unwind-tables','-fno-asynchronous-unwind-tables','-Wall','-Wextra','-Werror',
           '-I',source,'-I',dependency/'controller-deps-v1','-I',dependency]
    script=folder/'provider.ld'
    script.write_text('SECTIONS { .text 0xf70000 : { *(.text*) } .rodata 0xf72000 : { *(.rodata*) } .data 0xf73000 : { *(.data*) } .bss 0xf74000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n')
    commands=[]
    for name,target,extra in [('arm','arm-none-eabi',['-mcpu=mpcore','-marm','-mfpu=vfp','-mfloat-abi=softfp']),
                               ('windows','x86_64-pc-windows-msvc',[]),
                               ('a64','aarch64-linux-android21',['-march=armv8-a','-mno-outline-atomics'])]:
        obj=folder/(name+'.o')
        commands.append(command([clang,'--target='+target,*extra,*flags,'-c',source/'storage_fixture055.c','-o',obj]))
        if name=='windows':
            commands.append(command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/timestamp:0','/out:'+str(folder/'storage055.dll'),obj]))
        else:
            commands.append(command([linker,'-T',script,'-e','state_storage_fixture055',obj,'-o',folder/(name+'.elf')]))
    result=dict(schemaVersion=1,status='ordinary-C-explicit-controller-storage-fixture',
                inputs=[pin(source/name)for name in ['resource_view055.h','storage_fixture055.h','storage_fixture055.c']],
                compiler=pin(clang),linker=pin(linker),commands=commands,
                artifacts=[pin(folder/name)for name in ['arm.elf','a64.elf','storage055.dll']],
                originalAllocatorClaimed=False,originalExecutableInProvider=False,sourceCreditGranted=0)
    (folder/'build.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(dict(build=pin(folder/'build.json'))))
    return result


if __name__=='__main__':
    build()
