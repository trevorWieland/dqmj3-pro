#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern bool fn_001296e8(); extern undefined4 fn_002feef8(); extern int fn_003cbff8(); extern undefined4 fn_0066e31c(); extern undefined4 * fn_0068ad5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00898840; extern undefined4 PTR_FUN_0082a8ec;
