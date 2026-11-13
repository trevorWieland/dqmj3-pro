#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00163868(); extern int fn_0028b074(); extern undefined4 fn_002ff628(); extern bool fn_006b2ef8();
extern int fn_006b38f4(); extern int fn_006b8478();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_007ba238; extern undefined4 DAT_007ba23c; extern undefined4 DAT_007ba240;
extern undefined4 DAT_007ba244; extern undefined4 DAT_00897804; extern undefined4 DAT_008c7649;
