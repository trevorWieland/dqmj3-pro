import json
from pathlib import Path
import sys
from native_state_deps055_resource_measure import SOURCE,ROOT,WORK,pin

sys.path.insert(0,str(ROOT/'toolscripts'))
from native_state055_build import command


def build(folder,source=None,fixture=None):
    folder=Path(folder).resolve()
    assert folder.is_relative_to(WORK)
    folder.mkdir(parents=True,exist_ok=True)
    source=Path(source).resolve()if source else SOURCE/'resource055.c'
    fixture=Path(fixture).resolve()if fixture else SOURCE/'fixture055.c'
    clang,linker=[ROOT/'tools/clang-21'/name for name in ['clang.exe','ld.lld.exe']]
    flags=['-std=c11','-O2','-fno-inline','-ffreestanding','-fno-builtin','-fno-stack-protector',
           '-ffunction-sections','-fdata-sections','-fno-unwind-tables','-fno-asynchronous-unwind-tables',
           '-Wall','-Wextra','-Werror','-I',SOURCE,'-I',ROOT/'src/native/wave055']
    script=folder/'source.ld'
    script.write_text('SECTIONS { .index 0x8bfad8 : { *(.bss.state_resource_index055) } .text 0xf10000 : { *(.text*) } .rodata 0xf40000 : { *(.rodata*) } .data 0xf50000 : { *(.data*) } .bss 0xf60000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n',encoding='utf-8')
    commands=[]
    for name,target,extra in [('arm','arm-none-eabi',['-mcpu=mpcore','-marm','-mfpu=vfp','-mfloat-abi=softfp']),
                               ('a64','aarch64-linux-android21',['-march=armv8-a','-mno-outline-atomics']),
                               ('windows','x86_64-pc-windows-msvc',[])]:
        objects=[]
        for index,path in enumerate([source,fixture]):
            obj=folder/(name+'-'+str(index)+'.o')
            commands.append(command([clang,'--target='+target,*extra,*flags,'-c',path,'-o',obj]))
            objects.append(obj)
        if name=='windows':
            commands.append(command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/timestamp:0','/out:'+str(folder/'resource055.dll'),*objects]))
        else:
            commands.append(command([linker,'-T',script,'-e','state_resource_lookup055',*objects,'-o',folder/(name+'.elf')]))
    header=source.with_suffix('.h')if source.with_suffix('.h').is_file()else SOURCE/'resource055.h'
    report=dict(productionSource=pin(source),productionHeader=pin(header),fixtureSource=pin(fixture),
                frozenWordHeader=pin(source.with_name('state055.h')if source.with_name('state055.h').is_file()else ROOT/'src/native/wave055/state055.h'),clang=pin(clang),linker=pin(linker),commands=commands,
                artifacts=[pin(folder/name)for name in ['arm.elf','a64.elf','resource055.dll']],
                noOriginalExecutableInSource=True,producer=pin(Path(__file__).resolve()))
    (folder/'build.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    return report


if __name__=='__main__':
    print(json.dumps(build(WORK/'build')))
