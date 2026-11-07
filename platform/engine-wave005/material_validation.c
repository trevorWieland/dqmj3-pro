#include "scene_internal.h"

static unsigned int u32(const unsigned char *p) { return p[0] | ((unsigned int)p[1] << 8) | ((unsigned int)p[2] << 16) | ((unsigned int)p[3] << 24); }
static int u16(const unsigned char *p) { return p[0] | ((int)p[1] << 8); }
static int real(const unsigned char *p, float *result) {
    union { unsigned int bits; float value; } f;
    f.bits = u32(p); *result = f.value;
    return (f.bits & 0x7f800000u) != 0x7f800000u && f.value >= -100000 && f.value <= 100000;
}

static int combiner(unsigned int value) {
    int i;
    if ((value & 0xfefff000u) || ((value >> 24) & 15) > 1) return 0;
    for (i = 0; i < 3; ++i) {
        int source = (int)(value >> (i * 4)) & 15;
        if (source != 3 && source != 4 && source != 14) return 0;
    }
    return 1;
}

int validate_materials(const unsigned char *block, int size, Scene *scene, int *unsupported) {
    int count, i;
    if (size < 12 || (count = (int)u32(block + 8)) < 1 || count > 32 || size < 12 + count * 4 || !scene->texture_count) return 0;
    for (i = 0; i < count; ++i) {
        unsigned int offset = u32(block + 12 + i * 4), end = i + 1 < count ? u32(block + 16 + i * 4) : (unsigned int)size;
        const unsigned char *record;
        unsigned int flags;
        int refs, transforms, mappings, projection_count, supported, position, j, k, projections = 0;
        SceneMaterial *material = &scene->materials[i];
        if (offset < (unsigned int)(12 + count * 4) || offset > end || end > (unsigned int)size || end - offset < 40) return 0;
        record = block + offset; flags = u32(record + 36);
        refs = flags & 3; transforms = (flags >> 2) & 3; mappings = (flags >> 4) & 3; projection_count = (flags >> 15) & 3;
        if (40 + refs * 4 + transforms * 20 + mappings * 8 > (int)(end - offset)) return 0;
        for (j = 0; j < refs; ++j) if (u16(record + 40 + j * 4) >= scene->texture_count) return 0;
        material->references = refs; material->texture = refs ? u16(record + 40) : 0; material->detailed = flags == 0x18802a;
        supported = flags == 0x15 || flags == 0x8015 || flags == 0x18802a;
        supported = supported && refs >= 1 && refs <= 2 && refs == transforms && refs == mappings;
        for (j = 0; j < 4; ++j) { material->black[j] = record[28 + j]; material->white[j] = record[32 + j]; }
        for (j = 0; j < transforms * 5; ++j) {
            float value;
            if (!real(record + 40 + refs * 4 + j * 4, &value)) return 0;
        }
        if (supported) {
            position = 40 + refs * 4 + transforms * 20;
            for (j = 0; j < refs; ++j) {
                int texture = u16(record + 40 + j * 4);
                material->texture_ids[j] = texture;
                material->wrap_s[j] = record[42 + j * 4]; material->wrap_t[j] = record[43 + j * 4];
                if (material->wrap_s[j] > 6 || material->wrap_t[j] > 6 || material->wrap_s[j] == 3 || material->wrap_t[j] == 3) supported = 0;
                if ((material->wrap_s[j] & 4) != (material->wrap_t[j] & 4) && !scene->textures[texture].uniform) supported = 0;
                for (k = 0; k < 5; ++k) {
                    real(record + 40 + refs * 4 + j * 20 + k * 4, &material->transform[j][k]);
                }
                if (!scene->textures[texture].uniform && material->transform[j][2] != 0) supported = 0;
                material->mapping[j] = record[position + j * 8 + 1];
                if (record[position + j * 8]) supported = 0;
                for (k = 2; k < 8; ++k) if (record[position + j * 8 + k]) supported = 0;
                if (material->mapping[j] == 4) ++projections;
                else if (material->mapping[j] != 0) supported = 0;
            }
            position += mappings * 8;
            if (projection_count > 1 || projection_count != projections || position + projection_count * 20 > (int)(end - offset)) return 0;
            if (projection_count) {
                for (j = 0; j < 4; ++j) if (!real(record + position + j * 4, &material->projection[j])) return 0;
                if (u32(record + position + 16) != 4 || material->projection[2] < 0.001f || material->projection[3] < 0.001f) supported = 0;
                position += 20;
            }
            if (material->detailed) {
                if (position + 40 != (int)(end - offset)) return 0;
                if (u32(record + position) > 0x66 || (u32(record + position) & 15) > 6 || (u32(record + position) >> 4) > 6 || u32(record + position + 24)) supported = 0;
                for (j = 0; j < 5; ++j) material->constants[j] = u32(record + position + 4 + j * 4);
                position += 28;
                material->color_flags = u32(record + position); material->alpha_flags = u32(record + position + 4); material->selectors = u32(record + position + 8);
                if (!combiner(material->color_flags) || !combiner(material->alpha_flags) || material->selectors > 0x66 ||
                    (material->selectors & 15) > 6 || (material->selectors >> 4) > 6) supported = 0;
                position += 12;
            }
            if (position != (int)(end - offset)) supported = 0;
        }
        material->supported = supported;
        if (!supported) ++*unsupported;
    }
    scene->material_count = count;
    return 1;
}
