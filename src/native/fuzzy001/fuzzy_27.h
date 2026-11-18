#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined4 * fn_0025dea8(); extern undefined4 fn_0028e264(); extern undefined4 fn_002c4694(); extern undefined4 fn_002fdf94(); extern undefined4 fn_0036bae4();
extern uint fn_0036bb80(); extern undefined4 fn_00385b88(); extern int fn_00397a0c(); extern undefined4 fn_003b9cfc(); extern undefined4 fn_003e734c(); extern undefined4 fn_0042e3dc();
extern undefined4 * fn_0042e7dc(); extern undefined4 * fn_0042ed0c(); extern undefined4 * fn_0042f214(); extern int fn_00436798(); extern undefined4 * fn_0043a128(); extern undefined4 fn_0043bc88();
extern undefined4 fn_0043c598(); extern undefined4 fn_0043e3c8(); extern undefined4 fn_0043e434(); extern undefined4 fn_0043ff64(); extern undefined4 fn_00440308(); extern undefined4 * fn_00440b78();
extern undefined4 fn_0068ab44();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_007c7468[]; extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_008389f0[]; extern unsigned char DAT_00838a08[]; extern unsigned char DAT_00839a88[];
extern unsigned char DAT_00839d08[]; extern unsigned char DAT_00839e20[]; extern unsigned char DAT_00839f68[]; extern unsigned char DAT_0083a0cc[]; extern unsigned char DAT_0083b18c[];
extern unsigned char DAT_0083dd14[]; extern unsigned char DAT_0083dd3c[]; extern undefined4 DAT_00893138;
