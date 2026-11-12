#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00178f9c(); extern undefined4 fn_0038cc08(); extern void fn_003d01b4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003d0408; extern undefined4 DAT_003d041c; extern undefined4 DAT_003d042c; extern undefined4 DAT_003d043c;
extern undefined4 DAT_003d0444; extern undefined4 DAT_003d0454; extern undefined4 DAT_003d0464; extern undefined4 DAT_0089a92c;
extern undefined4 DAT_0089a930; extern undefined4 DAT_0089a934;
