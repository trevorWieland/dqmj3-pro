#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_0018a618(); extern undefined4 fn_00190d50(); extern undefined4 fn_0022ef60(); extern undefined4 * fn_003e0780();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003df6b4; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0089560c; extern undefined4 DAT_00895618;
