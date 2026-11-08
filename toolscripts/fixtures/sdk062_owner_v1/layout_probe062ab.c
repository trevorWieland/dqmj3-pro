#include "config062ab.h"
#define OFFSET(type, field) __builtin_offsetof(type, field)
const SdkWord062s fixture_config_layout062ab[] = {
    sizeof(void *), sizeof(SdkConfig062ab), sizeof(SdkConfigCounter062ab),
    sizeof(SdkConfigBlock062ab), OFFSET(SdkConfig062ab, component),
    OFFSET(SdkConfig062ab, counter), OFFSET(SdkConfig062ab, mutex),
    OFFSET(SdkConfig062ab, parameter_006c), OFFSET(SdkConfig062ab, observer),
    OFFSET(SdkConfig062ab, block), OFFSET(SdkConfig062ab, preserved_00cc),
    OFFSET(SdkConfig062ab, code), OFFSET(SdkConfig062ab, checksum),
    OFFSET(SdkConfig062ab, raw_0010), OFFSET(SdkConfig062ab, raw_0014),
    OFFSET(SdkConfig062ab, parameter_0060), OFFSET(SdkConfig062ab, parameter_0064),
    OFFSET(SdkConfig062ab, flag_0068), OFFSET(SdkConfig062ab, parameter_0070),
    OFFSET(SdkConfig062ab, parameter_0074), OFFSET(SdkConfig062ab, float_bits_0078),
    OFFSET(SdkConfig062ab, float_bits_007c), OFFSET(SdkConfig062ab, parameter_0080),
    OFFSET(SdkConfig062ab, parameter_0084), OFFSET(SdkConfig062ab, parameter_0088),
    OFFSET(SdkConfig062ab, parameter_008c), OFFSET(SdkConfig062ab, parameter_0090),
    OFFSET(SdkConfig062ab, flags_0094), OFFSET(SdkConfig062ab, flag_00a0),
    sizeof(SdkConfigSlot062ab), OFFSET(SdkConfigSlot062ab, records),
    OFFSET(SdkConfigSlot062ab, defaults)
};
