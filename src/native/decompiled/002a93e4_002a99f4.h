#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00154ac8(); extern int fn_00259f5c(); extern uint fn_00259f7c(); extern int fn_0028a588();
extern undefined4 fn_0028a66c(); extern undefined4 fn_0028acf4(); extern int fn_0028b7ac(); extern undefined4 fn_00290544(); extern undefined4 fn_002906e0(); extern bool fn_002b2a48();
extern undefined4 fn_002b2cbc(); extern undefined4 fn_002b3d78(); extern undefined4 fn_002c07e4(); extern int fn_002c11d0(); extern undefined4 fn_002e3e9c(); extern undefined4 fn_003467f8();
extern undefined4 fn_006bc570();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
