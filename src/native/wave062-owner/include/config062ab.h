#ifndef CONFIG062AB_H
#define CONFIG062AB_H
#include "clock062u.h"

typedef struct SdkConfigCounter062ab {
    const void *identity;
    SdkByte062s enabled;
    SdkWord062s value;
    SdkWord062s preserved_000c;
    SdkClockPair062u pair;
    unsigned short first_limit;
    unsigned short second_limit;
} SdkConfigCounter062ab;

typedef struct SdkConfigBlock062ab {
    const void *identity;
    SdkWord062s size;
    SdkByte062s payload[32];
} SdkConfigBlock062ab;

typedef struct SdkConfig062ab {
    const void *identity;
    SdkWord062s component;
    SdkByte062s code;
    SdkWord062s checksum;
    SdkWord062s raw_0010;
    SdkWord062s raw_0014;
    SdkConfigCounter062ab counter;
    SdkMutex062s mutex;
    SdkWord062s preserved_005c;
    SdkWord062s parameter_0060;
    SdkWord062s parameter_0064;
    SdkByte062s flag_0068;
    SdkWord062s parameter_006c;
    SdkWord062s parameter_0070;
    SdkWord062s parameter_0074;
    SdkWord062s float_bits_0078;
    SdkWord062s float_bits_007c;
    SdkWord062s parameter_0080;
    SdkWord062s parameter_0084;
    SdkWord062s parameter_0088;
    SdkWord062s parameter_008c;
    SdkWord062s parameter_0090;
    SdkByte062s flags_0094[6];
    void *observer;
    SdkByte062s flag_00a0;
    SdkConfigBlock062ab block;
    SdkByte062s preserved_00cc[4];
} SdkConfig062ab;

typedef struct SdkConfigSlot062ab {
    const void *identity;
    SdkWord062s state;
    SdkConfig062ab *records;
    _Alignas(8) SdkConfig062ab defaults[2];
} SdkConfigSlot062ab;

extern SdkConfigSlot062ab *sdk_config_table062ab;
SdkConfig062ab *sdk_config_select062ab(SdkWord062s);

extern const SdkByte062s sdk_config_identity062ab;
extern const SdkByte062s sdk_config_counter_identity062ab;
extern const SdkByte062s sdk_config_block_identity062ab;
SdkConfig062ab *sdk_config_initialize062ab(SdkConfig062ab *);
#endif
