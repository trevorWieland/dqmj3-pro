#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00174828(); extern undefined4 fn_00174834(); extern undefined8 fn_0017821c(); extern undefined4 fn_001c2380(); extern undefined1 * fn_001c26fc(); extern bool fn_001c2ee0();
extern undefined4 fn_001c3bec(); extern undefined4 fn_0061a5cc(); extern bool fn_0069ccf8(); extern bool fn_006b6268(); extern undefined4 fn_006b846c(); extern undefined4 fn_006b8600();
extern int fn_006b89d4(); extern bool fn_006b89e8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804;
