#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint * fn_00120ec8(); extern int fn_00172c98(); extern undefined4 fn_00178f9c(); extern undefined4 fn_002f6534(); extern undefined4 fn_002feef8(); extern void fn_003e8b04();
extern undefined4 fn_003e8d88(); extern undefined4 fn_00688cc4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003e8bec; extern undefined4 DAT_003e8bf8; extern undefined4 DAT_003e8c08; extern undefined4 DAT_003e8c14;
extern undefined4 DAT_00897008;
