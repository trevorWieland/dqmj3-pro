#include "config062ab.h"
#include "thread_map062y.h"

SdkConfigSlot062ab *sdk_config_table062ab;

SdkConfig062ab *sdk_config_select062ab(SdkWord062s component)
{
    SdkConfigSlot062ab *slot = &sdk_config_table062ab[component];
    if (sdk_environment062s.contexts_enabled != 0) {
        SdkWord062s index = *sdk_thread_index062y(sdk_environment062s.manager);
        if (index != 0)
            return &slot->records[index];
    }
    return &slot->defaults[0];
}
