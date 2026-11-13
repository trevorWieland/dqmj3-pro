#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_0028e264(); extern undefined4 fn_0029071c(); extern undefined4 fn_002c3d68();
extern undefined4 fn_002feef8(); extern bool fn_0065ed20(); extern undefined4 fn_006899f4(); extern int fn_006e9744(); extern undefined4 fn_007abe64();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0084c158;
