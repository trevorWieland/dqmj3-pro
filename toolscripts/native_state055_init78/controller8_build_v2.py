import json
from pathlib import Path
from controller8_measure import ROOT,WORK,pin
from native_state055_build import command


def build(folder=None,tree=None,overrides=None):
    tree=Path(tree).resolve()if tree else ROOT
    source=tree/'work/native-state055/controller-init-v8/source-v2'
    folder=Path(folder).resolve()if folder else WORK/'build-v2';folder.mkdir(parents=True,exist_ok=True)
    overrides=overrides or {}
    fixture=folder/'fixture8.c'
    fixture.write_text('''#include "cache8.h"
StateApplyGlobals055 state_apply_globals055;
StateWord055 state_apply_headers055[189];
STATE_API055 int fixture_cache_run8(StateFullCache8 *cache) {
    state_cache_default_groups8(&state_apply_globals055);
    return state_cache_construct8(cache);
}
STATE_API055 const StateCatalogue8 *fixture_cache_catalogue8(void) { return &state_catalogue8; }
STATE_API055 const StateWord055 *fixture_cache_registers8(void) { return state_apply_headers055; }
STATE_API055 const StateWord055 *fixture_cache_masks8(void) { return &state_cache_masks8[0][0]; }
STATE_API055 const StateApplyGlobals055 *fixture_cache_globals8(void) { return &state_apply_globals055; }
''')
    clang=ROOT/'tools/clang-21/clang.exe';linker=ROOT/'tools/clang-21/ld.lld.exe'
    flags=['-std=c11','-O2','-ffreestanding','-fno-builtin','-fno-stack-protector','-ffunction-sections','-fdata-sections','-fno-unwind-tables','-fno-asynchronous-unwind-tables','-Wall','-Wextra','-Werror','-I',source,'-I',tree/'src/native/wave055','-I',tree/'src/native/wave055/controller-deps-v1']
    commands=[];scripts={}
    for name in['arm','a64']:
        script=folder/(name+'.ld')
        special='.control 0x8bf79c : { *(.bss.state_apply_globals055) } .headers 0x8ea8d4 : { *(.bss.state_apply_headers055) } .masks 0x8eabc8 : { *(.bss.state_cache_masks8) } 'if name=='arm'else''
        script.write_text('SECTIONS { '+special+'.text 0xf10000 : { *(.text*) } .rodata 0xf40000 : { *(.rodata*) } .data 0xf50000 : { *(.data*) } .bss 0xf60000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n');scripts[name]=script
    for name,target,extra in[('arm','arm-none-eabi',['-mcpu=mpcore','-marm','-mfpu=vfp','-mfloat-abi=softfp']),('windows','x86_64-pc-windows-msvc',[]),('a64','aarch64-linux-android21',['-march=armv8-a','-mno-outline-atomics'])]:
        objects=[]
        for path in[source/'cache8.c',source/'catalogue8.c',source/'registers8.c',source/'defaults8.c',fixture]:
            path=Path(overrides.get(path.name,path));obj=folder/(name+'-'+path.stem+'.o');objects.append(obj);commands.append(command([clang,'--target='+target,*extra,*flags,'-c',path,'-o',obj]))
        if name=='windows':commands.append(command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/timestamp:0','/out:'+str(folder/'cache8.dll'),*objects]))
        else:commands.append(command([linker,'-T',scripts[name],'-e','fixture_cache_run8',*objects,'-o',folder/(name+'.elf')]))
    result=dict(status='ordinary-complete-cache-construction-source-and-semantic-catalogue-generator-build-before-execution',producer=pin(__file__),sources=[pin(Path(overrides.get(path.name,path)))for path in sorted(source.iterdir())if path.suffix in['.c','.h']],fixture=pin(fixture),compiler=pin(clang),linker=pin(linker),commands=commands,artifacts=[pin(folder/n)for n in['arm.elf','cache8.dll','a64.elf']],sourceCreditGranted=0)
    path=folder/'build.json';path.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(pin(path)))


if __name__=='__main__':build()
