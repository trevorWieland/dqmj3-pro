#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001638a0(); extern undefined4 fn_001d96a0(); extern bool fn_001d99a0(); extern undefined4 fn_001d9fcc(); extern undefined4 fn_001da490(); extern undefined4 fn_001db0c4();
extern undefined4 * fn_001dbf48(); extern bool fn_00279bbc(); extern undefined4 fn_006f7a84(); extern int fn_006f7a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c1150; extern undefined4 DAT_0082707c; extern undefined4 DAT_008977e0;
