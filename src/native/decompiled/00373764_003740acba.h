#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00118290(); extern undefined4 fn_0011c184(); extern undefined4 fn_00145ac0(); extern undefined4 fn_00145b00(); extern uint fn_00147e6c(); extern undefined4 * fn_00374048();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00373bb4; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00896ca0;
