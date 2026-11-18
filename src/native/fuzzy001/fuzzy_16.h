#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined8 fn_0017821c(); extern undefined4 fn_001d9f6c(); extern undefined4 fn_001d9f9c(); extern undefined4 fn_001da39c(); extern undefined4 fn_001db0c0();
extern undefined4 fn_001db0c4(); extern undefined4 * fn_001dc088(); extern undefined4 fn_0023d3f4(); extern undefined4 fn_00279ae4(); extern int fn_0028afe0(); extern undefined4 fn_002feef8();
extern undefined4 fn_00352e48(); extern int fn_00357b48(); extern undefined4 fn_0035a0cc(); extern undefined4 fn_00362d64(); extern undefined4 fn_0036bae4(); extern uint fn_0036bb80();
extern undefined4 fn_0036c678(); extern undefined4 fn_00385b88(); extern int fn_003fedc0(); extern undefined4 fn_0068ab44(); extern undefined4 * fn_0068ab5c(); extern int fn_006afabc();
extern undefined4 fn_006b4cd0(); extern int fn_006bad1c(); extern bool fn_006c3a70(); extern undefined4 fn_006f756c(); extern undefined4 fn_006f7a0c(); extern int fn_006f7a9c();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_00824c7c[]; extern unsigned char DAT_00825a94[]; extern unsigned char DAT_00825e1c[]; extern unsigned char DAT_00826a7c[];
extern unsigned char DAT_00826a90[]; extern unsigned char DAT_00826af0[]; extern unsigned char DAT_00826b40[]; extern undefined4 DAT_00891214; extern undefined4 DAT_008977e0;
extern undefined4 DAT_00897804;
