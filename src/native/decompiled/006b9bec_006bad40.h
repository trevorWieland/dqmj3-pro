#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined1 fn_00129dc8(); extern undefined4 fn_00163868(); extern undefined4 fn_00163d44(); extern undefined4 fn_00163d68();
extern undefined4 fn_002ff628(); extern int fn_006b2aa0(); extern undefined4 fn_006b860c(); extern int fn_006b9608(); extern undefined4 fn_006b9768(); extern undefined4 fn_006b98d0();
extern undefined4 fn_006b99f0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804; extern undefined4 DAT_008c7670;
