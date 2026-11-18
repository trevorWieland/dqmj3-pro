#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0014f1bc(); extern undefined4 * fn_0014f2b0(); extern undefined4 * fn_0015ecdc(); extern undefined4 * fn_00170f54(); extern undefined4 fn_0028e264();
extern undefined4 * fn_002e6a94(); extern int fn_00397a0c(); extern undefined4 * fn_004117bc(); extern undefined4 fn_00455018(); extern undefined4 fn_0045c8f4(); extern undefined4 * fn_0046b318();
extern undefined4 * fn_0046b3fc(); extern undefined4 fn_0046dd70(); extern undefined4 * fn_0046e6d0(); extern undefined4 fn_0046e758(); extern undefined4 fn_0047f194(); extern int fn_004895c0();
extern int fn_004896f4(); extern undefined4 fn_0048a058(); extern undefined4 fn_0049c724(); extern undefined4 fn_004a0898(); extern undefined4 fn_004adbfc(); extern undefined4 fn_004b3b48();
extern undefined4 fn_004b6230(); extern undefined4 fn_004b8d4c(); extern undefined4 fn_0056a508();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_007d96a4[]; extern unsigned char DAT_0083dfe0[]; extern unsigned char DAT_0083e3fc[]; extern unsigned char DAT_0083e5cc[]; extern unsigned char DAT_0083e5f4[];
extern unsigned char DAT_0083e664[]; extern unsigned char DAT_0083ef44[]; extern unsigned char DAT_00852db4[]; extern unsigned char DAT_00853880[]; extern unsigned char DAT_00853890[];
extern unsigned char DAT_008538c0[]; extern unsigned char DAT_0085448c[]; extern unsigned char DAT_008544cc[]; extern unsigned char DAT_008548e4[]; extern unsigned char DAT_00854b98[];
extern unsigned char DAT_008552b4[]; extern unsigned char DAT_008554e0[]; extern unsigned char DAT_00855760[]; extern undefined4 DAT_008aec70;
