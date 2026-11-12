#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern bool fn_00174a8c(); extern int fn_00174bac(); extern undefined4 fn_001754ac(); extern undefined4 fn_0017863c(); extern undefined4 fn_00179990();
extern undefined4 fn_00182994(); extern undefined4 fn_0019813c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0016bb84; extern undefined4 DAT_007edcb4; extern undefined4 DAT_008977e4;
