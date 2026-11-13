#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int * fn_0028aad0(); extern int fn_002c11d0(); extern undefined1 fn_002e84fc(); extern undefined4 * fn_002e8cf0();
extern undefined4 fn_002ff628(); extern undefined4 fn_00445884(); extern undefined4 fn_00445904(); extern undefined4 fn_0058c9a8(); extern int * fn_0079e0cc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00433ae4; extern undefined4 DAT_00897804; extern undefined4 DAT_008c760d; extern undefined4 DAT_008c7655;
