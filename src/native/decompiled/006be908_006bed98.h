#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00113ca8(); extern undefined4 fn_00113ce4(); extern int fn_00203d1c(); extern undefined4 * fn_00301f50(); extern undefined2 fn_00391d58(); extern undefined2 fn_006b52b0();
extern undefined1 fn_006b52c0(); extern undefined4 fn_006bc024(); extern int fn_006bf5ec();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_007c41f6; extern undefined4 DAT_007c68f8; extern undefined4 DAT_00897804;
