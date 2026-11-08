#include "heap062ac.h"
#include "registry062ad.h"
#include "clock062u.h"

typedef __UINT64_TYPE__ WireWord;
extern long read(int, void *, __SIZE_TYPE__);
extern long write(int, const void *, __SIZE_TYPE__);
extern int socket(int, int, int);
struct sockaddr;
extern int bind(int, const struct sockaddr *, unsigned int);
extern int listen(int, int);
extern int accept(int, struct sockaddr *, unsigned int *);
extern int close(int);
extern const SdkWord062s fixture_heap_layout062ac[22];
void fixture_heap_reset062ac(void);
void fixture_default_bind062ac(void *);
void fixture_default_callback062ac(SdkWord062s);
void fixture_default_disabled062ac(void);

_Static_assert(sizeof(long) == 8 && sizeof(void *) == 8, "ARM64 ABI required");
static _Alignas(64) unsigned char arena[0x80000];
static int channel;

static int receive(void *memory, __SIZE_TYPE__ size)
{
    unsigned char *cursor = memory;
    while (size != 0) {
        long count = read(channel, cursor, size);
        if (count <= 0) return 0;
        cursor += count;
        size -= (__SIZE_TYPE__)count;
    }
    return 1;
}

static int send(const void *memory, __SIZE_TYPE__ size)
{
    const unsigned char *cursor = memory;
    while (size != 0) {
        long count = write(channel, cursor, size);
        if (count <= 0) return 0;
        cursor += count;
        size -= (__SIZE_TYPE__)count;
    }
    return 1;
}

extern const SdkWord062s fixture_registry_layout062ad[28];
extern const SdkMutexMethods062s sdk_clock_mutex_methods062u;
extern const SdkByte062s sdk_mutex_class_identity062u, sdk_mutex_tag_identity062u;
extern const SdkMutexMethods062s fixture_registry_mutex_methods062ad;
extern SdkWord062s fixture_registry_events062ad[8192][7], fixture_registry_event_count062ad;
void fixture_registry_bind062ad(SdkContextBinding062s *, SdkContext062s *, SdkContextOwner062s *, SdkWord062s);
void fixture_registry_owner062ad(SdkOwner062ab *, SdkWord062s);
void fixture_registry_locking062ad(SdkWord062s);
void fixture_registry_disposer062ad(SdkWord062s);
void fixture_registry_observe062ad(Registry062ad *, const SdkByte062s *);

static void *symbol(SdkWord062s id, __SIZE_TYPE__ *size)
{
    switch (id) {
    case 0: *size = sizeof(heap_registry062ac); return &heap_registry062ac;
    case 1: *size = sizeof(heap_registry_initialized062ac); return &heap_registry_initialized062ac;
    case 2: *size = sizeof(heap_identity062ac); return (void *)&heap_identity062ac;
    case 3: *size = sizeof(heap_methods062ac); return (void *)&heap_methods062ac;
    case 4: *size = sizeof(heap_proxy062ac); return &heap_proxy062ac;
    case 5: *size = sizeof(heap_environment062ac); return &heap_environment062ac;
    case 6: *size = sizeof(registry_methods062ad); return (void *)&registry_methods062ad;
    case 7: *size = sizeof(sdk_clock_mutex_methods062u); return (void *)&sdk_clock_mutex_methods062u;
    case 8: *size = 1; return (void *)&sdk_mutex_class_identity062u;
    case 9: *size = 1; return (void *)&sdk_mutex_tag_identity062u;
    case 10: *size = sizeof(fixture_registry_layout062ad); return (void *)fixture_registry_layout062ad;
    case 11: *size = sizeof(fixture_registry_mutex_methods062ad); return (void *)&fixture_registry_mutex_methods062ad;
    case 12: *size = sizeof(fixture_registry_events062ad); return fixture_registry_events062ad;
    case 13: *size = sizeof(fixture_registry_event_count062ad); return &fixture_registry_event_count062ad;
    case 14: *size = 0; return (void *)(HeapAddress062ac)heap_default_free062ac;
    default: *size = 0; return 0;
    }
}

static int readable(WireWord address, WireWord bytes, int writable)
{
    WireWord start = (HeapAddress062ac)arena;
    if (address >= start && bytes <= sizeof(arena) && address - start <= sizeof(arena) - bytes) return 1;
    if (writable) return 0;
    for (SdkWord062s id = 0; id != 15; ++id) {
        __SIZE_TYPE__ size;
        start = (HeapAddress062ac)symbol(id, &size);
        if (address >= start && bytes <= size && address - start <= size - bytes) return 1;
    }
    return 0;
}

static WireWord invoke(SdkWord062s id, WireWord *a)
{
    Heap062ac *heap = (Heap062ac *)(HeapAddress062ac)a[0];
    void *pointer = (void *)(HeapAddress062ac)a[1];
    switch (id) {
    case 0: fixture_heap_reset062ac(); return 0;
    case 1: return (HeapAddress062ac)heap_initialize062ac(heap, pointer, (SdkWord062s)a[2], (SdkWord062s)a[3]);
    case 2: return (HeapAddress062ac)heap_allocate062ac(heap, (SdkWord062s)a[1], (SdkSigned062s)a[2]);
    case 3: heap_free062ac(heap, pointer); return 0;
    case 4: fixture_default_bind062ac(heap); return 0;
    case 5: fixture_default_callback062ac((SdkWord062s)a[0]); return 0;
    case 6: fixture_default_disabled062ac(); return 0;
    case 7: return (HeapAddress062ac)heap_default_initialize062ac(heap, (SdkWord062s)a[1]);
    case 8: return (HeapAddress062ac)heap_default_allocate062ac((SdkWord062s)a[0], (SdkSigned062s)a[1]);
    case 9: heap_default_free062ac(heap); return 0;
    case 10: return (HeapAddress062ac)heap_sdk_allocate062ac((SdkWord062s)a[0]);
    case 11: heap_sdk_dispose062ac(heap); return 0;
    case 12: return heap_allocation_size062ac((HeapObject062ac *)heap, pointer);
    case 13: return (HeapAddress062ac)heap_find_containing062ac((HeapList062ac *)heap, pointer);
    case 14: return (HeapAddress062ac)heap_list_next062ac((HeapList062ac *)heap, pointer);
    case 15: return heap_group_set062ac(heap, (SdkWord062s)a[1]);
    case 16: return heap_policy_set062ac(heap, (SdkWord062s)a[1]);
    case 17: return (SdkWord062s)heap_split_set062ac(heap, (SdkSigned062s)a[1]);
    case 18: fixture_registry_bind062ad((SdkContextBinding062s *)heap, (SdkContext062s *)pointer,
                 (SdkContextOwner062s *)(HeapAddress062ac)a[2], (SdkWord062s)a[3]); return 0;
    case 19: fixture_registry_owner062ad((SdkOwner062ab *)heap, (SdkWord062s)a[1]); return 0;
    case 20: fixture_registry_locking062ad((SdkWord062s)a[0]); return 0;
    case 21: fixture_registry_disposer062ad((SdkWord062s)a[0]); return 0;
    case 22: fixture_registry_observe062ad((Registry062ad *)heap, pointer); return 0;
    case 23: return (HeapAddress062ac)registry_initialize062ad((Registry062ad *)heap);
    case 24: return (HeapAddress062ac)registry_destroy062ad((Registry062ad *)heap);
    case 25: return registry_register062ad((Registry062ad *)heap, (SdkOwner062ab *)pointer,
                 (SdkWord062s)a[2], (SdkByte062s *)(HeapAddress062ac)a[3]);
    case 26: return registry_unregister062ad((Registry062ad *)heap, (SdkWord062s)a[1], (SdkWord062s)a[2]);
    case 27: return (HeapAddress062ac)registry_find062ad((Registry062ad *)heap, pointer);
    default: return ~(WireWord)0;
    }
}

int main(int argc, char **argv)
{
    struct LocalAddress { unsigned short family; char path[108]; } address = {1, {0}};
    unsigned int name_size = 0;
    int server;
    if (argc != 2) return 5;
    while (argv[1][name_size] != 0) {
        if (name_size >= 106) return 5;
        address.path[name_size + 1] = argv[1][name_size];
        ++name_size;
    }
    server = socket(1, 1, 0);
    _Static_assert(sizeof(address) == 110, "Android local socket layout required");
    if (server < 0 || bind(server, (const struct sockaddr *)&address, 3 + name_size) != 0 || listen(server, 1) != 0) return 6;
    if (write(1, "READY", 5) != 5) return 6;
    channel = accept(server, 0, 0);
    close(server);
    if (channel < 0) return 6;
    static const SdkWord062s argument_counts[] = {0, 4, 3, 2, 1, 1, 0, 2, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 4, 2, 1, 1, 2, 1, 1, 4, 3, 2};
    for (;;) {
        SdkWord062s command[2], reply[2] = {0, 0};
        WireWord values[6] = {0, 0, 0, 0, 0, 0}, result;
        if (!receive(command, sizeof(command))) return 0;
        if (command[1] > 6 || !receive(values, command[1] * sizeof(WireWord))) return 2;
        if (command[0] == 0 && command[1] == 0) {
            reply[1] = 8 + 22 * 4;
            result = (HeapAddress062ac)arena;
            if (!send(reply, 8) || !send(&result, 8) || !send(fixture_heap_layout062ac, 22 * 4)) return 3;
        } else if (command[0] == 1 && command[1] >= 1 && values[0] < 28
                && command[1] - 1 == argument_counts[values[0]]) {
            result = invoke((SdkWord062s)values[0], values + 1);
            reply[1] = 8;
            if (!send(reply, 8) || !send(&result, 8)) return 3;
        } else if (command[0] == 2 && command[1] == 2 && readable(values[0], values[1], 0)) {
            reply[1] = (SdkWord062s)values[1];
            if (!send(reply, 8) || !send((void *)(HeapAddress062ac)values[0], reply[1])) return 3;
        } else if (command[0] == 3 && command[1] == 2 && readable(values[0], values[1], 1)) {
            if (!receive((void *)(HeapAddress062ac)values[0], (__SIZE_TYPE__)values[1]) || !send(reply, 8)) return 3;
        } else if (command[0] == 4 && command[1] == 1 && values[0] < 15) {
            __SIZE_TYPE__ size;
            result = (HeapAddress062ac)symbol((SdkWord062s)values[0], &size);
            reply[1] = 8;
            if (!send(reply, 8) || !send(&result, 8)) return 3;
        } else if (command[0] == 5 && command[1] == 0) {
            if (!send(reply, 8)) return 3;
            close(channel);
            return 0;
        } else {
            reply[0] = 1;
            if (!send(reply, 8)) return 3;
            return 4;
        }
    }
}
