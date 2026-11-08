#include "device069.h"

int effect_file_sdk_file_close069(EffectFileSdk069 *state, const unsigned int *handle)
{
    EffectFileIpc069 *message = state->ipc;
    message->header = 0x08080000;
    int result = state->services->send_sync(state->services->context, *handle, message);
    if (result >= 0)
        return message->result;
    return result;
}
