#include "../engine-wave003/texture.h"
#include "scene_internal.h"
#include "../engine-wave002/layout.h"

static unsigned int arena[1048576], frames[2][320 * 240];
static int statistics[15], current_frame;
static unsigned int u32(const unsigned char *p) { return p[0] | ((unsigned int)p[1] << 8) | ((unsigned int)p[2] << 16) | ((unsigned int)p[3] << 24); }
static int u16(const unsigned char *p) { return p[0] | ((int)p[1] << 8); }
static int tagged(const unsigned char *p, const char *s) { return p[0] == s[0] && p[1] == s[1] && p[2] == s[2] && p[3] == s[3]; }
static int real(const unsigned char *p, float *result) {
    union { unsigned int bits; float value; } f;
    f.bits = u32(p); *result = f.value;
    return (f.bits & 0x7f800000u) != 0x7f800000u && f.value >= -100000 && f.value <= 100000;
}

static int textures(const unsigned char *block, int size, const SceneArchive *archive, Scene *scene, int *used, int *padding) {
    int i, references[16], count;
    if (size < 12 || (count = (int)u32(block + 8)) < 1 || count > 16 || size < 12 + count * 4) return 0;
    for (i = 0; i < count; ++i) {
        unsigned int offset = u32(block + 12 + i * 4);
        int length = 0, found, pixels, j;
        const SceneMember *member;
        if (offset < (unsigned int)count * 4 || offset >= (unsigned int)size - 12) return 0;
        while (offset + 12 + length < (unsigned int)size && block[offset + 12 + length]) if (++length > 63) return 0;
        if (offset + 12 + length >= (unsigned int)size) return 0;
        found = scene_archive_texture(archive, block + 12 + offset, length);
        if (found < 0) return 0;
        for (j = 0; j < i; ++j) if (references[j] == found) return 0;
        references[i] = found; member = &archive->members[found];
        scene->textures[i].width = texture_info(member->data, member->size, 0);
        scene->textures[i].height = texture_info(member->data, member->size, 1);
        if (scene->textures[i].width < 1 || scene->textures[i].height < 1) return 0;
        pixels = scene->textures[i].width * scene->textures[i].height;
        if (pixels > 1048576 - *used || !texture_decode(member->data, member->size, arena + *used, pixels)) return 0;
        scene->textures[i].pixels = arena + *used; *used += pixels;
        scene->textures[i].uniform = 1;
        for (j = 1; j < pixels; ++j) if (scene->textures[i].pixels[j] != scene->textures[i].pixels[0]) scene->textures[i].uniform = 0;
        *padding += texture_info(member->data, member->size, 7);
    }
    scene->texture_count = count;
    return 1;
}

static int pictures(const unsigned char *layout, int size, Scene *scene, int *eligible) {
    int position = 20, pane = 0, depth = 0, last_alpha = 0, stack[16], inherited = 0;
    while (position < size) {
        const unsigned char *block = layout + position;
        int length = (int)u32(block + 4), kind = 0;
        if (tagged(block, "pas1")) { stack[depth++] = inherited; inherited = last_alpha; }
        else if (tagged(block, "pae1")) inherited = stack[--depth];
        else {
            if (tagged(block, "pan1") || tagged(block, "pic1") || tagged(block, "txt1") || tagged(block, "prt1") || tagged(block, "bnd1") || tagged(block, "wnd1")) kind = 1;
            if (kind) {
                last_alpha = inherited || block[10] != 255;
                if (tagged(block, "pic1")) {
                    ScenePicture *picture = &scene->pictures[scene->picture_count];
                    int j;
                    if (!scene->material_count || length < 104 || scene->picture_count >= 128 || u16(block + 100) >= scene->material_count || block[102] > 3 || length < 104 + block[102] * 32) return 0;
                    picture->pane = pane; picture->material = u16(block + 100); picture->alpha = block[10];
                    picture->supported = block[102] == 1 && !inherited;
                    if (!real(block + 76, &picture->width) || !real(block + 80, &picture->height)) return 0;
                    for (j = 0; j < block[102] * 8; ++j) {
                        float value;
                        if (!real(block + 104 + j * 4, &value) || value < -64 || value > 64) return 0;
                        if (j < 8) picture->uv[j] = value;
                    }
                    for (j = 0; j < 16; ++j) picture->colors[j] = block[84 + j];
                    if (scene->materials[picture->material].detailed) {
                        if (picture->alpha != 255) picture->supported = 0;
                        for (j = 0; j < 16; ++j) if (picture->colors[j] != 255) picture->supported = 0;
                    }
                    if (picture->supported && scene->materials[picture->material].supported) ++*eligible;
                    ++scene->picture_count;
                }
                ++pane;
            }
        }
        position += length;
    }
    return pane == engine_layout_count();
}

int stage_scene_load(const unsigned char *data, int size) {
    static SceneArchive archive;
    static Scene scene;
    const SceneMember *layout = 0;
    int i, position, has_textures = 0, has_materials = 0, used = 0, padding = 0, unsupported = 0, eligible = 0, drawn;
    scene.texture_count = scene.material_count = scene.picture_count = 0;
    if (!scene_archive_open(data, size, &archive)) return 0;
    for (i = 0; i < archive.count; ++i) if (archive.members[i].size >= 4 && tagged(archive.members[i].data, "FLYT")) {
        if (layout) return 0;
        layout = &archive.members[i];
    }
    if (!layout || !engine_layout_load(layout->data, layout->size) || engine_layout_size(0) != 320 || engine_layout_size(1) != 240) return 0;
    position = 20;
    while (position < layout->size) {
        const unsigned char *block = layout->data + position;
        int length = (int)u32(block + 4);
        if (tagged(block, "txl1")) { if (has_textures++ || !textures(block, length, &archive, &scene, &used, &padding)) return 0; }
        if (tagged(block, "mat1")) { if (has_materials++ || !scene_materials(block, length, &scene, &unsupported)) return 0; }
        position += length;
    }
    if (!has_textures || !has_materials || !pictures(layout->data, layout->size, &scene, &eligible)) return 0;
    drawn = scene_render(&scene, frames[1 - current_frame], 320, 240);
    if (drawn < 0) return 0;
    current_frame = 1 - current_frame;
    statistics[0] = 320; statistics[1] = 240; statistics[2] = scene.texture_count; statistics[3] = archive.count;
    statistics[4] = engine_layout_count(); statistics[5] = scene.picture_count; statistics[6] = eligible; statistics[7] = drawn;
    statistics[8] = unsupported; statistics[9] = padding; statistics[10] = scene.picture_count - eligible;
    statistics[11] = archive.count - scene.texture_count - 1; statistics[12] = engine_layout_count() - scene.picture_count;
    statistics[13] = used; ++statistics[14];
    return 1;
}

const unsigned int *stage_scene_pixels(void) { return frames[current_frame]; }
int stage_scene_stat(int field) { return field >= 0 && field < 15 ? statistics[field] : -1; }
