#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00174828(); extern undefined4 fn_0017484c(); extern undefined4 fn_00175dcc(); extern undefined4 fn_00179728(); extern int fn_001797c4(); extern undefined4 fn_00179a80();
extern undefined4 fn_0017aec0(); extern undefined4 fn_0017b048(); extern undefined4 fn_001829a0(); extern undefined4 fn_00188f58();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4;
