#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00102b04(); extern undefined4 fn_00146590(); extern int fn_0018388c(); extern undefined4 fn_001a2480(); extern undefined1 * fn_001a293c(); extern int fn_002fea64();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0019a824; extern undefined4 DAT_0019a83c; extern undefined4 DAT_0019a860; extern undefined4 DAT_0019a878;
extern undefined4 DAT_0080e0fc;
