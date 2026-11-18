#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern bool fn_001296e8(); extern undefined1 fn_00129dc8(); extern undefined4 fn_00145b00(); extern undefined4 fn_00182994(); extern undefined4 fn_00182c40(); extern undefined4 * fn_00218664();
extern undefined4 fn_0022a2a8(); extern undefined4 fn_0023d3f4(); extern undefined4 fn_0024276c(); extern undefined4 fn_00260014(); extern undefined4 fn_00260750(); extern undefined4 fn_0026a494();
extern int fn_002a4648(); extern undefined4 fn_002fb61c(); extern undefined4 fn_002fdf94(); extern undefined4 fn_002feef8(); extern undefined4 fn_0031aa80(); extern undefined4 fn_00387104();
extern undefined4 fn_00387168(); extern undefined4 fn_003871cc(); extern int fn_003877d0(); extern undefined4 fn_00388a80(); extern undefined4 fn_0038b5a8(); extern undefined4 * fn_0038dfe0();
extern undefined4 fn_0038feb4(); extern undefined4 fn_0039525c(); extern undefined4 * fn_003b17d4(); extern undefined4 fn_003ed51c(); extern undefined4 * fn_004111d0(); extern undefined4 fn_0066e31c();
extern bool fn_006f7530();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_007c0fb4[]; extern unsigned char DAT_00812c8c[]; extern unsigned char DAT_00827ab0[]; extern unsigned char DAT_00829038[]; extern unsigned char DAT_008299a0[];
extern unsigned char DAT_0082a80c[]; extern unsigned char DAT_0082ac00[]; extern unsigned char DAT_0082ad88[]; extern unsigned char DAT_0082b0d4[]; extern unsigned char DAT_0082b16c[];
extern unsigned char DAT_0082b1a4[]; extern undefined4 DAT_008977e0; extern unsigned char *DAT_008977e4; extern undefined4 DAT_00897804; extern undefined4 DAT_00897818;
extern undefined4 DAT_00898840;
