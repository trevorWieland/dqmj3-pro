#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_00243550(); extern int fn_00243834(); extern undefined4 * fn_0025e920(); extern undefined4 fn_00307cc4();
extern undefined4 fn_0069e710(); extern undefined4 fn_0069e7cc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00243358; extern undefined4 DAT_00243368; extern undefined4 DAT_00243544; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_0081d398; extern undefined4 DAT_008937a0; extern undefined4 DAT_008937a4; extern undefined4 DAT_0089a928;
extern undefined4 DAT_0089a930; extern undefined4 DAT_0089a934;
