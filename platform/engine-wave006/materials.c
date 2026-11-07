#include "material_service.h"

static unsigned int audits[32][80];
int validate_materials(const unsigned char *block, int size, Scene *scene, int *unsupported);
static unsigned int word(const unsigned char *p) { return p[0] | (unsigned int)p[1] << 8 | (unsigned int)p[2] << 16 | (unsigned int)p[3] << 24; }
static unsigned int bits(float value) { union { float real; unsigned int word; } data; data.real = value; return data.word; }
static void colors(unsigned int value, unsigned char *rgba) {
    rgba[0] = (unsigned char)value; rgba[1] = (unsigned char)(value >> 8); rgba[2] = (unsigned char)(value >> 16); rgba[3] = (unsigned char)(value >> 24);
}

static int convert(const Material *source, SceneMaterial *target, Scene *scene, unsigned int *audit, unsigned int wire_bytes) {
    unsigned int counts = source->capacity, refs = source->used & 3, srts = (source->used >> 2) & 3, generators = (source->used >> 4) & 3;
    unsigned int index, value, projection_count = (source->used >> 13) & 3;
    const MaterialTexture *textures = (const MaterialTexture *)source->storage;
    const MaterialTransform *transforms = source->storage ? (const MaterialTransform *)(textures + (counts & 3)) : 0;
    const MaterialGenerator *mapping = source->storage ? (const MaterialGenerator *)(transforms + ((counts >> 2) & 3)) : 0;
    const MaterialByte *stages = source->storage ? (const MaterialByte *)(mapping + ((counts >> 4) & 3)) + ((counts >> 9) & 1) * 8 + ((counts >> 10) & 3) * 4 : 0;
    const MaterialProjection *projection = source->storage ? (const MaterialProjection *)(stages + ((counts >> 6) & 7) * ((counts & 0x1000) ? 12 : 4)) : 0;
    const MaterialDetailedHeader *header = source->storage ? (const MaterialDetailedHeader *)((const MaterialByte *)(projection + ((counts >> 13) & 3)) + ((counts >> 15) & 1) * 8) : 0;
    for (index = 0; index < 80; ++index) audit[index] = 0;
    audit[0] = source->wire->flags; audit[1] = counts; audit[2] = source->used; audit[3] = source->flags;
    audit[4] = source->colors[0].rgba; audit[5] = source->colors[1].rgba; audit[7] = refs; audit[79] = wire_bytes;
    colors(source->colors[0].rgba, target->black); colors(source->colors[1].rgba, target->white);
    if (!source->storage) return source->wire->flags == 0 && !refs;
    if (refs > 2 || refs != srts || refs != generators || refs != (unsigned int)target->references || projection_count > 1) return 0;
    audit[6] = material_storage_bytes(counts & 3, (counts >> 2) & 3, (counts >> 4) & 3, (counts >> 6) & 7,
        (counts >> 9) & 1, (counts >> 10) & 3, (counts >> 13) & 3, (counts >> 15) & 1, (counts >> 12) & 1);
    target->references = (int)refs; target->detailed = (source->used >> 12) & 1;
    for (index = 0; index < refs; ++index) {
        unsigned int handle = textures[index].words[0], config = textures[index].words[2];
        if (!handle || handle > (unsigned int)scene->texture_count) return 0;
        if ((textures[index].words[1] & 65535) != (unsigned int)scene->textures[handle - 1].width || textures[index].words[1] >> 16 != (unsigned int)scene->textures[handle - 1].height) return 0;
        target->texture_ids[index] = (int)handle - 1;
        target->wrap_s[index] = (unsigned char)((config & 3) | (((config >> 4) & 7) << 2));
        target->wrap_t[index] = (unsigned char)(((config >> 2) & 3) | (((config >> 7) & 1) << 2));
        target->mapping[index] = mapping[index].source;
        if (mapping[index].kind || mapping[index].reserved) return 0;
        if (mapping[index].projection && mapping[index].projection != projection) return 0;
        target->transform[index][0] = transforms[index].translateX;
        target->transform[index][1] = transforms[index].translateY;
        target->transform[index][2] = transforms[index].rotation;
        target->transform[index][3] = transforms[index].scaleX;
        target->transform[index][4] = transforms[index].scaleY;
        for (value = 0; value < 8; ++value) audit[8 + index * 8 + value] = textures[index].words[value];
        for (value = 0; value < 5; ++value) audit[32 + index * 5 + value] = bits(target->transform[index][value]);
        audit[47 + index * 2] = mapping[index].kind | (unsigned int)mapping[index].source << 8 | (unsigned int)mapping[index].reserved << 16;
        audit[48 + index * 2] = mapping[index].projection ? 1 : 0;
    }
    target->texture = target->texture_ids[0];
    if (projection_count) {
        target->projection[0] = projection->translateX; target->projection[1] = projection->translateY;
        target->projection[2] = projection->scaleX; target->projection[3] = projection->scaleY;
        for (value = 0; value < 4; ++value) audit[53 + value] = bits(target->projection[value]);
        audit[57] = projection->flags;
        target->projection_flags = projection->flags;
    }
    if (target->detailed) {
        const MaterialDetailedStage *stage = (const MaterialDetailedStage *)stages;
        if (((source->used >> 6) & 7) != 1) return 0;
        audit[68] = header->selectors; audit[74] = header->reserved;
        for (value = 0; value < 5; ++value) { target->constants[value] = header->constants[value].rgba; audit[69 + value] = target->constants[value]; }
        target->color_flags = stage->colorInputs; target->alpha_flags = stage->alphaInputs; target->selectors = stage->selectors;
        audit[75] = target->color_flags; audit[76] = target->alpha_flags; audit[77] = target->selectors;
    }
    return 1;
}

int scene_materials(const unsigned char *block, int size, const unsigned char *names, int names_size, Scene *scene, int *unsupported) {
    int index;
    if (!validate_materials(block, size, scene, unsupported) || !material_service_begin(names, names_size, scene)) return 0;
    for (index = 0; index < scene->material_count; ++index) {
        unsigned int offset = word(block + 12 + index * 4), end = index + 1 < scene->material_count ? word(block + 16 + index * 4) : (unsigned int)size;
        const Material *material = material_service_construct(block + offset, (int)(end - offset), index);
        if (!material || !convert(material, &scene->materials[index], scene, audits[index], end - offset)) return 0;
    }
    return material_service_count() == scene->material_count;
}
int stage_material_count(void) { return material_service_count(); }
unsigned int stage_material_value(int index, int field) { return index >= 0 && index < material_service_count() && field >= 0 && field < 80 ? audits[index][field] : 0; }
