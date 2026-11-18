#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern bool fn_0025097c(); extern int fn_002b0a98(); extern undefined4 fn_0066eb80(); extern undefined4 fn_006b6210(); extern undefined2 fn_006b63ac(); extern undefined2 fn_006b63b8();
extern undefined2 fn_006b63e0(); extern undefined2 fn_006b63ec(); extern undefined2 fn_006b6410(); extern undefined2 fn_006b641c(); extern undefined2 fn_006b6428(); extern int fn_006b7eb4();
extern int fn_006b7f9c(); extern int fn_006b8068(); extern int fn_006b86c4(); extern int fn_006b86f4(); extern int fn_006b8718(); extern int fn_006b873c();
extern int fn_006bc48c(); extern undefined4 fn_006c0d5c();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00895bbc[]; extern undefined4 DAT_00897804; extern undefined4 DAT_00898840;
