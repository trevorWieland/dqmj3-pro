#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern uint fn_0010288c(); extern undefined4 fn_0017d8f8(); extern int * fn_0017d948(); extern undefined4 fn_00194d10(); extern undefined4 * fn_00194db0();
extern undefined4 fn_00194ee4(); extern undefined4 * fn_0019533c(); extern undefined4 fn_0019559c(); extern undefined4 fn_0019561c(); extern undefined4 fn_00195768(); extern undefined4 fn_001957e0();
extern int fn_002fea64(); extern undefined4 * fn_00301f50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00857a68; extern undefined4 PTR_FUN_00857b60; extern undefined4 PTR_FUN_00857cb0;
