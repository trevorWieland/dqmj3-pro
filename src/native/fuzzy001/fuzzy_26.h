#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined8 fn_0017821c(); extern undefined4 fn_001d8140(); extern undefined4 fn_001f7350(); extern undefined4 * fn_0025dea8(); extern undefined4 fn_0028e264();
extern undefined4 fn_002fb664(); extern undefined4 fn_002fb670(); extern undefined4 fn_0036c678(); extern undefined4 fn_003d8360(); extern undefined4 fn_004119dc(); extern undefined4 fn_00411a3c();
extern undefined4 fn_00411a9c(); extern undefined4 * fn_0041899c(); extern undefined4 fn_004192bc(); extern undefined4 * fn_0041a9e4(); extern undefined4 fn_0041b6e0(); extern undefined4 fn_0041c0d4();
extern undefined4 fn_0041c68c(); extern undefined4 fn_0041ddb0(); extern undefined4 fn_0041e1ec(); extern undefined4 * fn_0041fd70(); extern undefined4 fn_004208a8(); extern undefined4 * fn_004226c4();
extern undefined4 * fn_00422dcc(); extern undefined4 fn_00424eac(); extern undefined4 fn_0042b7bc(); extern undefined4 fn_006f7a5c(); extern undefined4 * fn_007464d8();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_007ca0a8[]; extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_008375e0[]; extern unsigned char DAT_00837914[]; extern unsigned char DAT_008389dc[];
extern unsigned char DAT_0083aa88[]; extern unsigned char DAT_0083b440[]; extern unsigned char DAT_0083ba7c[]; extern undefined4 DAT_008977e0;
