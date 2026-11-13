#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_001f74ec(); extern undefined4 fn_001f7510(); extern int fn_0025f988(); extern undefined4 fn_002e2ecc(); extern undefined4 fn_002feef8();
extern int fn_0036c13c(); extern undefined4 fn_0036c658(); extern int fn_00397a0c(); extern undefined4 fn_00397a78(); extern undefined4 fn_00689bd0(); extern undefined4 fn_006ba284();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0044939c; extern undefined4 DAT_0083eb64; extern undefined4 DAT_008942d0; extern undefined4 DAT_00894c6c;
extern undefined4 DAT_00897800; extern undefined4 DAT_00897804;
