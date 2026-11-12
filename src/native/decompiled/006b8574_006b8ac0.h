#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001028d4(); extern undefined4 fn_00174828(); extern int fn_001748ec(); extern int fn_0025f9d8(); extern int fn_006b83e4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006b8818; extern undefined4 DAT_008977e4; extern undefined4 DAT_00897800;
