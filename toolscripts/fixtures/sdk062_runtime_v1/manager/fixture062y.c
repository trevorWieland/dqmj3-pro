#include "thread_map062y.h"
#define OFFSET(type, field) __builtin_offsetof(type, field)

SdkSigned062s sdk_thread_query062y(SdkWord062s *output)
{
    *output = sdk_environment062s.platform.thread_id();
    return 0;
}

void sdk_thread_result_failure062y(SdkSigned062s result, SdkWord062s failed)
{
    (void)result;
    (void)failed;
    __builtin_trap();
}

const SdkWord062s fixture_thread_map_layout062y[] = {
    sizeof(SdkMapInsertion062y), OFFSET(SdkMapInsertion062y, inserted)
};
