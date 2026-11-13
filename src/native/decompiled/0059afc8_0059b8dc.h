#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00163868(); extern undefined4 fn_0017fe34(); extern undefined4 fn_001c7764(); extern undefined4 fn_00215d9c(); extern int * fn_002fdd54(); extern undefined4 fn_003b5e30();
extern bool fn_003b5ed4(); extern int fn_003b5ee4(); extern undefined4 fn_003b5f3c(); extern undefined4 fn_005f65fc(); extern uint fn_006a99b0(); extern undefined4 fn_006bb544();
extern undefined4 fn_006dc524(); extern undefined4 fn_006f7508(); extern undefined4 fn_006f9b80();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008913e4; extern undefined4 DAT_008977e0;
