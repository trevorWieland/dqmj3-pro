import json
from pathlib import Path
from controller7_measure import ROOT,WORK,pin
from controller7_allocation_fixture import build as service_build
from native_state055_build import command


def build(folder=None,source_file=None,tree=None):
    service_build();tree=Path(tree).resolve()if tree else ROOT
    folder=Path(folder).resolve()if folder else WORK/'resource-arm-build-successor';folder.mkdir(parents=True,exist_ok=True)
    source=tree/'work/native-state055/controller-init-v7/resource-source-v1';fixture=folder/'globals7.c'
    source_file=Path(source_file).resolve()if source_file else source/'resource7.c'
    fixture.write_text('#include "resource7.h"\nStateApplyContext055 *state_apply_context055;\n_Noreturn void state_resource_invalid_zero7(void) { __builtin_trap(); }\n')
    clang=ROOT/'tools/clang-21/clang.exe';linker=ROOT/'tools/clang-21/ld.lld.exe'
    flags=['--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfpu=vfp','-mfloat-abi=softfp','-std=c11','-O2','-ffreestanding','-fno-builtin','-fno-stack-protector','-ffunction-sections','-fdata-sections','-fno-unwind-tables','-fno-asynchronous-unwind-tables','-Wall','-Wextra','-Werror','-I',source,'-I',tree/'src/native/wave055','-I',tree/'src/native/wave055/controller-deps-v1']
    objects=[];commands=[]
    for path in[source_file,tree/'work/native-state055/controller-init-v7/source/context7.c',fixture]:
        obj=folder/(path.stem+'.o');objects.append(obj);commands.append(command([clang,*flags,'-c',path,'-o',obj]))
    service=WORK/'reference-allocation-service/service.o'
    script=folder/'source.ld'
    script.write_text('SECTIONS { .allocate 0x89a520 : { *(.bss.state_allocate7) } .release 0x89a524 : { *(.bss.state_release_request7) } .queue 0x8bf798 : { *(.bss.state_queue7) } .context 0x8bfab0 : { *(.bss.state_apply_context055) } .index 0x8bfad8 : { *(.bss.state_resource_index7) } .initialized 0x8bfadc : { *(.bss.state_resource_initialized7) } .callbacks 0xf10000 : { *service.o(.text*) } .service 0xf40000 : { *service.o(.bss*) } .text 0xf50000 : { *(.text*) } .rodata 0xf80000 : { *(.rodata*) } .data 0xf90000 : { *(.data*) } .bss 0xfa0000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n')
    elf=folder/'source.elf';commands.append(command([linker,'-T',script,'-e','state_resource_index_construct7',service,*objects,'-o',elf]))
    result=dict(status='typed-resource-family-authored-ARM-with-identical-explicit-callback-service-object',producer=pin(__file__),sources=[pin(path)for path in[source_file,source/'resource7.h',tree/'work/native-state055/controller-init-v7/source/context7.c',tree/'work/native-state055/controller-init-v7/source/context7.h',fixture]],callbackObject=pin(service),artifact=pin(elf),commands=commands,sourceCreditGranted=0)
    out=folder/'build.json';out.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(pin(out)))


if __name__=='__main__':build()
