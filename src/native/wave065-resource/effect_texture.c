#include "effect_texture.h"

static const EffectTextureServices065 *active_texture_services065;

int effect_bind_texture_services065(const EffectTextureServices065 *services)
{
    active_texture_services065 = services;
    return services != 0;
}

const EffectTextureServices065 *effect_texture_services065(void)
{
    return active_texture_services065;
}

static void *texture_scratch065(unsigned int bytes)
{
    const EffectTextureServices065 *services = active_texture_services065;
    return services != 0 && services->allocate != 0 ?
        services->allocate(services->context, 0x10000, 0x100, 0, bytes) : 0;
}

static void texture_release065(void *memory)
{
    const EffectTextureServices065 *services = active_texture_services065;
    if (memory != 0 && services != 0 && services->release != 0)
        services->release(services->context, 0x10000, 0x100, 0, memory);
}

static unsigned int texture_status065(unsigned int status)
{
    const EffectTextureServices065 *services = active_texture_services065;
    if ((status & 0x80000000u) && services != 0 && services->report != 0)
        services->report(services->context, status, 0);
    return status;
}

static unsigned int morton_pixel065(unsigned int x, unsigned int y, unsigned int width)
{
    unsigned int index = ((y / 8) * (width / 8) + x / 8) * 64;
    for (unsigned int bit = 0; bit < 3; ++bit) {
        index += ((x >> bit) & 1) << (bit * 2);
        index += ((y >> bit) & 1) << (bit * 2 + 1);
    }
    return index;
}

unsigned int fn_0044e7b4(unsigned int format, unsigned int width, unsigned int height,
                         const unsigned char *source, unsigned char *destination, unsigned int *device_format)
{
    if (source == 0 || destination == 0)
        return texture_status065(0xe0e13002u);
    if (width == 0 || height == 0 || (width & 7) || (height & 7))
        return texture_status065(0xe0e1300au);
    unsigned int bits;
    unsigned int mapped;
    unsigned int reverse = 0;
    switch (format) {
    case 100:
        mapped = 0;
        bits = 32;
        reverse = 1;
        break;
    case 101:
        mapped = 1;
        bits = 24;
        reverse = 1;
        break;
    case 102:
    case 103:
    case 104:
        mapped = format - 100;
        bits = 16;
        break;
    case 105:
        mapped = 5;
        bits = 16;
        reverse = 1;
        break;
    case 106:
    case 107:
    case 108:
        mapped = format - 99;
        bits = 8;
        break;
    case 109:
    case 110:
        mapped = format - 99;
        bits = 4;
        break;
    case 111:
        mapped = 6;
        bits = 16;
        break;
    default:
        return texture_status065(0xe0e1300cu);
    }
    if (device_format != 0)
        *device_format = mapped;
    unsigned int bytes = bits / 8;
    unsigned int pixels = width * height;
    unsigned int scratch_bytes = pixels * bytes;
    unsigned char *output_scratch = 0;
    unsigned char *swap_scratch = 0;
    unsigned char *output = destination;
    const unsigned char *input = source;
    if (source == destination) {
        output_scratch = texture_scratch065(scratch_bytes);
        if (output_scratch == 0)
            return texture_status065(0xd8613004u);
        output = output_scratch;
    }
    unsigned int status = 0x13000;
    if (reverse) {
        swap_scratch = texture_scratch065(scratch_bytes);
        if (swap_scratch == 0) {
            status = 0xd8613004u;
        } else {
            for (unsigned int pixel = 0; pixel < pixels; ++pixel)
                for (unsigned int byte = 0; byte < bytes; ++byte)
                    swap_scratch[pixel * bytes + byte] = source[pixel * bytes + bytes - 1 - byte];
            input = swap_scratch;
        }
    }
    if (!(status & 0x80000000u)) {
        for (unsigned int y = 0; y < height; ++y) {
            for (unsigned int x = 0; x < width; ++x) {
                unsigned int linear = y * width + x;
                unsigned int tiled = morton_pixel065(x, height - 1 - y, width);
                if (bits == 4) {
                    unsigned char packed = input[linear / 2];
                    if (x & 1)
                        output[tiled / 2] = (output[tiled / 2] & 15) | (packed & 0xf0);
                    else
                        output[tiled / 2] = packed & 15;
                } else {
                    for (unsigned int byte = 0; byte < bytes; ++byte)
                        output[tiled * bytes + byte] = input[linear * bytes + byte];
                }
            }
        }
        if (output_scratch != 0)
            for (unsigned int byte = 0; byte < scratch_bytes; ++byte)
                destination[byte] = output[byte];
    }
    texture_release065(output_scratch);
    texture_release065(swap_scratch);
    return texture_status065(status);
}

unsigned int fn_00535da8(unsigned int format, unsigned int width, unsigned int height,
                         const unsigned char *source, unsigned char *destination)
{
    if (format == 0xffffffffu || source == 0 || destination == 0)
        return 0;
    return (fn_0044e7b4(format, width, height, source, destination, 0) & 0x80000000u) == 0;
}

unsigned int fn_00535dec(unsigned int format)
{
    return format == 1 ? 101 : format == 2 ? 100 : 0xffffffffu;
}
