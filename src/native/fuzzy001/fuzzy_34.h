#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00231cb8(); extern undefined4 fn_00243550(); extern undefined4 fn_0028e264(); extern undefined4 fn_002b0b04(); extern undefined4 fn_002c4694();
extern int fn_00397a0c(); extern undefined4 * fn_0039b1e0(); extern undefined4 fn_00411cc4(); extern undefined4 fn_0042fe80(); extern undefined4 fn_0043d370(); extern undefined4 fn_0057ca9c();
extern undefined4 fn_0057ec1c(); extern undefined4 fn_00580f08(); extern undefined4 fn_00581030(); extern undefined4 fn_005810a8(); extern undefined4 fn_00583ef0(); extern undefined4 fn_00583fb8();
extern undefined4 fn_00584048(); extern undefined4 fn_005840dc(); extern undefined4 fn_00584144(); extern undefined4 fn_005841bc(); extern undefined4 fn_005c1bd0(); extern undefined4 fn_005c1d18();
extern undefined4 fn_00689828(); extern undefined4 * fn_0068ab5c();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_007c6d64[]; extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_008400fc[]; extern unsigned char DAT_0084024c[]; extern unsigned char DAT_0084065c[];
extern unsigned char DAT_00840670[]; extern unsigned char DAT_00840904[]; extern unsigned char DAT_00840a70[]; extern unsigned char DAT_00840bb0[]; extern unsigned char DAT_00840f5c[];
extern unsigned char DAT_00841690[]; extern unsigned char DAT_008417e4[]; extern undefined4 DAT_00897804;
