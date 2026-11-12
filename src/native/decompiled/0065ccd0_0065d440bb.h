#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001daaf8(); extern undefined4 fn_001db0b0(); extern undefined4 fn_002113c8(); extern undefined4 fn_0021b714(); extern uint fn_002fe310(); extern int fn_00360360();
extern undefined4 fn_006c2de8(); extern undefined4 fn_006f72b4(); extern undefined4 fn_006f74f4(); extern undefined4 fn_006f7a70();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 s_ic_tornado_00_008c6d5b; extern undefined4 s_o_Z02_01_008c6d52;
