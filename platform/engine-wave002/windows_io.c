#include "engine.h"
#include "windows_io.h"

API DWORD GetModuleFileNameA(HANDLE module, char *path, DWORD capacity);
API HANDLE CreateFileA(const char *path, DWORD access, DWORD share, void *security, DWORD creation, DWORD flags, HANDLE template_file);
API BOOL ReadFile(HANDLE handle, void *buffer, DWORD capacity, DWORD *received, void *overlapped);
API BOOL CloseHandle(HANDLE handle);
API HANDLE CreateThread(void *security, __SIZE_TYPE__ stack, DWORD (*entry)(void *), void *argument, DWORD flags, DWORD *id);
API DWORD WaitForSingleObject(HANDLE handle, DWORD milliseconds);
API BOOL FlushFileBuffers(HANDLE file);
API BOOL MoveFileExA(const char *old_path, const char *new_path, DWORD flags);

static struct { int handle, bytes; char path[512]; EngineByte data[65537]; HANDLE thread; } pending;

static int joined_path(char *output, const char *relative) {
    DWORD length = GetModuleFileNameA((HANDLE)0, output, 400);
    int end, i = 0;
    if (!length || length >= 400) return 0;
    end = (int)length;
    while (end && output[end - 1] != '\\' && output[end - 1] != '/') --end;
    if (!end) return 0;
    while (relative[i] && end + i < 511) { output[end + i] = relative[i]; ++i; }
    if (relative[i]) return 0;
    output[end + i] = 0;
    return 1;
}

static DWORD resource_worker(void *argument) {
    HANDLE file;
    DWORD count = 0;
    (void)argument;
    pending.bytes = 0;
    file = CreateFileA(pending.path, 0x80000000u, 1, (void *)0, 3, 0x80, (HANDLE)0);
    if (file == (HANDLE)-1) return 1;
    if (ReadFile(file, pending.data, 65537, &count, (void *)0) && count > 0 && count <= 65536) pending.bytes = (int)count;
    CloseHandle(file);
    return pending.bytes > 0 ? 0 : 1;
}

int engine_io_start(int handle) {
    const char *path = engine_path(handle);
    char relative[80] = "assets/";
    int i;
    if (pending.thread || !path) return 0;
    for (i = 0; path[i] && i < 64; ++i) relative[i + 7] = path[i];
    relative[i + 7] = 0;
    if (!joined_path(pending.path, relative)) return 0;
    pending.handle = handle;
    pending.bytes = 0;
    pending.thread = CreateThread((void *)0, 0, resource_worker, (void *)0, 0, (DWORD *)0);
    if (!pending.thread) { engine_complete(handle, (const EngineByte *)0, 0); return 0; }
    return 1;
}

int engine_io_poll(void) {
    int result;
    if (!pending.thread || WaitForSingleObject(pending.thread, 0) != 0) return 0;
    CloseHandle(pending.thread);
    pending.thread = (HANDLE)0;
    result = engine_complete(pending.handle, pending.data, pending.bytes);
    return result == 1 ? 1 : -1;
}

void engine_io_close(void) {
    if (pending.thread) {
        if (WaitForSingleObject(pending.thread, 5000) != 0) return;
        CloseHandle(pending.thread);
        pending.thread = (HANDLE)0;
    }
}

int engine_disk_checkpoint(int write_mode) {
    EngineByte data[64];
    char path[512], temporary[512];
    HANDLE file;
    DWORD count = 0;
    int size;
    if (!joined_path(path, "engine-component.save") || !joined_path(temporary, "engine-component.save.tmp")) return 0;
    if (write_mode) {
        size = engine_checkpoint(data, 64);
        if (size != 28) return 0;
        file = CreateFileA(temporary, 0x40000000u, 0, (void *)0, 2, 0x80, (HANDLE)0);
        if (file == (HANDLE)-1) return 0;
        size = WriteFile(file, data, 28, &count, (void *)0) && count == 28 && FlushFileBuffers(file);
        CloseHandle(file);
        return size && MoveFileExA(temporary, path, 9);
    }
    file = CreateFileA(path, 0x80000000u, 1, (void *)0, 3, 0x80, (HANDLE)0);
    if (file == (HANDLE)-1) return 0;
    size = ReadFile(file, data, 64, &count, (void *)0) && count == 28;
    CloseHandle(file);
    return size && engine_restore(data, 28);
}
