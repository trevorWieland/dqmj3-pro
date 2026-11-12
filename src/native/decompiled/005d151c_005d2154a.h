#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0018a618(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_00230a84(); extern undefined4 fn_00231074(); extern undefined4 fn_0025f3f4();
extern int * fn_0028b0a0(); extern int * fn_0028b348(); extern undefined4 fn_002c37e0(); extern undefined4 fn_0031b78c(); extern undefined4 fn_00689efc(); extern int fn_006b83e4();
extern int fn_006b84b0(); extern int fn_006bf5bc(); extern int fn_006bf5c8(); extern int fn_006c0028(); extern int fn_006c0114();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00891b64; extern undefined4 DAT_00891b6c; extern undefined4 DAT_00897804; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4;
