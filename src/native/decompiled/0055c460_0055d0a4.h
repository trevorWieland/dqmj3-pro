#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_00169f1c(); extern undefined4 fn_0017cad4(); extern undefined4 fn_0019bc50(); extern undefined4 fn_001a3c68(); extern undefined8 fn_00301a9c(); extern undefined4 fn_00559d10();
extern uint fn_00559e68(); extern undefined4 fn_0055a1c4(); extern undefined4 fn_0055b880(); extern undefined4 fn_0055befc(); extern undefined4 fn_0055c034();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008f3520;
