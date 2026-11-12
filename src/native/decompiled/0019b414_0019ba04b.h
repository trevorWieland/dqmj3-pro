#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00146590(); extern undefined4 fn_0019501c(); extern undefined4 fn_0019b390(); extern undefined4 fn_0019b4ec(); extern uint * fn_0019e864(); extern undefined4 fn_0019e8c4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00850dac; extern undefined4 DAT_008c06e8;
