#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00117074(); extern undefined4 fn_0014f510(); extern undefined8 fn_0017821c(); extern undefined4 fn_001f74d8(); extern undefined4 fn_002c4694(); extern undefined4 fn_0037cb1c();
extern undefined4 fn_004b9b4c(); extern undefined4 fn_005d6734(); extern char fn_006c4168(); extern undefined4 fn_006f72e0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00850ae4; extern undefined4 DAT_008977e0; extern undefined4 DAT_00899218;
