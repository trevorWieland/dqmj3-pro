#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern int fn_00100b58(); extern uint fn_00101a50(); extern short * fn_0010313a(); extern int fn_0016ba34(); extern undefined4 fn_0017d96c();
extern undefined4 fn_0019501c(); extern undefined4 fn_002feef8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003eff34; extern undefined4 DAT_003f015c; extern undefined4 DAT_003f0168; extern undefined4 DAT_003f0174;
extern undefined4 DAT_0089618c; extern undefined4 DAT_00897800; extern undefined4 DAT_00898780; extern undefined4 DAT_0089a92c;
