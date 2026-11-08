#include "request.h"

typedef struct EffectRequestStringHeader066 {
    int references;
    unsigned int capacity;
    unsigned int length;
    unsigned short code_units[];
} EffectRequestStringHeader066;

static unsigned short empty_request_path066[1];

unsigned short *effect_request_empty_path066(void)
{
    return empty_request_path066;
}

unsigned short *effect_request_copy_path066(const unsigned short *path, unsigned int minimum_capacity)
{
    unsigned int length = 0;
    while (path[length] != 0)
        ++length;
    if (length == 0)
        return empty_request_path066;
    unsigned int capacity = length < minimum_capacity ? minimum_capacity : length;
    if (capacity > 0xfffffff1u || capacity > 0x7ffffff7u)
        __builtin_trap();
    unsigned int bytes = (capacity + 8) * 2;
    const EffectRequestMemory066 *memory = effect_request_memory066();
    EffectRequestStringHeader066 *header = memory->allocate(memory->context, EFFECT_REQUEST_STRING066, bytes, bytes, 4);
    if (header == 0)
        __builtin_trap();
    header->references = 0;
    header->capacity = capacity;
    header->length = length;
    header->code_units[length] = 0;
    for (unsigned int index = 0; index < length; ++index)
        header->code_units[index] = path[index];
    return header->code_units;
}

void effect_request_release_path066(unsigned short *path)
{
    if (path == empty_request_path066)
        return;
    EffectRequestStringHeader066 *header = (EffectRequestStringHeader066 *)((unsigned char *)path - 12);
    int before = header->references;
    if (before != -1)
        header->references = (int)((unsigned int)before - 1u);
    if (before == -1 || before == 0) {
        const EffectRequestMemory066 *memory = effect_request_memory066();
        unsigned int bytes = (header->capacity + 8) * 2;
        memory->release(memory->context, EFFECT_REQUEST_STRING066, header, bytes, bytes);
    }
}

void effect_request_replace_prefix066(unsigned short *path, unsigned int previous_units, const unsigned short *replacement)
{
    EffectRequestStringHeader066 *header = (EffectRequestStringHeader066 *)((unsigned char *)path - 12);
    unsigned int units = 0;
    while (replacement[units] != 0)
        ++units;
    if (previous_units > header->length || units > previous_units || header->references != 0)
        __builtin_trap();
    for (unsigned int index = 0; index <= header->length - previous_units; ++index)
        path[units + index] = path[previous_units + index];
    for (unsigned int index = 0; index < units; ++index)
        path[index] = replacement[index];
    header->length = header->length - previous_units + units;
}
