#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined4 * fn_0025dea8(); extern undefined4 fn_002c4694(); extern undefined4 fn_00318bc4(); extern undefined4 fn_003432cc(); extern undefined4 fn_003492e4();
extern undefined4 fn_003690f4(); extern undefined4 fn_00390794(); extern undefined4 fn_0039571c(); extern int fn_00397a0c(); extern undefined4 fn_0039b5d8(); extern undefined4 * fn_003b17d4();
extern undefined4 fn_003dcc90(); extern undefined4 fn_003ebc7c(); extern undefined4 fn_003f01e4(); extern undefined4 * fn_003f0ccc(); extern undefined4 fn_003f2aa4(); extern undefined4 fn_003f6e28();
extern undefined4 fn_0040e3f0(); extern undefined4 fn_0044aa1c(); extern undefined1 fn_0066e158(); extern int fn_0066e3bc(); extern undefined4 * fn_0068ab5c(); extern undefined4 * fn_00749ddc();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_007c7474[]; extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_00831dac[]; extern unsigned char DAT_00831dc0[]; extern unsigned char DAT_00832288[];
extern unsigned char DAT_00832b38[]; extern unsigned char DAT_00833248[]; extern unsigned char DAT_008334c4[]; extern unsigned char DAT_0083360c[]; extern unsigned char DAT_0083374c[];
extern unsigned char DAT_00834594[]; extern unsigned char DAT_00834e20[]; extern unsigned char DAT_00834e54[]; extern unsigned char DAT_00834e7c[]; extern unsigned char DAT_00834eb4[];
extern unsigned char DAT_00834fa4[]; extern unsigned char DAT_0083504c[]; extern unsigned char DAT_00835088[]; extern unsigned char DAT_008357a0[]; extern undefined4 DAT_008923f4;
extern undefined4 DAT_00898840;
