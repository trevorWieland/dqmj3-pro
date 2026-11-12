#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00163868(); extern undefined4 fn_0017fc3c(); extern undefined4 fn_0017fde4(); extern uint fn_001da77c(); extern undefined4 fn_00239fc4(); extern undefined4 fn_00239ffc();
extern undefined4 fn_0023a030(); extern uint fn_0023a7f4(); extern int fn_0023b858(); extern int fn_0023ba48(); extern undefined4 fn_0023dc64(); extern undefined4 * fn_00301f50();
extern int fn_003415b0(); extern undefined4 fn_00525bd0(); extern undefined4 fn_005df8f8(); extern undefined4 fn_006f7388();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
