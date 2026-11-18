#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern bool fn_001296e8(); extern int fn_00129d4c(); extern undefined4 fn_0016b40c(); extern undefined4 fn_00174858(); extern undefined4 fn_001d8a20(); extern undefined4 fn_001ea890();
extern undefined4 fn_00219400(); extern undefined4 fn_0023e640(); extern int * fn_00241f00(); extern undefined4 fn_002426c8(); extern undefined4 fn_0025b21c(); extern undefined4 fn_0026f904();
extern undefined4 fn_002b0af8(); extern undefined4 fn_002b0b18(); extern undefined4 fn_002e2c68(); extern undefined4 fn_002e2df0(); extern undefined4 fn_002fee00(); extern undefined4 fn_00339254();
extern bool fn_0033928c(); extern undefined4 fn_0038fef0(); extern undefined4 fn_005f3c7c(); extern undefined4 fn_00660458(); extern undefined4 fn_00694b14(); extern undefined4 fn_006962dc();
extern undefined4 fn_00696764(); extern undefined4 fn_00697af8(); extern undefined4 fn_00698fb8(); extern undefined4 fn_006b6244(); extern int fn_006b62fc(); extern undefined4 fn_006f72b4();
extern undefined4 fn_006f75ac(); extern undefined4 fn_006f7a0c(); extern undefined4 fn_006f7a48(); extern undefined4 fn_006f7a5c(); extern undefined4 fn_006f7a70();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_0081bb5c[]; extern unsigned char DAT_0081bbdc[]; extern undefined4 DAT_008977e0; extern unsigned char *DAT_008977e4; extern undefined4 DAT_00897804;
extern undefined4 DAT_00898840; extern undefined4 DAT_00898898;
