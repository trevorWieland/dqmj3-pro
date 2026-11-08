#ifndef DQMJ3_EFFECT_SERIALIZED065_H
#define DQMJ3_EFFECT_SERIALIZED065_H

static inline unsigned int effect_read_u32_065(const unsigned char *bytes)
{
    return (unsigned int)bytes[0] | (unsigned int)bytes[1] << 8 |
        (unsigned int)bytes[2] << 16 | (unsigned int)bytes[3] << 24;
}

static inline unsigned int effect_read_u16_065(const unsigned char *bytes)
{
    return (unsigned int)bytes[0] | (unsigned int)bytes[1] << 8;
}

static inline void effect_write_u32_065(unsigned char *bytes, unsigned int value)
{
    bytes[0] = (unsigned char)value;
    bytes[1] = (unsigned char)(value >> 8);
    bytes[2] = (unsigned char)(value >> 16);
    bytes[3] = (unsigned char)(value >> 24);
}

#endif
