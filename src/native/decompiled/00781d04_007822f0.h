#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined1 fn_001639e4(); extern undefined4 fn_0063b148(); extern uint fn_0064d55c(); extern bool fn_0065e3d4(); extern bool fn_0065e4c0(); extern int fn_00691af0();
extern bool fn_006f0a88(); extern short * fn_006f14ec(); extern undefined4 fn_006f3218();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007eff2c; extern undefined4 DAT_007eff30; extern undefined4 DAT_008595d8;
