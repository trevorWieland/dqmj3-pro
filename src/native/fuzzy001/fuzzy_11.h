#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00112fb4(); extern undefined4 fn_00145b00(); extern undefined4 fn_001f7350(); extern undefined4 fn_0025bd60(); extern undefined4 fn_0026bb64(); extern char fn_002961ac();
extern undefined4 fn_002b13a0(); extern undefined4 fn_002caccc(); extern undefined4 fn_002d8370(); extern undefined4 fn_002d89ac(); extern undefined4 fn_002d8f08(); extern undefined4 fn_002da538();
extern undefined4 fn_002defa8(); extern undefined4 fn_002fb61c(); extern undefined4 fn_002ff3b4(); extern undefined4 * fn_00301f50(); extern undefined4 fn_0034d9e4(); extern undefined4 fn_006b64b0();
extern uint fn_006bb17c(); extern undefined4 fn_006c7ef8(); extern uint fn_006f6434(); extern undefined4 fn_006f756c(); extern undefined4 fn_006f7a0c(); extern bool fn_006f7a20();
extern undefined4 fn_006f7a70();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_0081f8dc[]; extern unsigned char DAT_00820118[]; extern unsigned char DAT_00820190[]; extern unsigned char DAT_008201d8[];
extern unsigned char DAT_008202c4[]; extern unsigned char DAT_0082058c[]; extern undefined4 DAT_008923d8; extern undefined4 DAT_008924f8; extern undefined4 DAT_008977e0;
extern undefined4 DAT_00897804; extern undefined4 DAT_0089783c; extern unsigned char DAT_008992d4[];
