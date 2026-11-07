#include "md5_stream.h"

static void copy_bytes(unsigned char *destination, const unsigned char *source, unsigned int bytes)
{
    for (unsigned int index = 0; index < bytes; ++index)
        destination[index] = source[index];
}

void fn_001b24a0(Md5Stream029 *context)
{
    context->low_bytes = 0;
    context->high_bytes = 0;
    context->state[0] = 0x67452301u;
    context->state[1] = 0xefcdab89u;
    context->state[2] = 0x98badcfeu;
    context->state[3] = 0x10325476u;
}

void fn_003019f0(Md5Stream029 *context, const unsigned char *input, unsigned int bytes)
{
    unsigned int used = context->low_bytes & 63u;
    context->low_bytes += bytes;
    if (context->low_bytes < bytes)
        ++context->high_bytes;
    unsigned int consumed = 0;
    unsigned int available = 64u - used;
    if (bytes >= available) {
        copy_bytes(context->buffer + used, input, available);
        fn_001b2554(context->state, context->buffer);
        consumed = available;
        while (bytes - consumed >= 64u) {
            fn_001b2554(context->state, input + consumed);
            consumed += 64u;
        }
        used = 0;
    }
    if (bytes != consumed)
        copy_bytes(context->buffer + used, input + consumed, bytes - consumed);
}

void fn_001b2214(Md5Stream029 *context, unsigned char output[16])
{
    static const unsigned char padding[64] = {128};
    unsigned int length[2] = {context->low_bytes << 3,
        (context->high_bytes << 3) + (context->low_bytes >> 29)};
    unsigned char encoded_length[8];
    for (unsigned int index = 0; index < 8; ++index)
        encoded_length[index] = (unsigned char)(length[index / 4] >> ((index & 3u) * 8u));
    unsigned int used = context->low_bytes & 63u;
    fn_003019f0(context, padding, used < 56u ? 56u - used : 120u - used);
    fn_003019f0(context, encoded_length, 8);
    const unsigned char *state = (const unsigned char *)context->state;
    for (unsigned int index = 0; index < 16; ++index)
        output[index] = state[index];
}
