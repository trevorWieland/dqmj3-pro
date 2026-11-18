#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined4 fn_0028e264(); extern undefined4 fn_002fdf94(); extern undefined4 fn_002feef8(); extern undefined4 fn_003953b0(); extern undefined4 fn_003953e8();
extern undefined4 fn_0043f144(); extern undefined4 fn_005aaac0(); extern undefined4 * fn_005ab93c(); extern undefined4 fn_005d68e0(); extern undefined4 * fn_00601710(); extern undefined4 * fn_006018ac();
extern int fn_00601bc4(); extern undefined4 fn_00602114(); extern undefined4 fn_00602ad4(); extern undefined4 fn_00602fc4(); extern undefined4 fn_006031d4(); extern undefined4 * fn_0060481c();
extern undefined4 * fn_00604a74(); extern undefined4 fn_00604d98(); extern int fn_00606564(); extern undefined4 * fn_006075d8(); extern undefined4 fn_00607ae4(); extern undefined4 fn_006082f0();
extern undefined4 fn_00608354(); extern undefined4 fn_006083c4(); extern int fn_00608464(); extern undefined4 fn_0060a288();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_0084dc2c[]; extern unsigned char DAT_0084dc58[]; extern unsigned char DAT_0084df2c[]; extern unsigned char DAT_0084e068[];
extern unsigned char DAT_0084e2a0[]; extern unsigned char DAT_0084e8fc[]; extern unsigned char DAT_0084f214[]; extern unsigned char DAT_0084f3a8[];
