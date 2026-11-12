#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001581d0(); extern undefined4 fn_00173cd0(); extern int fn_00173d40(); extern int fn_00173d4c(); extern undefined4 fn_00198578(); extern uint * fn_0019e864();
extern undefined4 fn_001a1dc8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00742a9c; extern undefined4 DAT_00742ad0;
