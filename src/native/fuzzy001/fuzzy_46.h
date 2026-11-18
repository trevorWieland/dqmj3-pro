#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001d96b0(); extern undefined4 fn_001d9f9c(); extern undefined4 fn_001da39c(); extern undefined4 fn_001dbb48(); extern undefined4 fn_0021f144();
extern undefined4 fn_0023d3f4(); extern undefined4 fn_0023e508(); extern undefined4 * fn_0025dea8(); extern undefined4 fn_002782b4(); extern undefined4 fn_0028e264(); extern undefined4 fn_003191f8();
extern undefined4 * fn_0034c0ec(); extern int fn_00397a0c(); extern undefined4 fn_0043f144(); extern undefined4 * fn_005d4f1c(); extern int fn_006595f0(); extern undefined4 fn_0065bdbc();
extern undefined4 fn_0065bf20(); extern int fn_0065d2f8(); extern bool fn_006a7f8c(); extern undefined4 fn_006f5418(); extern undefined4 fn_006f72b4(); extern int fn_006f7a9c();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_007d47ac[]; extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_0084fc00[]; extern unsigned char DAT_00850000[]; extern unsigned char DAT_00850014[];
extern unsigned char DAT_00850800[]; extern unsigned char DAT_00850840[]; extern unsigned char DAT_00850984[]; extern undefined4 DAT_008977e0; extern undefined4 DAT_008994c4;
extern undefined4 DAT_008bf61c; extern undefined4 DAT_008c06d0;
