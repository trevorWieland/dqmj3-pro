#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00146594(); extern undefined4 fn_00166824(); extern undefined4 fn_00174828(); extern undefined4 fn_00174858(); extern int fn_00189e18();
extern undefined1 * fn_0018b794(); extern undefined4 fn_00192114(); extern undefined4 fn_00193374(); extern undefined4 fn_00193380(); extern undefined4 fn_001960ec(); extern undefined2 fn_0019bbb0();
extern undefined4 fn_0019e9c0(); extern undefined4 fn_0019eb38(); extern int fn_0019fb30(); extern int fn_001a213c(); extern undefined4 fn_001a98f8(); extern undefined4 fn_00211c48();
extern undefined8 fn_00301a9c(); extern undefined4 fn_003d1e58(); extern undefined4 fn_003ef9f0();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_001c1130[]; extern unsigned char DAT_007ba834[]; extern unsigned char DAT_007bf5f4[]; extern unsigned char DAT_007e0a74[]; extern unsigned char DAT_007e1350[];
extern unsigned char DAT_007e1390[]; extern unsigned char DAT_00812c8c[]; extern undefined4 DAT_00892844; extern unsigned char *DAT_008977e4; extern undefined4 DAT_0089a680;
extern undefined4 DAT_008bf538; extern undefined4 DAT_008ef56c; extern undefined4 DAT_008ef5bc; extern unsigned char DAT_008f0bc0[];
