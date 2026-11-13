#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00163868(); extern undefined4 fn_00178eec(); extern undefined4 fn_0017fe34(); extern undefined4 fn_001c7160();
extern undefined4 fn_001caa40(); extern undefined4 fn_00215cb4(); extern undefined4 fn_002fdeac(); extern undefined4 fn_002fdf94(); extern undefined4 fn_00525bd0(); extern undefined4 fn_005df8f8();
extern undefined4 fn_00689bd0(); extern undefined4 fn_0068ab44(); extern undefined4 * fn_0068ab5c(); extern undefined4 * fn_0068ad5c(); extern bool fn_006aff38(); extern undefined4 fn_006c3a0c();
extern undefined4 fn_006f6a38(); extern int fn_006f6a44();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0082e9d0; extern undefined4 PTR_FUN_0082e8c0; extern undefined4 PTR_FUN_0082ea20;
