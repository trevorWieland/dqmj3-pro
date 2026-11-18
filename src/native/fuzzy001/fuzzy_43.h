#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined4 fn_0028e264(); extern undefined4 fn_002fdf94(); extern undefined4 fn_002feef8(); extern undefined4 fn_00321598(); extern undefined4 fn_0039571c();
extern int fn_00397a0c(); extern undefined4 fn_0043f144(); extern undefined4 * fn_005d4f1c(); extern undefined4 fn_005f79a4(); extern undefined4 * fn_005f79fc(); extern undefined4 fn_005f8670();
extern undefined4 * fn_005f8d44(); extern undefined4 fn_005f8f48(); extern undefined4 * fn_005f954c(); extern undefined4 fn_005f9604(); extern undefined4 fn_005f9670(); extern undefined4 fn_005fa4a8();
extern int fn_005faf48(); extern undefined4 fn_005fba14(); extern int fn_005fc9c8(); extern undefined1 fn_0066e158(); extern undefined4 fn_006899f4();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_0084d1ec[]; extern unsigned char DAT_0084d218[]; extern unsigned char DAT_0084d230[]; extern unsigned char DAT_0084d35c[];
extern unsigned char DAT_0084d374[]; extern unsigned char DAT_0084d4bc[]; extern unsigned char DAT_0084dad4[]; extern unsigned char DAT_0084df04[]; extern unsigned char DAT_0084ef48[];
extern unsigned char DAT_00859490[]; extern undefined4 DAT_00898840;
