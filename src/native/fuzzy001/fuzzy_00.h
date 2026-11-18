#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_0010b2a4(); extern undefined4 fn_001160fc(); extern undefined4 fn_00116fdc(); extern undefined4 * fn_00117008(); extern undefined4 * fn_00117720(); extern undefined4 * fn_00118dcc();
extern undefined4 fn_0011b34c(); extern int fn_00121128(); extern undefined4 fn_00127888(); extern undefined1 fn_00129dc8(); extern undefined4 * fn_0012bc84(); extern undefined4 fn_0012d73c();
extern undefined4 fn_0013a624(); extern undefined4 fn_0013af30(); extern undefined4 fn_0013b36c(); extern undefined4 fn_0013d6ec(); extern undefined1 fn_0014524c(); extern undefined4 fn_00145ac0();
extern undefined4 fn_0014720c(); extern int fn_00156024(); extern undefined8 fn_0017821c();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00127d14[]; extern unsigned char DAT_00127d20[]; extern unsigned char DAT_0012f194[]; extern unsigned char DAT_0012f1f8[]; extern unsigned char DAT_007d859c[];
extern unsigned char DAT_0081d07c[]; extern unsigned char DAT_0081d0cc[]; extern unsigned char DAT_0081d330[]; extern unsigned char DAT_00821968[]; extern unsigned char DAT_00821980[];
extern unsigned char DAT_0082230c[]; extern unsigned char DAT_00822518[]; extern unsigned char DAT_00826360[]; extern unsigned char DAT_00850fc8[]; extern unsigned char DAT_00851418[];
extern unsigned char DAT_00852720[]; extern unsigned char DAT_00858780[]; extern unsigned char DAT_00858b1c[]; extern unsigned char DAT_00858bd8[]; extern undefined4 DAT_00896ca0;
extern undefined4 DAT_00896ca4; extern undefined4 DAT_008977d4; extern undefined4 DAT_00897804; extern unsigned char *DAT_008bf77c; extern undefined4 DAT_008ebe60;
extern undefined4 DAT_008ef56c;
