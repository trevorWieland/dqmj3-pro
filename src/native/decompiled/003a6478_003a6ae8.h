#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00174828(); extern undefined4 fn_00190cdc(); extern undefined4 fn_00190e00(); extern undefined4 fn_0025e378();
extern undefined4 fn_0025e7cc(); extern undefined4 fn_002ff628(); extern undefined4 fn_0030b8f8(); extern undefined4 fn_003a563c(); extern undefined4 fn_003a755c(); extern int fn_006b8478();
extern undefined4 fn_006f447c(); extern bool fn_006f4868(); extern undefined4 fn_00790780();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804; extern undefined4 DAT_008c7660;
