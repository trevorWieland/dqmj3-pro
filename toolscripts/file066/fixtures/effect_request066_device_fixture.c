#include "effect_request066_fixture.c"

typedef struct RequestDevice066 RequestDevice066;
typedef struct RequestFile066 RequestFile066;

typedef struct RequestDevicePath066 {
    unsigned int kind;
    const unsigned short *name;
    unsigned int bytes;
} RequestDevicePath066;

typedef struct RequestDeviceOperations066 {
    int (*open)(RequestDevice066 *device, RequestFile066 **output, const RequestDevicePath066 *path, unsigned int flags);
    void (*uninvoked[11])(void);
    int (*close)(RequestDevice066 *device);
} RequestDeviceOperations066;

typedef struct RequestFileOperations066 {
    int (*read)(RequestFile066 *file, unsigned int *copied, unsigned long long offset, void *output, unsigned int bytes);
    void (*uninvoked_1)(void);
    void (*uninvoked_2)(void);
    int (*size)(RequestFile066 *file, unsigned long long *bytes);
    void (*uninvoked[8])(void);
    int (*close)(RequestFile066 *file);
} RequestFileOperations066;

struct RequestFile066 {
    const RequestFileOperations066 *operations;
    RequestDevice066 *device;
    unsigned int live;
    unsigned int ordinal;
};

struct RequestDevice066 {
    const RequestDeviceOperations066 *operations;
    const unsigned char *image;
    unsigned int bytes;
    unsigned short path[128];
    unsigned int opens;
    unsigned int reads;
    unsigned int sizes;
    unsigned int closes;
    unsigned int next;
    int open_result;
    int size_result;
    int read_result;
    unsigned int read_chunk;
    unsigned int read_limit;
    unsigned int scheme_mask;
    RequestFile066 files[8];
};

static RequestDevice066 request_device066;
static const RequestFileOperations066 request_file_operations066;

static void request_device_uninvoked066(void) { __builtin_trap(); }

static int request_device_open066(RequestDevice066 *device, RequestFile066 **output,
                                   const RequestDevicePath066 *path, unsigned int flags)
{
    if (device != &request_device066 || flags != 1 || path->kind != 4)
        __builtin_trap();
    if (device->open_result < 0)
        return device->open_result;
    unsigned int length = 0;
    while (path->name[length] != 0) {
        if (length >= 127 || path->name[length] != device->path[length])
            return (int)0xc8804464u;
        ++length;
    }
    if (device->path[length] != 0 || path->bytes != (length + 1) * 2)
        return (int)0xc8804464u;
    RequestFile066 *file = 0;
    for (unsigned int index = 0; index < 8; ++index)
        if (!device->files[index].live) {
            file = device->files + index;
            break;
        }
    if (file == 0)
        __builtin_trap();
    file->operations = &request_file_operations066;
    file->device = device;
    file->live = 1;
    file->ordinal = device->next++;
    ++device->opens;
    *output = file;
    return 0;
}

static int request_device_close066(RequestDevice066 *device)
{
    (void)device;
    __builtin_trap();
}

static int request_file_read066(RequestFile066 *file, unsigned int *copied, unsigned long long offset,
                                void *output, unsigned int bytes)
{
    if (!file->live || file->device != &request_device066 || offset > file->device->bytes)
        __builtin_trap();
    ++file->device->reads;
    if (file->device->read_result < 0)
        return file->device->read_result;
    unsigned int available = file->device->bytes - (unsigned int)offset;
    unsigned int limit = offset < file->device->read_limit ? file->device->read_limit - (unsigned int)offset : 0;
    if (available > limit)
        available = limit;
    unsigned int count = bytes < available ? bytes : available;
    if (file->device->read_chunk != 0 && count > file->device->read_chunk)
        count = file->device->read_chunk;
    unsigned char *destination = output;
    for (unsigned int index = 0; index < count; ++index)
        destination[index] = file->device->image[(unsigned int)offset + index];
    *copied = count;
    return 0;
}

static int request_file_size066(RequestFile066 *file, unsigned long long *bytes)
{
    if (!file->live || file->device != &request_device066)
        __builtin_trap();
    ++file->device->sizes;
    if (file->device->size_result < 0)
        return file->device->size_result;
    *bytes = file->device->bytes;
    return 0;
}

static int request_file_close066(RequestFile066 *file)
{
    if (!file->live || file->device != &request_device066)
        __builtin_trap();
    file->live = 0;
    ++file->device->closes;
    return 0;
}

static const RequestFileOperations066 request_file_operations066 = {
    request_file_read066, request_device_uninvoked066, request_device_uninvoked066, request_file_size066,
    {request_device_uninvoked066, request_device_uninvoked066, request_device_uninvoked066, request_device_uninvoked066,
     request_device_uninvoked066, request_device_uninvoked066, request_device_uninvoked066, request_device_uninvoked066},
    request_file_close066
};

static const RequestDeviceOperations066 request_device_operations066 = {
    request_device_open066,
    {request_device_uninvoked066, request_device_uninvoked066, request_device_uninvoked066, request_device_uninvoked066,
     request_device_uninvoked066, request_device_uninvoked066, request_device_uninvoked066, request_device_uninvoked066,
     request_device_uninvoked066, request_device_uninvoked066, request_device_uninvoked066}, request_device_close066
};

void *effect_request_device_prepare066(const unsigned char *image, unsigned int bytes, const unsigned short *path)
{
    unsigned char *storage = (unsigned char *)&request_device066;
    for (__SIZE_TYPE__ index = 0; index < sizeof(request_device066); ++index)
        storage[index] = 0;
    request_device066.operations = &request_device_operations066;
    request_device066.image = image;
    request_device066.bytes = bytes;
    request_device066.read_limit = bytes;
    request_device066.scheme_mask = 1;
    unsigned int index = 0;
    do {
        if (index >= 128)
            __builtin_trap();
        request_device066.path[index] = path[index];
    } while (path[index++] != 0);
    return &request_device066;
}

void effect_request_device_configure066(int open_result, int size_result, int read_result,
                                        unsigned int chunk, unsigned int limit, unsigned int schemes)
{
    if (limit > request_device066.bytes)
        __builtin_trap();
    request_device066.open_result = open_result;
    request_device066.size_result = size_result;
    request_device066.read_result = read_result;
    request_device066.read_chunk = chunk;
    request_device066.read_limit = limit;
    request_device066.scheme_mask = schemes;
}

const unsigned int effect_request_device_layout066[] = {
    sizeof(RequestDevice066), __builtin_offsetof(RequestDevice066, opens), __builtin_offsetof(RequestDevice066, reads),
    __builtin_offsetof(RequestDevice066, sizes), __builtin_offsetof(RequestDevice066, closes),
    __builtin_offsetof(RequestDevice066, files), sizeof(RequestFile066), sizeof(RequestDevicePath066)
};
