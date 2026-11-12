#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0015382c(); extern int fn_00153930(); extern undefined4 fn_006ec020(); extern undefined4 fn_006ec038(); extern undefined4 fn_006ec050(); extern undefined4 fn_006ec05c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00858b94;
