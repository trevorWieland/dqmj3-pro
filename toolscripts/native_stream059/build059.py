import json
from pathlib import Path
import sys

ROOT=next(parent for parent in Path(__file__).resolve().parents
          if(parent/'AGENTS.md').is_file()and(parent/'config/build-units.json').is_file())
WORK=Path(__file__).resolve().parent
SOURCE=WORK/'source'
FROZEN058=ROOT/'src/native/wave058'
sys.path.append(str(ROOT/'toolscripts'))
from digest024_build import FLAGS,load,pin
from native_stream056_build import command

SYMBOLS=['fixture_attach_header059','fixture_reset059','fixture_allocate059','fixture_allocation_arguments059','fixture_allocation_count059','fixture_layout059','stream_inflate059','stream_table059','stream_adler059','stream_window059','stream_fixed059','fn_00733c00','fn_00733d64','fn_00733d78','fn_00733bb0','fn_00734b34','fn_00734b3c',
         'stream_fast058','stream_gzip_fixed058','fixture_bind058','fixture_allocate058','fixture_dispose058',
         'fixture_alternate_dispose058','fixture_sdk_operations058','fixture_layout058']


def build(folder,target,overrides=None):
    folder.mkdir(parents=True,exist_ok=True)
    compiler,linker=ROOT/'tools/clang-21/clang.exe',ROOT/'tools/clang-21/ld.lld.exe'
    profiles=dict(arm=['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfloat-abi=soft'],
                  windows=['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible'],
                  a64=['--target=aarch64-linux-android29','-fPIC'])
    sources=[FROZEN058/name for name in('initialize058.c','kernel_bridge058.c','fixed_gzip058.c','fixture058.c')]
    sources.extend(sorted(SOURCE.glob('*.c')))
    sources.append(ROOT/'src/native/wave056/stream056.c')
    sources.append(ROOT/'src/native/wave054/crc.c')
    objects=[]
    for source in sources:
        source=(overrides or{}).get(source.name,source)
        obj=folder/(source.stem+'.o')
        command([compiler,*profiles[target],*FLAGS,'-I',SOURCE,'-I',FROZEN058,'-I',ROOT/'src/native/wave056','-I',ROOT/'src/native/wave054',
                 '-c',source,'-o',obj],folder/(source.stem+'-compile.json'))
        objects.append(obj)
    if target=='windows':
        output=folder/'stream058.dll'
        command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/machine:x64','/timestamp:0',
                 *['/export:'+name+(',DATA' if name in('fixture_layout058','fixture_sdk_operations058','fixture_layout059')else'')for name in SYMBOLS],
                 '/out:'+str(output),*objects],folder/'link.json')
    else:
        output,script=folder/'stream058.elf',folder/'stream058.ld'
        address=0xf00000 if target=='arm' else 0x110000000
        script.write_text('SECTIONS { .text '+hex(address)+' : { *(.text*) } .rodata : { *(.rodata*) } '
                          '.data : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) } '
                          '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n')
        machine='armelf' if target=='arm'else'aarch64elf'
        command([linker,'-m',machine,'--no-undefined','--build-id=none','--entry=fn_00733c00','-T',script,*objects,'-o',output],folder/'link.json')
        if target=='a64':
            command([linker,'-m',machine,'--shared','--no-undefined','--build-id=none','-z','max-page-size=16384',*objects,'-o',folder/'libstream058.so'],folder/'link-library.json')
    return output,dict(target=target,sources=[pin(p)for p in sources],objects=[pin(p)for p in objects],artifact=pin(output))


if __name__=='__main__':
    print(json.dumps([build(WORK/'build'/target,target)[1]for target in('arm','windows','a64')],indent=2))
