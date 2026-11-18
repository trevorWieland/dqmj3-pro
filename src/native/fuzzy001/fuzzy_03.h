#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_0014ddb8(); extern undefined4 fn_0015dfc0(); extern bool fn_001667f0(); extern bool fn_00166804(); extern int fn_0016a8e4(); extern undefined4 fn_0016ba24();
extern undefined4 fn_00172d60(); extern undefined4 * fn_00173340(); extern undefined4 fn_0017348c(); extern undefined4 fn_00174828(); extern undefined1 fn_001759e8(); extern undefined4 fn_0017ce68();
extern undefined4 fn_0017cee0(); extern int fn_00189e18(); extern undefined4 fn_00193374(); extern undefined4 fn_00193380();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_008412d0[]; extern unsigned char DAT_00857fd4[]; extern unsigned char DAT_008580b4[]; extern unsigned char DAT_0085828c[]; extern unsigned char DAT_008584a8[];
extern unsigned char *DAT_008977e4; extern undefined4 DAT_00897804; extern undefined4 DAT_008994c4; extern undefined4 DAT_008c3594; extern undefined4 DAT_008ef56c;
