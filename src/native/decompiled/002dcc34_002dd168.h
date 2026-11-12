#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int * fn_0028b0a0(); extern int * fn_0028b348(); extern undefined4 * fn_002dc338(); extern undefined4 fn_002dd188();
extern undefined4 fn_002ff628(); extern bool fn_00660e0c(); extern int fn_006b83e4(); extern int fn_006b84b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00820430; extern undefined4 DAT_00897804; extern undefined4 DAT_008c7631;
