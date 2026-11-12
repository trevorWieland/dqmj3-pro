#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_004edb98(); extern undefined4 * fn_004f0ce8(); extern int fn_004f57bc(); extern int fn_004f6764(); extern uint fn_004fc71c(); extern uint fn_004fd7ec();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf49c; extern undefined4 DAT_008bf4e0;
