#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00190d50(); extern undefined4 fn_00303afc(); extern undefined4 fn_0036c054(); extern undefined4 fn_0036c354();
extern undefined4 fn_00401bac(); extern undefined4 fn_00689818(); extern undefined4 fn_0068ab44(); extern undefined4 * fn_0068ab5c(); extern undefined4 * fn_0068ad5c(); extern undefined4 fn_0069d0b0();
extern bool fn_006c3ba0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 DAT_008f9e2c;
extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34; extern undefined4 PTR_FUN_0081d9b0;
