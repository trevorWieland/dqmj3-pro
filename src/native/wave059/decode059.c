#include "inflate059.h"

static Signed058 decode_node(Inflate059 *flow, const StreamCode056 *table,
    Word058 root_bits, int distance, StreamCode056 *result)
{
    StreamCode056 first;
    StreamCode056 node;
    for (;;) {
        node = table[flow->hold & stream_mask059(root_bits)];
        if (node.bits <= flow->bits)
            break;
        if (!stream_need059(flow, flow->bits + 1))
            return 1;
    }
    if ((distance || node.operation) && (node.operation & 0xf0) == 0) {
        first = node;
        for (;;) {
            node = table[first.value + ((flow->hold & stream_mask059(first.bits + first.operation)) >> first.bits)];
            if ((Word058)first.bits + node.bits <= flow->bits)
                break;
            if (!stream_need059(flow, flow->bits + 1))
                return 1;
        }
        stream_drop059(flow, first.bits);
        flow->state->back += first.bits;
    }
    stream_drop059(flow, node.bits);
    flow->state->back += node.bits;
    *result = node;
    return 0;
}

static Signed058 copy_match(Inflate059 *flow)
{
    State058 *state = flow->state;
    Word058 count;
    Word058 copied = flow->output_start - flow->space;
    const Byte058 *from;
    if (flow->space == 0)
        return 1;
    if (state->untouched_distance > copied) {
        count = state->untouched_distance - copied;
        if (count > state->window_have && state->sane) {
            stream_error059(flow, "invalid distance too far back");
            return 0;
        }
        if (count > state->window_next) {
            count -= state->window_next;
            from = state->window + (state->window_size - count);
        } else
            from = state->window + (state->window_next - count);
        if (count > state->untouched_length)
            count = state->untouched_length;
    } else {
        from = flow->output - state->untouched_distance;
        count = state->untouched_length;
    }
    if (count > flow->space)
        count = flow->space;
    flow->space -= count;
    state->untouched_length -= count;
    do {
        *flow->output++ = *from++;
    } while (--count);
    if (state->untouched_length == 0)
        state->mode = LENGTH059;
    return 0;
}

Signed058 stream_decode059(Inflate059 *flow)
{
    State058 *state = flow->state;
    StreamCode056 node;
    Word058 extra;
    switch (state->mode) {
    case LENGTH_FIRST059:
        state->mode = LENGTH059;
        return 0;
    case LENGTH059:
        if (flow->available >= 6 && flow->space >= 258) {
            stream_restore059(flow);
            stream_fast058(flow->stream, flow->output_start, flow->scratch);
            stream_load059(flow);
            if (state->mode == BLOCK059)
                state->back = -1;
            return 0;
        }
        state->back = 0;
        if (decode_node(flow, state->lengths, state->length_bits, 0, &node))
            return 1;
        state->untouched_length = node.value;
        if (node.operation == 0) {
            state->mode = LITERAL059;
            return 0;
        }
        if (node.operation & 32) {
            state->back = -1;
            state->mode = BLOCK059;
            return 0;
        }
        if (node.operation & 64) {
            stream_error059(flow, "invalid literal/length code");
            return 0;
        }
        state->untouched_extra = node.operation & 15;
        state->mode = LENGTH_EXTRA059;
        return 0;
    case LENGTH_EXTRA059:
        extra = state->untouched_extra;
        if (extra) {
            if (!stream_need059(flow, extra))
                return 1;
            state->untouched_length += flow->hold & stream_mask059(extra);
            stream_drop059(flow, extra);
            state->back += (Signed058)extra;
        }
        state->untouched_tail = state->untouched_length;
        state->mode = DISTANCE059;
        return 0;
    case DISTANCE059:
        if (decode_node(flow, state->distances, state->distance_bits, 1, &node))
            return 1;
        if (node.operation & 64) {
            stream_error059(flow, "invalid distance code");
            return 0;
        }
        state->untouched_distance = node.value;
        state->untouched_extra = node.operation & 15;
        state->mode = DISTANCE_EXTRA059;
        return 0;
    case DISTANCE_EXTRA059:
        extra = state->untouched_extra;
        if (extra) {
            if (!stream_need059(flow, extra))
                return 1;
            state->untouched_distance += flow->hold & stream_mask059(extra);
            stream_drop059(flow, extra);
            state->back += (Signed058)extra;
        }
        state->mode = MATCH059;
        return 0;
    case MATCH059:
        return copy_match(flow);
    case LITERAL059:
        if (flow->space == 0)
            return 1;
        *flow->output++ = (Byte058)state->untouched_length;
        --flow->space;
        state->mode = LENGTH059;
        return 0;
    default:
        return -2;
    }
}
