#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_00169f1c(); extern undefined8 fn_0017821c(); extern uint * fn_00560750();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00200080; extern undefined4 DAT_007d80cc; extern undefined4 DAT_007d812c; extern undefined4 DAT_007d816c;
