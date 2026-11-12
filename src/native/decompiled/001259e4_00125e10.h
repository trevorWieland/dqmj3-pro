#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001252e8(); extern undefined4 fn_00125694(); extern undefined4 fn_001257a8(); extern int fn_0013e9f8(); extern int fn_0013ee90(); extern int fn_0013eecc();
extern int fn_0013ef08(); extern int fn_0013ef44();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089a569; extern undefined4 DAT_008bfb30; extern undefined4 DAT_008bfb38; extern undefined4 DAT_008bfb39;
extern undefined4 DAT_008c7784;
