#include "sdk_md5062ag.h"

static void copy_bytes062ag(Md5Byte062ag *destination, const Md5Byte062ag *source,
    Md5Word062ag count)
{
    for (Md5Word062ag i = 0; i < count; ++i)
        destination[i] = source[i];
}

void sdk_md5_initialize062ag(Md5Context062ag *context)
{
    context->state[0] = 0x67452301u;
    context->state[1] = 0xefcdab89u;
    context->state[2] = 0x98badcfeu;
    context->state[3] = 0x10325476u;
    context->count = 0;
}

void sdk_md5_update062ag(Md5Context062ag *context, const Md5Byte062ag *input,
    Md5Word062ag count)
{
    Md5Word062ag used = context->count & 63u;
    context->count += count;
    Md5Word062ag remaining = 64u - used;
    if (remaining > count) {
        if (count != 0)
            copy_bytes062ag(context->block + used, input, count);
        return;
    }
    copy_bytes062ag(context->block + used, input, remaining);
    context->methods->block(context);
    input += remaining;
    count -= remaining;
    while (count >= 64u) {
        copy_bytes062ag(context->block, input, 64);
        context->methods->block(context);
        input += 64;
        count -= 64;
    }
    if (count != 0)
        copy_bytes062ag(context->block, input, count);
}

void sdk_md5_finish062ag(Md5Context062ag *context, Md5Byte062ag *output)
{
    Md5Word062ag bits = context->count << 3;
    const Md5Byte062ag marker = 0x80;
    context->methods->update(context, &marker, 1);
    Md5Word062ag used = context->count & 63u;
    if (64u - used < 8u) {
        for (Md5Word062ag i = used; i < 64u; ++i)
            context->block[i] = 0;
        context->methods->block(context);
        used = 0;
    }
    for (Md5Word062ag i = used; i < 56u; ++i)
        context->block[i] = 0;
    for (Md5Word062ag i = 0; i < 4u; ++i)
        context->block[56u + i] = (Md5Byte062ag)(bits >> (8u * i));
    for (Md5Word062ag i = 60; i < 64u; ++i)
        context->block[i] = 0;
    context->methods->block(context);
    for (Md5Word062ag i = 0; i < 16u; ++i)
        output[i] = (Md5Byte062ag)(context->state[i / 4] >> (8u * (i & 3u)));
}
