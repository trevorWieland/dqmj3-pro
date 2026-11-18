#include "decompiled.h"

/* Declarations for what these functions call and address. A callee is
 * declared with an empty parameter list: the decompiler's per-function
 * signature is its own hypothesis and frequently disagrees with the
 * argument count at a call site, and an empty list states exactly the
 * contract the split provides -- a name with an address. Its return type
 * is repeated when the corpus states a usable one, because the caller's
 * arithmetic and this unit's own definitions both depend on it. */
extern undefined8 fn_001694e4(); extern uint * fn_001782b8(); extern undefined4 fn_004ecfd0(); extern undefined4 fn_004ed464(); extern undefined4 fn_004ed714(); extern undefined4 * fn_004eddf4();
extern undefined4 fn_004ee29c(); extern undefined4 fn_004f0c04(); extern undefined4 fn_00503ca8(); extern undefined4 fn_005044fc(); extern undefined4 fn_005059c0(); extern undefined4 * fn_0050d178();
extern undefined4 * fn_005107c4(); extern undefined4 fn_0051117c(); extern undefined4 fn_00516cc8(); extern undefined4 fn_0051cf84(); extern undefined4 fn_0051dc1c(); extern undefined4 * fn_00657488();
extern uint fn_006d6690(); extern undefined4 fn_00730a90();

/* Data the functions address. A name carries the image address it
 * must have, so the link defines it there and the bytes the compiler
 * emits for the reference are the original bytes. */
extern unsigned char DAT_00812968[]; extern unsigned char DAT_00856bf8[]; extern unsigned char DAT_00856c64[]; extern unsigned char DAT_00856ca0[]; extern unsigned char DAT_00856d70[];
extern unsigned char DAT_00856fd0[]; extern unsigned char DAT_00857068[]; extern unsigned char DAT_00857094[]; extern unsigned char DAT_008571a0[]; extern unsigned char DAT_00857210[];
extern unsigned char DAT_0085723c[]; extern unsigned char *DAT_008bf4d4; extern unsigned char *DAT_008bf4e0; extern undefined4 DAT_008bf504; extern unsigned char *DAT_008c0634;
extern undefined4 DAT_008c0638; extern undefined4 DAT_008c0668; extern unsigned char *DAT_008c0670; extern undefined4 DAT_008c0678; extern unsigned char *DAT_008c06a4;
