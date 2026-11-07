#include "digest.h"
#include "digest_constants.h"

static unsigned int rotate_word(unsigned int value, unsigned int distance)
{
    return (value << distance) | (value >> (32u - distance));
}

void fn_001b2554(unsigned int state[4], const unsigned char block[64])
{
    static const unsigned char shifts[4][4] = {
        {7, 12, 17, 22}, {5, 9, 14, 20}, {4, 11, 16, 23}, {6, 10, 15, 21}
    };
    unsigned int words[16];
    for (unsigned int index = 0; index < 16; ++index) {
        const unsigned char *bytes = block + index * 4;
        words[index] = (unsigned int)bytes[0] | ((unsigned int)bytes[1] << 8)
            | ((unsigned int)bytes[2] << 16) | ((unsigned int)bytes[3] << 24);
    }
    unsigned int a = state[0], b = state[1], c = state[2], d = state[3];
    for (unsigned int step = 0; step < 64; ++step) {
        unsigned int nonlinear, index;
        if (step < 16) {
            nonlinear = (b & c) | (~b & d);
            index = step;
        } else if (step < 32) {
            nonlinear = (b & d) | (c & ~d);
            index = (5u * step + 1u) & 15u;
        } else if (step < 48) {
            nonlinear = b ^ c ^ d;
            index = (3u * step + 5u) & 15u;
        } else {
            nonlinear = c ^ (b | ~d);
            index = (7u * step) & 15u;
        }
        unsigned int next = b + rotate_word(a + nonlinear + words[index] + digest_constants024[step],
            shifts[step / 16][step & 3u]);
        a = d;
        d = c;
        c = b;
        b = next;
    }
    state[0] += a;
    state[1] += b;
    state[2] += c;
    state[3] += d;
}
