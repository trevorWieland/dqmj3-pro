#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00102d28(); extern undefined4 fn_0065bebc(); extern undefined4 fn_006f7a0c(); extern undefined4 fn_0078f4e0(); extern undefined4 * fn_0078f8ec(); extern undefined4 fn_007a38fc();
extern undefined4 fn_007ab59c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00390be0; extern undefined4 DAT_008977e0;
