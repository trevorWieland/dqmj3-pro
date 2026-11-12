#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern bool fn_001667f0(); extern undefined4 fn_00174828(); extern undefined4 fn_0017484c(); extern int fn_001748ec(); extern undefined4 fn_00175dcc(); extern undefined4 fn_0017b1e8();
extern undefined4 fn_001d4c0c(); extern undefined4 fn_002b8090(); extern undefined4 fn_0035326c(); extern undefined4 fn_0035402c(); extern int fn_006c27b8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4;
