#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined4 fn_0023d070(); extern undefined4 * fn_0025dea8(); extern undefined4 fn_0028e264(); extern undefined4 fn_002c3d68(); extern undefined4 fn_003870a8();
extern undefined4 fn_003953b0(); extern undefined4 fn_0039571c(); extern undefined4 fn_003ba410(); extern undefined4 fn_0043f144(); extern int fn_004a2190(); extern undefined4 fn_005b8240();
extern undefined4 * fn_005b82b0(); extern undefined4 fn_005b8458(); extern int fn_005b8878(); extern undefined4 fn_005b8cec(); extern undefined4 * fn_005b92d4(); extern undefined4 fn_005ba2a4();
extern undefined4 * fn_005bc740(); extern undefined4 fn_006899f4(); extern undefined4 fn_0068ab44(); extern int fn_006e8f88(); extern undefined1 fn_006f6a6c();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_007c4dbc[]; extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_00847fac[]; extern unsigned char DAT_00847ff0[]; extern unsigned char DAT_00848004[];
extern unsigned char DAT_0084801c[]; extern unsigned char DAT_00848034[]; extern unsigned char DAT_008482a0[]; extern unsigned char DAT_008482b8[]; extern unsigned char DAT_008482d0[];
extern unsigned char DAT_00848a18[]; extern unsigned char DAT_00848ac8[]; extern unsigned char DAT_00848c14[];
