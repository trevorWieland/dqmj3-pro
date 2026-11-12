#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern int fn_00177c88(); extern undefined4 fn_00190d50(); extern undefined4 fn_0023097c(); extern undefined4 * fn_00394af0();
extern undefined4 fn_003f822c(); extern undefined4 fn_00580f08();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00842458; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
