#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0016947c(); extern undefined4 fn_001781f0(); extern int fn_00191238(); extern int fn_00191270();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00188f54; extern undefined4 DAT_001890ec; extern undefined4 DAT_00192e10; extern undefined4 DAT_007d6f20;
extern undefined4 DAT_007d6f24; extern undefined4 DAT_007d6f28; extern undefined4 DAT_007d6f2c;
