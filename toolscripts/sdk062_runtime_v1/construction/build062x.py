import sys
from pathlib import Path
WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
SDK=ROOT/'work/native-asset062-sdk';OBJECT=ROOT/'work/native-asset062-sdk-object';POLICY=ROOT/'work/native-asset062-sdk-factory';START=ROOT/'work/native-asset062-sdk-factory-owner'
sys.path.append(str(SDK))
import build062s as base
FUNCTIONS=base.FUNCTIONS+['sdk_binding_active062v','sdk_binding_can_transition062v','sdk_binding_notify062v','sdk_binding_start062w','sdk_binding_query062w','sdk_binding_state062w','sdk_binding_start_ready062w','sdk_binding_poll_ready062w','sdk_address_list_initialize062x','sdk_wide_length062x','sdk_wide_copy062x','sdk_wide_create062x','sdk_wide_destroy062x','sdk_binding_initialize062x','fixture_wide_dispose062x','sdk_wide_default_dispose062x']
DATA=base.DATA+['fixture_construction_layout062x','sdk_address_list_identity062x','sdk_binding_base_methods062x','sdk_wide_name_identity062x','fixture_wide_observer062x','fixture_sdk_get_thread_id062s','fixture_sdk_tls_get062s','fixture_sdk_tls_index062s']
SOURCES=[SDK/'source'/n for n in ['allocate062s.c','map062s.c','map_initialize062s.c','mutex062s.c','context062s.c','fixture062s.c']]+[POLICY/'source'/n for n in ['binding_policy062v.c','binding_active062v.c']]+[START/'source'/n for n in ['binding_start062w.c','binding_providers062w.c']]+[WORK/'source'/n for n in ['wide_units062x.c','wide_owner062x.c','binding_initialize062x.c','list_initialize062x.c','fixture062x.c']]

def build(folder,target,overrides=None):
    folder.mkdir(parents=True,exist_ok=True);compiler=ROOT/'tools/clang-21/clang.exe';linker=ROOT/'tools/clang-21/ld.lld.exe'
    flags=dict(arm=['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfloat-abi=soft'],windows=['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible'],a64=['--target=aarch64-linux-android29','-fPIC','-mno-outline-atomics']);objects=[]
    for original in SOURCES:
        source=(overrides or{}).get(original.name,original);obj=folder/(source.stem+'.o')
        includes=[WORK/'source',SDK/'source',OBJECT/'source',POLICY/'source',START/'source']
        base.command([compiler,*flags[target],*base.FLAGS,*[v for p in includes for v in ['-I',p]],'-c',source,'-o',obj],folder/(source.stem+'-compile.json'));objects.append(obj)
    if target=='windows':base.command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/machine:x64','/timestamp:0',*['/export:'+n for n in FUNCTIONS],*['/export:'+n+',DATA'for n in DATA],'/out:'+str(folder/'sdk062s.dll'),*objects],folder/'link.json')
    else:
        script=folder/'sdk062s.ld';address=0x1300000 if target=='arm'else 0x110000000;script.write_text('SECTIONS { .text '+hex(address)+' : { *(.text*) } .rodata : { *(.rodata*) } .data : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n',encoding='utf-8');base.command([linker,'-m','armelf'if target=='arm'else'aarch64elf','--no-undefined','--build-id=none','--entry=sdk_binding_initialize062x','-T',script,*objects,'-o',folder/'sdk062s.elf'],folder/'link.json')
if __name__=='__main__':
    for target in ['arm','windows','a64']:build(WORK/'attempt001/build'/target,target)
