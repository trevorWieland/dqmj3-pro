#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern undefined4 fn_002feef8(); extern undefined4 fn_005e3688(); extern undefined4 fn_005e36b8(); extern undefined4 fn_005e3728();
extern undefined4 fn_005e3758(); extern undefined4 fn_005e37c8(); extern undefined4 fn_005e37f8(); extern undefined4 fn_005e3868(); extern undefined4 fn_005e3898(); extern undefined4 fn_005e6d00();
extern undefined4 fn_006eb6a0(); extern bool fn_006eb9b4(); extern int fn_006ebd98(); extern undefined4 fn_00795ce8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c;
