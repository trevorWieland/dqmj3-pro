#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00163988(); extern undefined4 fn_00174828(); extern undefined4 fn_001c2338(); extern undefined4 fn_001c2344(); extern undefined4 fn_00246494();
extern undefined4 fn_0068a5a8(); extern undefined4 * fn_0068ab5c(); extern undefined4 fn_006b53cc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0083ac78; extern undefined4 DAT_008977e4; extern undefined4 DAT_0089780c;
