#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00145b00(); extern undefined4 fn_00215e38(); extern undefined4 fn_005aeb84(); extern int fn_006b4240(); extern undefined1 fn_006bab38();
extern undefined4 fn_006f7388();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005f4c78; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e0;
