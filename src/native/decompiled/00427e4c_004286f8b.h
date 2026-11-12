#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00154ac8(); extern undefined4 fn_0015b064(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_00163868();
extern undefined4 fn_0019bc50(); extern undefined4 fn_002d8370(); extern undefined4 fn_003b679c(); extern undefined4 fn_00427ee4(); extern short * fn_004282d0(); extern undefined4 fn_006945fc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008914ac; extern undefined4 DAT_008914b0; extern undefined4 DAT_008977e0;
