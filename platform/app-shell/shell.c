#include "shell.h"

extern u32 fn_003453a8(u32 value);
typedef struct {
    u32 ticks;
    u32 buttons;
    int axis_x;
    int axis_y;
    int touch_view;
    int touch_x;
    int touch_y;
    int resumed;
    int surfaces;
    int generations[2];
} ShellState;
static ShellState state;

void shell_reset(void) {
    state.ticks = 0;
    state.buttons = 0;
    state.axis_x = 0;
    state.axis_y = 0;
    state.touch_view = -1;
    state.touch_x = 0;
    state.touch_y = 0;
    state.resumed = 0;
    state.surfaces = 0;
    state.generations[0] = 0;
    state.generations[1] = 0;
}

void shell_resume(int resumed) {
    state.resumed = resumed != 0;
    if (!resumed) {
        state.buttons = 0;
        state.axis_x = 0;
        state.axis_y = 0;
    }
}

void shell_surface(int role, int token, int ready) {
    if (role < 0 || role > 1) return;
    if (ready) {
        state.generations[role] = token;
        state.surfaces |= 1 << role;
    } else if (state.generations[role] == token) state.surfaces &= ~(1 << role);
}

void shell_step(int owner) {
    if (owner == 0 && state.resumed && (state.surfaces & 1)) ++state.ticks;
}

void shell_restore(int ticks) { state.ticks = (u32)ticks; }

void shell_button(int button, int down) {
    if (!state.resumed || button < 0 || button >= 16) return;
    if (down) state.buttons |= 1u << button;
    else state.buttons &= ~(1u << button);
}

void shell_axis(int x, int y) {
    if (!state.resumed) return;
    state.axis_x = x < -32767 ? -32767 : x > 32767 ? 32767 : x;
    state.axis_y = y < -32767 ? -32767 : y > 32767 ? 32767 : y;
}

int shell_snapshot(int field) {
    switch (field) {
    case 0: return (int)state.ticks;
    case 1: return (int)state.buttons;
    case 2: return state.axis_x;
    case 3: return state.axis_y;
    case 4: return state.touch_view;
    case 5: return state.touch_x;
    case 6: return state.touch_y;
    case 7: return state.surfaces;
    case 8: return state.resumed;
    default: return 0;
    }
}

int shell_smoke(void) { return (int)fn_003453a8(2); }

void shell_rect(int width, int height, int role, int view, int secondary, ShellRect *result) {
    int area_top = 0;
    int area_height = height;
    int logical_width = view == 0 ? 400 : 320;
    result->left = result->top = result->width = result->height = 0;
    if (width <= 0 || height <= 0 || role < 0 || role > 1 || view < 0 || view > 1) return;
    if (role == 1 && (!secondary || view != 1)) return;
    if (role == 0 && secondary && view != 0) return;
    if (role == 0 && !secondary) {
        area_top = view == 0 ? 0 : height / 2;
        area_height = view == 0 ? height / 2 : height - height / 2;
    }
    if ((long long)width * 240 <= (long long)area_height * logical_width) {
        result->width = width;
        result->height = (int)((long long)width * 240 / logical_width);
    } else {
        result->height = area_height;
        result->width = (int)((long long)area_height * logical_width / 240);
    }
    if (result->width <= 0 || result->height <= 0) {
        result->width = result->height = 0;
        return;
    }
    result->left = (width - result->width) / 2;
    result->top = area_top + (area_height - result->height) / 2;
}

long long shell_route(int width, int height, int role, int secondary, int x, int y) {
    int view;
    for (view = 0; view < 2; ++view) {
        ShellRect rect;
        int logical_width = view == 0 ? 400 : 320;
        shell_rect(width, height, role, view, secondary, &rect);
        if (rect.width <= 0 || rect.height <= 0 || x < rect.left || y < rect.top ||
            x >= rect.left + rect.width || y >= rect.top + rect.height) continue;
        return ((long long)view << 32) |
            ((long long)(x - rect.left) * logical_width / rect.width << 16) |
            ((long long)(y - rect.top) * 240 / rect.height);
    }
    return -1;
}

long long shell_touch(int width, int height, int role, int x, int y) {
    long long mapped = shell_route(width, height, role, !!(state.surfaces & 2), x, y);
    if (mapped >= 0) {
        state.touch_view = (int)(mapped >> 32);
        state.touch_x = (int)((mapped >> 16) & 65535);
        state.touch_y = (int)(mapped & 65535);
    }
    return mapped;
}

int shell_self_test(void) {
    int failure = 0;
    ShellRect rect;
    shell_reset();
    if (shell_smoke() != 1000) failure |= 1;
    shell_rect(400, 480, 0, 1, 0, &rect);
    if (rect.left != 40 || rect.top != 240 || rect.width != 320 || rect.height != 240) failure |= 2;
    if (shell_route(400, 480, 0, 0, 240, 360) != ((1LL << 32) | (200LL << 16) | 120)) failure |= 4;
    if (shell_route(400, 480, 0, 0, 0, 360) != -1) failure |= 8;
    shell_resume(1);
    shell_surface(0, 1, 1);
    shell_step(1);
    if (shell_snapshot(0) != 0) failure |= 16;
    shell_resume(0);
    shell_step(0);
    if (shell_snapshot(0) != 0) failure |= 32;
    shell_resume(1);
    shell_surface(0, 1, 0);
    shell_step(0);
    if (shell_snapshot(0) != 0) failure |= 64;
    shell_surface(0, 2, 1);
    shell_surface(0, 1, 0);
    if (!(shell_snapshot(7) & 1)) failure |= 128;
    shell_step(0);
    if (shell_snapshot(0) != 1) failure |= 256;
    shell_surface(1, 3, 1);
    shell_surface(1, 3, 0);
    shell_step(0);
    if (shell_snapshot(0) != 2 || shell_snapshot(7) != 1) failure |= 512;
    shell_button(0, 1);
    shell_axis(-99999, 99999);
    if (shell_snapshot(2) != -32767 || shell_snapshot(3) != 32767) failure |= 1024;
    shell_resume(0);
    if (shell_snapshot(1) || shell_snapshot(2) || shell_snapshot(3)) failure |= 2048;
    if (shell_route(400, 480, 0, 0, 400, 100) != -1) failure |= 4096;
    return failure;
}
