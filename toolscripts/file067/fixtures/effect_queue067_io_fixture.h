#ifndef DQMJ3_QUEUE_IO_FIXTURE067_H
#define DQMJ3_QUEUE_IO_FIXTURE067_H

static RequestDeviceOperations066 request_queue_device_operations067;
static RequestFileOperations066 request_queue_file_operations067;

static unsigned int *request_queue_io067(unsigned int operation, int result, unsigned int ordinal)
{
    if (queue_fixture067.io_count >= 64)
        __builtin_trap();
    unsigned int *row = queue_fixture067.io_events[queue_fixture067.io_count++];
    for (unsigned int index = 0; index < 10; ++index)
        row[index] = 0;
    row[0] = operation;
    row[1] = (unsigned int)result;
    row[2] = ordinal;
    return row;
}

static int request_queue_open067(RequestDevice066 *device, RequestFile066 **output,
    const RequestDevicePath066 *path, unsigned int flags)
{
    int result = request_device_open066(device, output, path, flags);
    unsigned int *row = request_queue_io067(1, result, result >= 0 ? (*output)->ordinal : 0xffffffffu);
    row[3] = flags;
    row[4] = path->kind;
    row[5] = path->bytes;
    if (result >= 0)
        (*output)->operations = &request_queue_file_operations067;
    return result;
}

static int request_queue_size067(RequestFile066 *file, unsigned long long *bytes)
{
    int result = request_file_size066(file, bytes);
    unsigned int *row = request_queue_io067(2, result, file->ordinal);
    if (result >= 0) {
        row[3] = (unsigned int)*bytes;
        row[4] = (unsigned int)(*bytes >> 32);
    }
    return result;
}

static int request_queue_read067(RequestFile066 *file, unsigned int *copied, unsigned long long offset,
    void *output, unsigned int bytes)
{
    int result = request_file_read066(file, copied, offset, output, bytes);
    unsigned int *row = request_queue_io067(3, result, file->ordinal);
    row[3] = (unsigned int)offset;
    row[4] = (unsigned int)(offset >> 32);
    row[5] = bytes;
    row[6] = result >= 0 ? *copied : 0xffffffffu;
    row[7] = 0xffffffffu;
    for (unsigned int slot = 0; slot < graph_fixture065.allocations; ++slot) {
        __UINTPTR_TYPE__ base = (__UINTPTR_TYPE__)(graph_fixture065.heap[slot] + 128);
        __UINTPTR_TYPE__ address = (__UINTPTR_TYPE__)output;
        if (base <= address && address < base + graph_fixture065.records[slot].physical_bytes) {
            row[7] = slot;
            row[8] = (unsigned int)(address - base);
            break;
        }
    }
    if (bytes && row[7] == 0xffffffffu)
        __builtin_trap();
    return result;
}

static int request_queue_close067(RequestFile066 *file)
{
    int result = request_file_close066(file);
    request_queue_io067(4, result, file->ordinal);
    return result;
}

void effect_request_trace_files067(void)
{
    request_queue_device_operations067 = request_device_operations066;
    request_queue_device_operations067.open = request_queue_open067;
    request_queue_file_operations067 = request_file_operations066;
    request_queue_file_operations067.read = request_queue_read067;
    request_queue_file_operations067.size = request_queue_size067;
    request_queue_file_operations067.close = request_queue_close067;
    request_device066.operations = &request_queue_device_operations067;
    queue_fixture067.io_count = 0;
}

#endif
