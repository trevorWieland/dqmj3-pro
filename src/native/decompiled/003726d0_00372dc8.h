#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00144810(); extern undefined4 fn_0014481c(); extern int fn_00156f30(); extern int fn_006a8a34(); extern int fn_006b6bc4(); extern undefined4 fn_006b71a8();
extern int fn_006f7de8(); extern undefined4 fn_006f8418();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e8;
