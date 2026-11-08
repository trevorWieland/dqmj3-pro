#ifndef SDK_MD5062AG_H
#define SDK_MD5062AG_H

typedef unsigned int Md5Word062ag;
typedef unsigned char Md5Byte062ag;
typedef struct Md5Context062ag Md5Context062ag;
typedef struct Md5Methods062ag {
    void (*initialize)(Md5Context062ag *);
    void (*reserved1)(void);
    void (*update)(Md5Context062ag *, const Md5Byte062ag *, Md5Word062ag);
    void (*reserved3)(void);
    void (*finish)(Md5Context062ag *, Md5Byte062ag *);
    void (*reserved5)(void);
    void (*reserved6)(void);
    void (*block)(Md5Context062ag *);
} Md5Methods062ag;

struct Md5Context062ag {
    const Md5Methods062ag *methods;
    Md5Word062ag state[4];
    Md5Word062ag count;
    Md5Byte062ag block[64];
    Md5Byte062ag digest[16];
};
_Static_assert(sizeof(Md5Word062ag) == 4, "32-bit digest words");
_Static_assert(__CHAR_BIT__ == 8, "8-bit digest bytes");
extern const Md5Methods062ag sdk_md5_methods062ag;
void sdk_md5_initialize062ag(Md5Context062ag *);
void sdk_md5_update062ag(Md5Context062ag *, const Md5Byte062ag *, Md5Word062ag);
void sdk_md5_finish062ag(Md5Context062ag *, Md5Byte062ag *);
void sdk_md5_block062ag(Md5Context062ag *);
#endif
