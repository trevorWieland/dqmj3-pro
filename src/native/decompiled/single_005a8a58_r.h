#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_0018cb08(); extern undefined4 fn_002ff628(); extern undefined4 fn_005a74bc(); extern undefined4 fn_005a76f4(); extern undefined4 fn_005a7750();
extern undefined4 fn_005a777c(); extern undefined4 fn_005a77bc(); extern undefined4 fn_005a8448(); extern undefined4 fn_007997c0(); extern undefined4 fn_007998d8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008c7659;
