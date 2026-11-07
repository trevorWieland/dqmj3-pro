#include "stream056.h"

static void decode(Stream056 *stream, StreamWord056 start)
{
    StreamState056 *state = stream->state;
    const StreamByte056 *input = stream->next_input;
    const StreamByte056 *input_limit = input + stream->available_input - 5;
    StreamByte056 *output = stream->next_output;
    StreamByte056 *begin = output - (start - stream->available_output);
    StreamByte056 *output_limit = output + stream->available_output - 257;
    StreamWord056 hold = state->hold;
    StreamWord056 bits = state->bits;
    StreamWord056 length_mask = (1u << state->length_bits) - 1u;
    StreamWord056 distance_mask = (1u << state->distance_bits) - 1u;
    StreamWord056 length;
    StreamWord056 distance;
    StreamWord056 extra;
    StreamWord056 needed;
    StreamWord056 index;
    StreamCode056 code;

    do {
        if (bits < 15) {
            hold |= (StreamWord056)*input++ << bits;
            bits += 8;
            hold |= (StreamWord056)*input++ << bits;
            bits += 8;
        }
        code = state->lengths[hold & length_mask];
        for (;;) {
            hold >>= code.bits;
            bits -= code.bits;
            if (code.operation == 0) {
                *output++ = (StreamByte056)code.value;
                break;
            }
            if (code.operation & 16) {
                length = code.value;
                extra = code.operation & 15;
                if (bits < extra) {
                    hold |= (StreamWord056)*input++ << bits;
                    bits += 8;
                }
                length += hold & ((1u << extra) - 1u);
                hold >>= extra;
                bits -= extra;
                if (bits < 15) {
                    hold |= (StreamWord056)*input++ << bits;
                    bits += 8;
                    hold |= (StreamWord056)*input++ << bits;
                    bits += 8;
                }
                code = state->distances[hold & distance_mask];
                for (;;) {
                    hold >>= code.bits;
                    bits -= code.bits;
                    if (code.operation & 16) {
                        distance = code.value;
                        extra = code.operation & 15;
                        while (bits < extra) {
                            hold |= (StreamWord056)*input++ << bits;
                            bits += 8;
                        }
                        distance += hold & ((1u << extra) - 1u);
                        hold >>= extra;
                        bits -= extra;
                        needed = distance > (StreamWord056)(output - begin)
                            ? distance - (StreamWord056)(output - begin) : 0;
                        if (needed > state->window_have && state->sane) {
                            stream->message = "invalid distance too far back";
                            state->mode = 29;
                            goto finish;
                        }
                        while (length--) {
                            if (needed) {
                                index = state->window_next + state->window_size - needed;
                                if (index >= state->window_size)
                                    index -= state->window_size;
                                *output++ = state->window[index];
                                --needed;
                            } else {
                                *output = *(output - distance);
                                ++output;
                            }
                        }
                        break;
                    }
                    if (code.operation & 64) {
                        stream->message = "invalid distance code";
                        state->mode = 29;
                        goto finish;
                    }
                    index = code.value + (hold & ((1u << code.operation) - 1u));
                    code = state->distances[index];
                }
                break;
            }
            if (code.operation & 64) {
                if (code.operation & 32) {
                    state->mode = 11;
                } else {
                    stream->message = "invalid literal/length code";
                    state->mode = 29;
                }
                goto finish;
            }
            index = code.value + (hold & ((1u << code.operation) - 1u));
            code = state->lengths[index];
        }
    } while (input < input_limit && output < output_limit);

finish:
    input -= bits >> 3;
    bits &= 7;
    stream->next_input = input;
    stream->available_input = (StreamWord056)(input_limit + 5 - input);
    stream->next_output = output;
    stream->available_output = (StreamWord056)(output_limit + 257 - output);
    state->hold = hold & ((1u << bits) - 1u);
    state->bits = bits;
}

void fn_00733e28(Stream056 *stream, StreamWord056 start)
{
    decode(stream, start);
}

void fn_00739d08(Stream056 *stream, StreamWord056 start)
{
    decode(stream, start);
}
