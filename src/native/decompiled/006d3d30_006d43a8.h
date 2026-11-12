#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001010c8(); extern undefined4 * fn_001142a8(); extern undefined4 fn_0013d0fc(); extern undefined4 fn_00166824(); extern undefined4 fn_0019bc50(); extern undefined4 fn_004548bc();
extern int fn_00482944(); extern undefined4 fn_004b8d4c(); extern undefined4 fn_004ed514(); extern undefined4 fn_004ed534(); extern longlong fn_006d3b9c(); extern longlong fn_006dbecc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089a638; extern undefined4 DAT_0089a63c; extern undefined4 DAT_008a645c; extern undefined4 DAT_008a6460;
extern undefined4 DAT_008bf4d4;
