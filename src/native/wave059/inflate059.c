#include "inflate059.h"

static Signed058 trailer(Inflate059 *flow)
{
    State058 *state = flow->state;
    Word058 count;
    Word058 expected;
    if (state->mode == CHECK059) {
        if (state->wrap) {
            if (!stream_need059(flow, 32))
                return 1;
            count = flow->output_start - flow->space;
            flow->stream->total_output += count;
            state->total += count;
            if (count)
                flow->stream->checksum = state->untouched_0018 = stream_update059(state, flow->output - count, count);
            flow->output_start = flow->space;
            expected = state->untouched_0010 ? flow->hold : stream_reverse059(flow->hold);
            if (expected != state->untouched_0018) {
                stream_error059(flow, "incorrect data check");
                return 0;
            }
            flow->hold = 0;
            flow->bits = 0;
        }
        state->mode = TRAILER_LENGTH059;
        return 0;
    }
    if (state->wrap && state->untouched_0010) {
        if (!stream_need059(flow, 32))
            return 1;
        if (flow->hold != state->total) {
            stream_error059(flow, "incorrect length check");
            return 0;
        }
        flow->hold = 0;
        flow->bits = 0;
    }
    state->mode = DONE059;
    return 0;
}

static Signed058 leave(Inflate059 *flow, Signed058 result)
{
    State058 *state = flow->state;
    Stream058 *stream = flow->stream;
    Word058 input;
    Word058 output;
    stream_restore059(flow);
    if (state->window_size || (flow->output_start != stream->available_output && state->mode < BAD059 &&
            (state->mode < CHECK059 || flow->flush != 4))) {
        if (stream_window059(stream, flow->output_start)) {
            state->mode = MEMORY059;
            return -4;
        }
    }
    input = flow->input_start - stream->available_input;
    output = flow->output_start - stream->available_output;
    stream->total_input += input;
    stream->total_output += output;
    state->total += output;
    if (state->wrap && output)
        stream->checksum = state->untouched_0018 = stream_update059(state, stream->next_output - output, output);
    stream->data_type = state->bits + (state->last ? 64 : 0) + (state->mode == BLOCK059 ? 128 : 0) +
        (state->mode == LENGTH_FIRST059 || state->mode == COPY_FIRST059 ? 256 : 0);
    if (((input == 0 && output == 0) || flow->flush == 4) && result == 0)
        result = -5;
    return result;
}

Signed058 stream_inflate059(Stream058 *stream, Signed058 flush, StreamCode056 *fixed, StreamState056 *scratch)
{
    Inflate059 flow;
    Signed058 result;
    if (stream == 0 || stream->state == 0 || stream->next_output == 0 ||
            (stream->next_input == 0 && stream->available_input != 0))
        return -2;
    flow.stream = stream;
    flow.state = stream->state;
    flow.flush = flush;
    flow.fixed = fixed;
    flow.scratch = scratch;
    if (flow.state->mode == BLOCK059)
        flow.state->mode = BLOCK_BODY059;
    stream_load059(&flow);
    flow.input_start = flow.available;
    flow.output_start = flow.space;
    for (;;) {
        if (flow.state->mode <= DICTIONARY059) {
            result = stream_header059(&flow);
            if (result == 2) {
                stream_restore059(&flow);
                return 2;
            }
        } else if (flow.state->mode <= LITERAL059)
            result = stream_body059(&flow);
        else if (flow.state->mode <= TRAILER_LENGTH059)
            result = trailer(&flow);
        else if (flow.state->mode == DONE059)
            return leave(&flow, 1);
        else if (flow.state->mode == BAD059)
            return leave(&flow, -3);
        else
            return flow.state->mode == MEMORY059 ? -4 : -2;
        if (result == 1)
            return leave(&flow, 0);
        if (result < 0)
            return result;
    }
}
