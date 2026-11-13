#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_001db0c0(); extern undefined4 fn_001db768(); extern undefined4 fn_001dbc6c();
extern undefined4 * fn_001dc088(); extern undefined4 fn_002171d4(); extern undefined4 fn_002feef8(); extern int fn_003415b0(); extern undefined4 fn_003956e0(); extern undefined4 fn_0039571c();
extern undefined4 fn_00395750(); extern undefined4 fn_005eeda8(); extern undefined4 fn_006f7a0c(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0083fe88; extern undefined4 DAT_008977e0; extern undefined4 PTR_FUN_0083fc04;
