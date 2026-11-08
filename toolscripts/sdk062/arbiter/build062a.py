import sys
from pathlib import Path

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
SDK=ROOT/'work/native-asset062-sdk'
sys.path.insert(0,str(ROOT/'toolscripts'))
from digest024_build import FLAGS,command
sys.path.insert(0,str(SDK))
from build062s import DATA,FUNCTIONS

OWN_DATA=['arbiter_api062a','arbiter_model_owner_value062a','arbiter_layout062a']
OWN_FUNCTIONS=['arbiter_wait062a','arbiter_signal062a','arbiter_owner062a','arbiter_model_wait062a','arbiter_model_signal062a','arbiter_model_owner062a']


def build(folder,target,overrides=None):
    folder.mkdir(parents=True,exist_ok=True);compiler=ROOT/'tools/clang-21/clang.exe';linker=ROOT/'tools/clang-21/ld.lld.exe'
    flags=dict(arm=['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfloat-abi=soft'],windows=['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible'],a64=['--target=aarch64-linux-android29','-fPIC','-mno-outline-atomics'])
    objects=[]
    paths=[SDK/'source'/name for name in ['allocate062s.c','map062s.c','map_initialize062s.c','mutex062s.c','context062s.c','fixture062s.c']]+list((WORK/'source').glob('*.c'))
    for original in paths:
        source=(overrides or{}).get(original.name,original)
        obj=folder/(source.stem+'.o');command([compiler,*flags[target],*FLAGS,'-I',SDK/'source','-I',WORK/'source','-c',source,'-o',obj],folder/(source.stem+'-compile.json'));objects.append(obj)
    if target=='windows':
        data=DATA+OWN_DATA+['fixture_sdk_get_thread_id062s','fixture_sdk_tls_get062s','fixture_sdk_tls_index062s']
        command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/machine:x64','/timestamp:0',*['/export:'+n for n in FUNCTIONS+OWN_FUNCTIONS],*['/export:'+n+',DATA'for n in data],'/out:'+str(folder/'sdk062s.dll'),*objects],folder/'link.json')
    else:
        script=folder/'sdk062s.ld';base=0x1300000 if target=='arm'else 0x110000000
        script.write_text('SECTIONS { .text '+hex(base)+' : { *(.text*) } .rodata : { *(.rodata*) } .data : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n',encoding='utf-8')
        command([linker,'-m','armelf'if target=='arm'else'aarch64elf','--no-undefined','--build-id=none','--entry=arbiter_model_wait062a','-T',script,*objects,'-o',folder/'sdk062s.elf'],folder/'link.json')


if __name__=='__main__':
    for target in ['arm','windows','a64']:build(WORK/'build'/target,target)
