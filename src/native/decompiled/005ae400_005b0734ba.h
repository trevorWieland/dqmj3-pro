#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0022ccb4(); extern undefined4 fn_0028e264(); extern undefined4 fn_002ff628(); extern undefined4 fn_005ca640(); extern undefined4 fn_005ca88c(); extern undefined4 fn_00688d44();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00847960; extern undefined4 DAT_00892bec; extern undefined4 DAT_008c7667;
