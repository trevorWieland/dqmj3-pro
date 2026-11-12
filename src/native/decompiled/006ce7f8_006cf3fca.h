#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001560d8(); extern undefined4 fn_0015e590(); extern undefined8 fn_0017821c(); extern int fn_0028bb88(); extern undefined8 fn_00301a9c(); extern int fn_006b876c();
extern int fn_006ba274(); extern undefined4 fn_006ba284();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
