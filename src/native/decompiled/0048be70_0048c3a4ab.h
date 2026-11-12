#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0030233c(); extern undefined4 fn_0048be70(); extern undefined4 fn_0048c29c(); extern undefined4 fn_004b7748();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00801000; extern undefined4 DAT_008b63dc; extern undefined4 DAT_008e76e8;
