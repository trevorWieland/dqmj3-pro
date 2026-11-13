#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern uint * fn_001782b8(); extern undefined4 * fn_001c5034(); extern undefined4 fn_001c7e78(); extern undefined4 fn_002d8370();
extern undefined4 fn_002d8e50(); extern undefined4 fn_002d9f78(); extern undefined4 fn_002dace8(); extern undefined4 fn_002feef8(); extern uint fn_003023b0(); extern undefined4 fn_0069c2c8();
extern uint fn_006bb17c(); extern undefined4 fn_006f756c(); extern undefined4 fn_006f7a70();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00820264; extern undefined4 DAT_008977e0; extern undefined4 DAT_008c8764;
