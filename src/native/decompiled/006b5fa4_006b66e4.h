#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00303afc(); extern undefined4 fn_005f2d30(); extern undefined4 fn_006afb3c(); extern undefined4 fn_006afb54(); extern undefined4 fn_006afb6c(); extern undefined4 fn_006afba4();
extern undefined4 fn_006afbbc(); extern undefined4 fn_006afbd4(); extern bool fn_006c3a70(); extern int fn_006c7290(); extern bool fn_006cdaec(); extern undefined4 fn_006f7a0c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30;
extern undefined4 DAT_008f9e34;
