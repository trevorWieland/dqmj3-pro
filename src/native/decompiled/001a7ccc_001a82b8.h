#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00158f6c(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern float fn_001a4a80(); extern undefined4 fn_001a9968(); extern undefined4 fn_001ac8e0();
extern undefined4 fn_001ac948(); extern undefined4 fn_001acac4(); extern undefined4 fn_001acb84(); extern undefined8 fn_00301a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008ef5bc;
