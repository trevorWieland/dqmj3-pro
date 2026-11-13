#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00190d50(); extern int fn_0020c298(); extern int fn_0020c2c4(); extern undefined4 fn_0020c2e0();
extern undefined4 fn_002317d8(); extern undefined4 fn_002ff628(); extern undefined4 fn_005cacf0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00847974; extern undefined4 DAT_008c7666; extern undefined4 DAT_008c7667; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4;
