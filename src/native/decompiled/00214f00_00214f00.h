#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00303afc(); extern undefined4 fn_006a99dc(); extern undefined4 fn_006f72e0(); extern int fn_006f7770(); extern undefined4 fn_006f7a5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008913ec; extern undefined4 DAT_008913f0; extern undefined4 DAT_008977e0;
