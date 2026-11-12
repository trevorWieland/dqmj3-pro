#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_0013b294(); extern uint * fn_0013b458(); extern undefined4 fn_0013be38(); extern undefined4 fn_00143a58(); extern undefined4 fn_0014d2ec(); extern undefined4 fn_0014d7ec();
extern undefined4 fn_0014d8d4(); extern undefined4 * fn_00158f6c(); extern undefined4 * fn_00301f50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089a670; extern undefined4 DAT_d8604659;
