#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern bool fn_0011dec8(); extern undefined4 fn_001fbba4(); extern undefined4 * fn_002f1c5c(); extern undefined4 fn_002feef8(); extern undefined4 fn_0041f1e8();
extern undefined4 fn_0066e34c(); extern undefined4 fn_0068cc54();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00896ca8; extern undefined4 DAT_008977e8; extern undefined4 DAT_00897850; extern undefined4 PTR_FUN_00851e64;
