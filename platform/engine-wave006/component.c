#include "component.h"
#include "scene_internal.h"
#include "material_service.h"
#include "../engine-wave002/engine.h"

typedef struct { unsigned int pixels[320 * 240], materials[32][80], projections[128][2][8]; int geometry[128][10], stats[15], material_count; } PublishedScene;
static PublishedScene published[2];
static int current, generation, touch_x, touch_y, selected = -1, tokens[2], latest_request;
int stage_scene_load(const unsigned char *data, int size);
const unsigned int *stage_scene_pixels(void);
int stage_scene_stat(int field);
int staging_layout_value(int pane, int field);
int legacy_scene_load(const unsigned char *data, int size);

static int hit(int x, int y) {
    int i;
    PublishedScene *scene = &published[current];
    for (i = scene->stats[4] - 1; i >= 0; --i) {
        const int *p = scene->geometry[i];
        float ax, ay, bx, by, dx, dy, determinant, u, v;
        if (!p[9] || p[8] != 2) continue;
        ax = (p[2] - p[0]) / 1000.0f; ay = (p[3] - p[1]) / 1000.0f;
        bx = (p[6] - p[0]) / 1000.0f; by = (p[7] - p[1]) / 1000.0f;
        dx = x + 0.5f - p[0] / 1000.0f; dy = y + 0.5f - p[1] / 1000.0f;
        determinant = ax * by - ay * bx;
        if (determinant > -0.000001f && determinant < 0.000001f) continue;
        u = (dx * by - dy * bx) / determinant; v = (dy * ax - dx * ay) / determinant;
        if (u >= 0 && v >= 0 && u < 1 && v < 1) return i;
    }
    return -1;
}

int engine_scene_load(const unsigned char *data, int size) {
    static SceneArchive archive;
    const SceneMember *layout = 0;
    PublishedScene *next = &published[1 - current];
    const unsigned int *pixels;
    int i, j;
    if (!scene_archive_open(data, size, &archive) || !stage_scene_load(data, size)) return 0;
    for (i = 0; i < archive.count; ++i) {
        const SceneMember *member = &archive.members[i];
        if (member->size >= 4 && member->data[0] == 'F' && member->data[1] == 'L' && member->data[2] == 'Y' && member->data[3] == 'T') layout = member;
    }
    if (!layout) return 0;
    for (i = 0; i < 15; ++i) next->stats[i] = stage_scene_stat(i);
    if (next->stats[0] != 320 || next->stats[1] != 240 || next->stats[4] < 1 || next->stats[4] > 128 || next->stats[10] != 0) return 0;
    for (i = 0; i < next->stats[4]; ++i) for (j = 0; j < 10; ++j) next->geometry[i][j] = staging_layout_value(i, j);
    next->material_count = stage_material_count();
    if (next->material_count < 1 || next->material_count > 32) return 0;
    for (i = 0; i < next->material_count; ++i) for (j = 0; j < 80; ++j) next->materials[i][j] = stage_material_value(i, j);
    for (i = 0; i < next->stats[5]; ++i) for (j = 0; j < 2; ++j) for (int field = 0; field < 8; ++field)
        next->projections[i][j][field] = stage_projection_value(i, j, field);
    pixels = stage_scene_pixels();
    for (i = 0; i < 320 * 240; ++i) next->pixels[i] = pixels[i];
    if (!legacy_scene_load(layout->data, layout->size)) return 0;
    next->stats[14] = ++generation;
    current = 1 - current;
    selected = -1; touch_x = touch_y = 0;
    return 1;
}

void component_reset(void) {
    int bank, i;
    engine_reset(); current = generation = touch_x = touch_y = latest_request = 0; selected = -1; tokens[0] = tokens[1] = 0;
    material_memory_clear();
    for (bank = 0; bank < 2; ++bank) {
        for (i = 0; i < 15; ++i) published[bank].stats[i] = 0;
        published[bank].material_count = 0;
        for (i = 0; i < 320 * 240; ++i) published[bank].pixels[i] = 0xff20242cu;
    }
}

int component_allocator(void *memory, int bytes) {
    __UINTPTR_TYPE__ begin = (__UINTPTR_TYPE__)memory, first = (__UINTPTR_TYPE__)published;
    if (bytes <= 0 || begin + (unsigned int)bytes < begin ||
        (begin < first + sizeof(published) && first < begin + (unsigned int)bytes)) return 0;
    return material_memory_bind(memory, bytes);
}
int component_material_count(int view) { return view >= 0 && view < 2 ? published[current].material_count : -1; }
unsigned int component_material(int view, int index, int field) {
    return view >= 0 && view < 2 && index >= 0 && index < published[current].material_count && field >= 0 && field < 80 ? published[current].materials[index][field] : 0;
}
unsigned int component_projection(int view, int picture, int reference, int field) {
    return view >= 0 && view < 2 && picture >= 0 && picture < published[current].stats[5] && reference >= 0 && reference < 2 && field >= 0 && field < 8 ?
        published[current].projections[picture][reference][field] : 0;
}

void component_resume(int active) { engine_resume(active); if (!active) { touch_x = touch_y = latest_request = 0; selected = -1; } }
void component_surface(int role, int token, int ready) {
    int clear, button;
    if (role < 0 || role > 1 || token <= 0 || token < tokens[role]) return;
    clear = (ready && token > tokens[role]) || (!ready && token == tokens[role]);
    if (ready) tokens[role] = token;
    engine_surface(role, token, ready);
    if (clear) {
        for (button = 0; button < 16; ++button) engine_button(button, 0);
        engine_axis(0, 0); engine_touch(role, 0, 0, 0, 0, 0);
        touch_x = touch_y = 0; selected = -1;
    }
}
int component_request(const char *path) {
    int handle = engine_snapshot(11) ? engine_request(path) : 0;
    if (handle) latest_request = handle;
    return handle;
}
int component_claim(void) { return engine_snapshot(11) ? engine_claim() : 0; }
int component_complete(int handle, const unsigned char *data, int size) {
    if (handle != latest_request) { engine_complete(handle, (const unsigned char *)0, 0); return 0; }
    return engine_complete(handle, data, size);
}
int component_job_status(int handle) { return engine_resource_status(handle); }
void component_button(int button, int down) { engine_button(button, down); }
void component_axis(int x, int y) { engine_axis(x, y); }
int component_step(int owner, int elapsed) { return engine_step(owner, elapsed); }

int component_rect(int role, int view, int width, int height, int field) {
    EngineRect r;
    int w, h;
    if (width <= 0 || height <= 0 || width > 1048576 || height > 1048576) return 0;
    engine_rect(role, view, width, height, &r);
    w = r.width; h = w * 240 / 320;
    if (h > r.height) { h = r.height; w = h * 320 / 240; }
    r.left += (r.width - w) / 2; r.top += (r.height - h) / 2;
    if (field == 0) return r.left;
    if (field == 1) return r.top;
    if (field == 2) return w;
    return field == 3 ? h : 0;
}

int component_touch(int role, int width, int height, int x, int y, int down) {
    EngineRect r;
    if (down && (width <= 0 || height <= 0 || width > 1048576 || height > 1048576)) return 0;
    int result = engine_touch(role, width, height, x, y, down);
    if (!down) { selected = -1; return result; }
    if (!result) return 0;
    engine_rect(role, 1, width, height, &r);
    touch_x = (int)((long long)(x - r.left) * 320 / r.width);
    touch_y = (int)((long long)(y - r.top) * 240 / r.height);
    selected = hit(touch_x, touch_y);
    return 1;
}

int component_state(int field) {
    if (field == 12) return touch_x;
    if (field == 13) return touch_y;
    return field == 14 ? selected : engine_snapshot(field);
}

int component_scene_stat(int view, int field) { return view >= 0 && view < 2 && field >= 0 && field < 15 ? published[current].stats[field] : -1; }
int component_geometry(int view, int pane, int field) {
    return view >= 0 && view < 2 && pane >= 0 && pane < published[current].stats[4] && field >= 0 && field < 10 ? published[current].geometry[pane][field] : 0;
}
const unsigned int *component_pixels(int view) { return view >= 0 && view < 2 ? published[current].pixels : (const unsigned int *)0; }
