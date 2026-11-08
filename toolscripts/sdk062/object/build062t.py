import sys
from pathlib import Path
WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
SDK=ROOT/'work/native-asset062-sdk'
sys.path.append(str(SDK))
import build062s as prior
FUNCTIONS=prior.FUNCTIONS+['sdk_reference_release062t','sdk_reference_retain062t','sdk_address_replace062t','sdk_wrapper_prepare062t','sdk_wrapper_replace062t','sdk_connection_ready062t','sdk_connection_closed062t','sdk_connection_set_state062t','sdk_child_ready062t','sdk_child_closed062t','sdk_wrapper_ready062t','sdk_wrapper_closed062t','sdk_result_make062t','sdk_result_success062t','sdk_operation_result062t','sdk_holder_ready062t','fixture_connection_callback062t']
DATA=prior.DATA+['fixture_object_layout062t','fixture_capture_layout062t','sdk_result_origin062t','sdk_connection_methods062t','sdk_child_methods062t','sdk_wrapper_methods062t']
SOURCES=[SDK/'source'/n for n in ['allocate062s.c','map062s.c','map_initialize062s.c','mutex062s.c','context062s.c','fixture062s.c']]+[WORK/'source'/n for n in ['connection062t.c','reference062t.c','wrapper062t.c','result062t.c','methods062t.c','fixture062t.c']]

def build(folder,target,overrides=None):
    folder.mkdir(parents=True,exist_ok=True)
    compiler=ROOT/'tools/clang-21/clang.exe';linker=ROOT/'tools/clang-21/ld.lld.exe'
    flags=dict(arm=['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfloat-abi=soft'],windows=['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible'],a64=['--target=aarch64-linux-android29','-fPIC','-mno-outline-atomics'])
    objects=[]
    for original in SOURCES:
        source=(overrides or{}).get(original.name,original);obj=folder/(original.stem+'.o')
        prior.command([compiler,*flags[target],*prior.FLAGS,'-I',WORK/'source','-I',SDK/'source','-c',source,'-o',obj],folder/(original.stem+'-compile.json'));objects.append(obj)
    if target=='windows':
        prior.command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/machine:x64','/timestamp:0',*['/export:'+n for n in FUNCTIONS],*['/export:'+n+',DATA' for n in DATA+['fixture_sdk_get_thread_id062s','fixture_sdk_tls_get062s','fixture_sdk_tls_index062s']],'/out:'+str(folder/'sdk062s.dll'),*objects],folder/'link.json')
    else:
        script=folder/'sdk062s.ld';base=0x1300000 if target=='arm'else 0x110000000
        script.write_text('SECTIONS { .text '+hex(base)+' : { *(.text*) } .rodata : { *(.rodata*) } .data : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n',encoding='utf-8')
        prior.command([linker,'-m','armelf'if target=='arm'else'aarch64elf','--no-undefined','--build-id=none','--entry=sdk_operation_result062t','-T',script,*objects,'-o',folder/'sdk062s.elf'],folder/'link.json')

if __name__=='__main__':
    for target in ['arm','windows','a64']:build(WORK/'attempt001/build'/target,target)
