#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern undefined4 fn_0028e264(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628(); extern undefined4 * fn_0042e7dc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0083bd4c; extern undefined4 DAT_008c7662; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4;
