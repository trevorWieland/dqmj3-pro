#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00102ca2(); extern undefined4 fn_00146590(); extern undefined4 fn_001467fc(); extern undefined4 fn_001581d0(); extern undefined4 fn_00158318(); extern undefined4 fn_00173d1c();
extern int fn_00173d40(); extern int fn_00173d4c(); extern undefined4 fn_0017ff68(); extern undefined4 fn_0018d65c(); extern uint * fn_0019e864(); extern undefined4 fn_00233b7c();
extern undefined4 fn_006f9688(); extern undefined4 fn_006f96a0(); extern undefined4 fn_006fec98(); extern undefined4 fn_0072917c(); extern undefined4 fn_0072923c(); extern bool fn_007439cc();
extern void fn_00743f64();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00743794; extern undefined4 DAT_008bfab0; extern undefined4 DAT_008c06e8;
