#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern undefined4 fn_0018a618(); extern undefined4 fn_00190d78(); extern undefined4 fn_00688fd8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008981b4; extern undefined4 DAT_008981b8; extern undefined4 DAT_008981bc; extern undefined4 DAT_0089a930;
extern undefined4 PTR_DAT_007ce734;
