#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_0012bc84(); extern undefined4 fn_001467e4(); extern undefined4 fn_00166824(); extern undefined8 fn_0017821c(); extern int fn_001ad654(); extern undefined4 fn_001b5db0();
extern undefined4 fn_001bb744(); extern undefined4 fn_001bddb8(); extern undefined4 fn_00239824(); extern undefined8 fn_00301a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007e0a74; extern undefined4 DAT_007e0e44; extern undefined4 DAT_007e0e74; extern undefined4 DAT_008bf538;
