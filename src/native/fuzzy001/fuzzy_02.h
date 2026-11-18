#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_001521a8(); extern undefined4 fn_00154ae0(); extern uint fn_001560b4(); extern undefined4 fn_0015a9bc(); extern undefined4 fn_0015c948(); extern undefined4 fn_0015cb20();
extern undefined4 fn_0015cca0(); extern undefined4 fn_0015ccac(); extern undefined4 fn_0015e1b0(); extern undefined4 fn_0015e304(); extern undefined1 fn_0015f1b0(); extern undefined4 fn_0015f5b8();
extern undefined4 fn_00161b24(); extern undefined4 fn_00161b2c(); extern int fn_00164198(); extern int fn_0016a8e4(); extern undefined4 fn_0016ba78(); extern undefined4 fn_0016ba84();
extern undefined4 fn_0016bad4(); extern int fn_0016dd44(); extern undefined4 fn_00173b98(); extern undefined4 fn_00174828(); extern undefined4 fn_00174858(); extern undefined4 fn_00174864();
extern undefined4 fn_0017cec8(); extern undefined4 fn_0017f45c(); extern undefined4 fn_0017f8e0(); extern int fn_00189e18(); extern undefined4 fn_00193374(); extern undefined4 fn_00193380();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00833ea0[]; extern unsigned char DAT_0083aa10[]; extern unsigned char DAT_0083aa40[]; extern unsigned char DAT_00856614[]; extern unsigned char DAT_00857a40[];
extern unsigned char DAT_008586d0[]; extern undefined4 DAT_008977d0; extern unsigned char *DAT_008977e4; extern undefined4 DAT_00897800; extern undefined4 DAT_00897804;
extern undefined4 DAT_0089a518; extern undefined4 DAT_0089a51c; extern unsigned char *DAT_008bfab0; extern undefined4 DAT_008ef530; extern undefined4 DAT_008ef56c;
extern undefined4 DAT_008ef5bc;
