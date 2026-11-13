#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001f74d8(); extern undefined4 fn_0022d114(); extern undefined4 fn_0031bf48(); extern undefined4 fn_00385b88(); extern undefined4 * fn_003d6ce8();
extern undefined4 fn_003f4f48(); extern undefined4 fn_003f5178();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00894020; extern undefined4 PTR_FUN_0082f2e4;
