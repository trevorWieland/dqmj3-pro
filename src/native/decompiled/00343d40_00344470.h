#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001287dc(); extern undefined4 fn_00143b48(); extern undefined4 fn_00145b00(); extern undefined8 fn_0017821c();
extern undefined4 fn_002afe58(); extern undefined4 fn_002feef8(); extern undefined4 fn_00305030(); extern undefined4 * fn_00305244(); extern undefined4 fn_00343ca8(); extern undefined4 fn_00525bd0();
extern undefined4 fn_005e0a8c(); extern undefined4 fn_005e0a98(); extern undefined4 fn_0069c2c8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00825128; extern undefined4 DAT_00825168;
