#include "inflate059.h"

static Signed058 read_code_lengths(Inflate059 *flow)
{
    static const Byte058 order[] = {16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15};
    State058 *state = flow->state;
    Word058 *counts = state->untouched_counts;
    while (counts[3] < counts[0]) {
        if (!stream_need059(flow, 3))
            return 1;
        stream_put_half059(state->untouched_work, order[counts[3]++], flow->hold & 7);
        stream_drop059(flow, 3);
    }
    while (counts[3] < 19)
        stream_put_half059(state->untouched_work, order[counts[3]++], 0);
    state->next_code = state->codes;
    state->lengths = state->next_code;
    state->length_bits = 7;
    if (stream_table059(0, state->untouched_work, 19, &state->next_code,
            &state->length_bits, state->untouched_work + 640)) {
        stream_error059(flow, "invalid code lengths set");
        return 0;
    }
    counts[3] = 0;
    state->mode = SYMBOL_LENGTHS059;
    return 0;
}

static Signed058 read_symbol_lengths(Inflate059 *flow)
{
    State058 *state = flow->state;
    Word058 *counts = state->untouched_counts;
    Word058 value;
    Word058 repeat;
    Word058 extra;
    Word058 minimum;
    StreamCode056 node;
    while (counts[3] < counts[1] + counts[2]) {
        for (;;) {
            node = state->lengths[flow->hold & stream_mask059(state->length_bits)];
            if (node.bits <= flow->bits)
                break;
            if (!stream_need059(flow, flow->bits + 1))
                return 1;
        }
        if (node.value < 16) {
            stream_drop059(flow, node.bits);
            stream_put_half059(state->untouched_work, counts[3]++, node.value);
            continue;
        }
        extra = node.value == 16 ? 2 : node.value == 17 ? 3 : 7;
        minimum = node.value == 18 ? 11 : 3;
        if (!stream_need059(flow, node.bits + extra))
            return 1;
        stream_drop059(flow, node.bits);
        if (node.value == 16 && counts[3] == 0) {
            stream_error059(flow, "invalid bit length repeat");
            return 0;
        }
        value = node.value == 16 ? stream_half059(state->untouched_work, counts[3] - 1) : 0;
        repeat = minimum + (flow->hold & stream_mask059(extra));
        stream_drop059(flow, extra);
        if (counts[3] + repeat > counts[1] + counts[2]) {
            stream_error059(flow, "invalid bit length repeat");
            return 0;
        }
        while (repeat--)
            stream_put_half059(state->untouched_work, counts[3]++, value);
    }
    if (stream_half059(state->untouched_work, 256) == 0) {
        stream_error059(flow, "invalid code -- missing end-of-block");
        return 0;
    }
    state->next_code = state->codes;
    state->lengths = state->next_code;
    state->length_bits = 9;
    if (stream_table059(1, state->untouched_work, counts[1], &state->next_code,
            &state->length_bits, state->untouched_work + 640)) {
        stream_error059(flow, "invalid literal/lengths set");
        return 0;
    }
    state->distances = state->next_code;
    state->distance_bits = 6;
    if (stream_table059(2, state->untouched_work + counts[1] * 2, counts[2], &state->next_code,
            &state->distance_bits, state->untouched_work + 640)) {
        stream_error059(flow, "invalid distances set");
        return 0;
    }
    state->mode = LENGTH_FIRST059;
    return flow->flush == 6 ? 1 : 0;
}

Signed058 stream_dynamic059(Inflate059 *flow)
{
    State058 *state = flow->state;
    Word058 *counts = state->untouched_counts;
    if (state->mode == TABLE059) {
        if (!stream_need059(flow, 14))
            return 1;
        counts[1] = 257 + (flow->hold & 31);
        stream_drop059(flow, 5);
        counts[2] = 1 + (flow->hold & 31);
        stream_drop059(flow, 5);
        counts[0] = 4 + (flow->hold & 15);
        stream_drop059(flow, 4);
        if (counts[1] > 286 || counts[2] > 30) {
            stream_error059(flow, "too many length or distance symbols");
            return 0;
        }
        counts[3] = 0;
        state->mode = CODE_LENGTHS059;
        return 0;
    }
    if (state->mode == CODE_LENGTHS059)
        return read_code_lengths(flow);
    return read_symbol_lengths(flow);
}
