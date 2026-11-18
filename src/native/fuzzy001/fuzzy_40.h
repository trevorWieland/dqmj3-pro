#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_00145b00(); extern undefined4 fn_0023c2a8(); extern undefined4 fn_002fdf94(); extern undefined4 fn_00321598(); extern int fn_004a2190(); extern int fn_005bb974();
extern undefined4 fn_005bff2c(); extern undefined4 fn_005bff84(); extern undefined4 fn_005c18a8(); extern undefined4 fn_005c1a14(); extern undefined4 fn_005c1a80(); extern undefined4 fn_005c2e3c();
extern undefined4 fn_005c44cc(); extern undefined4 fn_005c6900(); extern undefined4 fn_005c6de4(); extern undefined4 fn_005ca198(); extern int fn_005ca2b8(); extern undefined4 fn_005cadbc();
extern undefined4 fn_005cae14(); extern undefined4 fn_005cc3dc(); extern undefined4 fn_005cc4a8(); extern undefined4 fn_005cd19c(); extern undefined4 fn_005cd3e0(); extern undefined4 fn_005cd950();
extern undefined1 fn_0066e158(); extern undefined4 fn_006899f4(); extern undefined4 fn_0068ab44(); extern undefined4 * fn_0068ab5c(); extern int fn_006e8f88();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_00848ee0[]; extern unsigned char DAT_00849248[]; extern unsigned char DAT_0084b28c[]; extern undefined4 DAT_00898840;
