#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00163868(); extern undefined4 fn_003908bc(); extern undefined4 fn_00390d6c(); extern undefined4 fn_00390f28();
extern int fn_006c8a2c(); extern undefined4 fn_006c9184(); extern int fn_006c9504(); extern uint fn_006c9514(); extern undefined4 fn_006f7a0c(); extern undefined4 * fn_0078f8ec();
extern int * fn_0078fd10(); extern undefined4 fn_0079e460(); extern undefined4 fn_007b3030();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
