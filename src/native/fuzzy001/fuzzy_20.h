#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001d9f9c(); extern undefined4 fn_00215cb4(); extern undefined4 fn_0023d3f4(); extern undefined4 * fn_0025dea8(); extern undefined4 fn_0028e264();
extern undefined4 * fn_00301f50(); extern undefined4 * fn_003ac02c(); extern undefined4 fn_003ad5b0(); extern undefined4 fn_003af118(); extern undefined4 * fn_003afc00(); extern undefined4 fn_003b0f3c();
extern undefined4 * fn_003b17d4(); extern undefined4 fn_003b7e40(); extern int fn_003b7f00(); extern undefined4 fn_003b8be8(); extern undefined4 fn_003b9cfc(); extern undefined4 fn_003bb9c4();
extern undefined4 * fn_003bd438(); extern undefined4 * fn_003bf7e8(); extern undefined4 fn_003c0fcc(); extern undefined4 * fn_003c1708(); extern undefined4 fn_003c310c(); extern undefined4 fn_00416e5c();
extern undefined4 fn_005c21cc(); extern undefined4 * fn_0068ab5c();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_0082b7dc[]; extern unsigned char DAT_0082b7f0[]; extern unsigned char DAT_0082b838[]; extern unsigned char DAT_0082b890[];
extern unsigned char DAT_0082c2e8[]; extern unsigned char DAT_0082cedc[]; extern unsigned char DAT_0082d69c[]; extern unsigned char DAT_0082ea70[]; extern unsigned char DAT_00893ae0[];
extern undefined4 DAT_008977e0;
