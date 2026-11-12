#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_001002f8(); extern undefined4 fn_00100380(); extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_002fea64(); extern undefined4 fn_00424968();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000030; extern undefined4 DAT_008917a4; extern code *DAT_008c3dc0; extern undefined4 DAT_008f9cf8;
extern undefined4 DAT_008f9d04;
