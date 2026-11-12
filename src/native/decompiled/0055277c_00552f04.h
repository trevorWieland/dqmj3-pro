#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_0017d8f8(); extern undefined4 * fn_0018a6d4(); extern undefined4 fn_00194ee4(); extern undefined4 fn_0019559c(); extern undefined4 fn_00195768();
extern undefined4 fn_001957e0(); extern undefined4 fn_0019fb94(); extern undefined4 fn_002feef8(); extern undefined4 * fn_0054ce60(); extern undefined4 * fn_0054d158(); extern undefined4 fn_005525fc();
extern int fn_00554a30(); extern undefined4 fn_00555670(); extern undefined4 fn_00555718(); extern int fn_00555744();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 PTR_FUN_00857cb0;
