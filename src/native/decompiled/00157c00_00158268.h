#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00146590(); extern undefined4 fn_001581d0(); extern undefined4 fn_00159164(); extern undefined4 fn_0015f7d0(); extern undefined4 fn_0015f8b0(); extern undefined4 fn_0015f9f0();
extern undefined4 fn_0015fdc4(); extern undefined4 fn_00163d88(); extern undefined4 fn_00173cd0(); extern undefined4 fn_00173d1c(); extern int fn_00173d40(); extern int fn_00173d4c();
extern undefined4 fn_0017ffac(); extern undefined4 fn_00198578(); extern undefined4 fn_0019ba68(); extern uint * fn_0019e864();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00157e9c; extern undefined4 DAT_0015830c; extern undefined4 DAT_008c06e8;
