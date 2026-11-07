#include "stream058.h"

static void clear_view(void *memory, Word058 bytes)
{
    volatile Byte058 *target = memory;
    while (bytes--)
        *target++ = 0;
}

void stream_fast058(Stream058 *stream, Word058 start, StreamState056 *kernel)
{
    State058 *state = stream->state;
    Stream056 view;
    clear_view(kernel, sizeof(*kernel));
    clear_view(&view, sizeof(view));
    kernel->mode = state->mode;
    kernel->window_size = state->window_size;
    kernel->window_have = state->window_have;
    kernel->window_next = state->window_next;
    kernel->window = state->window;
    kernel->hold = state->hold;
    kernel->bits = state->bits;
    kernel->lengths = state->lengths;
    kernel->distances = state->distances;
    kernel->length_bits = state->length_bits;
    kernel->distance_bits = state->distance_bits;
    kernel->sane = (Word058)state->sane;
    view.next_input = stream->next_input;
    view.available_input = stream->available_input;
    view.next_output = stream->next_output;
    view.available_output = stream->available_output;
    view.message = stream->message;
    view.state = kernel;
    fn_00733e28(&view, start);
    stream->next_input = view.next_input;
    stream->available_input = view.available_input;
    stream->next_output = view.next_output;
    stream->available_output = view.available_output;
    stream->message = view.message;
    state->mode = kernel->mode;
    state->hold = kernel->hold;
    state->bits = kernel->bits;
}
