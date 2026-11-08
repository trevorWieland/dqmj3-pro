import sys
from pathlib import Path
WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'work/native-asset062-sdk-object'))
import build062t as prior
SOURCES=prior.SOURCES+[WORK/'source'/n for n in ['task_initialize062u.c','task_state062u.c','fixture062u.c','task_default_work062u.c','clock_math062u.c','clock_read062u.c','clock_monotonic062u.c','mutex_initialize062u.c','clock_windows062u.c','fixture_clock062u.c']]
FUNCTIONS=prior.FUNCTIONS+['sdk_task_initialize062u','sdk_task_extended_initialize062u','sdk_task_set_state062u','sdk_task_complete062u','sdk_task_state_four062u','sdk_task_state_two062u','sdk_task_state_three062u','sdk_task_set_delay062u','sdk_task_dispatch062u','fixture_task_completion062u','sdk_task_default_work062u','sdk_runtime_code062u','sdk_clock_divide062u','sdk_clock_guard062u','sdk_clock_raw062u','sdk_clock_current062u','sdk_clock_monotonic062u','sdk_clock_locked062u','sdk_count_initialize062u','sdk_recursive_initialize062u','sdk_mutex_initialize062u','sdk_windows_ticks062u','fixture_read_ticks062u','fixture_windows_ticks062u']
DATA=prior.DATA+['sdk_task_base_methods062u','sdk_task_extended_methods062u','sdk_task_member_identity062u','fixture_task_layout062u','fixture_task_trace_layout062u','sdk_clock062u','sdk_clock_mutex_methods062u','sdk_mutex_class_identity062u','sdk_mutex_tag_identity062u','fixture_kernel_ticks062u','fixture_kernel_tick_calls062u','fixture_clock_methods062u','fixture_clock_layout062u','sdk_windows_clock062u','fixture_kernel_tick_log062u','fixture_windows_counter_log062u','fixture_windows_frequency_log062u']

def build(folder,target,overrides=None):
    folder.mkdir(parents=True,exist_ok=True);compiler=ROOT/'tools/clang-21/clang.exe';linker=ROOT/'tools/clang-21/ld.lld.exe';old=prior.prior
    flags=dict(arm=['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfloat-abi=soft'],windows=['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible'],a64=['--target=aarch64-linux-android29','-fPIC','-mno-outline-atomics']);objects=[]
    for original in SOURCES:
        source=(overrides or{}).get(original.name,original)
        obj=folder/(source.stem+'.o');old.command([compiler,*flags[target],*old.FLAGS,'-I',WORK/'source','-I',prior.WORK/'source','-I',old.WORK/'source','-c',source,'-o',obj],folder/(source.stem+'-compile.json'));objects.append(obj)
    if target=='windows':old.command([linker,'-flavor','link','/dll','/noentry','/nodefaultlib','/machine:x64','/timestamp:0',*['/export:'+n for n in FUNCTIONS],*['/export:'+n+',DATA' for n in DATA+['fixture_sdk_get_thread_id062s','fixture_sdk_tls_get062s','fixture_sdk_tls_index062s']],'/out:'+str(folder/'sdk062s.dll'),*objects],folder/'link.json')
    else:
        script=folder/'sdk062s.ld';base=0x1300000 if target=='arm'else 0x110000000;script.write_text('SECTIONS { .text '+hex(base)+' : { *(.text*) } .rodata : { *(.rodata*) } .data : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n',encoding='utf-8');old.command([linker,'-m','armelf'if target=='arm'else'aarch64elf','--no-undefined','--build-id=none','--entry=sdk_task_initialize062u','-T',script,*objects,'-o',folder/'sdk062s.elf'],folder/'link.json')

if __name__=='__main__':
    for target in ['arm','windows','a64']:build(WORK/'attempt002-clock/build'/target,target)
