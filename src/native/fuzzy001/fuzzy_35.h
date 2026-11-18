#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_001287d4(); extern undefined4 fn_00145b00(); extern undefined4 * fn_0025dea8(); extern undefined4 fn_0028e264(); extern undefined4 fn_002c3d68(); extern undefined4 fn_002fdf94();
extern undefined4 * fn_00301f50(); extern undefined4 fn_0031dacc(); extern undefined4 fn_003690f4(); extern undefined4 fn_003953b0(); extern undefined4 * fn_00584434(); extern undefined4 fn_0058450c();
extern undefined4 fn_00584584(); extern undefined4 fn_00584f20(); extern undefined4 * fn_005856e0(); extern undefined4 fn_00585df8(); extern undefined4 * fn_005871e0(); extern undefined4 fn_00587b30();
extern undefined4 fn_00589198(); extern undefined4 fn_0058b420(); extern undefined4 fn_0058b480(); extern undefined4 fn_0058b4e4(); extern undefined4 * fn_0058b570(); extern undefined4 fn_005b81a0();
extern undefined4 fn_006899f4(); extern undefined4 fn_0068ab44();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_007c7464[]; extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_00841fe8[]; extern unsigned char DAT_008424c0[]; extern unsigned char DAT_00842ce4[];
extern unsigned char DAT_00842dfc[]; extern unsigned char DAT_00842f14[]; extern unsigned char DAT_00842f2c[]; extern unsigned char DAT_00842f44[]; extern unsigned char DAT_00842f58[];
extern unsigned char DAT_008437d4[]; extern unsigned char DAT_008438a0[]; extern unsigned char DAT_00894d88[];
