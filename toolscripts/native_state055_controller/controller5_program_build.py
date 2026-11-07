import json
from pathlib import Path
from controller5_measure import ROOT,WORK,pin
from native_state055_build import command


def build(stage=None,dependencies=None):
    work=Path(stage) if stage is not None else WORK
    dependency=Path(dependencies) if dependencies is not None else ROOT/'src/native/wave055'
    source=work/'source'
    folder=work/'program-build'
    folder.mkdir(exist_ok=True)
    clang=ROOT/'tools/clang-21/clang.exe'
    linker=ROOT/'tools/clang-21/ld.lld.exe'
    flags=['-std=c11','-O2','-ffreestanding','-fno-builtin','-ffp-contract=off','-fno-stack-protector',
           '-ffunction-sections','-fdata-sections','-fno-unwind-tables','-fno-asynchronous-unwind-tables','-Wall','-Wextra','-Werror',
           '-I',source,'-I',dependency/'controller-deps-v1','-I',dependency]
    sources=[source/name for name in ['apply_bindings055.c','apply_program055.c','apply_values055.c','apply_range055.c','apply_uniforms055.c','apply_attributes055.c','apply_attribute_descriptors055.c','apply_footer055.c','apply_pack12_055.c','apply_lighting055.c','apply_quantize055.c','apply_texture055.c','apply_remaining_tables055.c','apply_controller055.c','program_fixture055.c','storage_fixture055.c']]
    sources+=[dependency/'state055.c',dependency/'controller-deps-v1/helpers055.c',dependency/'controller-deps-v1/resource055.c']
    script=folder/'program.ld'
    script.write_text('SECTIONS { .provider 0x89a520 : { *(.bss.state_apply_storage_provider055) } .pair 0x8bf790 : { *(.bss.state_pair055) } .control 0x8bf79c : { *(.bss.state_apply_globals055) } .context 0x8bfab0 : { *(.bss.state_apply_context055) } .index 0x8bfad8 : { *(.bss.state_resource_index055) } .headers 0x8ea8d4 : { *(.bss.state_apply_headers055) } .provider_text 0xf70000 : { *storage_fixture055.o(.text*) } .provider_rodata 0xf72000 : { *storage_fixture055.o(.rodata*) } .provider_data 0xf73000 : { *storage_fixture055.o(.data*) } .provider_bss 0xf74000 : { *storage_fixture055.o(.bss*) } .text 0xf10000 : { *(.text*) } .rodata 0xf40000 : { *(.rodata*) } .data 0xf50000 : { *(.data*) } .bss 0xf60000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n')
    native_script=folder/'native-program.ld'
    native_script.write_text('SECTIONS { .state 0x1000000 : { *(.bss.state_pair055) *(.bss.state_apply_globals055) *(.bss.state_apply_context055) *(.bss.state_apply_storage_provider055) *(.bss.state_apply_headers055) } .provider_text 0xf70000 : { *storage_fixture055.o(.text*) } .provider_rodata 0xf72000 : { *storage_fixture055.o(.rodata*) } .provider_data 0xf73000 : { *storage_fixture055.o(.data*) } .provider_bss 0xf74000 : { *storage_fixture055.o(.bss*) } .text 0xf10000 : { *(.text*) } .rodata 0xf40000 : { *(.rodata*) } .data 0xf50000 : { *(.data*) } .bss 0xf60000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n')
    commands=[]
    for name,target,extra in [('arm','arm-none-eabi',['-mcpu=mpcore','-marm','-mfpu=vfp','-mfloat-abi=softfp']),
                               ('windows','x86_64-pc-windows-msvc',[]),
                               ('a64','aarch64-linux-android21',['-march=armv8-a','-mno-outline-atomics'])]:
        objects=[]
        for index,path in enumerate(sources):
            obj=folder/(name+'-'+path.stem+'.o')
            commands.append(command([clang,'--target='+target,*extra,*flags,'-c',path,'-o',obj]))
            objects.append(obj)
        if name=='windows':
            marker=folder/'windows_float_marker.c'
            marker.write_text('int _fltused = 0;\n',encoding='utf-8')
            marker_object=folder/'windows_float_marker.o'
            commands.append(command([clang,'--target='+target,*flags,'-c',marker,'-o',marker_object]))
            objects.append(marker_object)
            commands.append(command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/timestamp:0','/out:'+str(folder/'program055.dll'),*objects]))
        else:
            commands.append(command([linker,'-T',script if name=='arm' else native_script,'-e','state_apply_controller055',*objects,'-o',folder/(name+'.elf')]))
    result=dict(compiler=pin(clang),linker=pin(linker),headers=[pin(path)for path in sorted(source.glob('*.h'))]+[pin(dependency/name)for name in ['state055.h','selector055.h','address055.h']]+[pin(dependency/'controller-deps-v1'/name)for name in ['resource055.h','helpers055.h']],schemaVersion=1,status='full-controller-algorithm-with-bounded-explicit-state-and-storage-providers',sources=[pin(p)for p in sources],
                commands=commands,artifacts=[pin(folder/name)for name in ['arm.elf','a64.elf','program055.dll']],
                originalExecutableInSource=False,wholeControllerClaimed=False,sourceCreditGranted=0)
    (folder/'build.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(dict(build=pin(folder/'build.json'))))
    return result


if __name__=='__main__':
    build()
