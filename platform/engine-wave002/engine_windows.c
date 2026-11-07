#include "engine.h"
#include "windows_io.h"
#include "layout.h"

API void Sleep(DWORD milliseconds);
API BOOL MoveToEx(HDC dc, int x, int y, POINT *old);
API BOOL LineTo(HDC dc, int x, int y);
API int SaveDC(HDC dc);
API BOOL RestoreDC(HDC dc, int state);
API int IntersectClipRect(HDC dc, int left, int top, int right, int bottom);
API HDC CreateCompatibleDC(HDC dc);
API BOOL DeleteDC(HDC dc);
API HANDLE CreateDIBSection(HDC dc, const void *info, UINT usage, void **bits, HANDLE section, DWORD offset);
API HANDLE SelectObject(HDC dc, HANDLE object);
API BOOL GdiFlush(void);
static int loading;
static int measured;

static void draw_layout(HDC dc, const EngineRect *rect) {
    int pane, edge, saved;
    int width = engine_layout_size(0), height = engine_layout_size(1);
    if (width <= 0 || height <= 0) return;
    saved = SaveDC(dc);
    IntersectClipRect(dc, rect->left, rect->top, rect->left + rect->width, rect->top + rect->height);
    for (pane = 0; pane < engine_layout_count(); ++pane) {
        if (!engine_layout_value(pane, 9)) continue;
        for (edge = 0; edge < 5; ++edge) {
            int point = edge % 4;
            int x = rect->left + (int)((long long)engine_layout_value(pane, point * 2) * rect->width / (width * 1000));
            int y = rect->top + (int)((long long)engine_layout_value(pane, point * 2 + 1) * rect->height / (height * 1000));
            if (edge) LineTo(dc, x, y); else MoveToEx(dc, x, y, (POINT *)0);
        }
    }
    RestoreDC(dc, saved);
}

static int offscreen_layout(void) {
    struct { DWORD size; int width, height; unsigned short planes, bits; DWORD compression, image_size; int x, y; DWORD colors, important; } info = {40, 320, -240, 1, 32, 0, 320 * 240 * 4, 0, 0, 0, 0};
    HDC dc = CreateCompatibleDC((HDC)0);
    EngineByte *pixels = (EngineByte *)0;
    HANDLE bitmap, old;
    EngineRect rect = {0, 0, 320, 240};
    int i, lit = 0;
    if (!dc) return 0;
    bitmap = CreateDIBSection(dc, &info, 0, (void **)&pixels, (HANDLE)0, 0);
    if (!bitmap || !pixels) { DeleteDC(dc); return 0; }
    old = SelectObject(dc, bitmap);
    for (i = 0; i < 320 * 240 * 4; ++i) pixels[i] = 255;
    draw_layout(dc, &rect);
    GdiFlush();
    for (i = 0; i < 320 * 240 * 4; ++i) if (pixels[i] != 255) ++lit;
    SelectObject(dc, old); DeleteObject(bitmap); DeleteDC(dc);
    return lit > 100;
}

static int has(const char *text, const char *part) {
    int i;
    for (i = 0; text[i]; ++i) {
        int j = 0;
        while (part[j] && text[i + j] == part[j]) ++j;
        if (!part[j]) return 1;
    }
    return 0;
}

static void output(const char *text) {
    DWORD done;
    int count = 0;
    while (text[count]) ++count;
    WriteFile(GetStdHandle((DWORD)-11), text, (DWORD)count, &done, (void *)0);
}

static int load(const char *name) {
    int handle = engine_request(name);
    if (!handle || engine_claim() != handle || !engine_io_start(handle)) return 0;
    return handle;
}

static int headless(int negative) {
    int i, handle, result = 0;
    engine_reset();
    engine_resume(1);
    engine_surface(0, 1, 1);
    handle = load(measured ? "layouts/measured.bflyt" : negative ? "scenes/corrupt.dat" : "scenes/example.dat");
    if (!handle) return 1;
    for (i = 0; i < 2500; ++i) {
        result = engine_io_poll();
        if (result) break;
        Sleep(2);
    }
    engine_io_close();
    if (negative) {
        if (result != -1 || engine_snapshot(3) || engine_resource_status(handle) != 4) return 2;
        output("{\"status\":\"rejected-corrupt-asset\",\"workerIoExecuted\":true,\"gameBuild\":false}\n");
        return 0;
    }
    if (result != 1 || engine_resource_status(handle) != 3) return 3;
    if (measured) {
        if (engine_snapshot(3) != 2 || engine_layout_count() != 35 || !offscreen_layout()) return 9;
        output("{\"status\":\"measured-layout-rendered\",\"workerIoExecuted\":true,\"paneCount\":35,\"gdiOffscreenRendered\":true,\"gameBuild\":false}\n");
        return 0;
    }
    engine_button(11, 1);
    for (i = 0; i < 60; ++i) if (engine_step(0, 16666) != 1) return 4;
    if (engine_snapshot(0) != 60 || engine_snapshot(1) != 280) return 5;
    if (!engine_disk_checkpoint(1)) return 6;
    engine_button(11, 0);
    engine_axis(-32767, 0);
    engine_step(0, 16666);
    if (!engine_disk_checkpoint(0) || engine_snapshot(0) != 60 || engine_snapshot(1) != 280) return 7;
    engine_resume(0);
    if (engine_step(0, 16666) || engine_snapshot(5) || engine_snapshot(6)) return 8;
    output("{\"status\":\"native-engine-services-passed\",\"workerIoExecuted\":true,\"checkpointDiskRoundtrip\":true,\"simulationTicks\":60,\"gameBuild\":false}\n");
    return 0;
}

static void paint(HWND window) {
    PAINTSTRUCT info;
    RECT area;
    HDC dc = BeginPaint(window, &info);
    int view;
    GetClientRect(window, &area);
    for (view = 0; view < 2; ++view) {
        EngineRect fitted;
        RECT background, actor;
        HBRUSH brush;
        engine_rect(0, view, area.right, area.bottom, &fitted);
        background.left = fitted.left; background.top = fitted.top;
        background.right = fitted.left + fitted.width; background.bottom = fitted.top + fitted.height;
        brush = CreateSolidBrush(view ? 0x4b2338 : 0x4a3a18);
        FillRect(dc, &background, brush);
        DeleteObject(brush);
        if (engine_snapshot(3) == 2) { draw_layout(dc, &fitted); continue; }
        actor.left = fitted.left + engine_snapshot(1) * fitted.width / 400;
        actor.top = fitted.top + engine_snapshot(2) * fitted.height / 240;
        actor.right = actor.left + 12; actor.bottom = actor.top + 12;
        brush = CreateSolidBrush(0x5abeDC);
        FillRect(dc, &actor, brush);
        DeleteObject(brush);
        SetBkMode(dc, 1);
        SetTextColor(dc, 0xffffff);
        if (view == 0) TextOutA(dc, fitted.left + 10, fitted.top + 12, "Portable scene services", 23);
        else TextOutA(dc, fitted.left + 10, fitted.top + 12, "Touch map", 9);
    }
    EndPaint(window, &info);
}

static int key(WPARAM value) {
    switch ((int)value) {
    case 38: return 8;
    case 40: return 9;
    case 37: return 10;
    case 39: return 11;
    default: return -1;
    }
}

static LRESULT window_proc(HWND window, UINT message, WPARAM wparam, LPARAM lparam) {
    switch (message) {
    case 0x0001:
        engine_reset(); engine_resume(1); engine_surface(0, 1, 1);
        loading = load(measured ? "layouts/measured.bflyt" : "scenes/example.dat");
        SetTimer(window, 1, 16, (void *)0);
        return 0;
    case 0x0113: {
        int io = engine_io_poll();
        if (io && loading) { if (io == 1) engine_disk_checkpoint(0); loading = 0; }
        if (!loading && !engine_snapshot(3) && engine_snapshot(11)) loading = load(measured ? "layouts/measured.bflyt" : "scenes/example.dat");
        engine_step(0, 16666);
        InvalidateRect(window, (RECT *)0, 0);
        return 0;
    }
    case 0x000f: paint(window); return 0;
    case 0x0100: case 0x0101:
        engine_button(key(wparam), message == 0x0100); return 0;
    case 0x0201: case 0x0200: {
        RECT area;
        GetClientRect(window, &area);
        if (message == 0x0201) SetCapture(window);
        if (wparam & 1) engine_touch(0, area.right, area.bottom, (short)(lparam & 65535), (short)((lparam >> 16) & 65535), 1);
        return 0;
    }
    case 0x0202: engine_touch(0, 0, 0, 0, 0, 0); ReleaseCapture(); return 0;
    case 0x0008: engine_resume(0); engine_disk_checkpoint(1); return 0;
    case 0x0007: engine_resume(1); if (!engine_snapshot(3) && !loading) loading = load(measured ? "layouts/measured.bflyt" : "scenes/example.dat"); return 0;
    case 0x0002:
        engine_resume(0); engine_disk_checkpoint(1); engine_io_close(); KillTimer(window, 1); PostQuitMessage(0); return 0;
    default: return DefWindowProcA(window, message, wparam, lparam);
    }
}

void mainCRTStartup(void) {
    const char *command = GetCommandLineA();
    WNDCLASSA klass = {0};
    MSG message;
    HWND window;
    measured = has(command, "--measured-layout");
    if (has(command, "--headless")) ExitProcess((UINT)headless(has(command, "--negative-asset")));
    klass.lpfnWndProc = window_proc;
    klass.hInstance = GetModuleHandleA((const char *)0);
    klass.lpszClassName = "DqmPortableEngine";
    klass.hCursor = LoadCursorA((HINSTANCE)0, (const char *)32512);
    if (!RegisterClassA(&klass)) ExitProcess(20);
    window = CreateWindowExA(0, klass.lpszClassName, "DQM Portable Services", 0x00cf0000, 100, 100, 640, 800,
                            (HWND)0, (HANDLE)0, klass.hInstance, (void *)0);
    if (!window) ExitProcess(21);
    ShowWindow(window, 5); UpdateWindow(window);
    while (GetMessageA(&message, (HWND)0, 0, 0) > 0) { TranslateMessage(&message); DispatchMessageA(&message); }
    ExitProcess((UINT)message.wParam);
}
