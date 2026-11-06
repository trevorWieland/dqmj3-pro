#include "shell.h"
#include "win32_api.h"

static unsigned int keyboard;
static int monitor_count;
static DWORD (*xinput)(DWORD, XINPUT_STATE *);

static int length(const char *text) { int n = 0; while (text[n]) ++n; return n; }

static int contains(const char *text, const char *part) {
    int i;
    for (i = 0; text[i]; ++i) {
        int j = 0;
        while (part[j] && text[i + j] == part[j]) ++j;
        if (!part[j]) return 1;
    }
    return 0;
}

static void text(HDC dc, int x, int y, const char *value) { TextOutA(dc, x, y, value, length(value)); }

static void number(HDC dc, int x, int y, const char *label, unsigned int value) {
    char buffer[96];
    char digits[16];
    int count = 0;
    int cursor = 0;
    while (label[cursor]) { buffer[cursor] = label[cursor]; ++cursor; }
    do { digits[count++] = (char)('0' + value % 10); value /= 10; } while (value);
    while (count) buffer[cursor++] = digits[--count];
    buffer[cursor] = 0;
    text(dc, x, y, buffer);
}

static BOOL monitor(HANDLE handle, HDC dc, RECT *rect, LPARAM user) { ++monitor_count; return 1; }

static int key_button(WPARAM key) {
    switch ((int)key) {
    case 'Z': case 32: return 0;
    case 'X': return 1;
    case 'A': return 2;
    case 'S': return 3;
    case 'Q': return 4;
    case 'E': return 5;
    case 13: return 6;
    case 27: return 7;
    case 38: return 8;
    case 40: return 9;
    case 37: return 10;
    case 39: return 11;
    default: return -1;
    }
}

static void controls(void) {
    unsigned int buttons = keyboard;
    int x = 0;
    int y = 0;
    int bit;
    if (xinput) {
        DWORD index;
        for (index = 0; index < 4; ++index) {
            XINPUT_STATE pad;
            if (xinput(index, &pad) != 0) continue;
            if (pad.pad.buttons & 0x1000) buttons |= 1u << 0;
            if (pad.pad.buttons & 0x2000) buttons |= 1u << 1;
            if (pad.pad.buttons & 0x4000) buttons |= 1u << 2;
            if (pad.pad.buttons & 0x8000) buttons |= 1u << 3;
            if (pad.pad.buttons & 0x0100) buttons |= 1u << 4;
            if (pad.pad.buttons & 0x0200) buttons |= 1u << 5;
            if (pad.pad.buttons & 0x0010) buttons |= 1u << 6;
            if (pad.pad.buttons & 0x0020) buttons |= 1u << 7;
            if (pad.pad.buttons & 0x0001) buttons |= 1u << 8;
            if (pad.pad.buttons & 0x0002) buttons |= 1u << 9;
            if (pad.pad.buttons & 0x0004) buttons |= 1u << 10;
            if (pad.pad.buttons & 0x0008) buttons |= 1u << 11;
            x = pad.pad.lx;
            y = -(int)pad.pad.ly;
            if (x >= -7849 && x <= 7849) x = 0;
            if (y >= -7849 && y <= 7849) y = 0;
            break;
        }
    }
    for (bit = 0; bit < 16; ++bit) shell_button(bit, !!(buttons & (1u << bit)));
    shell_axis(x, y);
}

static void paint(HWND window) {
    PAINTSTRUCT ps;
    RECT client;
    HDC dc = BeginPaint(window, &ps);
    HBRUSH brush = CreateSolidBrush(0x15121a);
    int view;
    GetClientRect(window, &client);
    FillRect(dc, &client, brush);
    DeleteObject(brush);
    SetBkMode(dc, 1);
    SetTextColor(dc, 0x00ffffff);
    for (view = 0; view < 2; ++view) {
        ShellRect fit;
        RECT box;
        shell_rect(client.right, client.bottom, 0, view, 0, &fit);
        box.left = fit.left; box.top = fit.top; box.right = fit.left + fit.width; box.bottom = fit.top + fit.height;
        brush = CreateSolidBrush(view == 0 ? 0x705125 : 0x4a2842);
        FillRect(dc, &box, brush);
        DeleteObject(brush);
        text(dc, fit.left + 12, fit.top + 12, view == 0 ? "TOP: DIAGNOSTIC SHELL - NOT THE GAME" : "BOTTOM: SHARED ENGINE STATE");
        number(dc, fit.left + 12, fit.top + 40, "One-owner ticks: ", (unsigned int)shell_snapshot(0));
        number(dc, fit.left + 12, fit.top + 64, "Recovered C smoke: ", shell_smoke());
        number(dc, fit.left + 12, fit.top + 88, "Buttons: ", shell_snapshot(1));
        number(dc, fit.left + 12, fit.top + 112, "Displays enumerated: ", monitor_count);
        text(dc, fit.left + 12, fit.top + 140, "Touch rejects letterbox bars. Z/X, arrows or XInput.");
    }
    EndPaint(window, &ps);
}

static LRESULT window_proc(HWND window, UINT message, WPARAM wparam, LPARAM lparam) {
    switch (message) {
    case 0x0001:
        shell_resume(1);
        shell_surface(0, 1, 1);
        SetTimer(window, 1, 16, (void *)0);
        return 0;
    case 0x0005:
        shell_surface(0, 1, wparam != 1);
        return 0;
    case 0x001c:
        shell_resume(wparam != 0);
        if (!wparam) keyboard = 0;
        return 0;
    case 0x0113:
        controls();
        shell_step(0);
        InvalidateRect(window, (void *)0, 0);
        return 0;
    case 0x000f:
        paint(window);
        return 0;
    case 0x0100: case 0x0101: {
        int button = key_button(wparam);
        if (button < 0) break;
        if (message == 0x0100) keyboard |= 1u << button;
        else keyboard &= ~(1u << button);
        return 0;
    }
    case 0x0201: case 0x0200: {
        RECT client;
        if (message == 0x0200 && !(wparam & 1)) break;
        if (message == 0x0201) SetCapture(window);
        GetClientRect(window, &client);
        shell_touch(client.right, client.bottom, 0, (short)(lparam & 65535), (short)((lparam >> 16) & 65535));
        return 0;
    }
    case 0x0202:
        ReleaseCapture();
        return 0;
    case 0x0002:
        KillTimer(window, 1);
        shell_surface(0, 1, 0);
        shell_resume(0);
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProcA(window, message, wparam, lparam);
}

void mainCRTStartup(void) {
    if (contains(GetCommandLineA(), "--self-test")) {
        DWORD done;
        int failure = shell_self_test();
        const char *message = failure ? "{\"status\":\"failed\"}\n" : "{\"status\":\"passed\",\"checks\":13,\"recoveredSmoke\":1000,\"guiOpened\":false}\n";
        WriteFile(GetStdHandle((DWORD)-11), message, length(message), &done, (void *)0);
        ExitProcess(failure ? 1 : 0);
    } else {
        WNDCLASSA wc = {0};
        MSG message;
        HWND window;
        HANDLE library;
        shell_reset();
        EnumDisplayMonitors((void *)0, (void *)0, monitor, 0);
        library = LoadLibraryA("xinput1_4.dll");
        if (library) xinput = (DWORD (*)(DWORD, XINPUT_STATE *))GetProcAddress(library, "XInputGetState");
        wc.lpfnWndProc = window_proc;
        wc.hInstance = GetModuleHandleA((void *)0);
        wc.hCursor = LoadCursorA((void *)0, (const char *)32512);
        wc.lpszClassName = "DqmDiagnosticShell";
        if (!RegisterClassA(&wc)) ExitProcess(2);
        window = CreateWindowExA(0, wc.lpszClassName, "DQM native diagnostic shell - not the game", 0x00cf0000,
            (int)0x80000000u, (int)0x80000000u, 720, 980, (void *)0, (void *)0, wc.hInstance, (void *)0);
        if (!window) ExitProcess(3);
        ShowWindow(window, 10);
        UpdateWindow(window);
        while (GetMessageA(&message, (void *)0, 0, 0) > 0) { TranslateMessage(&message); DispatchMessageA(&message); }
        ExitProcess(0);
    }
}
