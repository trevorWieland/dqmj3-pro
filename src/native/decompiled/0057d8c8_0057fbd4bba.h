#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001f74ec(); extern undefined4 * fn_002358e4(); extern undefined4 fn_0057ec1c(); extern undefined4 fn_005b8150(); extern undefined4 fn_00689930();
extern int fn_006e7ab8(); extern undefined4 fn_00747f28();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0057e714; extern undefined4 DAT_0057e734; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00892ee4;
extern undefined4 DAT_00897828; extern undefined4 DAT_00898214;
