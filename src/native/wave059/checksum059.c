#include "inflate059.h"

Word058 stream_adler059(Word058 checksum, const Byte058 *input, Word058 count)
{
    Word058 low = checksum & 65535;
    Word058 high = checksum >> 16;
    Word058 chunk;
    if (count == 1) {
        low += *input;
        if (low >= 65521)
            low -= 65521;
        high += low;
        if (high >= 65521)
            high -= 65521;
        return low | (high << 16);
    }
    if (input == 0)
        return 1;
    if (count < 16) {
        while (count--) {
            low += *input++;
            high += low;
        }
        if (low >= 65521)
            low -= 65521;
        high %= 65521;
        return low | (high << 16);
    }
    while (count) {
        chunk = count > 5552 ? 5552 : count;
        count -= chunk;
        while (chunk--) {
            low += *input++;
            high += low;
        }
        low %= 65521;
        high %= 65521;
    }
    return low | (high << 16);
}
