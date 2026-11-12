#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int * fn_001008cc(); extern int fn_001010c8(); extern bool fn_0012ead8(); extern undefined4 fn_00145b00(); extern int fn_00167500(); extern int * fn_0017d948();
extern int fn_001c8b90(); extern undefined4 * fn_002fed80(); extern undefined4 fn_002fedf4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008f9d04;
