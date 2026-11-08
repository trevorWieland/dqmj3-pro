import json
from controller7_measure import ROOT,WORK,pin
from native_state055_build import command,load


def build():
    folder=WORK/'reference-allocation-service';folder.mkdir(exist_ok=True)
    source=folder/'allocation_service7.c'
    source.write_text('''typedef unsigned int U32;
typedef struct { U32 cursor, calls, fail_at, fault, frees, events[32][7]; } Service7;
Service7 reference_service7;
void *reference_allocate7(U32 flags, U32 alignment, U32 region, U32 bytes) {
    Service7 *s = &reference_service7;
    U32 index = s->calls++;
    if (index >= 32 || flags != 0x10000 || alignment != 0x100 || region != 0) {
        s->fault = 1;
        return (void *)0;
    }
    U32 address = (s->cursor + alignment - 1) & ~(alignment - 1);
    if (s->fail_at == index + 1) address = 0;
    else s->cursor = address + bytes;
    U32 *event = s->events[index];
    event[0] = flags; event[1] = alignment; event[2] = region;
    event[3] = bytes; event[4] = address;
    return (void *)address;
}
void reference_free7(U32 flags, U32 alignment, U32 region, void *pointer) {
    Service7 *s = &reference_service7;
    U32 index = s->frees++;
    if (index >= 32 || flags != 0x10000 || alignment != 0x100 || region != 0)
        s->fault = 2;
    else s->events[index][5] = (U32)pointer;
}
''')
    script=folder/'service.ld'
    script.write_text('SECTIONS { .text 0xf10000 : { *(.text*) } .rodata 0xf20000 : { *(.rodata*) } .data 0xf30000 : { *(.data*) } .bss 0xf40000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n')
    clang=ROOT/'tools/clang-21/clang.exe';linker=ROOT/'tools/clang-21/ld.lld.exe'
    obj=folder/'service.o';elf=folder/'service.elf'
    commands=[command([clang,'--target=arm-none-eabi','-mcpu=mpcore','-marm','-mfpu=vfp','-mfloat-abi=softfp','-std=c11','-O2','-ffreestanding','-fno-builtin','-fno-stack-protector','-fno-unwind-tables','-fno-asynchronous-unwind-tables','-Wall','-Wextra','-Werror','-c',source,'-o',obj]),
              command([linker,'-T',script,'-e','reference_allocate7',obj,'-o',elf])]
    receipt=dict(role='explicit-deterministic-reference-allocation-callback-service-not-recovered-game-allocator',source=pin(source),artifact=pin(elf),compiler=pin(clang),linker=pin(linker),commands=commands,actualOwnerInstalledCallbacks=False,originalCodeOrResultsSubstituted=False,allocatorSdkSourceCredit=0)
    (folder/'build.json').write_text(json.dumps(receipt,indent=2)+'\n')
    return load(elf)


if __name__=='__main__':
    build();print(json.dumps(pin(WORK/'reference-allocation-service/build.json')))
