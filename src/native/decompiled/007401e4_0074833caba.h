#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_001b8438(); extern undefined4 fn_002fecec(); extern undefined4 fn_0030233c(); extern undefined1 fn_00741210();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0074130c; extern undefined4 DAT_007d5f9c; extern undefined4 DAT_00899ebc; extern undefined4 DAT_00899ec0;
extern undefined4 DAT_00899ec4;
