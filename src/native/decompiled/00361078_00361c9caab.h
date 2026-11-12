#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001bf8f4(); extern undefined4 * fn_001c0d3c(); extern undefined4 fn_0026e5c4(); extern int fn_002772e4(); extern uint fn_002fe310(); extern undefined4 fn_006b77f0();
extern undefined4 fn_006f7a0c(); extern undefined4 fn_006f7a70(); extern int fn_006f7a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003615c8; extern undefined4 DAT_003615d4; extern undefined4 DAT_008977e0;
