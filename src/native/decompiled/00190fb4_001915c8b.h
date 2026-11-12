#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00150284(); extern undefined4 fn_00150294(); extern undefined4 fn_0016720c(); extern undefined8 fn_0017821c(); extern undefined4 fn_0019bed8(); extern int fn_0019bfc0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008e3079; extern undefined4 DAT_008e307a; extern undefined4 DAT_008e3104; extern undefined4 DAT_008e3108;
