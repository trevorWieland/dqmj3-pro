#include "stream058.h"
#include "crc.h"

static Word058 reverse(Word058 value, Word058 bits)
{
    Word058 result = 0;
    while (bits--) {
        result = (result << 1) | (value & 1);
        value >>= 1;
    }
    return result;
}

static void fixed_tables(StreamCode056 *table)
{
    Word058 symbol;
    Word058 code;
    Word058 bits;
    Word058 operation;
    Word058 value;
    Word058 extra;
    Word058 index;
    for (symbol = 0; symbol < 288; ++symbol) {
        if (symbol < 144) {
            bits = 8;
            code = symbol + 48;
        } else if (symbol < 256) {
            bits = 9;
            code = symbol + 256;
        } else if (symbol < 280) {
            bits = 7;
            code = symbol - 256;
        } else {
            bits = 8;
            code = symbol - 88;
        }
        operation = 0;
        value = symbol;
        if (symbol == 256) {
            operation = 96;
            value = 0;
        } else if (symbol > 256 && symbol < 265) {
            operation = 16;
            value = symbol - 254;
        } else if (symbol < 285 && symbol >= 265) {
            extra = (symbol - 261) >> 2;
            operation = 16 | extra;
            value = (1u << (extra + 2)) + 3 + (((symbol - 265) & 3) << extra);
        } else if (symbol == 285) {
            operation = 16;
            value = 258;
        } else if (symbol > 285) {
            operation = 64;
            value = 0;
        }
        for (index = reverse(code, bits); index < 512; index += 1u << bits) {
            table[index].operation = (Byte058)operation;
            table[index].bits = (Byte058)bits;
            table[index].value = (Half058)value;
        }
    }
    for (symbol = 0; symbol < 32; ++symbol) {
        extra = symbol < 4 ? 0 : (symbol >> 1) - 1;
        value = symbol < 4 ? symbol + 1 : ((2 + (symbol & 1)) << extra) + 1;
        index = 512 + reverse(symbol, 5);
        table[index].operation = symbol < 30 ? (Byte058)(16 | extra) : 64;
        table[index].bits = 5;
        table[index].value = symbol < 30 ? (Half058)value : 0;
    }
}

static Word058 little_word(const Byte058 *bytes)
{
    return (Word058)bytes[0] | ((Word058)bytes[1] << 8) |
        ((Word058)bytes[2] << 16) | ((Word058)bytes[3] << 24);
}

Signed058 stream_gzip_fixed058(Stream058 *stream, const Byte058 *input, Word058 bytes,
    Byte058 *output, Word058 capacity, StreamCode056 *tables, StreamState056 *scratch)
{
    static const Byte058 version[] = "1";
    State058 *state;
    Word058 produced;
    Word058 checksum;
    Signed058 result;
    if (bytes < 19 || input[0] != 31 || input[1] != 139 || input[2] != 8 || input[3] != 0 ||
        (input[10] & 7) != 3 || capacity < 258)
        return -2;
    result = fn_00733c00(stream, 31, version, sizeof(Stream058));
    if (result != 0)
        return result;
    state = stream->state;
    fixed_tables(tables);
    stream->next_input = input + 11;
    stream->available_input = bytes - 11;
    stream->next_output = output;
    stream->available_output = capacity;
    state->last = 1;
    state->lengths = tables;
    state->distances = tables + 512;
    state->length_bits = 9;
    state->distance_bits = 5;
    state->mode = 20;
    state->hold = input[10] >> 3;
    state->bits = 5;
    stream_fast058(stream, capacity, scratch);
    produced = (Word058)(stream->next_output - output);
    result = -3;
    if (state->mode == 11 && stream->available_input >= 8) {
        checksum = fn_007305b8(0, output, produced);
        if (checksum == little_word(stream->next_input) && produced == little_word(stream->next_input + 4)) {
            stream->next_input += 8;
            stream->available_input -= 8;
            stream->total_input = bytes - stream->available_input;
            stream->total_output = produced;
            stream->checksum = checksum;
            state->mode = 28;
            result = 1;
        }
    }
    fn_00733bb0(stream);
    return result;
}
