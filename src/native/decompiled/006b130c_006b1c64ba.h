#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00178f9c(); extern int fn_006a7f0c(); extern undefined4 fn_006b1cac(); extern undefined4 fn_006f7a48();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006b14bc; extern undefined4 DAT_008977e0;
