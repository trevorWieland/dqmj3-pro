#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001603f8(); extern undefined4 fn_00163988(); extern undefined4 fn_001c93c8(); extern undefined4 fn_0028c2fc(); extern int fn_0028e340();
extern undefined4 fn_0028e658(); extern undefined4 fn_002b183c(); extern undefined4 fn_002b1908(); extern undefined4 fn_00348dbc(); extern undefined4 fn_00348e70(); extern undefined4 fn_003b7324();
extern undefined4 fn_003b7fec(); extern undefined4 fn_003b8054(); extern undefined4 fn_0068869c(); extern undefined4 fn_0069d394(); extern undefined4 fn_0069e878();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00897808; extern undefined4 DAT_0089780c;
