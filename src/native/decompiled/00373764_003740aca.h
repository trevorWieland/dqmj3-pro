#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0014481c(); extern undefined4 fn_00145ac0(); extern int fn_00156f30(); extern bool fn_006b6724(); extern int fn_006b6740(); extern int fn_006b6bc4();
extern undefined4 fn_006b6c30(); extern undefined4 fn_006b6f3c(); extern undefined4 fn_006b71a8(); extern bool fn_006f8074();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00896ca0; extern undefined4 DAT_008977e8;
