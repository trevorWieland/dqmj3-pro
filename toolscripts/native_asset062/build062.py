import sys
from pathlib import Path

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
from digest024_build import FLAGS,pin
from native_stream056_build import command

SYMBOLS=['resource_metadata_slice062','resource_metadata_receive062','resource_packet_slice062','resource_packet_receive062','fixture_layout062','resource_record_append062','fixture_heap_allocate062','fixture_heap_dispose062','fixture_sdk_operations062','fixture_heap_layout062','fixture_queue_header062','fixture_command_layout062','resource_manager_matches062','resource_manager_record062','resource_manager_post_word062','resource_manager_post_block062','resource_queue_header062','resource_seed062','resource_random_state062','fixture_random_layout062','resource_manager_query062','fixture_manager_methods062','resource_snapshot_initialize062','resource_initialize062','resource_destroy062','fixture_lifetime_dispose062','fixture_lifetime_sdk_operations062','fixture_lifetime_layout062']

DATA={'fixture_layout062','fixture_sdk_operations062','fixture_heap_layout062','fixture_command_layout062','resource_random_state062','fixture_random_layout062','fixture_manager_methods062','fixture_lifetime_sdk_operations062','fixture_lifetime_layout062'}


def build(folder,target,overrides=None):
    folder.mkdir(parents=True,exist_ok=True)
    compiler=ROOT/'tools/clang-21/clang.exe';linker=ROOT/'tools/clang-21/ld.lld.exe'
    flags=dict(arm=['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfloat-abi=soft'],windows=['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible'],a64=['--target=aarch64-linux-android29','-fPIC'])
    sources=[WORK/'source/packets062.c',WORK/'source/fixture062.c',WORK/'source/records062.c',WORK/'source/heap_fixture062.c',WORK/'source/commands062.c',WORK/'source/command_fixture062.c',WORK/'source/runtime_support062.c',WORK/'source/random062.c',WORK/'source/lifetime062.c',WORK/'source/lifetime_fixture062.c',ROOT/'src/native/wave012/memory_ops.c',ROOT/'src/native/wave013/outer_arena.c']
    objects=[]
    for original in sources:
        source=(overrides or{}).get(original.name,original);obj=folder/(source.stem+'.o')
        command([compiler,*flags[target],*FLAGS,'-I',WORK/'source','-I',ROOT/'src/native/wave012','-I',ROOT/'src/native/wave013','-c',source,'-o',obj],folder/(source.stem+'-compile.json'));objects.append(obj)
    if target=='windows':
        output=folder/'asset062.dll'
        command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/machine:x64','/timestamp:0',*['/export:'+name+(',DATA'if name in DATA else'')for name in SYMBOLS],'/out:'+str(output),*objects],folder/'link.json')
    else:
        output=folder/'asset062.elf';script=folder/'asset062.ld';base=0x1200000 if target=='arm'else 0x110000000
        script.write_text('SECTIONS { .text '+hex(base)+' : { *(.text*) } .rodata : { *(.rodata*) } .data : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n',encoding='utf-8')
        command([linker,'-m','armelf'if target=='arm'else'aarch64elf','--no-undefined','--build-id=none','--entry=resource_packet_slice062','-T',script,*objects,'-o',output],folder/'link.json')
        if target=='a64':command([linker,'-m','aarch64elf','--shared','--no-undefined','--build-id=none','-z','max-page-size=16384',*objects,'-o',folder/'libasset062.so'],folder/'link-library.json')
    return dict(target=target,sources=[pin(p)for p in sources],objects=[pin(p)for p in objects],artifact=pin(output))

if __name__=='__main__':
    for target in ['arm','windows','a64']:build(WORK/'build'/target,target)
