#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0015ef4c(); extern bool fn_00454cbc(); extern undefined4 fn_0045f6f0(); extern undefined4 fn_0046e0a4(); extern undefined4 fn_0048ca64();
extern undefined4 fn_0049a6e4(); extern undefined4 fn_0049a91c(); extern undefined4 * fn_004b73b0(); extern undefined4 fn_004b7520(); extern undefined4 fn_004ba7ac(); extern undefined4 fn_004ba7c4();
extern bool fn_004bab34(); extern bool fn_006d3ef4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008e6688; extern undefined4 DAT_008e66b8;
