#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00171688(); extern undefined4 fn_001781f0(); extern undefined4 fn_001ad150(); extern undefined4 fn_00303afc(); extern undefined4 fn_006dc8c8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c6308; extern undefined4 DAT_008f9ea8; extern undefined4 DAT_008f9ed8; extern undefined4 DAT_008f9edc;
extern undefined4 DAT_008f9ee0; extern undefined4 DAT_008f9ee4;
