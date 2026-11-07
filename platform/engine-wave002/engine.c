#include "engine.h"
#include "layout.h"

static struct {
    EngineU32 ticks;
    int x, y, speed, loaded, active, buttons, axis_x, axis_y, touch;
    int surfaces, generations[2], accumulated, error;
} state;

static EngineU32 read32(const EngineByte *data) {
    return data[0] | ((EngineU32)data[1] << 8) | ((EngineU32)data[2] << 16) | ((EngineU32)data[3] << 24);
}

static void write32(EngineByte *data, EngineU32 value) {
    int i;
    for (i = 0; i < 4; ++i) data[i] = (EngineByte)(value >> (i * 8));
}

EngineU32 engine_checksum(const EngineByte *data, int size) {
    EngineU32 hash = 2166136261u;
    int i;
    if (!data || size < 0) return 0;
    for (i = 0; i < size; ++i) hash = (hash ^ data[i]) * 16777619u;
    return hash;
}

void engine_reset(void) {
    state.ticks = 0;
    state.x = state.y = state.speed = state.loaded = state.active = state.buttons = 0;
    state.axis_x = state.axis_y = state.touch = state.surfaces = state.accumulated = state.error = 0;
    state.generations[0] = state.generations[1] = 0;
    engine_resources_reset();
    engine_layout_reset();
}

void engine_resume(int active) {
    state.active = active != 0;
    state.accumulated = 0;
    if (!state.active) {
        state.buttons = state.axis_x = state.axis_y = state.touch = 0;
        engine_resources_pause();
    }
}

void engine_surface(int role, int generation, int ready) {
    if (role < 0 || role > 1 || generation <= 0 || generation < state.generations[role]) return;
    if (ready) {
        state.generations[role] = generation;
        state.surfaces |= 1 << role;
    } else if (generation == state.generations[role]) {
        state.surfaces &= ~(1 << role);
        if (role == 0) state.accumulated = 0;
    }
}

int engine_step(int owner, int elapsed_us) {
    int count = 0;
    if (owner != 0 || !state.active || !(state.surfaces & 1) || !state.loaded || elapsed_us <= 0) return 0;
    if (elapsed_us > 133328) elapsed_us = 133328;
    state.accumulated += elapsed_us;
    while (state.accumulated >= 16666 && count < 8) {
        int x = !!(state.buttons & (1 << 11)) - !!(state.buttons & (1 << 10));
        int y = !!(state.buttons & (1 << 9)) - !!(state.buttons & (1 << 8));
        if (!x) x = (state.axis_x > 8192) - (state.axis_x < -8192);
        if (!y) y = (state.axis_y > 8192) - (state.axis_y < -8192);
        state.x += x * state.speed;
        state.y += y * state.speed;
        if (state.x < 0) state.x = 0;
        if (state.x > 399) state.x = 399;
        if (state.y < 0) state.y = 0;
        if (state.y > 239) state.y = 239;
        state.accumulated -= 16666;
        ++state.ticks;
        ++count;
    }
    return count;
}

void engine_button(int button, int down) {
    if (!state.active || button < 0 || button > 15) return;
    if (down) state.buttons |= 1 << button;
    else state.buttons &= ~(1 << button);
}

void engine_axis(int x, int y) {
    if (!state.active) return;
    state.axis_x = x < -32767 ? -32767 : x > 32767 ? 32767 : x;
    state.axis_y = y < -32767 ? -32767 : y > 32767 ? 32767 : y;
}

void engine_rect(int role, int view, int width, int height, EngineRect *rect) {
    int top = 0, area = height, logical = view == 0 ? 400 : 320;
    rect->left = rect->top = rect->width = rect->height = 0;
    if (role < 0 || role > 1 || view < 0 || view > 1 || width <= 0 || height <= 0) return;
    if (role == 1 && (!(state.surfaces & 2) || view != 1)) return;
    if (role == 0 && (state.surfaces & 2) && view == 1) return;
    if (role == 0 && !(state.surfaces & 2)) {
        top = view == 0 ? 0 : height / 2;
        area = view == 0 ? height / 2 : height - height / 2;
    }
    if ((long long)width * 240 <= (long long)area * logical) {
        rect->width = width;
        rect->height = (int)((long long)width * 240 / logical);
    } else {
        rect->height = area;
        rect->width = (int)((long long)area * logical / 240);
    }
    rect->left = (width - rect->width) / 2;
    rect->top = top + (area - rect->height) / 2;
}

int engine_touch(int role, int width, int height, int x, int y, int down) {
    EngineRect rect;
    if (role < 0 || role > 1) return 0;
    if (!down) { state.touch = 0; return 1; }
    if (!state.active || !state.loaded || !(state.surfaces & (1 << role))) return 0;
    engine_rect(role, 1, width, height, &rect);
    if (rect.width <= 0 || rect.height <= 0 || x < rect.left || y < rect.top ||
        x >= rect.left + rect.width || y >= rect.top + rect.height) return 0;
    state.x = (int)((long long)(x - rect.left) * 400 / rect.width);
    state.y = (int)((long long)(y - rect.top) * 240 / rect.height);
    state.touch = 1;
    return 1;
}

int engine_scene_load(const EngineByte *data, int size) {
    static const EngineByte tag[8] = {'D', 'Q', 'M', '2', 'S', 'C', 'N', '1'};
    int i;
    if (data && size >= 4 && data[0] == 'F' && data[1] == 'L' && data[2] == 'Y' && data[3] == 'T') {
        if (!engine_layout_load(data, size)) { state.error = 4; return 0; }
        state.loaded = 2; state.speed = state.x = state.y = state.error = 0;
        return 1;
    }
    if (!data || size != 32) { state.error = 1; return 0; }
    for (i = 0; i < 8; ++i) if (data[i] != tag[i]) { state.error = 2; return 0; }
    if (read32(data + 28) != engine_checksum(data, 28) || read32(data + 8) != 400 || read32(data + 12) != 240 ||
        read32(data + 16) >= 400 || read32(data + 20) >= 240 || read32(data + 24) < 1 || read32(data + 24) > 10) {
        state.error = 3; return 0;
    }
    state.x = (int)read32(data + 16);
    state.y = (int)read32(data + 20);
    state.speed = (int)read32(data + 24);
    state.loaded = 1;
    engine_layout_reset();
    state.error = 0;
    return 1;
}

int engine_checkpoint(EngineByte *output, int capacity) {
    static const EngineByte tag[8] = {'D', 'Q', 'M', '2', 'S', 'A', 'V', 'E'};
    int i;
    if (state.loaded != 1 || !output || capacity < 28) return 0;
    for (i = 0; i < 8; ++i) output[i] = tag[i];
    write32(output + 8, 1);
    write32(output + 12, state.ticks);
    write32(output + 16, (EngineU32)state.x);
    write32(output + 20, (EngineU32)state.y);
    write32(output + 24, engine_checksum(output, 24));
    return 28;
}

int engine_restore(const EngineByte *data, int size) {
    static const EngineByte tag[8] = {'D', 'Q', 'M', '2', 'S', 'A', 'V', 'E'};
    int i;
    if (state.loaded != 1 || !data || size != 28) return 0;
    for (i = 0; i < 8; ++i) if (data[i] != tag[i]) return 0;
    if (read32(data + 8) != 1 || read32(data + 24) != engine_checksum(data, 24) ||
        read32(data + 16) >= 400 || read32(data + 20) >= 240) return 0;
    state.ticks = read32(data + 12);
    state.x = (int)read32(data + 16);
    state.y = (int)read32(data + 20);
    state.accumulated = state.buttons = state.axis_x = state.axis_y = state.touch = 0;
    return 1;
}

int engine_snapshot(int field) {
    switch (field) {
    case 0: return (int)state.ticks;
    case 1: return state.x;
    case 2: return state.y;
    case 3: return state.loaded;
    case 4: return engine_resources_pending();
    case 5: return state.buttons;
    case 6: return state.axis_x;
    case 7: return state.axis_y;
    case 8: return state.surfaces;
    case 9: return state.error;
    case 10: return state.touch;
    case 11: return state.active;
    default: return 0;
    }
}
