#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_001a23a8(); extern undefined4 fn_00541328(); extern undefined4 fn_005e4644(); extern int fn_005ea33c(); extern int fn_005ea4fc(); extern int fn_005ea5fc();
extern undefined4 fn_006e0868(); extern undefined4 fn_006fa358(); extern undefined4 fn_00780a7c(); extern undefined4 fn_00780e38(); extern undefined4 fn_00780fc0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00858b34;
