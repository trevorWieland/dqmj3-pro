#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined4 fn_0019e9c0(); extern uint * fn_0019f2d4(); extern undefined4 fn_001a981c(); extern uint fn_001a9bd8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008f0bc0; extern undefined4 DAT_008f0bc4; extern undefined4 DAT_008f0bc8; extern undefined4 DAT_008f0bd0;
extern undefined4 DAT_008f249c; extern undefined4 _DAT_008f0bc0;
