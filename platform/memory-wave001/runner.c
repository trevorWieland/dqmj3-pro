#include "test_api.h"

#if defined(_WIN32)
__declspec(dllimport) void *GetStdHandle(u32 which);
__declspec(dllimport) u32 GetLastError(void);
__declspec(dllimport) int ReadFile(void *handle, void *data, u32 size, u32 *done, void *overlapped);
__declspec(dllimport) int WriteFile(void *handle, const void *data, u32 size, u32 *done, void *overlapped);
__declspec(dllimport) __declspec(noreturn) void ExitProcess(u32 status);
static int input(void *data, u32 size) {
    u32 done = 0;
    if (!ReadFile(GetStdHandle((u32)-10), data, size, &done, (void *)0)) return GetLastError() == 109u ? 0 : -1;
    return (int)done;
}
static int output(const void *data, u32 size) {
    u32 done = 0;
    if (!WriteFile(GetStdHandle((u32)-11), data, size, &done, (void *)0)) return -1;
    return (int)done;
}
#else
extern long read(int fd, void *data, usize size);
extern long write(int fd, const void *data, usize size);
static int input(void *data, u32 size) { return (int)read(0, data, size); }
static int output(const void *data, u32 size) { return (int)write(1, data, size); }
#endif

static int exact_input(u8 *data, u32 size) {
    u32 total = 0;
    while (total < size) {
        int done = input(data + total, size - total);
        if (done < 0) return -1;
        if (done == 0) return total == 0 ? 0 : -1;
        total += (u32)done;
    }
    return 1;
}

static int exact_output(const u8 *data, u32 size) {
    u32 total = 0;
    while (total < size) {
        int done = output(data + total, size - total);
        if (done <= 0) return -1;
        total += (u32)done;
    }
    return 0;
}

static int run(void) {
    u32 values[3];
    u32 result[5];
    for (;;) {
        int status = exact_input((u8 *)values, sizeof(values));
        const TestSpec *spec;
        if (status == 0) return 0;
        if (status < 0 || values[0] >= memory_test_count() || values[2] > 1) return 2;
        spec = memory_test_lookup(values[0]);
        if (!spec) return 2;
        memory_test_run(spec, values[1], values[2], result);
        if (exact_output((const u8 *)result, sizeof(result)) != 0) return 3;
    }
}

#if defined(_WIN32)
void mainCRTStartup(void) { ExitProcess((u32)run()); }
#else
int main(void) { return run(); }
#endif
