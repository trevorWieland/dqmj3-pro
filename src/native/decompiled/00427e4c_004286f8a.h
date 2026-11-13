#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0019bc50(); extern undefined4 fn_001a46f4(); extern undefined4 fn_00216938(); extern undefined4 fn_00226f48();
extern undefined4 fn_002feef8(); extern short * fn_004282d0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0083b418; extern undefined4 DAT_008977e0;
