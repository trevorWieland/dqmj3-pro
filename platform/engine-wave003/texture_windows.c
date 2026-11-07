#include "texture.h"
#include "../app-shell/win32_api.h"

API DWORD GetModuleFileNameA(HINSTANCE instance, char *name, DWORD capacity);
API HANDLE CreateFileA(const char *name, DWORD access, DWORD share, void *security, DWORD creation, DWORD flags, HANDLE template_file);
API BOOL ReadFile(HANDLE file, void *data, DWORD size, DWORD *done, void *overlapped);
API BOOL CloseHandle(HANDLE file);
API HDC CreateCompatibleDC(HDC dc);
API BOOL DeleteDC(HDC dc);
API HANDLE CreateDIBSection(HDC dc, const void *info, UINT usage, void **bits, HANDLE section, DWORD offset);
API HANDLE SelectObject(HDC dc, HANDLE object);
API BOOL GdiFlush(void);
API int StretchDIBits(HDC dc, int x, int y, int width, int height, int source_x, int source_y, int source_width, int source_height, const void *bits, const void *info, UINT usage, DWORD operation);
typedef struct { DWORD size; int width, height; unsigned short planes, bits; DWORD compression, image_size; int x, y; DWORD colors, important; } BitmapInfo;
static const BitmapInfo info = {40, 320, -240, 1, 32, 0, 320 * 240 * 4, 0, 0, 0, 0};
static unsigned char archive[8388609];
static int archive_size, loaded;

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

static unsigned int checksum(const unsigned int *pixels) {
    unsigned int value = 2166136261u;
    int i, shift;
    for (i = 0; i < 320 * 240; ++i) for (shift = 16; shift >= 0; shift -= 8) value = (value ^ ((pixels[i] >> shift) & 255)) * 16777619u;
    return value;
}

static int load(void) {
    char path[1024];
    const char *suffix = "assets\\scene.arc";
    DWORD count = GetModuleFileNameA((HINSTANCE)0, path, sizeof(path)), done = 0;
    HANDLE file;
    int i;
    if (!count || count >= sizeof(path)) return 0;
    while (count && path[count - 1] != '\\' && path[count - 1] != '/') --count;
    for (i = 0; suffix[i]; ++i) { if (count + i >= sizeof(path) - 1) return 0; path[count + i] = suffix[i]; }
    path[count + i] = 0;
    file = CreateFileA(path, 0x80000000u, 1, (void *)0, 3, 128, (HANDLE)0);
    if (file == (HANDLE)(__INTPTR_TYPE__)-1) return 0;
    i = ReadFile(file, archive, sizeof(archive), &done, (void *)0); CloseHandle(file);
    if (!i || !done || done > 8388608) return 0;
    archive_size = (int)done;
    return textured_scene_load(archive, archive_size);
}

static int offscreen(void) {
    HDC dc = CreateCompatibleDC((HDC)0);
    unsigned int *pixels = (unsigned int *)0;
    HANDLE bitmap, old;
    const unsigned int *source = textured_scene_pixels();
    int i, valid;
    if (!dc) return 0;
    bitmap = CreateDIBSection(dc, &info, 0, (void **)&pixels, (HANDLE)0, 0);
    if (!bitmap || !pixels) { DeleteDC(dc); return 0; }
    old = SelectObject(dc, bitmap);
    for (i = 0; i < 320 * 240; ++i) pixels[i] = 0;
    valid = StretchDIBits(dc, 0, 0, 320, 240, 0, 0, 320, 240, source, &info, 0, 0x00cc0020u) == 240 && GdiFlush();
    if (valid) for (i = 0; i < 320 * 240; ++i) if ((pixels[i] & 0xffffffu) != (source[i] & 0xffffffu)) valid = 0;
    SelectObject(dc, old); DeleteObject(bitmap); DeleteDC(dc);
    return valid;
}

static int headless(int negative) {
    unsigned int before;
    if (!loaded) { output("{\"status\":\"private-asset-unavailable\",\"gameBuild\":false}\n"); return 2; }
    if (!offscreen()) return 3;
    before = checksum(textured_scene_pixels());
    if (negative) {
        int generation = textured_scene_stat(14);
        archive[8] ^= 1;
        if (textured_scene_load(archive, archive_size) || textured_scene_stat(14) != generation || checksum(textured_scene_pixels()) != before) return 4;
        output("{\"status\":\"rejected-corrupt-archive\",\"previousFramePreserved\":true,\"gameBuild\":false}\n");
    } else {
        output("{\"status\":\"measured-textures-rendered\",\"gdiPixelsEqual\":true,\"rgbFnv32\":"); number(before);
        output(",\"textures\":"); number((unsigned int)textured_scene_stat(2)); output(",\"drawnPictures\":"); number((unsigned int)textured_scene_stat(7));
        output(",\"gameBuild\":false}\n");
    }
    return 0;
}

static LRESULT window_proc(HWND window, UINT message, WPARAM wparam, LPARAM lparam) {
    if (message == 0x000f) {
        PAINTSTRUCT paint;
        RECT area;
        HDC dc = BeginPaint(window, &paint);
        HBRUSH background = CreateSolidBrush(0x2c2420u);
        GetClientRect(window, &area);
        if (background) { FillRect(dc, &area, background); DeleteObject(background); }
        if (loaded) {
            int width = area.right, height = width * 240 / 320;
            if (height > area.bottom) { height = area.bottom; width = height * 320 / 240; }
            StretchDIBits(dc, (area.right - width) / 2, (area.bottom - height) / 2, width, height, 0, 0, 320, 240, textured_scene_pixels(), &info, 0, 0x00cc0020u);
        } else TextOutA(dc, 12, 24, "Import your extracted archive as assets/scene.arc", 47);
        EndPaint(window, &paint); return 0;
    }
    if (message == 0x0005) { InvalidateRect(window, (RECT *)0, 0); return 0; }
    if (message == 0x0002) { PostQuitMessage(0); return 0; }
    return DefWindowProcA(window, message, wparam, lparam);
}

void mainCRTStartup(void) {
    const char *command = GetCommandLineA();
    WNDCLASSA klass = {0};
    MSG message;
    HWND window;
    loaded = load();
    if (has(command, "--headless")) ExitProcess((UINT)headless(has(command, "--negative-archive")));
    klass.lpfnWndProc = window_proc; klass.hInstance = GetModuleHandleA((const char *)0); klass.lpszClassName = "DqmTextureResources";
    klass.hCursor = LoadCursorA((HINSTANCE)0, (const char *)32512);
    if (!RegisterClassA(&klass)) ExitProcess(20);
    window = CreateWindowExA(0, klass.lpszClassName, "DQM Textured Layout Component", 0x00cf0000, 100, 100, 960, 760, (HWND)0, (HANDLE)0, klass.hInstance, (void *)0);
    if (!window) ExitProcess(21);
    ShowWindow(window, 5); UpdateWindow(window);
    while (GetMessageA(&message, (HWND)0, 0, 0) > 0) { TranslateMessage(&message); DispatchMessageA(&message); }
    ExitProcess((UINT)message.wParam);
}
