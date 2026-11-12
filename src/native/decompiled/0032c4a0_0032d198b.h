#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0023dca4(); extern undefined4 fn_0023e2ac(); extern undefined4 fn_00260014(); extern undefined4 fn_0026009c(); extern undefined4 fn_00260640();
extern undefined4 fn_00260690(); extern undefined4 fn_00260750(); extern undefined4 fn_002feef8(); extern undefined4 fn_00303afc(); extern undefined4 fn_0068c7e8(); extern undefined4 fn_0068cafc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008242f8; extern undefined4 DAT_00896cb8; extern undefined4 DAT_008977e8; extern undefined4 DAT_008c62fc;
extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
