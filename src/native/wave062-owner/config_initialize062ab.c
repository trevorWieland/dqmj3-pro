#include "config062ab.h"

SdkConfig062ab *sdk_config_initialize062ab(SdkConfig062ab *config)
{
    config->identity = &sdk_config_identity062ab;
    config->counter.identity = &sdk_config_counter_identity062ab;
    config->counter.pair.low = 0;
    config->counter.pair.high = 0;
    sdk_mutex_initialize062u(&config->mutex, 0x20000000u);
    config->counter.enabled = 0;
    config->counter.value = 0;
    config->counter.pair.low = 0;
    config->counter.pair.high = 0;
    config->counter.first_limit = 0xffffu;
    config->counter.second_limit = 0xffffu;
    config->component = 0xffffffffu;
    config->block.identity = &sdk_config_block_identity062ab;
    config->block.size = 0;
    config->code = 0;
    config->checksum = 0;
    config->raw_0010 = 0;
    config->raw_0014 = 0;
    config->parameter_0060 = 20;
    config->parameter_0064 = 1000;
    config->parameter_006c = 10000;
    config->float_bits_0078 = 0x3fa00000u;
    config->float_bits_007c = 0x3f800000u;
    config->parameter_0080 = 50;
    config->parameter_0090 = 2000;
    config->parameter_008c = 2;
    config->parameter_0070 = 32;
    config->parameter_0084 = 750;
    config->parameter_0088 = 250;
    config->flags_0094[1] = 1;
    config->flags_0094[2] = 0;
    config->flags_0094[3] = 1;
    config->flag_0068 = 1;
    config->flags_0094[4] = 0;
    config->flags_0094[5] = 2;
    config->observer = 0;
    config->parameter_0074 = 128;
    config->flag_00a0 = 0;
    return config;
}
