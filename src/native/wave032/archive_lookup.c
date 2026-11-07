#include "archive.h"

ArchiveWord archive_word(const unsigned char *bytes)
{
    return (ArchiveWord)bytes[0] | (ArchiveWord)bytes[1] << 8 |
        (ArchiveWord)bytes[2] << 16 | (ArchiveWord)bytes[3] << 24;
}

static ArchiveWord rotate_right(ArchiveWord value, unsigned int bits)
{
    bits &= 31;
    return value >> bits | value << ((32 - bits) & 31);
}

static ArchiveWord arithmetic_right(ArchiveWord value, unsigned int bits)
{
    ArchiveWord sign = 0u - (value >> 31);
    if (bits == 32)
        return sign;
    return value >> bits | sign << (32 - bits);
}

ArchiveWord fn_00183688(const ArchiveView *view, const char *name)
{
    const unsigned char *image = view->image->bytes;
    if (image == (void *)0)
        return 0xffffffffu;
    ArchiveWord seed = archive_word(image + 12);
    ArchiveWord hash = 0;
    ArchiveWord sum = 0;
    while (*name != 0) {
        int character = (signed char)*name++;
        ArchiveWord value = (ArchiveWord)character;
        sum += value;
        unsigned int shift = sum & 31;
        ArchiveWord folded = arithmetic_right(value, 32 - shift) | value << shift;
        hash += folded + rotate_right(seed, 0u - value);
    }
    ArchiveWord count = archive_word(image + 4);
    ArchiveWord mode = archive_word(image + 8);
    if (mode < 2) {
        const unsigned char *lookup = image + 32 + count * 16;
        int first = 0;
        int last = count == 0 ? -1 : (int)count - 1;
        for (;;) {
            int middle = (first + last) / 2;
            const unsigned char *entry = lookup + middle * 8;
            ArchiveWord key = archive_word(entry);
            if (key == hash)
                return archive_word(entry + 4);
            if (first == last)
                return 0xffffffffu;
            if (key > hash)
                last = middle;
            else
                first = first == middle ? last : middle;
        }
    }
    for (ArchiveWord index = 0; index < count; ++index) {
        if (archive_word(image + 32 + index * 16 + 12) == hash)
            return index;
    }
    return 0xffffffffu;
}
