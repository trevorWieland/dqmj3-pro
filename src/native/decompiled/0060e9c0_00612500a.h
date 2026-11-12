#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00144df4(); extern undefined8 fn_0017821c(); extern undefined4 fn_00573f84(); extern undefined4 fn_00573fc8(); extern undefined4 fn_005742e4(); extern undefined4 fn_0057433c();
extern int fn_0057481c(); extern undefined4 fn_006b846c(); extern undefined4 fn_006b8538(); extern undefined4 fn_006b8600();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00858808; extern undefined4 DAT_00897804; extern undefined4 DAT_00898ce0;
