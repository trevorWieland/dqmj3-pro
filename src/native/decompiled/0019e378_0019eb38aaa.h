#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_0018388c(); extern undefined4 fn_0019813c(); extern uint * fn_0019e864(); extern undefined4 fn_001a0d30();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0019e7a4; extern undefined4 DAT_0019e7bc; extern undefined4 DAT_008c06e8;
