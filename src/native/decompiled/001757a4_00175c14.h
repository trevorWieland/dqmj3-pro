#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00164a34(); extern undefined4 fn_00165bb4(); extern undefined4 fn_0017484c(); extern int fn_001748ec(); extern undefined4 fn_00175d88(); extern undefined4 fn_00175dcc();
extern undefined4 fn_001793c4(); extern undefined4 fn_00179928(); extern int fn_00182d34();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4;
