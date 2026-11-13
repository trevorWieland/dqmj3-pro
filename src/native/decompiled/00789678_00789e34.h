#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int * fn_001c6ba4(); extern undefined4 fn_002fedf4(); extern undefined4 fn_002ff628(); extern int * fn_003007d0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c761d; extern undefined4 DAT_008f9cf8; extern undefined4 DAT_008f9d04;
