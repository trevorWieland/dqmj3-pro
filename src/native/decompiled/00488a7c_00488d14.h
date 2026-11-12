#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_0015ece0(); extern undefined8 fn_00169f1c(); extern undefined4 fn_0030233c(); extern undefined4 * fn_004745d8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008528bc; extern undefined4 DAT_0085319c; extern undefined4 PTR_LAB_008533fc; extern undefined4 PTR_LAB_00854110;
