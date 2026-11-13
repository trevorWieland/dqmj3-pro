#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101d80(); extern undefined4 fn_00145b00(); extern undefined4 fn_0018a69c(); extern undefined4 * fn_0018a6d4(); extern int fn_0018a84c(); extern undefined4 * fn_0018a9fc();
extern undefined4 fn_00190d50(); extern undefined4 * fn_00194db0(); extern undefined4 fn_002ff628(); extern undefined * fn_0038cb10(); extern int fn_005532f8(); extern undefined4 fn_00688fd8();
extern undefined4 fn_00689080();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0038ce24; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008c765f;
