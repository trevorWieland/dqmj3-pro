#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0014e784(); extern int fn_001505d4(); extern undefined4 fn_001506d8(); extern int fn_0015e680(); extern undefined4 fn_0015e6d8(); extern int fn_00160314();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c3c30; extern undefined4 DAT_008f3140;
