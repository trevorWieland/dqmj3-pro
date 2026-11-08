#include "effect_cached.h"

static unsigned int decimal_key065(char *output, int key)
{
    unsigned int magnitude = key < 0 ? 0u - (unsigned int)key : (unsigned int)key;
    char reversed[10];
    unsigned int count = 0;
    do {
        reversed[count++] = (char)('0' + magnitude % 10);
        magnitude /= 10;
    } while (magnitude != 0);
    unsigned int at = 0;
    if (key < 0)
        output[at++] = '-';
    for (unsigned int used = count + at; used < 5; ++used)
        output[at++] = '0';
    while (count != 0)
        output[at++] = reversed[--count];
    return at;
}

void effect_cached_member_name065(char *output, int key, const char *suffix)
{
    output[0] = 'e';
    output[1] = 'f';
    unsigned int at = 2 + decimal_key065(output + 2, key);
    output[at++] = '.';
    while (*suffix)
        output[at++] = *suffix++;
    output[at] = 0;
}

void effect_cached_path065(unsigned short *output, int key, int mode)
{
    const char *prefix = mode == 0 ? "rom:/data/Effect/" : "patch:/data/Effect/";
    unsigned int at = 0;
    while (*prefix)
        output[at++] = (unsigned char)*prefix++;
    char member[32];
    effect_cached_member_name065(member, key, mode == 0 ? "bch" : "pef");
    const char *next = member;
    while (*next)
        output[at++] = (unsigned char)*next++;
    output[at] = 0;
}
