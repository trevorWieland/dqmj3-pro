import json
from pathlib import Path
from controller6_measure import ROOT,WORK,pin
from native_state055_build import command


def build(stage=None,source=None,previous=None,dependency=None,overrides=None):
    work=Path(stage).resolve()if stage is not None else WORK
    assert work.is_relative_to(WORK)
    folder=work/'uniform-build';folder.mkdir(parents=True,exist_ok=True)
    source=Path(source).resolve()if source is not None else WORK/'source'
    previous=Path(previous).resolve()if previous is not None else ROOT/'work/native-state055/controller-v5/source'
    dependency=Path(dependency).resolve()if dependency is not None else ROOT/'src/native/wave055'
    sources=[source/name for name in ['dispatch6.c','dispatch_bindings6.c','dispatch_uniform6.c','dispatch_property6.c','dispatch_light6.c','dispatch_reduced6.c','dispatch_fixed6.c','dispatch_enum6.c','dispatch_scalar6.c','dispatch_global6.c','dispatch_fixture6.c']]
    sources += [previous/'apply_bindings055.c',dependency/'state055.c']
    sources=[Path((overrides or{}).get(path.name,path)).resolve()for path in sources]
    clang=ROOT/'tools/clang-21/clang.exe';linker=ROOT/'tools/clang-21/ld.lld.exe'
    flags=['-std=c11','-O2','-ffreestanding','-fno-builtin','-ffp-contract=off','-fno-stack-protector','-ffunction-sections','-fdata-sections',
           '-fno-unwind-tables','-fno-asynchronous-unwind-tables','-Wall','-Wextra','-Werror','-I',source,'-I',dependency,'-I',dependency/'controller-deps-v1']
    script=folder/'arm.ld'
    script.write_text('SECTIONS { .control 0x8bf79c : { *(.bss.state_apply_globals055) } .context 0x8bfab0 : { *(.bss.state_apply_context055) } .text 0xf10000 : { *(.text*) } .rodata 0xf40000 : { *(.rodata*) } .data 0xf50000 : { *(.data*) } .bss 0xf60000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n')
    native=folder/'a64.ld'
    native.write_text('SECTIONS { .state 0x1000000 : { *(.bss.state_apply_globals055) *(.bss.state_apply_context055) } .text 0xf10000 : { *(.text*) } .rodata 0xf40000 : { *(.rodata*) } .data 0xf50000 : { *(.data*) } .bss 0xf60000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n')
    commands=[]
    for name,target,extra in [('arm','arm-none-eabi',['-mcpu=mpcore','-marm','-mfpu=vfp','-mfloat-abi=softfp']),
                              ('windows','x86_64-pc-windows-msvc',[]),('a64','aarch64-linux-android21',['-march=armv8-a','-mno-outline-atomics'])]:
        objects=[]
        for path in sources:
            obj=folder/(name+'-'+path.stem+'.o');objects.append(obj)
            commands.append(command([clang,'--target='+target,*extra,*flags,'-c',path,'-o',obj]))
        if name=='windows':
            marker=folder/'windows_float_marker.c';marker.write_text('int _fltused = 0;\n')
            marker_object=folder/'windows_float_marker.o'
            commands.append(command([clang,'--target='+target,*flags,'-c',marker,'-o',marker_object]));objects.append(marker_object)
            commands.append(command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/timestamp:0','/out:'+str(folder/'uniform6.dll'),*objects]))
        else:
            commands.append(command([linker,'-T',script if name=='arm' else native,'-e','state_dispatch_uniform6',*objects,'-o',folder/(name+'.elf')]))
    result=dict(status='complete-authored-dispatcher-algorithm-pending-qualification',compiler=pin(clang),linker=pin(linker),sources=[pin(p)for p in sources],
                headers=[pin(p)for p in source.glob('*.h')],commands=commands,artifacts=[pin(folder/name)for name in ['arm.elf','a64.elf','uniform6.dll']],sourceCreditGranted=0)
    out=folder/'build.json';out.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(dict(build=pin(out))))
    return result


if __name__=='__main__':build()
