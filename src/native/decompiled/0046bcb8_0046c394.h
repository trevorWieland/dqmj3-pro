#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_00101144(); extern undefined4 fn_001249d0(); extern undefined4 fn_0030233c(); extern void fn_0046bcb8(); extern undefined4 fn_004815e4(); extern undefined4 fn_004817d4();
extern bool fn_006d3b54(); extern undefined4 fn_00767f88(); extern undefined4 fn_007685e8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0085319c; extern undefined4 DAT_008e9410; extern undefined4 DAT_008e9520; extern undefined4 PTR_LAB_008533fc;
