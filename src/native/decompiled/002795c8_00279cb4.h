#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern uint fn_00101a50(); extern undefined4 fn_0012d73c(); extern undefined4 fn_0012f208(); extern undefined1 fn_00145aac();
extern int fn_00177c88(); extern undefined4 fn_001c6c38(); extern undefined4 fn_002775a0(); extern int fn_00278784(); extern undefined4 fn_00278c50(); extern void fn_00279ae4();
extern void fn_00279bd4(); extern int fn_006afaf4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00279cac; extern undefined4 DAT_008977e0; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
