#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0013ddf8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008e3104; extern undefined4 DAT_008e318c; extern undefined4 DAT_008e3190; extern undefined4 DAT_008e31bc;
extern undefined4 DAT_008e31c0; extern code *DAT_008e31c4; extern code *DAT_008e31c8;
