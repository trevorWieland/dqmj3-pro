#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0017d90c(); extern int * fn_0017d948(); extern int fn_0018388c(); extern int fn_00189e18(); extern undefined4 fn_00193374(); extern undefined4 fn_00193380();
extern uint * fn_0019e864(); extern undefined4 fn_001a8374(); extern int * fn_001a9170(); extern undefined4 fn_001acd50(); extern undefined4 fn_001acefc(); extern undefined4 fn_001ad020();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0080e0d0;
