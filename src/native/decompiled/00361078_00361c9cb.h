#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001c0830(); extern undefined4 fn_001d9f9c(); extern undefined4 fn_001da39c(); extern undefined4 fn_0023d3f4(); extern undefined4 fn_0026e5c4(); extern int fn_002772e4();
extern uint fn_002fe310(); extern undefined4 fn_0035e164(); extern undefined4 fn_0069c2c8(); extern undefined4 fn_006b77f0(); extern int fn_006c89fc(); extern undefined4 fn_006f6fc4();
extern undefined4 fn_006f7a0c(); extern undefined4 fn_006f7a70(); extern int fn_006f7a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00361b94; extern undefined4 DAT_00826dc0; extern undefined4 DAT_008977e0;
