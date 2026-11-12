#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00144834(); extern undefined4 fn_00145b00(); extern undefined4 fn_00163890(); extern undefined4 fn_002d8370(); extern int * fn_002defe0();
extern undefined4 fn_002df424(); extern undefined4 fn_002df4e8(); extern undefined4 fn_002df6f8(); extern undefined4 * fn_002e1154(); extern undefined4 fn_00368d50(); extern undefined4 fn_003692c0();
extern undefined4 fn_003694fc(); extern undefined4 fn_00369548(); extern int fn_003b237c(); extern int fn_003b2e54(); extern int fn_003b37b0(); extern undefined4 fn_006bb544();
extern undefined4 fn_006f7358(); extern undefined4 fn_006f7508();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008914d8; extern undefined4 DAT_008977e0;
