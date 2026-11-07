#include "texture.h"

static unsigned int read32(const unsigned char *p) { return p[0] | ((unsigned int)p[1] << 8) | ((unsigned int)p[2] << 16) | ((unsigned int)p[3] << 24); }
static int read16(const unsigned char *p) { return p[0] | ((int)p[1] << 8); }
static unsigned long long read64(const unsigned char *p) { return read32(p) | ((unsigned long long)read32(p + 4) << 32); }
static int power(int value) { int result = 8; while (result < value) result *= 2; return result; }
static int clamp(int value) { return value < 0 ? 0 : value > 255 ? 255 : value; }

static int header(const unsigned char *data, int size, int fields[8]) {
    const unsigned char *h, *image;
    int bits, rw, rh, need;
    if (!data || size < 40 || size > 8388608) return 0;
    h = data + size - 40; image = h + 20;
    if (read32(h) != 0x4d494c46u || read16(h + 4) != 0xfeff || read16(h + 6) != 20 || read32(h + 8) != 0x07020100u ||
        read32(h + 12) != (unsigned int)size || read32(h + 16) != 1 || read32(image) != 0x67616d69u || read32(image + 4) != 16 ||
        read16(image + 12) != 128 || read32(image + 16) != (unsigned int)size - 40) return 0;
    fields[0] = read16(image + 8); fields[1] = read16(image + 10);
    fields[2] = image[14]; fields[3] = image[15];
    if (!fields[0] || !fields[1] || fields[0] > 1024 || fields[1] > 1024 ||
        (fields[3] != 0 && fields[3] != 4 && fields[3] != 8)) return 0;
    if (fields[2] == 1) bits = 8;
    else if (fields[2] == 8) bits = 16;
    else if (fields[2] == 10 || fields[2] == 13) bits = 4;
    else if (fields[2] == 11) bits = 8;
    else return 0;
    rw = fields[3] ? fields[1] : fields[0]; rh = fields[3] ? fields[0] : fields[1];
    fields[4] = power(rw); fields[5] = power(rh);
    need = fields[4] * fields[5] * bits / 8;
    fields[6] = need; fields[7] = size - 40 - need;
    return fields[7] >= 0 && fields[7] <= (need > 128 ? need : 128);
}

int texture_info(const unsigned char *data, int size, int field) {
    int fields[8];
    return field >= 0 && field < 8 && header(data, size, fields) ? fields[field] : -1;
}

static int etc(const unsigned char *data, int alpha, int x, int y, unsigned int *color) {
    static const int modifiers[8][2] = {{2, 8}, {5, 17}, {9, 29}, {13, 42}, {18, 60}, {24, 80}, {33, 106}, {47, 183}};
    unsigned long long value = read64(data + (alpha ? 8 : 0));
    int flip = (int)(value >> 32) & 1, differential = (int)(value >> 33) & 1;
    int second = flip ? y >= 2 : x >= 2;
    int selector = x * 4 + y;
    int table = (int)(value >> (second ? 34 : 37)) & 7;
    int amount = modifiers[table][(value >> selector) & 1];
    int channels[3], channel;
    if ((value >> (selector + 16)) & 1) amount = -amount;
    for (channel = 0; channel < 3; ++channel) {
        int shift = 56 - channel * 8;
        int base;
        if (differential) {
            base = (int)(value >> (shift + 3)) & 31;
            if (second) {
                int delta = (int)(value >> shift) & 7;
                base += delta < 4 ? delta : delta - 8;
            }
            if (base < 0 || base > 31) return 0;
            base = (base << 3) | (base >> 2);
        } else base = ((int)(value >> (shift + (second ? 0 : 4))) & 15) * 17;
        channels[channel] = clamp(base + amount);
    }
    *color = ((unsigned int)(alpha ? (read64(data) >> (selector * 4) & 15) * 17 : 255) << 24) |
             ((unsigned int)channels[0] << 16) | ((unsigned int)channels[1] << 8) | channels[2];
    return 1;
}

int texture_decode(const unsigned char *data, int size, unsigned int *argb, int capacity) {
    int f[8], rw, rh, x, y;
    if (!argb || !header(data, size, f) || capacity < f[0] * f[1]) return 0;
    rw = f[3] ? f[1] : f[0]; rh = f[3] ? f[0] : f[1];
    for (y = 0; y < rh; ++y) for (x = 0; x < rw; ++x) {
        unsigned int color;
        int tile = (y / 8) * (f[4] / 8) + x / 8;
        int dx = f[3] ? y : x, dy = f[3] == 4 ? rw - x - 1 : f[3] == 8 ? x : y;
        if (f[2] == 10 || f[2] == 11) {
            int block = tile * 4 + ((y & 7) / 4) * 2 + (x & 7) / 4;
            if (!etc(data + block * (f[2] == 11 ? 16 : 8), f[2] == 11, x & 3, y & 3, &color)) return 0;
        } else {
            int morton = (x & 1) | ((y & 1) << 1) | ((x & 2) << 1) | ((y & 2) << 2) | ((x & 4) << 2) | ((y & 4) << 3);
            int pixel = tile * 64 + morton;
            if (f[2] == 1) color = ((unsigned int)data[pixel] << 24) | 0xffffffu;
            else if (f[2] == 13) color = ((unsigned int)((data[pixel / 2] >> ((pixel & 1) * 4)) & 15) * 17 << 24) | 0xffffffu;
            else {
                int packed = read16(data + pixel * 2);
                color = ((unsigned int)(packed & 15) * 17 << 24) | ((unsigned int)(packed >> 12) * 17 << 16) |
                        ((unsigned int)((packed >> 8) & 15) * 17 << 8) | (unsigned int)((packed >> 4) & 15) * 17;
            }
        }
        argb[dy * f[0] + dx] = color;
    }
    return f[0] * f[1];
}
