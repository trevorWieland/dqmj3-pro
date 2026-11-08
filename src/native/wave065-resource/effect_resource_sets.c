#include "effect_resource_internal.h"
#include "effect_device.h"
#include "effect_texture.h"

typedef struct EffectReferenceSpan065 {
    unsigned int start;
    unsigned int end;
    EffectEmitterReference065 *references;
} EffectReferenceSpan065;

static unsigned int third_texture065(const unsigned char *emitter)
{
    return effect_read_u32_065(emitter) == 1 && (effect_read_u32_065(emitter + 0x548) & 1) != 0;
}

static unsigned int material_header065(const unsigned char *material)
{
    return material[0] == 'M' && material[1] == 'A' && material[2] == 'T' && material[3] == 'C';
}

static void emitter_texture065(EffectResource065 *resource, EffectEmitter065 *emitter,
                                unsigned int slot, unsigned int dimensions, unsigned int format_offset)
{
    unsigned char *record = emitter->serialized;
    EffectTextureStorage065 *texture = emitter->textures + slot;
    unsigned int converted_bytes = effect_read_u32_065(record + format_offset + 0x10);
    if ((int)converted_bytes > 0) {
        unsigned char *memory = resource->textures + effect_read_u32_065(record + format_offset + 0x14);
        if (resource->texture_storage == 1 || resource->texture_storage == 2)
            memory = fn_005411ec(memory, converted_bytes, resource->texture_storage, 0x101, resource->transfer_context, 0);
        texture->memory = memory;
        texture->bytes = converted_bytes;
        texture->ownership = 2;
    } else if ((int)effect_read_u32_065(record + format_offset + 8) > 0) {
        unsigned int width = effect_read_u16_065(record + dimensions);
        unsigned int height = effect_read_u16_065(record + dimensions + 2);
        unsigned int format = effect_read_u32_065(record + format_offset);
        unsigned int bytes = width * height * (format == 2 ? 4 : 3);
        unsigned char *memory = effect_resource_allocate065(resource->allocator, EFFECT_RESOURCE_TEXTURE065, bytes, bytes, 128);
        texture->memory = 0;
        texture->bytes = bytes;
        texture->ownership = 1;
        unsigned int converted = fn_00535dec(format);
        if (fn_00535da8(converted, width, height,
            resource->textures + effect_read_u32_065(record + format_offset + 4), memory))
            texture->memory = memory;
        else
            effect_resource_release065(resource->allocator, memory);
    }
}

static void emitter_fixups065(EffectResource065 *resource, EffectEmitterSet065 *set, EffectEmitter065 *emitter)
{
    unsigned char *record = emitter->serialized;
    emitter->name = resource->names + effect_read_u32_065(record + 0x38);
    emitter_texture065(resource, emitter, 0, 0x40, 0xa0);
    emitter_texture065(resource, emitter, 1, 0xbc, 0x11c);
    if (third_texture065(record))
        emitter_texture065(resource, emitter, 2, 0x5b0, 0x610);
    if (effect_read_u32_065(record + 0x140) != 0)
        emitter->user_data = resource->serialized + effect_read_u32_065(resource->serialized + 0x24) + effect_read_u32_065(record + 0x13c);
    unsigned char *materials = resource->serialized + effect_read_u32_065(resource->serialized + 0x40);
    resource->materials = materials;
    set->materials = materials;
    unsigned char *material = materials + effect_read_u32_065(record + 0x158);
    int primary = 0;
    int secondary = 0;
    if (material_header065(material)) {
        primary = (signed char)material[4];
        secondary = (signed char)material[8];
    }
    effect_write_u32_065(material + primary * 4 + 8, effect_device_word065(emitter->textures[0].memory) >> 3);
    if (emitter->textures[1].memory != 0)
        effect_write_u32_065(material + secondary * 4 + 8, effect_device_word065(emitter->textures[1].memory) >> 3);
    if (third_texture065(record)) {
        material = materials + effect_read_u32_065(record + 0x714);
        if (material_header065(material))
            primary = (signed char)material[4];
        effect_write_u32_065(material + primary * 4 + 4, effect_device_word065(emitter->textures[2].memory) >> 3);
    }
}

static unsigned int reference_spans065(EffectResource065 *resource, EffectReferenceSpan065 *spans,
                                       unsigned int count, EffectEmitterReference065 *references)
{
    unsigned int span_count = 0;
    for (unsigned int index = 0; index < count; ++index) {
        unsigned char *record = resource->serialized + 0x48 + index * 28;
        unsigned int start = effect_read_u32_065(record + 0x14);
        unsigned int size = effect_read_u32_065(record + 0x10);
        if (start == 0 || (int)size <= 0)
            continue;
        EffectReferenceSpan065 next = {start, start + size * 8, 0};
        unsigned int at = span_count;
        while (at != 0 && spans[at - 1].start > next.start) {
            spans[at] = spans[at - 1];
            --at;
        }
        spans[at] = next;
        ++span_count;
    }
    unsigned int merged = 0;
    for (unsigned int index = 0; index < span_count; ++index) {
        if (merged != 0 && spans[index].start <= spans[merged - 1].end &&
            (spans[index].start - spans[merged - 1].start) % 8 == 0) {
            if (spans[index].end > spans[merged - 1].end)
                spans[merged - 1].end = spans[index].end;
        } else {
            spans[merged++] = spans[index];
        }
    }
    for (unsigned int index = 0; index < merged; ++index) {
        spans[index].references = references;
        for (unsigned int position = spans[index].start; position < spans[index].end; position += 8) {
            references->relative_offset = effect_read_u32_065(resource->serialized + position);
            references->emitter = 0;
            ++references;
        }
    }
    return merged;
}

void effect_resource_sets065(EffectResource065 *resource)
{
    unsigned int count = effect_read_u32_065(resource->serialized + 8);
    __SIZE_TYPE__ reference_count = 0;
    for (unsigned int index = 0; index < count; ++index) {
        unsigned char *record = resource->serialized + 0x48 + index * 28;
        if (effect_read_u32_065(record + 0x14) != 0 && (int)effect_read_u32_065(record + 0x10) > 0)
            reference_count += effect_read_u32_065(record + 0x10);
    }
    __SIZE_TYPE__ physical = (__SIZE_TYPE__)count * (sizeof(EffectEmitterSet065) + sizeof(EffectReferenceSpan065)) +
        reference_count * (sizeof(EffectEmitterReference065) + sizeof(EffectEmitter065));
    resource->sets = effect_resource_allocate065(resource->allocator, EFFECT_RESOURCE_SETS065, count * 60, physical, 128);
    EffectReferenceSpan065 *spans = (EffectReferenceSpan065 *)(resource->sets + count);
    EffectEmitterReference065 *references = (EffectEmitterReference065 *)(spans + count);
    EffectEmitter065 *emitters = (EffectEmitter065 *)(references + reference_count);
    unsigned int span_count = reference_spans065(resource, spans, count, references);
    unsigned int emitter_count = 0;
    for (unsigned int index = 0; index < count; ++index) {
        EffectEmitterSet065 *set = resource->sets + index;
        unsigned char *record = resource->serialized + 0x48 + index * 28;
        set->current.serialized = record;
        set->current.count = effect_read_u32_065(record + 0x10);
        set->current.identifier = effect_read_u32_065(record);
        set->name = resource->names + effect_read_u32_065(record + 8);
        set->unknown_flag = 0;
        set->shaders = resource->shaders;
        set->shader_count = resource->shader_count;
        set->primitives = resource->primitives;
        set->primitive_count = resource->primitive_count;
        unsigned int start = effect_read_u32_065(record + 0x14);
        set->current.references = 0;
        if (start != 0) {
            for (unsigned int span = 0; span < span_count; ++span)
                if (start >= spans[span].start && start < spans[span].end && (start - spans[span].start) % 8 == 0)
                    set->current.references = spans[span].references + (start - spans[span].start) / 8;
            for (unsigned int item = 0; (int)item < (int)set->current.count; ++item) {
                EffectEmitterReference065 *reference = set->current.references + item;
                if (reference->relative_offset == 0) {
                    reference->emitter = 0;
                    continue;
                }
                unsigned char *serialized = resource->serialized + reference->relative_offset;
                unsigned int which = 0;
                while (which < emitter_count && emitters[which].serialized != serialized)
                    ++which;
                if (which == emitter_count) {
                    emitters[which].serialized = serialized;
                    emitters[which].user_data = 0;
                    for (unsigned int texture = 0; texture < 3; ++texture) {
                        emitters[which].textures[texture].memory = 0;
                        emitters[which].textures[texture].bytes = 0;
                        emitters[which].textures[texture].ownership = 0;
                        emitters[which].textures[texture].device_word = 0;
                    }
                    ++emitter_count;
                }
                reference->emitter = emitters + which;
                emitter_fixups065(resource, set, reference->emitter);
            }
        }
        set->saved = set->current;
    }
}
