#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined4 fn_0028e264(); extern undefined4 fn_002c4694(); extern undefined4 fn_0031aa80(); extern undefined4 fn_00327a7c(); extern undefined4 fn_0036bae4();
extern uint fn_0036bb80(); extern int fn_00397a0c(); extern undefined4 fn_003f800c(); extern undefined4 fn_003f81c0(); extern int fn_003f8338(); extern undefined4 fn_003f847c();
extern undefined4 fn_003f84d4(); extern undefined4 fn_003f8554(); extern undefined4 fn_003f860c(); extern undefined4 fn_003fad58(); extern undefined4 * fn_003fbe64(); extern undefined4 * fn_003fc300();
extern undefined4 * fn_003fc6fc(); extern undefined4 * fn_003fd1b4(); extern undefined4 fn_003fd47c(); extern undefined4 fn_003fdee8(); extern undefined4 fn_003ff840(); extern undefined4 fn_003ff930();
extern undefined4 fn_00400f88(); extern undefined4 fn_00401010(); extern undefined4 fn_00401b70(); extern undefined4 fn_00689828(); extern undefined4 fn_0068ab44();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_00833c18[]; extern unsigned char DAT_008347cc[]; extern unsigned char DAT_00834ce0[]; extern unsigned char DAT_008354ec[];
extern undefined4 DAT_008923f4;
