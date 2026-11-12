#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00163868(); extern int * fn_0028b0a0(); extern int * fn_0028b348(); extern undefined4 fn_003644f0();
extern int fn_006afe90(); extern int fn_006b2aa0(); extern undefined4 fn_006b64b0(); extern int fn_006b83e4(); extern int fn_006b84b0(); extern int fn_006bb150();
extern uint fn_006bb17c(); extern undefined4 fn_006f6fc4(); extern undefined4 fn_006f756c(); extern undefined4 fn_0079ce44();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000007; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804;
