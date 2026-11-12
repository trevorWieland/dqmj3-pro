#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00656bb8(); extern undefined4 fn_00656ca4(); extern int fn_00657f9c(); extern undefined4 * fn_0065809c(); extern undefined4 * fn_00658204(); extern undefined4 fn_0065830c();
extern undefined4 fn_00658e20(); extern undefined4 fn_00658e3c(); extern int fn_006f5134();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c06d0; extern undefined4 DAT_008eef58;
