#include "inflate059.h"

Signed058 stream_body059(Inflate059 *flow)
{
    State058 *state = flow->state;
    Word058 type;
    Word058 count;
    switch (state->mode) {
    case BLOCK059:
        if (flow->flush == 5 || flow->flush == 6)
            return 1;
        goto block_header;
    case BLOCK_BODY059:
    block_header:
        if (state->last) {
            stream_drop059(flow, flow->bits & 7);
            state->mode = CHECK059;
            return 0;
        }
        if (!stream_need059(flow, 3))
            return 1;
        state->last = flow->hold & 1;
        stream_drop059(flow, 1);
        type = flow->hold & 3;
        if (type == 0)
            state->mode = STORED059;
        else if (type == 1) {
            stream_fixed059(flow->fixed);
            state->lengths = flow->fixed;
            state->distances = flow->fixed + 512;
            state->length_bits = 9;
            state->distance_bits = 5;
            state->mode = LENGTH_FIRST059;
        } else if (type == 2)
            state->mode = TABLE059;
        else
            stream_error059(flow, "invalid block type");
        stream_drop059(flow, 2);
        return type == 1 && flow->flush == 6 ? 1 : 0;
    case STORED059:
        stream_drop059(flow, flow->bits & 7);
        if (!stream_need059(flow, 32))
            return 1;
        if ((flow->hold & 65535) != ((flow->hold >> 16) ^ 65535)) {
            stream_error059(flow, "invalid stored block lengths");
            return 0;
        }
        state->untouched_length = flow->hold & 65535;
        flow->hold = 0;
        flow->bits = 0;
        state->mode = COPY_FIRST059;
        return flow->flush == 6 ? 1 : 0;
    case COPY_FIRST059:
        state->mode = COPY059;
        return 0;
    case COPY059:
        count = state->untouched_length;
        if (count == 0) {
            state->mode = BLOCK059;
            return 0;
        }
        if (count > flow->available)
            count = flow->available;
        if (count > flow->space)
            count = flow->space;
        if (count == 0)
            return 1;
        stream_copy059(flow->output, flow->next, count);
        flow->available -= count;
        flow->next += count;
        flow->space -= count;
        flow->output += count;
        state->untouched_length -= count;
        return 0;
    case TABLE059:
    case CODE_LENGTHS059:
    case SYMBOL_LENGTHS059:
        return stream_dynamic059(flow);
    default:
        return stream_decode059(flow);
    }
}
