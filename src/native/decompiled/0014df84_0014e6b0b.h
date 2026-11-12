#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_0015e45c(); extern int fn_0015e494(); extern int fn_0015e510();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001100c2; extern undefined4 DAT_00160000; extern undefined4 DAT_008bfbb4; extern undefined4 DAT_008bfbb8;
