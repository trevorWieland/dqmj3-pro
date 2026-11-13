#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int * fn_001008cc(); extern undefined4 fn_00176ec8(); extern undefined8 fn_0017821c(); extern undefined4 fn_00183718(); extern int * fn_001c6ba4(); extern undefined4 fn_002fedf4();
extern undefined4 fn_002ff628(); extern undefined4 fn_006ba284(); extern undefined4 fn_00789bd4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c760a; extern undefined4 DAT_008f9d04;
