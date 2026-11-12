#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_0018388c(); extern undefined4 fn_0019d680(); extern uint * fn_0019e864(); extern uint * fn_001ab258(); extern undefined4 fn_001ac0f8(); extern int fn_001ac354();
extern undefined4 fn_001ad034();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_ffffffff;
