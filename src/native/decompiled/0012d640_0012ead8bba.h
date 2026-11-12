#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0011db10(); extern undefined4 * fn_0012ea60(); extern undefined1 fn_00145aac(); extern undefined4 fn_00145ac0(); extern undefined4 fn_00145b00(); extern int * fn_0017d948();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c;
