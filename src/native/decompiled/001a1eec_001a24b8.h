#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00146590(); extern undefined4 fn_00174828(); extern undefined4 fn_0019bc50(); extern int fn_001a2168(); extern undefined4 fn_001a46f4(); extern int fn_001a49b0();
extern int fn_001a49c8(); extern undefined8 fn_00301a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4;
