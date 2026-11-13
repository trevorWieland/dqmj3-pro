#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00120ea0(); extern uint * fn_00120ec8(); extern undefined4 fn_00145b00(); extern undefined4 fn_001638a0(); extern undefined4 fn_001f751c(); extern undefined4 fn_0023bfb4();
extern bool fn_002509d8(); extern undefined4 fn_002509fc(); extern undefined4 fn_00250ac4(); extern undefined4 fn_00250b80(); extern undefined4 fn_00250c7c(); extern undefined4 fn_00251510();
extern undefined4 fn_0026992c(); extern undefined4 fn_00269a00(); extern undefined4 fn_002feef8(); extern undefined4 fn_0036c340(); extern undefined4 fn_005e06b8(); extern undefined4 fn_005e0780();
extern undefined4 fn_005f3c30(); extern undefined4 fn_005f3c48();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00269fc8; extern undefined4 DAT_0026a000; extern undefined4 DAT_0026a038; extern undefined4 DAT_0026a108;
extern undefined4 DAT_0026a270; extern undefined4 DAT_0026a288; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008942d0;
extern undefined4 DAT_00897804; extern undefined4 DAT_00897814;
