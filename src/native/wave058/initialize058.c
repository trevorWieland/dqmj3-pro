#include "stream058.h"

void *fn_00734b34(void *context, Word058 count, Word058 bytes)
{
    (void)context;
    return stream_heap_allocate058(count * bytes);
}

void fn_00734b3c(void *context, void *memory)
{
    (void)context;
    stream_heap_dispose058(memory);
}

Signed058 fn_00733d78(Stream058 *stream)
{
    State058 *state;
    if (stream == (void *)0 || stream->state == (void *)0)
        return -2;
    state = stream->state;
    state->window_size = 0;
    state->window_have = 0;
    state->window_next = 0;
    state = stream->state;
    if (state == (void *)0)
        return -2;
    state->total = 0;
    stream->total_output = 0;
    stream->total_input = 0;
    stream->message = (void *)0;
    if (state->wrap != 0)
        stream->checksum = (Word058)state->wrap & 1u;
    state->mode = 0;
    state->last = 0;
    state->dictionary_present = 0;
    state->maximum_distance = 32768;
    state->header = (void *)0;
    state->hold = 0;
    state->bits = 0;
    state->next_code = state->codes;
    state->distances = state->codes;
    state->lengths = state->codes;
    state->sane = 1;
    state->back = -1;
    return 0;
}

Signed058 fn_00733c00(Stream058 *stream, Signed058 window_bits, const Byte058 *version, Word058 stream_bytes)
{
    State058 *allocated;
    State058 *state;
    Signed058 result;
    Signed058 wrap;
    Word058 bits;
    if (version == (void *)0 || version[0] != '1' || stream_bytes != sizeof(Stream058))
        return -6;
    if (stream == (void *)0)
        return -2;
    stream->message = (void *)0;
    if (stream->allocate == (void *)0) {
        stream->allocate = fn_00734b34;
        stream->context = (void *)0;
    }
    if (stream->dispose == (void *)0)
        stream->dispose = fn_00734b3c;
    allocated = stream->allocate(stream->context, 1, sizeof(State058));
    if (allocated == (void *)0)
        return -4;
    stream->state = allocated;
    allocated->window = (void *)0;
    state = stream->state;
    result = -2;
    if (state != (void *)0) {
        bits = (Word058)window_bits;
        if (window_bits < 0) {
            wrap = 0;
            bits = 0u - bits;
        } else {
            wrap = 1 + (Signed058)(bits >> 4);
            if (bits < 48)
                bits &= 15;
        }
        if (bits == 0 || bits - 8u < 8u) {
            if (state->window != (void *)0 && state->window_bits != bits) {
                stream->dispose(stream->context, state->window);
                state->window = (void *)0;
            }
            state->wrap = wrap;
            state->window_bits = bits;
            result = fn_00733d78(stream);
        }
    }
    if (result != 0) {
        stream->dispose(stream->context, allocated);
        stream->state = (void *)0;
    }
    return result;
}

Signed058 fn_00733d64(Stream058 *stream, const Byte058 *version, Word058 stream_bytes)
{
    return fn_00733c00(stream, 15, version, stream_bytes);
}

Signed058 fn_00733bb0(Stream058 *stream)
{
    State058 *state;
    Dispose058 dispose;
    if (stream == (void *)0 || stream->state == (void *)0 || stream->dispose == (void *)0)
        return -2;
    state = stream->state;
    dispose = stream->dispose;
    if (state->window != (void *)0)
        dispose(stream->context, state->window);
    stream->dispose(stream->context, stream->state);
    stream->state = (void *)0;
    return 0;
}
