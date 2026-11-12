#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_001638a0(); extern undefined8 fn_00169f1c(); extern undefined4 fn_0018a618(); extern undefined4 fn_00229654(); extern longlong fn_00300f74();
extern undefined4 fn_0031b78c(); extern undefined4 fn_0031f3f4(); extern undefined4 fn_00344ef0(); extern int fn_003453a8(); extern void fn_005b4558(); extern undefined4 fn_005d27ac();
extern undefined4 fn_0068869c(); extern undefined4 fn_0068ab44(); extern undefined4 fn_006b64b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005b3cf4; extern undefined4 DAT_00897804; extern undefined4 DAT_0089780c;
