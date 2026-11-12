#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_002e3c08(); extern undefined4 fn_002e3d70(); extern undefined4 fn_002e3f6c();
extern undefined4 fn_002e4004(); extern undefined4 fn_002e40d8(); extern undefined4 fn_002e4118(); extern undefined4 * fn_002e42dc(); extern undefined4 * fn_002e4388(); extern undefined4 * fn_00307738();
extern undefined4 * fn_0037dfd4(); extern undefined4 fn_0078cb6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00393824; extern undefined4 DAT_00812c8c; extern undefined4 PTR_FUN_0082b554;
