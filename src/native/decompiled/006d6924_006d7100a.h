#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004edc34(); extern undefined4 fn_004edc70(); extern uint fn_004f07b8(); extern int fn_0051f5ac(); extern undefined4 fn_006d5cf0(); extern uint fn_006d6690();
extern uint fn_006d67fc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006d6d2c; extern undefined4 DAT_008bf504;
