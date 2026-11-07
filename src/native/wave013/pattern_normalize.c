#include "pattern_file_view.h"
#include "pattern_character_maps.h"

static unsigned short mapped_character(const PatternCharacterPair *pairs, unsigned int count, unsigned short value)
{
    for (unsigned int index = 0; index < count; ++index) {
        if (pairs[index].from == value)
            return pairs[index].to;
    }
    return value;
}

static unsigned short enlarged_kana(unsigned short value)
{
    return mapped_character(pattern_small_kana, 12, value);
}

void fn_004c446c(unsigned short *destination, int capacity, const unsigned short *source)
{
    unsigned int output = 0;
    unsigned int input = 0;
    unsigned int limit = (unsigned int)capacity - 1;
    while (output != limit) {
        unsigned short value = source[input];
        if (value == 0x20 || value == 0x3000) {
            ++input;
            continue;
        }
        if ((value >= 0xff41 && value <= 0xff5a) || (value >= 0xff21 && value <= 0xff3a) ||
            (value >= 0xff10 && value <= 0xff19)) {
            value = (unsigned short)(value + 0x120);
            ++input;
        } else if (value >= 0x3041 && value <= 0x3096) {
            value = enlarged_kana((unsigned short)(value + 0x60));
            ++input;
        } else if (value >= 0x30a1 && value <= 0x30fa) {
            value = enlarged_kana(value);
            ++input;
        } else if (value >= 0xff66 && value <= 0xff9f) {
            unsigned short next = source[input + 1];
            unsigned short combined = value;
            if (next == 0xff9e)
                combined = mapped_character(pattern_halfwidth_voiced, 21, value);
            else if (next == 0xff9f)
                combined = mapped_character(pattern_halfwidth_semivoiced, 5, value);
            if (combined != value) {
                value = combined;
                input += 2;
            } else {
                value = enlarged_kana(mapped_character(pattern_halfwidth_single, 58, value));
                ++input;
            }
        } else {
            destination[output] = value;
            if (value == 0)
                return;
            ++input;
            ++output;
            continue;
        }
        destination[output++] = value;
    }
    destination[output] = 0;
}
