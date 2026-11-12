#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001dbe2c(); extern undefined4 fn_005e6c08(); extern undefined4 fn_005e783c(); extern undefined4 fn_005e8778(); extern int fn_005ea5fc(); extern uint fn_005ef58c();
extern undefined4 fn_006e00a0(); extern undefined4 fn_007961ec();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00858db8;
