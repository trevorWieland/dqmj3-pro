#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern bool fn_001296d0(); extern undefined4 fn_00145b00(); extern undefined4 * fn_0025dea8(); extern undefined4 fn_0028e264(); extern undefined4 fn_002d6808(); extern undefined4 fn_003953b0();
extern undefined4 * fn_0039b1e0(); extern undefined4 fn_0058c8bc(); extern undefined4 fn_0058c968(); extern undefined4 * fn_0058cc04(); extern undefined4 fn_00591e08(); extern undefined4 fn_005921a8();
extern undefined4 fn_005922cc(); extern undefined4 fn_00592754(); extern undefined4 fn_00593968(); extern undefined4 * fn_00594be4(); extern undefined4 * fn_005952cc(); extern undefined4 fn_0059790c();
extern undefined4 fn_0059d8e0(); extern undefined4 fn_0059e38c(); extern undefined4 fn_0059e404(); extern undefined4 fn_0059e488(); extern undefined1 fn_0066e158(); extern bool fn_006ba220();
extern undefined4 fn_007492a8(); extern undefined4 fn_00761018();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_007c4db4[]; extern unsigned char DAT_007c4db8[]; extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_00842f84[]; extern unsigned char DAT_00842f9c[];
extern unsigned char DAT_00843354[]; extern unsigned char DAT_008437c0[]; extern unsigned char DAT_00843918[]; extern unsigned char DAT_00843a84[]; extern unsigned char DAT_00843b9c[];
extern undefined4 DAT_00897828; extern undefined4 DAT_00898840;
