#ifndef DQMJ3_MD5_STREAM029_H
#define DQMJ3_MD5_STREAM029_H

#include "../wave024/digest.h"

typedef struct Md5Stream029 {
    unsigned int low_bytes;
    unsigned int high_bytes;
    unsigned int state[4];
    unsigned char buffer[64];
} Md5Stream029;

_Static_assert(sizeof(Md5Stream029) == 88, "MD5 context layout differs");
void fn_001b24a0(Md5Stream029 *context);
void fn_003019f0(Md5Stream029 *context, const unsigned char *input, unsigned int bytes);
void fn_001b2214(Md5Stream029 *context, unsigned char output[16]);

#endif
