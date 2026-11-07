#include "inflate059.h"
#include "crc.h"

Word058 stream_half059(const Byte058 *bytes, Word058 index)
{
    return bytes[index * 2] | ((Word058)bytes[index * 2 + 1] << 8);
}

void stream_put_half059(Byte058 *bytes, Word058 index, Word058 value)
{
    bytes[index * 2] = (Byte058)value;
    bytes[index * 2 + 1] = (Byte058)(value >> 8);
}

Word058 stream_mask059(Word058 bits)
{
    return bits == 32 ? ~0u : (1u << bits) - 1;
}

Word058 stream_reverse059(Word058 value)
{
    return (value >> 24) | ((value >> 8) & 0xff00) |
        ((value << 8) & 0xff0000) | (value << 24);
}

void stream_copy059(Byte058 *destination, const Byte058 *source, Word058 count)
{
    while (count--)
        *destination++ = *source++;
}

int stream_need059(Inflate059 *flow, Word058 count)
{
    while (flow->bits < count) {
        if (flow->available == 0)
            return 0;
        --flow->available;
        flow->hold += (Word058)*flow->next++ << flow->bits;
        flow->bits += 8;
    }
    return 1;
}

void stream_drop059(Inflate059 *flow, Word058 count)
{
    flow->hold = count == 32 ? 0 : flow->hold >> count;
    flow->bits -= count;
}

void stream_restore059(Inflate059 *flow)
{
    flow->stream->next_input = flow->next;
    flow->stream->available_input = flow->available;
    flow->stream->next_output = flow->output;
    flow->stream->available_output = flow->space;
    flow->state->hold = flow->hold;
    flow->state->bits = flow->bits;
}

void stream_load059(Inflate059 *flow)
{
    flow->next = flow->stream->next_input;
    flow->available = flow->stream->available_input;
    flow->output = flow->stream->next_output;
    flow->space = flow->stream->available_output;
    flow->hold = flow->state->hold;
    flow->bits = flow->state->bits;
}

void stream_error059(Inflate059 *flow, const char *message)
{
    flow->stream->message = message;
    flow->state->mode = BAD059;
}

Word058 stream_update059(State058 *state, const Byte058 *bytes, Word058 count)
{
    return state->untouched_0010 ? fn_007305b8(state->untouched_0018, bytes, count) :
        stream_adler059(state->untouched_0018, bytes, count);
}
