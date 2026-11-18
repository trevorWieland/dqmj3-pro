#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_001287d4(); extern undefined4 fn_00145b00(); extern undefined4 fn_001482f4(); extern undefined4 fn_0016a43c(); extern undefined4 fn_002fdf94(); extern undefined4 fn_00311824();
extern undefined4 fn_0039571c(); extern undefined4 fn_00568f5c(); extern undefined4 fn_00569304(); extern undefined4 * fn_0056a220(); extern undefined4 fn_0056a508(); extern undefined4 fn_0056a56c();
extern undefined4 fn_0056a6cc(); extern undefined4 fn_0056a750(); extern undefined4 * fn_0056fa30(); extern undefined4 fn_00570520(); extern undefined4 fn_00570aac(); extern undefined4 fn_00570fc8();
extern undefined4 * fn_00571f88(); extern undefined4 fn_00572280(); extern undefined4 * fn_00573250(); extern undefined4 fn_00579cf4(); extern undefined4 fn_0057a0c4(); extern undefined4 fn_0057af20();
extern undefined4 * fn_005ab93c();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_0083f86c[]; extern unsigned char DAT_0084004c[]; extern unsigned char DAT_00840644[]; extern unsigned char DAT_008412e8[];
extern unsigned char DAT_00841c14[]; extern unsigned char DAT_00841cb0[];
