#include "request.h"

static const EffectRequestFiles066 *active_request_files066;

int effect_request_bind_files066(const EffectRequestFiles066 *files)
{
    active_request_files066 = files;
    return files != 0;
}

const EffectRequestFiles066 *effect_request_files066(void)
{
    return active_request_files066;
}

const EffectRequestProviderOperations066 effect_request_provider_operations066 = {
    effect_request_provider_destroy066, 0, effect_request_provider_load066,
    effect_request_provider_reset066, effect_request_provider_bytes066, effect_request_length066
};

const unsigned char *effect_request_provider_bytes066(EffectRequestProvider066 *provider)
{
    return provider->data;
}

EffectRequestProvider066 *effect_request_provider_destroy066(EffectRequestProvider066 *provider)
{
    provider->operations = &effect_request_provider_operations066;
    provider->heap->operations->release(provider->heap, provider->data);
    provider->data = 0;
    return provider;
}

void effect_request_provider_reset066(EffectRequestProvider066 *provider, EffectRequestTask066 *task)
{
    provider->data = 0;
    provider->data_bytes.low = 0;
    provider->data_bytes.high = 0;
    effect_request_set_state066(task, 2);
}

static void request_failed066(EffectRequestProvider066 *provider, EffectRequestTask066 *task)
{
    provider->data = 0;
    provider->data_bytes.low = 0;
    provider->data_bytes.high = 0;
    effect_request_set_state066(task, 2);
}

static void request_report_error066(const EffectRequestFiles066 *files, int result, unsigned int callsite)
{
    files->report_error(files->context, result, callsite);
    __builtin_trap();
}

void effect_request_provider_load066(EffectRequestProvider066 *provider, EffectRequestTask066 *task,
    unsigned char source_selector, const unsigned short *path)
{
    const EffectRequestFiles066 *files = effect_request_files066();
    void *stream = 0;
    int result = files->open(files->context, &stream, path, 1);
    if (result >= 0) {
        unsigned long long length = (unsigned long long)provider->file_bytes.high << 32 | provider->file_bytes.low;
        result = files->size(files->context, stream, &length);
        if (source_selector != 0 && source_selector != 4) {
            provider->file_bytes.low = (unsigned int)length;
            provider->file_bytes.high = (unsigned int)(length >> 32);
        }
        if (result < 0 && (source_selector == 0 || source_selector == 4))
            request_report_error066(files, result, 0x5f3494);
        if (result >= 0) {
            provider->file_bytes.low = (unsigned int)length;
            provider->file_bytes.high = (unsigned int)(length >> 32);
            if (length == 0) {
                provider->data = 0;
                provider->data_bytes.low = 0;
                provider->data_bytes.high = 0;
                effect_request_set_state066(task, 1);
                files->finalize(files->context, stream);
                return;
            }
            provider->data = provider->heap->operations->allocate(provider->heap,
                provider->file_bytes.low, (unsigned char)provider->alignment);
            provider->data_bytes = provider->file_bytes;
            unsigned int copied = 0;
            result = files->read(files->context, stream, provider->data, provider->data_bytes.low, &copied);
            if (result < 0 && (source_selector == 0 || source_selector == 4))
                request_report_error066(files, result, 0x5f34ec);
            if (result >= 0) {
                if ((unsigned long long)(long long)(int)copied == length) {
                    effect_request_set_state066(task, 1);
                    files->finalize(files->context, stream);
                    return;
                }
                provider->heap->operations->release(provider->heap, provider->data);
            }
        }
    }
    request_failed066(provider, task);
    files->finalize(files->context, stream);
}
