#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001f7350(); extern undefined4 * fn_001f7e18(); extern undefined4 fn_0028e434(); extern undefined4 fn_002ff628();
extern undefined4 fn_00303afc(); extern void fn_00304ec4(); extern undefined4 fn_0078d810();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c48fc; extern undefined4 DAT_007c49c4; extern undefined4 DAT_007c4b68; extern undefined4 DAT_007c4ba4;
extern undefined4 DAT_008218f4; extern undefined4 DAT_00821908; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008c7627;
extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34; extern undefined4 PTR_FUN_008218ac;
