#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001642a4(); extern undefined4 fn_00164c80(); extern int fn_001657c8(); extern undefined4 fn_00174b78(); extern undefined4 fn_00182994(); extern undefined4 fn_00691ab4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4;
