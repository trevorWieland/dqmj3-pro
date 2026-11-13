#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0017ffac(); extern undefined4 fn_0018367c(); extern void fn_0018d1c8(); extern bool fn_00191284(); extern undefined4 fn_00196910(); extern uint * fn_0019e864();
extern undefined4 fn_001a0b78(); extern undefined4 fn_0069f1d0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c06e8;
