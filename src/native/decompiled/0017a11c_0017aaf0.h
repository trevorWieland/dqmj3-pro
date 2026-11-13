#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern undefined4 fn_00159f34(); extern int fn_001659c0(); extern undefined4 fn_00174fc0(); extern undefined4 fn_00175284(); extern int fn_00177c88();
extern undefined4 fn_00179990(); extern undefined4 fn_00179a14(); extern undefined4 fn_00182994(); extern undefined4 fn_00182c40(); extern undefined4 fn_001853ec(); extern undefined4 fn_001854ac();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0017a7d0; extern undefined4 DAT_0017a7e8; extern undefined4 DAT_0017a7f4; extern undefined4 DAT_00188948;
extern undefined4 DAT_008977e4;
