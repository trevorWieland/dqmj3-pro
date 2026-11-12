#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_002ff628(); extern undefined * fn_00300190(); extern undefined1 * fn_0030278c(); extern undefined4 fn_00302894();
extern undefined4 fn_006af668();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00302928; extern undefined4 DAT_008977e0; extern undefined4 DAT_008c764b;
