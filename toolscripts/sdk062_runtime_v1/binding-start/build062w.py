import sys
from pathlib import Path
WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
SDK=ROOT/'work/native-asset062-sdk'
OBJECT=ROOT/'work/native-asset062-sdk-object'
POLICY=ROOT/'work/native-asset062-sdk-factory'
sys.path.append(str(SDK))
import build062s as base
FUNCTIONS=base.FUNCTIONS+['sdk_binding_active062v','sdk_binding_can_transition062v','sdk_binding_notify062v','sdk_binding_start062w','sdk_binding_query062w','sdk_binding_state062w','sdk_binding_start_ready062w','sdk_binding_poll_ready062w']
DATA=base.DATA+['fixture_binding_start_layout062w','fixture_binding_start_methods062w','fixture_sdk_get_thread_id062s','fixture_sdk_tls_get062s','fixture_sdk_tls_index062s']
SOURCES=[SDK/'source'/n for n in ['allocate062s.c','map062s.c','map_initialize062s.c','mutex062s.c','context062s.c','fixture062s.c']]+[POLICY/'source'/n for n in ['binding_policy062v.c','binding_active062v.c']]+[WORK/'source'/n for n in ['binding_start062w.c','binding_providers062w.c','fixture062w.c']]

def build(folder,target,overrides=None):
    folder.mkdir(parents=True,exist_ok=True);compiler=ROOT/'tools/clang-21/clang.exe';linker=ROOT/'tools/clang-21/ld.lld.exe'
    flags=dict(arm=['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfloat-abi=soft'],windows=['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible'],a64=['--target=aarch64-linux-android29','-fPIC','-mno-outline-atomics']);objects=[]
    for original in SOURCES:
        source=(overrides or{}).get(original.name,original);obj=folder/(source.stem+'.o')
        base.command([compiler,*flags[target],*base.FLAGS,'-I',WORK/'source','-I',SDK/'source','-I',OBJECT/'source','-I',POLICY/'source','-c',source,'-o',obj],folder/(source.stem+'-compile.json'));objects.append(obj)
    if target=='windows':base.command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/machine:x64','/timestamp:0',*['/export:'+n for n in FUNCTIONS],*['/export:'+n+',DATA'for n in DATA],'/out:'+str(folder/'sdk062s.dll'),*objects],folder/'link.json')
    else:
        script=folder/'sdk062s.ld';address=0x1300000 if target=='arm'else 0x110000000;script.write_text('SECTIONS { .text '+hex(address)+' : { *(.text*) } .rodata : { *(.rodata*) } .data : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n',encoding='utf-8');base.command([linker,'-m','armelf'if target=='arm'else'aarch64elf','--no-undefined','--build-id=none','--entry=sdk_binding_start062w','-T',script,*objects,'-o',folder/'sdk062s.elf'],folder/'link.json')
if __name__=='__main__':
    for target in ['arm','windows','a64']:build(WORK/'attempt001/build'/target,target)
