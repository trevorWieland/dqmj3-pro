#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined8 fn_0017821c(); extern undefined4 fn_0017d96c(); extern undefined4 fn_0017de8c(); extern undefined4 fn_001a4270(); extern undefined4 fn_001a4698();
extern undefined4 fn_001a46b0(); extern undefined4 fn_001d9f9c(); extern undefined4 fn_00215e38(); extern undefined4 fn_0023d3f4(); extern undefined4 fn_002fdf94(); extern undefined4 * fn_00301f50();
extern undefined4 fn_00390794(); extern undefined4 fn_003ed51c(); extern undefined4 fn_004ecfd0(); extern undefined4 * fn_00520de8(); extern undefined4 fn_00523624(); extern undefined4 fn_00563ecc();
extern undefined4 fn_00566718(); extern undefined4 fn_00689824(); extern undefined4 fn_0068ab44();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_007d8878[]; extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_0083f458[]; extern unsigned char DAT_0083ffb8[]; extern unsigned char DAT_0083ffec[];
extern unsigned char DAT_00840024[]; extern unsigned char DAT_008573e4[]; extern unsigned char DAT_00857424[]; extern unsigned char DAT_008582a0[]; extern undefined4 DAT_008977e0;
extern unsigned char *DAT_008bf4d0; extern undefined4 DAT_008bfb34; extern undefined4 DAT_008c0464; extern unsigned char *DAT_008c0680; extern undefined4 DAT_008c3568;
extern undefined4 s_;
