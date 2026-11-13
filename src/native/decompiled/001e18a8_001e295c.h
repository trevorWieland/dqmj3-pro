#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00128744(); extern undefined4 * fn_00171634(); extern undefined4 fn_00179bfc(); extern undefined4 fn_0017fde4(); extern undefined4 fn_001e2904(); extern undefined4 fn_001ea890();
extern undefined4 fn_0023f3dc(); extern undefined4 fn_00259728(); extern undefined4 fn_006b4cbc(); extern undefined4 fn_006f7a48();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
