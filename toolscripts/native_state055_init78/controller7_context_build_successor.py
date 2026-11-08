import json
from pathlib import Path
from controller7_measure import ROOT,WORK,pin
from native_state055_build import command


def build(folder=None,source_file=None,tree=None):
    tree=Path(tree).resolve()if tree else ROOT
    source=tree/'work/native-state055/controller-init-v7/source'
    folder=Path(folder).resolve()if folder else WORK/'context-build-successor';folder.mkdir(parents=True,exist_ok=True)
    source_file=Path(source_file).resolve()if source_file else source/'context7.c'
    fixture=folder/'context_global7.c';fixture.write_text('#include "context7.h"\nStateApplyContext055 *state_apply_context055;\n')
    clang=ROOT/'tools/clang-21/clang.exe';linker=ROOT/'tools/clang-21/ld.lld.exe'
    flags=['-std=c11','-O2','-ffreestanding','-fno-builtin','-fno-stack-protector','-ffunction-sections','-fdata-sections','-fno-unwind-tables','-fno-asynchronous-unwind-tables','-Wall','-Wextra','-Werror','-I',source,'-I',tree/'src/native/wave055','-I',tree/'src/native/wave055/controller-deps-v1']
    scripts={}
    for name,address in[('arm','0x8bfab0'),('a64','0x1000000')]:
        script=folder/(name+'.ld');script.write_text('SECTIONS { .state '+address+' : { *(.bss.state_apply_context055) } .text 0xf10000 : { *(.text*) } .rodata 0xf20000 : { *(.rodata*) } .data 0xf30000 : { *(.data*) } .bss 0xf40000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n');scripts[name]=script
    commands=[]
    for name,target,extra in[('arm','arm-none-eabi',['-mcpu=mpcore','-marm','-mfpu=vfp','-mfloat-abi=softfp']),('windows','x86_64-pc-windows-msvc',[]),('a64','aarch64-linux-android21',['-march=armv8-a','-mno-outline-atomics'])]:
        objects=[]
        for path in[source_file,fixture]:
            obj=folder/(name+'-'+path.stem+'.o');objects.append(obj)
            commands.append(command([clang,'--target='+target,*extra,*flags,'-c',path,'-o',obj]))
        if name=='windows':commands.append(command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/timestamp:0','/out:'+str(folder/'context7.dll'),*objects]))
        else:commands.append(command([linker,'-T',scripts[name],'-e','state_construct_context7',*objects,'-o',folder/(name+'.elf')]))
    result=dict(producer=pin(__file__),status='ordinary-source-context-constructor-three-target-build-before-execution-qualification',sources=[pin(source_file),pin(source/'context7.h'),pin(fixture)],compiler=pin(clang),linker=pin(linker),commands=commands,artifacts=[pin(folder/n)for n in['arm.elf','a64.elf','context7.dll']],sourceCreditGranted=0)
    out=folder/'build.json';out.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(pin(out)))


if __name__=='__main__':build()
