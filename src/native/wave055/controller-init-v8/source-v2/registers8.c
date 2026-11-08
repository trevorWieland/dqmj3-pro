#include "cache8.h"

static void append_range8(StateWord055 *registers,StateWord055 *count,StateWord055 first,StateWord055 size) {
    for (StateWord055 i=0;i<size;i++)
        registers[(*count)++]=first+i;
}

static void append_list8(StateWord055 *registers,StateWord055 *count,const StateWord055 *list,StateWord055 size) {
    for (StateWord055 i=0;i<size;i++)
        registers[(*count)++]=list[i];
}

void state_register_numbers8(StateWord055 registers[189]) {
    StateWord055 count=0;
    const StateWord055 texture_extra[]={0x289,0x28a,0x28d};
    const StateWord055 stage_extra[]={0x2b9,0x2ba,0x2bd,0x251,0x252,0x254,0x242,0x24a,0x25e};
    const StateWord055 fixed_extra[]={0x64,0x6d,0x6f,0x80,0x8b,0x8f};
    const StateWord055 stages[]={0xc0,0xc8,0xd0,0xd8,0xf0};
    const StateWord055 light_extra[]={0xe0,0xe1,0xe4,0xe5,0xfd,0x120,0x121,0x122,0x126,0x100,0x104,0x130};
    const StateWord055 final_extra[]={0x1c0,0x1c2,0x1c3,0x1c4,0x1c6,0x1d0,0x1d1,0x1d2,0x1d9};
    registers[count++]=0x229;
    append_range8(registers,&count,0x280,5);
    append_list8(registers,&count,texture_extra,3);
    append_range8(registers,&count,0x2b0,5);
    append_list8(registers,&count,stage_extra,9);
    append_range8(registers,&count,0x4d,10);
    append_range8(registers,&count,0x47,5);
    append_list8(registers,&count,fixed_extra,6);
    append_range8(registers,&count,0xa8,6);
    for (StateWord055 i=0;i<5;i++)
        append_range8(registers,&count,stages[i],5);
    append_range8(registers,&count,0xf8,5);
    append_list8(registers,&count,light_extra,12);
    for (StateWord055 light=0;light<8;light++) {
        append_range8(registers,&count,0x140+light*16,8);
        append_range8(registers,&count,0x149+light*16,3);
    }
    append_list8(registers,&count,final_extra,9);
}

void state_cache_default_groups8(StateApplyGlobals055 *globals) {
    StateWord055 first=0;
    globals->list_values[first++]=0;
    for (StateWord055 id=6;id<=8;id++)
        globals->list_values[first++]=id;
    for (StateWord055 id=14;id<=22;id++)
        globals->list_values[first++]=id;
    for (StateWord055 id=25;id<=32;id++)
        globals->list_values[first++]=id;
    globals->list_values[first++]=38;
    globals->list_values[first++]=40;
    globals->list_values[first]=189;
    for (StateWord055 i=0;i<5;i++) {
        globals->list_auxiliary[i]=9+i;
        globals->list_primary[i]=1+i;
    }
    globals->list_auxiliary[5]=189;
    globals->list_primary[5]=189;
    StateWord055 rest=0;
    for (StateWord055 id=0;id<189;id++) {
        _Bool included=(id>=1 && id<=5) || (id>=9 && id<=13);
        for (StateWord055 i=0;i<first;i++)
            included|=globals->list_values[i]==id;
        if (included)
            continue;
        if (id==80)
            globals->list_remaining[rest++]=84;
        if (id!=84)
            globals->list_remaining[rest++]=id;
    }
    globals->list_remaining[rest]=189;
}
