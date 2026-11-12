#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00303afc(); extern int fn_004c3b1c(); extern undefined1 fn_00660ec0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
