#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00301f50(); extern undefined4 fn_00368c90(); extern undefined4 fn_003690f4(); extern undefined4 fn_005f1940(); extern uint fn_006b520c(); extern int fn_006b8190();
extern int fn_006f7770();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00831b30; extern undefined4 DAT_00831ba8; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804;
