#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00146590(); extern undefined8 fn_0017821c(); extern int fn_0018388c(); extern undefined4 fn_00192720(); extern undefined4 fn_0019b728(); extern undefined4 fn_0019ba68();
extern uint * fn_0019e864(); extern undefined4 fn_001a1dc8(); extern int fn_001a8604(); extern undefined4 fn_002fece8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_0081e52c; extern undefined4 DAT_ffffffff;
