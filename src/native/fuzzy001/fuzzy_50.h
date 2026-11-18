#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00154ac8(); extern undefined4 fn_00163868(); extern undefined4 fn_0022f750(); extern int fn_0024222c(); extern undefined4 fn_002425dc(); extern bool fn_0028bbd8();
extern int fn_00660c48(); extern undefined1 fn_00661714(); extern undefined4 fn_006aa87c(); extern byte fn_006b3854(); extern int fn_006b39b4(); extern int * fn_006b3e50();
extern int fn_006b4f84(); extern undefined4 fn_006b51d8(); extern undefined2 fn_006b62ec(); extern undefined2 fn_006b6410(); extern undefined2 fn_006b6464(); extern undefined4 fn_006b64b0();
extern bool fn_006b759c(); extern undefined4 fn_006b7aa0(); extern int fn_006b7f9c(); extern int fn_006b8478(); extern undefined4 fn_006b9bec(); extern undefined4 fn_006c5038();
extern undefined4 fn_006c5058(); extern bool fn_006cdaec(); extern undefined4 fn_006f72c8(); extern undefined4 fn_006f7a0c(); extern undefined4 fn_006f7a84();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00234d8c[]; extern unsigned char DAT_00234d94[]; extern unsigned char DAT_00234d9c[]; extern unsigned char DAT_007ba040[]; extern unsigned char DAT_007c1de4[];
extern unsigned char DAT_007c44a8[]; extern unsigned char DAT_007c6734[]; extern unsigned char DAT_0088fcf0[]; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804;
