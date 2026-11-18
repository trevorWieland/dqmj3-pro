#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined8 fn_0017821c(); extern undefined4 fn_0028e264(); extern undefined4 fn_0043f144(); extern undefined4 fn_00664500(); extern undefined4 fn_00666a24();
extern undefined4 fn_00669e78(); extern undefined4 fn_0066ade0(); extern undefined4 fn_0066e130(); extern undefined4 fn_0066ec10(); extern undefined4 fn_0066ec18(); extern undefined4 fn_00670f10();
extern undefined4 fn_00670f84(); extern undefined4 fn_00671e8c(); extern undefined4 fn_006729ac(); extern undefined4 fn_006729c8(); extern int fn_006741c0(); extern undefined4 fn_006744e4();
extern undefined4 fn_00674758(); extern undefined4 fn_00674f58(); extern undefined4 fn_00675554();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_00850c24[]; extern unsigned char DAT_00850c38[]; extern undefined4 DAT_00898840; extern undefined4 DAT_008994c4;
extern undefined4 DAT_008ccfb8;
