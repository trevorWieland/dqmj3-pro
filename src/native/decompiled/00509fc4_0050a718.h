#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004ed584(); extern undefined4 fn_004edc34(); extern undefined4 fn_004edc70(); extern int fn_004f0430(); extern int fn_004f04c8(); extern undefined4 fn_00509164();
extern void fn_0050a718(); extern undefined1 * fn_0050a73c(); extern undefined4 fn_00513f10(); extern undefined4 fn_00516cec(); extern int fn_00516db8(); extern int fn_00516dd8();
extern undefined4 fn_00516e0c(); extern undefined4 fn_00516e40(); extern undefined4 fn_00516e6c(); extern undefined4 fn_0051702c(); extern undefined4 fn_006d6e30(); extern undefined4 fn_006d70ac();
extern undefined4 fn_006d8a04();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856ffc; extern undefined4 DAT_e0a14827;
