#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_00101c78(); extern undefined4 fn_00164a34(); extern undefined4 fn_00165bb4(); extern undefined4 fn_00166780(); extern undefined4 fn_001694c0(); extern undefined4 fn_00174828();
extern undefined4 fn_0017484c(); extern undefined4 fn_001781f0(); extern undefined4 fn_0017ab7c(); extern undefined4 fn_0017fd4c(); extern undefined4 fn_0017fdbc(); extern undefined4 fn_0017fdcc();
extern undefined4 fn_0017fdf0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4; extern undefined4 DAT_008994c8;
