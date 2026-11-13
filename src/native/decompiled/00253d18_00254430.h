#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern uint fn_00101a50(); extern undefined4 fn_0012a26c(); extern undefined4 fn_0012d73c(); extern undefined4 fn_0012f208();
extern undefined4 fn_00145ac0(); extern int fn_0016b874(); extern undefined4 fn_006b3ef0(); extern undefined4 fn_006b3f1c(); extern undefined4 fn_006b3f44();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ba724; extern undefined4 DAT_007ba728;
