#include "component.h"
#include "../app-shell/win32_api.h"

API DWORD GetModuleFileNameA(HINSTANCE instance, char *name, DWORD capacity);
API HANDLE CreateFileA(const char *name, DWORD access, DWORD share, void *security, DWORD creation, DWORD flags, HANDLE template_file);
API BOOL ReadFile(HANDLE file, void *data, DWORD size, DWORD *done, void *overlapped);
API BOOL CloseHandle(HANDLE file);
API void *VirtualAlloc(void *address, __SIZE_TYPE__ bytes, DWORD allocation, DWORD protection);
API BOOL VirtualFree(void *address, __SIZE_TYPE__ bytes, DWORD kind);
API HDC CreateCompatibleDC(HDC dc);
API BOOL DeleteDC(HDC dc);
API HANDLE CreateDIBSection(HDC dc, const void *info, UINT usage, void **bits, HANDLE section, DWORD offset);
API HANDLE SelectObject(HDC dc, HANDLE object);
API BOOL GdiFlush(void);
API int StretchDIBits(HDC dc, int x, int y, int width, int height, int source_x, int source_y, int source_width, int source_height, const void *bits, const void *info, UINT usage, DWORD operation);
typedef struct { DWORD size; int width, height; unsigned short planes, bits; DWORD compression, image_size; int x, y; DWORD colors, important; } BitmapInfo;
static const BitmapInfo source_info = {40, 320, -240, 1, 32, 0, 320 * 240 * 4, 0, 0, 0, 0};
static unsigned char archive[8388609];
static int loaded, archive_size;
int candidate_poison(unsigned char *archive, int archive_size);

static int has(const char *text, const char *part) {
    int i;
    for (i = 0; text[i]; ++i) { int j = 0; while (part[j] && text[i + j] == part[j]) ++j; if (!part[j]) return 1; }
    return 0;
}
static void output(const char *text) {
    DWORD done;
    int size = 0;
    while (text[size]) ++size;
    WriteFile(GetStdHandle((DWORD)-11), text, (DWORD)size, &done, (void *)0);
}
static void number(unsigned int value) {
    char digits[16];
    int i = 0, j;
    do { digits[i++] = (char)('0' + value % 10); value /= 10; } while (value);
    for (j = 0; j < i / 2; ++j) { char old = digits[j]; digits[j] = digits[i - j - 1]; digits[i - j - 1] = old; }
    digits[i] = 0; output(digits);
}
static unsigned int digest(int geometry) {
    unsigned int value = 2166136261u;
    int view, i, j;
    for (view = 0; view < 2; ++view) {
        if (geometry == 2) {
            for (i = 0; i < component_material_count(view); ++i) for (j = 0; j < 80; ++j)
                value = (value ^ component_material(view, i, j)) * 16777619u;
        } else if (geometry) {
            for (i = 0; i < component_scene_stat(view, 4); ++i) for (j = 0; j < 10; ++j) value = (value ^ (unsigned int)component_geometry(view, i, j)) * 16777619u;
        } else {
            const unsigned int *pixels = component_pixels(view);
            for (i = 0; i < 320 * 240; ++i) value = (value ^ pixels[i]) * 16777619u;
        }
    }
    return value;
}
static int load(void) {
    char path[1024];
    const char *suffix = "assets\\scene.arc";
    DWORD count = GetModuleFileNameA((HINSTANCE)0, path, sizeof(path)), done = 0;
    HANDLE file;
    int i, handle;
    if (!count || count >= sizeof(path)) return 0;
    while (count && path[count - 1] != '\\' && path[count - 1] != '/') --count;
    for (i = 0; suffix[i]; ++i) { if (count + i >= sizeof(path) - 1) return 0; path[count + i] = suffix[i]; }
    path[count + i] = 0;
    file = CreateFileA(path, 0x80000000u, 1, (void *)0, 3, 128, (HANDLE)0);
    if (file == (HANDLE)(__INTPTR_TYPE__)-1) return 0;
    i = ReadFile(file, archive, sizeof(archive), &done, (void *)0); CloseHandle(file);
    if (!i || !done || done > 8388608) return 0;
    archive_size = (int)done;
    handle = component_request("assets/scene.arc");
    return handle && component_claim() == handle && component_complete(handle, archive, archive_size) == 1;
}
static void draw(HDC dc, int width, int height) {
    int view;
    for (view = 0; view < 2; ++view) {
        int x = component_rect(0, view, width, height, 0), y = component_rect(0, view, width, height, 1);
        int w = component_rect(0, view, width, height, 2), h = component_rect(0, view, width, height, 3);
        if (w > 0 && h > 0) StretchDIBits(dc, x, y, w, h, 0, 0, 320, 240, component_pixels(view), &source_info, 0, 0x00cc0020u);
    }
}
static int offscreen(void) {
    BitmapInfo info = {40, 400, -480, 1, 32, 0, 400 * 480 * 4, 0, 0, 0, 0};
    HDC dc = CreateCompatibleDC((HDC)0);
    unsigned int *pixels = (unsigned int *)0;
    HANDLE bitmap, old;
    int i, valid = 1;
    if (!dc) return 0;
    bitmap = CreateDIBSection(dc, &info, 0, (void **)&pixels, (HANDLE)0, 0);
    if (!bitmap || !pixels) { DeleteDC(dc); return 0; }
    old = SelectObject(dc, bitmap);
    for (i = 0; i < 400 * 480; ++i) pixels[i] = 0xff20242cu;
    draw(dc, 400, 480);
    if (!GdiFlush()) valid = 0;
    for (i = 0; i < 400 * 480; ++i) {
        int x = i % 400, y = i / 400;
        unsigned int expected = x >= 40 && x < 360 ? component_pixels(y / 240)[(y % 240) * 320 + x - 40] : 0xff20242cu;
        if ((pixels[i] & 0xffffffu) != (expected & 0xffffffu)) valid = 0;
    }
    SelectObject(dc, old); DeleteObject(bitmap); DeleteDC(dc);
    return valid;
}
static int headless(int negative) {
    unsigned int pixels, geometry, materials;
    int generation, handle;
    if (!loaded) { output("{\"status\":\"private-asset-unavailable\",\"gameBuild\":false}\n"); return 2; }
    if (!offscreen()) return 3;
    pixels = digest(0); geometry = digest(1); materials = digest(2); generation = component_scene_stat(0, 14);
    if (negative) {
        if (!candidate_poison(archive, archive_size)) return 4;
        handle = component_request("assets/scene.arc");
        if (!handle || component_claim() != handle || component_complete(handle, archive, archive_size) != -1 ||
            component_scene_stat(0, 14) != generation || component_scene_stat(1, 14) != generation || digest(0) != pixels || digest(1) != geometry || digest(2) != materials || !offscreen()) return 5;
        output("{\"status\":\"late-material-rejection-preserves-both-views\",\"geometryAndPixelsPreserved\":true,\"constructedMaterialsPreserved\":true,\"gameBuild\":false}\n");
    } else {
        output("{\"status\":\"measured-atomic-dual-view-rendered\",\"gdiPixelsEqual\":true,\"frameFnv32\":"); number(pixels);
        output(",\"pictures\":"); number((unsigned int)component_scene_stat(0, 7));
        output(",\"skippedPictures\":"); number((unsigned int)component_scene_stat(0, 10));
        output(",\"constructedMaterials\":"); number((unsigned int)component_material_count(0));
        output(",\"logicalViews\":2,\"verifiedGdiPixels\":192000,\"recoveredResourceStackUsed\":true,\"gameBuild\":false}\n");
    }
    return 0;
}
static LRESULT window_proc(HWND window, UINT message, WPARAM wparam, LPARAM lparam) {
    if (message == 0x000f) {
        PAINTSTRUCT paint; RECT area;
        HDC dc = BeginPaint(window, &paint);
        HBRUSH brush = CreateSolidBrush(0x2c2420u);
        GetClientRect(window, &area);
        if (brush) { FillRect(dc, &area, brush); DeleteObject(brush); }
        if (loaded) draw(dc, area.right, area.bottom);
        else TextOutA(dc, 12, 24, "Import your extracted archive as assets/scene.arc", 47);
        EndPaint(window, &paint); return 0;
    }
    if (message == 0x0005) { InvalidateRect(window, (RECT *)0, 0); return 0; }
    if (message == 0x0007 || message == 0x0008) { component_resume(message == 0x0007); return 0; }
    if (message == 0x0100 || message == 0x0101) {
        int key = wparam == 38 ? 8 : wparam == 40 ? 9 : wparam == 37 ? 10 : wparam == 39 ? 11 : wparam == 32 ? 0 : -1;
        if (key >= 0) component_button(key, message == 0x0100);
        return 0;
    }
    if (message == 0x0201 || message == 0x0200 || message == 0x0202) {
        RECT area;
        int down = message != 0x0202;
        GetClientRect(window, &area);
        if (message != 0x0200 || (wparam & 1)) component_touch(0, area.right, area.bottom, (short)lparam, (short)(lparam >> 16), down);
        if (message == 0x0201) SetCapture(window);
        if (message == 0x0202) ReleaseCapture();
        return 0;
    }
    if (message == 0x0002) { component_resume(0); component_surface(0, 1, 0); PostQuitMessage(0); return 0; }
    return DefWindowProcA(window, message, wparam, lparam);
}
void mainCRTStartup(void) {
    const char *command = GetCommandLineA();
    WNDCLASSA klass = {0}; MSG message; HWND window;
    void *material_memory = VirtualAlloc((void *)0, 65536, 0x3000, 4);
    component_reset();
    if (!component_allocator(material_memory, 65536)) ExitProcess(19);
    component_resume(1); component_surface(0, 1, 1); loaded = load();
    if (has(command, "--headless")) {
        int status = headless(has(command, "--negative-import"));
        VirtualFree(material_memory, 0, 0x8000); ExitProcess((UINT)status);
    }
    klass.lpfnWndProc = window_proc; klass.hInstance = GetModuleHandleA((const char *)0); klass.lpszClassName = "DqmAtomicViews";
    klass.hCursor = LoadCursorA((HINSTANCE)0, (const char *)32512);
    if (!RegisterClassA(&klass)) ExitProcess(20);
    window = CreateWindowExA(0, klass.lpszClassName, "DQM Measured Material Views", 0x00cf0000, 100, 100, 640, 1000, (HWND)0, (HANDLE)0, klass.hInstance, (void *)0);
    if (!window) ExitProcess(21);
    ShowWindow(window, 5); UpdateWindow(window);
    while (GetMessageA(&message, (HWND)0, 0, 0) > 0) { TranslateMessage(&message); DispatchMessageA(&message); }
    VirtualFree(material_memory, 0, 0x8000); ExitProcess((UINT)message.wParam);
}
