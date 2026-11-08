import sys
from pathlib import Path
WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
SDK=ROOT/'work/native-asset062-sdk';CLOCK=ROOT/'work/native-asset062-sdk-startup';ERASE=ROOT/'work/native-asset062-sdk-info'
sys.path.append(str(SDK))
import build062s as base
SOURCES=[SDK/'source'/n for n in ['allocate062s.c','map062s.c','map_initialize062s.c','mutex062s.c','context062s.c','fixture062s.c']]+[CLOCK/'source'/n for n in ['clock_math062u.c','clock_read062u.c','clock_monotonic062u.c','mutex_initialize062u.c']]+[ERASE/'source'/n for n in ['tree_access062z.c','tree_rebalance062z.c','tree_erase062z.c']]+[WORK/'source'/n for n in ['endpoint062aa.c','timer_initialize062aa.c','timer_insert062aa.c','timer_set062aa.c','timer_update062aa.c','fixture062aa.c']]
FUNCTIONS=base.FUNCTIONS+['sdk_endpoint_copy062aa','sdk_endpoint_compare062aa','sdk_timer_initialize062aa','sdk_timer_insert062aa','sdk_timer_set062aa','sdk_timer_update062aa','fixture_timer_clock_read062aa','sdk_clock_current062u']
DATA=base.DATA+['fixture_timer_layout062aa','sdk_endpoint_identity062aa','fixture_timer_clock_methods062aa','sdk_clock062u','fixture_sdk_get_thread_id062s','fixture_sdk_tls_get062s','fixture_sdk_tls_index062s']

def build(folder,target,overrides=None):
    folder.mkdir(parents=True,exist_ok=True);compiler=ROOT/'tools/clang-21/clang.exe';linker=ROOT/'tools/clang-21/ld.lld.exe'
    flags=dict(arm=['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfloat-abi=soft'],windows=['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible'],a64=['--target=aarch64-linux-android29','-fPIC','-mno-outline-atomics']);objects=[]
    for original in SOURCES:
        source=(overrides or{}).get(original.name,original);obj=folder/(source.stem+'.o');includes=[WORK/'source',SDK/'source',CLOCK/'source',ERASE/'source']
        base.command([compiler,*flags[target],*base.FLAGS,*[v for p in includes for v in ['-I',p]],'-c',source,'-o',obj],folder/(source.stem+'-compile.json'));objects.append(obj)
    if target=='windows':base.command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/machine:x64','/timestamp:0',*['/export:'+n for n in FUNCTIONS],*['/export:'+n+',DATA'for n in DATA],'/out:'+str(folder/'sdk062s.dll'),*objects],folder/'link.json')
    else:
        script=folder/'sdk062s.ld';address=0x1300000 if target=='arm'else 0x110000000;script.write_text('SECTIONS { .text '+hex(address)+' : { *(.text*) } .rodata : { *(.rodata*) } .data : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n',encoding='utf-8');base.command([linker,'-m','armelf'if target=='arm'else'aarch64elf','--no-undefined','--build-id=none','--entry=sdk_timer_initialize062aa','-T',script,*objects,'-o',folder/'sdk062s.elf'],folder/'link.json')
if __name__=='__main__':
    for target in ['arm','windows','a64']:build(WORK/'attempt001/build'/target,target)
