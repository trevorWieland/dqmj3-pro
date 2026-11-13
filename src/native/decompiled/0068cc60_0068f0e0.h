#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined8 fn_00101c78(); extern undefined4 fn_00119bd8(); extern undefined4 fn_0011dda8(); extern bool fn_0011dec8(); extern undefined4 fn_00176ec8();
extern undefined8 fn_0017821c(); extern undefined4 fn_00183718(); extern undefined4 fn_001cbdac(); extern undefined4 fn_001fbbc8(); extern undefined4 fn_001fbe80(); extern int fn_002a4648();
extern int fn_002febd8(); extern int fn_0032d6f4(); extern void fn_0068e034(); extern undefined4 fn_0068eb0c(); extern int fn_006a8660(); extern undefined4 fn_0079df24();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c97d8; extern undefined4 DAT_007c9818; extern undefined4 DAT_00896d14; extern undefined4 DAT_008977e8;
