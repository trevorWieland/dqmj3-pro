#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern undefined4 fn_0015e294(); extern undefined4 * fn_00168984(); extern undefined4 fn_00169c08(); extern undefined4 * fn_00170f54();
extern void fn_001777e0(); extern undefined4 fn_0017790c(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern uint fn_003035b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008864d4; extern undefined4 DAT_008864dc; extern undefined4 DAT_008c7610; extern undefined4 DAT_008e3470;
extern undefined4 DAT_008e3474; extern undefined4 DAT_008e3480; extern undefined4 DAT_008e3484; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4;
