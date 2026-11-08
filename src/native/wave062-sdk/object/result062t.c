#include "object062t.h"

const SdkByte062s sdk_result_origin062t = 0;

SdkResult062t *sdk_result_make062t(SdkResult062t *result,
    const SdkWord062s *code)
{
    SdkWord062s value = *code;
    result->code = value;
    result->line = 0x71;
    result->origin = &sdk_result_origin062t;
    return result;
}

SdkWord062s sdk_result_success062t(const SdkResult062t *result)
{
    return (result->code & 0x80000000u) == 0;
}

void sdk_operation_result062t(SdkResult062t *result,
    SdkOperationState062t *state)
{
    SdkContext062s *context = sdk_context062s();
    SdkMutex062s *mutex = &context->owner->mutex;
    mutex->methods->acquire(mutex);
    SdkWord062s code = 0x800300d2u;
    if ((!state->first || state->first->state == 5) && state->second &&
        state->second->state == 5) {
        SdkPeer062t *peer = state->peer;
        SdkWrapper062t *wrapper = 0;
        if (peer && peer->service && peer->service->factory)
            wrapper = peer->service->factory->wrapper;
        if (wrapper) {
            sdk_wrapper_replace062t(wrapper, peer);
            if (wrapper->methods->ready(wrapper) &&
                !wrapper->methods->closed(wrapper) &&
                wrapper->current->context) {
                SdkQueryContext062s *query = sdk_context_alternate062s();
                if (query->info->enabled == 0)
                    code = 0x10001;
            }
        }
    }
    sdk_result_make062t(result, &code);
    mutex->methods->release(mutex);
}

SdkWord062s sdk_holder_ready062t(SdkStatusHolder062t *holder)
{
    if (!holder->state)
        return 0;
    SdkResult062t result;
    sdk_operation_result062t(&result, holder->state);
    return sdk_result_success062t(&result);
}
