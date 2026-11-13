#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 * fn_00118290(); extern undefined4 fn_0011c184(); extern undefined4 fn_0012d73c(); extern undefined4 fn_00145ac0(); extern uint fn_00147e6c();
extern undefined4 fn_001fa068(); extern undefined4 fn_0068869c(); extern undefined4 fn_006ad904(); extern int fn_006ad9ac();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001fa2f4; extern undefined4 DAT_00897808; extern undefined4 DAT_0089780c;
