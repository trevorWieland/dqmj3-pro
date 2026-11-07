#include "inflate059.h"
#include "crc.h"

static Word058 header_check(Word058 checksum, Word058 value, Word058 count)
{
    Byte058 bytes[4];
    bytes[0] = (Byte058)value;
    bytes[1] = (Byte058)(value >> 8);
    bytes[2] = (Byte058)(value >> 16);
    bytes[3] = (Byte058)(value >> 24);
    return fn_007305b8(checksum, bytes, count);
}

static void clear_bits(Inflate059 *flow)
{
    flow->bits = 0;
    flow->hold = 0;
}

static void check_header_word(Inflate059 *flow, Word058 count)
{
    if (flow->state->untouched_0010 & 0x200)
        flow->state->untouched_0018 = header_check(flow->state->untouched_0018, flow->hold, count);
    clear_bits(flow);
}

static Signed058 gzip_text(Inflate059 *flow, int is_comment)
{
    State058 *state = flow->state;
    Header059 *header = state->header;
    Byte058 *destination = 0;
    Word058 maximum = 0;
    Word058 value = 0;
    Word058 copied = 0;
    Word058 flag = is_comment ? 0x1000 : 0x800;
    if (header) {
        destination = is_comment ? header->comment : header->name;
        maximum = is_comment ? header->comment_maximum : header->name_maximum;
    }
    if (state->untouched_0010 & flag) {
        if (flow->available == 0)
            return 1;
        do {
            value = flow->next[copied++];
            if (destination && state->untouched_length < maximum)
                destination[state->untouched_length++] = (Byte058)value;
        } while (value && copied < flow->available);
        if (state->untouched_0010 & 0x200)
            state->untouched_0018 = fn_007305b8(state->untouched_0018, flow->next, copied);
        flow->available -= copied;
        flow->next += copied;
        if (value)
            return 1;
    } else if (header) {
        if (is_comment)
            header->comment = 0;
        else
            header->name = 0;
    }
    if (!is_comment)
        state->untouched_length = 0;
    state->mode = is_comment ? HEADER_CRC059 : COMMENT059;
    return 0;
}

Signed058 stream_header059(Inflate059 *flow)
{
    State058 *state = flow->state;
    Header059 *header = state->header;
    Word058 value;
    Word058 copied;
    Word058 offset;
    switch (state->mode) {
    case HEADER059:
        if (state->wrap == 0) {
            state->mode = BLOCK_BODY059;
            return 0;
        }
        if (!stream_need059(flow, 16))
            return 1;
        if ((state->wrap & 2) && flow->hold == 0x8b1f) {
            state->untouched_0018 = header_check(fn_007305b8(0, 0, 0), flow->hold, 2);
            clear_bits(flow);
            state->mode = FLAGS059;
            return 0;
        }
        state->untouched_0010 = 0;
        if (header)
            header->done = -1;
        if (!(state->wrap & 1) || (((flow->hold & 255) << 8) + (flow->hold >> 8)) % 31) {
            stream_error059(flow, "incorrect header check");
            return 0;
        }
        if ((flow->hold & 15) != 8) {
            stream_error059(flow, "unknown compression method");
            return 0;
        }
        stream_drop059(flow, 4);
        value = (flow->hold & 15) + 8;
        if (state->window_bits == 0)
            state->window_bits = value;
        else if (value > state->window_bits) {
            stream_error059(flow, "invalid window size");
            return 0;
        }
        state->maximum_distance = 1u << value;
        flow->stream->checksum = state->untouched_0018 = stream_adler059(0, 0, 0);
        state->mode = flow->hold & 0x200 ? DICTIONARY_ID059 : BLOCK059;
        clear_bits(flow);
        return 0;
    case FLAGS059:
        if (!stream_need059(flow, 16))
            return 1;
        state->untouched_0010 = flow->hold;
        if ((flow->hold & 255) != 8)
            stream_error059(flow, "unknown compression method");
        else if (flow->hold & 0xe000)
            stream_error059(flow, "unknown header flags set");
        else {
            if (header)
                header->text = (Signed058)((flow->hold >> 8) & 1);
            check_header_word(flow, 2);
            state->mode = TIME059;
        }
        return 0;
    case TIME059:
        if (!stream_need059(flow, 32))
            return 1;
        if (header)
            header->time = flow->hold;
        check_header_word(flow, 4);
        state->mode = OS059;
        return 0;
    case OS059:
        if (!stream_need059(flow, 16))
            return 1;
        if (header) {
            header->extra_flags = (Signed058)(flow->hold & 255);
            header->operating_system = (Signed058)(flow->hold >> 8);
        }
        check_header_word(flow, 2);
        state->mode = EXTRA_LENGTH059;
        return 0;
    case EXTRA_LENGTH059:
        if (state->untouched_0010 & 0x400) {
            if (!stream_need059(flow, 16))
                return 1;
            state->untouched_length = flow->hold;
            if (header)
                header->extra_length = flow->hold;
            check_header_word(flow, 2);
        } else if (header)
            header->extra = 0;
        state->mode = EXTRA059;
        return 0;
    case EXTRA059:
        if (state->untouched_0010 & 0x400) {
            copied = state->untouched_length;
            if (copied > flow->available)
                copied = flow->available;
            if (copied) {
                if (header && header->extra) {
                    offset = header->extra_length - state->untouched_length;
                    value = offset + copied > header->extra_maximum ? header->extra_maximum - offset : copied;
                    stream_copy059(header->extra + offset, flow->next, value);
                }
                if (state->untouched_0010 & 0x200)
                    state->untouched_0018 = fn_007305b8(state->untouched_0018, flow->next, copied);
                flow->available -= copied;
                flow->next += copied;
                state->untouched_length -= copied;
            }
            if (state->untouched_length)
                return 1;
        }
        state->untouched_length = 0;
        state->mode = NAME059;
        return 0;
    case NAME059:
        return gzip_text(flow, 0);
    case COMMENT059:
        return gzip_text(flow, 1);
    case HEADER_CRC059:
        if (state->untouched_0010 & 0x200) {
            if (!stream_need059(flow, 16))
                return 1;
            if (flow->hold != (state->untouched_0018 & 65535)) {
                stream_error059(flow, "header crc mismatch");
                return 0;
            }
            clear_bits(flow);
        }
        if (header) {
            header->header_crc = (Signed058)((state->untouched_0010 >> 9) & 1);
            header->done = 1;
        }
        flow->stream->checksum = state->untouched_0018 = fn_007305b8(0, 0, 0);
        state->mode = BLOCK059;
        return 0;
    case DICTIONARY_ID059:
        if (!stream_need059(flow, 32))
            return 1;
        flow->stream->checksum = state->untouched_0018 = stream_reverse059(flow->hold);
        clear_bits(flow);
        state->mode = DICTIONARY059;
        return 0;
    case DICTIONARY059:
        if (state->dictionary_present == 0)
            return 2;
        flow->stream->checksum = state->untouched_0018 = stream_adler059(0, 0, 0);
        state->mode = BLOCK059;
        return 0;
    default:
        return -2;
    }
}
