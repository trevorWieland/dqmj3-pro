#include "inflate059.h"

static StreamCode056 symbol_code(Word058 type, Word058 symbol, Word058 bits)
{
    StreamCode056 code;
    Word058 index;
    Word058 extra;
    code.bits = (Byte058)bits;
    code.operation = 0;
    code.value = (Half058)symbol;
    if (type == 0 || (type == 1 && symbol < 256))
        return code;
    if (type == 1 && symbol == 256) {
        code.operation = 96;
        code.value = 0;
        return code;
    }
    if (type == 1) {
        index = symbol - 257;
        extra = index < 8 ? 0 : (index - 8) / 4 + 1;
        code.operation = index < 28 ? (Byte058)(16 + extra) : index == 28 ? 16 : index == 29 ? 78 : 68;
        code.value = index < 8 ? (Half058)(index + 3) : index < 28 ?
            (Half058)(((4 + ((index - 8) & 3)) << extra) + 3) : index == 28 ? 258 : 0;
    } else {
        extra = symbol < 4 ? 0 : symbol / 2 - 1;
        code.operation = symbol < 30 ? (Byte058)(16 + extra) : 64;
        code.value = symbol < 4 ? (Half058)(symbol + 1) : symbol < 30 ?
            (Half058)(((2 + (symbol & 1)) << extra) + 1) : 0;
    }
    return code;
}

static Word058 reverse_increment(Word058 code, Word058 bits)
{
    Word058 step = 1u << (bits - 1);
    while (code & step)
        step >>= 1;
    return step ? (code & (step - 1)) + step : 0;
}

static int exceeds_capacity(Word058 type, Word058 used)
{
    return (type == 1 && used >= 852) || (type == 2 && used >= 592);
}

Signed058 stream_table059(Word058 type, const Byte058 *lengths, Word058 symbols,
    StreamCode056 **table, Word058 *root_bits, Byte058 *work)
{
    Word058 counts[16];
    Word058 offsets[16];
    Word058 minimum;
    Word058 maximum;
    Word058 root;
    Word058 index;
    Word058 length;
    Word058 code = 0;
    Word058 current;
    Word058 drop = 0;
    Word058 previous = ~0u;
    Word058 used;
    Word058 mask;
    Word058 fill;
    Word058 step;
    Word058 table_size = 0;
    Signed058 available;
    StreamCode056 node;
    StreamCode056 *next = *table;
    for (index = 0; index != 16; ++index)
        counts[index] = 0;
    for (index = 0; index != symbols; ++index)
        ++counts[stream_half059(lengths, index)];
    maximum = 15;
    while (maximum && counts[maximum] == 0)
        --maximum;
    root = *root_bits > maximum ? maximum : *root_bits;
    if (maximum == 0) {
        node.operation = 64;
        node.bits = 1;
        node.value = 0;
        *(*table)++ = node;
        *(*table)++ = node;
        *root_bits = 1;
        return 0;
    }
    minimum = 1;
    while (minimum < maximum && counts[minimum] == 0)
        ++minimum;
    if (root < minimum)
        root = minimum;
    available = 1;
    for (index = 1; index != 16; ++index) {
        available = available * 2 - (Signed058)counts[index];
        if (available < 0)
            return -1;
    }
    if (available > 0 && (type == 0 || maximum != 1))
        return -1;
    offsets[1] = 0;
    for (index = 1; index < 15; ++index)
        offsets[index + 1] = offsets[index] + counts[index];
    for (index = 0; index < symbols; ++index) {
        length = stream_half059(lengths, index);
        if (length)
            stream_put_half059(work, offsets[length]++, index);
    }
    current = root;
    used = 1u << root;
    mask = used - 1;
    if (exceeds_capacity(type, used))
        return 1;
    length = minimum;
    index = 0;
    for (;;) {
        node = symbol_code(type, stream_half059(work, index), length - drop);
        step = 1u << (length - drop);
        fill = 1u << current;
        table_size = fill;
        do {
            fill -= step;
            next[(code >> drop) + fill] = node;
        } while (fill);
        code = reverse_increment(code, length);
        ++index;
        if (--counts[length] == 0) {
            if (length == maximum)
                break;
            length = stream_half059(lengths, stream_half059(work, index));
        }
        if (length > root && (code & mask) != previous) {
            if (drop == 0)
                drop = root;
            next += table_size;
            current = length - drop;
            available = (Signed058)(1u << current);
            while (current + drop < maximum) {
                available -= (Signed058)counts[current + drop];
                if (available <= 0)
                    break;
                ++current;
                available *= 2;
            }
            used += 1u << current;
            if (exceeds_capacity(type, used))
                return 1;
            previous = code & mask;
            (*table)[previous].operation = (Byte058)current;
            (*table)[previous].bits = (Byte058)root;
            (*table)[previous].value = (Half058)(next - *table);
        }
    }
    if (code) {
        node.operation = 64;
        node.bits = (Byte058)(length - drop);
        node.value = 0;
        next[code >> drop] = node;
    }
    *table += used;
    *root_bits = root;
    return 0;
}

void stream_fixed059(StreamCode056 *table)
{
    Word058 symbol;
    Word058 bits;
    Word058 code;
    Word058 reversed;
    Word058 index;
    Word058 count;
    StreamCode056 node;
    for (symbol = 0; symbol < 288; ++symbol) {
        bits = symbol < 144 ? 8 : symbol < 256 ? 9 : symbol < 280 ? 7 : 8;
        code = symbol < 144 ? symbol + 48 : symbol < 256 ? symbol + 256 :
            symbol < 280 ? symbol - 256 : symbol - 88;
        reversed = 0;
        for (count = 0; count < bits; ++count) {
            reversed = (reversed << 1) | (code & 1);
            code >>= 1;
        }
        node = symbol_code(1, symbol, bits);
        if (symbol >= 286)
            node.operation = 64;
        for (index = reversed; index < 512; index += 1u << bits)
            table[index] = node;
    }
    for (symbol = 0; symbol < 32; ++symbol) {
        reversed = 0;
        code = symbol;
        for (count = 0; count < 5; ++count) {
            reversed = (reversed << 1) | (code & 1);
            code >>= 1;
        }
        table[512 + reversed] = symbol_code(2, symbol, 5);
    }
}
