#include "effect_request066_device_fixture.c"

typedef struct RequestSourceStream066 {
    RequestFile066 *file;
    unsigned long long offset;
    unsigned int live;
} RequestSourceStream066;

static RequestSourceStream066 request_source_streams066[8];

static int request_source_open066(void *context, void **stream, const unsigned short *path, unsigned int flags)
{
    RequestDevice066 *device = context;
    *stream = 0;
    static const char *const schemes[] = {"rom:", "data:", "sdmc:", "patch:"};
    unsigned int prefix = 0;
    for (unsigned int candidate = 0; candidate < 4; ++candidate) {
        if (!(device->scheme_mask & 1u << candidate))
            continue;
        unsigned int units = 0;
        while (schemes[candidate][units] && path[units] == (unsigned char)schemes[candidate][units])
            ++units;
        if (schemes[candidate][units] == 0) {
            prefix = units;
            break;
        }
    }
    if (prefix == 0)
        return (int)0xc8804465u;
    const unsigned short *name = path + prefix;
    unsigned int units = 0;
    while (name[units] != 0)
        ++units;
    RequestDevicePath066 request = {4, name, (units + 1) * 2};
    RequestFile066 *file = 0;
    int result = device->operations->open(device, &file, &request, flags);
    if (result < 0)
        return result;
    for (unsigned int index = 0; index < 8; ++index) {
        if (!request_source_streams066[index].live) {
            RequestSourceStream066 *opened = request_source_streams066 + index;
            opened->file = file;
            opened->offset = 0;
            opened->live = 1;
            *stream = opened;
            return 0;
        }
    }
    __builtin_trap();
}

static int request_source_size066(void *context, void *stream, unsigned long long *bytes)
{
    (void)context;
    RequestSourceStream066 *opened = stream;
    if (opened == 0 || !opened->live)
        __builtin_trap();
    return opened->file->operations->size(opened->file, bytes);
}

static int request_source_read066(void *context, void *stream, void *output, unsigned int requested, unsigned int *copied)
{
    (void)context;
    RequestSourceStream066 *opened = stream;
    if (opened == 0 || !opened->live)
        __builtin_trap();
    if (requested != 0 && output == 0)
        return (int)0xe0e046bcu;
    unsigned int total = 0;
    unsigned char *destination = output;
    while (requested != 0) {
        unsigned int current = 0;
        int result = opened->file->operations->read(opened->file, &current, opened->offset, destination, requested);
        if (result < 0)
            return result;
        total += current;
        opened->offset += (unsigned long long)(long long)(int)current;
        if (current == requested || current == 0) {
            *copied = total;
            return 0;
        }
        destination += current;
        requested -= current;
    }
    *copied = 0;
    return 0;
}

static void request_source_finalize066(void *context, void *stream)
{
    (void)context;
    RequestSourceStream066 *opened = stream;
    if (opened == 0)
        return;
    if (!opened->live)
        __builtin_trap();
    opened->file->operations->close(opened->file);
    opened->live = 0;
}

static void request_source_report_error066(void *context, int status, unsigned int callsite)
{
    (void)context; (void)status; (void)callsite;
    __builtin_trap();
}

static const EffectRequestFiles066 request_source_files066 = {
    request_source_open066, request_source_size066, request_source_read066,
    request_source_finalize066, request_source_report_error066, &request_device066
};

void effect_request_source_files_bind066(void)
{
    effect_request_bind_files066(&request_source_files066);
    for (unsigned int index = 0; index < 8; ++index)
        request_source_streams066[index].live = 0;
}

void *effect_request_source_streams066(void) { return request_source_streams066; }

const unsigned int effect_request_source_stream_layout066[] = {
    sizeof(request_source_streams066), sizeof(RequestSourceStream066),
    __builtin_offsetof(RequestSourceStream066, file), __builtin_offsetof(RequestSourceStream066, offset),
    __builtin_offsetof(RequestSourceStream066, live)
};
