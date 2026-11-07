#include "inflate059.h"

Signed058 stream_window059(Stream058 *stream, Word058 initial_space)
{
    State058 *state = stream->state;
    Word058 count;
    Word058 first;
    if (state->window == 0) {
        state->window = stream->allocate(stream->context, 1u << state->window_bits, 1);
        if (state->window == 0)
            return 1;
    }
    if (state->window_size == 0) {
        state->window_size = 1u << state->window_bits;
        state->window_next = 0;
        state->window_have = 0;
    }
    count = initial_space - stream->available_output;
    if (count >= state->window_size) {
        stream_copy059(state->window, stream->next_output - state->window_size, state->window_size);
        state->window_next = 0;
        state->window_have = state->window_size;
        return 0;
    }
    first = state->window_size - state->window_next;
    if (first > count)
        first = count;
    stream_copy059(state->window + state->window_next, stream->next_output - count, first);
    count -= first;
    if (count) {
        stream_copy059(state->window, stream->next_output - count, count);
        state->window_next = count;
        state->window_have = state->window_size;
    } else {
        state->window_next += first;
        if (state->window_next == state->window_size)
            state->window_next = 0;
        if (state->window_have < state->window_size)
            state->window_have += first;
    }
    return 0;
}
