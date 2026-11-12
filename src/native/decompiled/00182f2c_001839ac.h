#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_0014df84(); extern undefined4 fn_0014e774(); extern undefined8 fn_00169f1c(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern int fn_0017fb98();
extern int fn_0017fbdc(); extern uint fn_0019338c(); extern undefined4 fn_002fecec(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0030233c(); extern uint fn_003035b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089a684; extern undefined4 DAT_008e3078;
