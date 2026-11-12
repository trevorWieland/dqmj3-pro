#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00151954(); extern undefined4 fn_00159f34(); extern undefined4 fn_0015e304(); extern undefined4 fn_00163988(); extern undefined4 fn_00178eec();
extern undefined4 * fn_001dc08c(); extern undefined4 fn_0021b74c(); extern bool fn_0021c13c(); extern undefined4 fn_0021d51c(); extern undefined4 fn_0021d738(); extern undefined4 fn_002feef8();
extern undefined4 fn_00699014(); extern bool fn_006f7a20(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_00897810; extern undefined4 PTR_FUN_0081c6a4;
