#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern undefined4 fn_001f74d8(); extern undefined4 fn_002c8f50(); extern undefined4 fn_002ff628(); extern undefined4 fn_003267d8();
extern undefined4 fn_0034d9e4(); extern undefined4 fn_0039e35c(); extern undefined4 fn_0039e364(); extern undefined4 fn_00689824(); extern undefined4 fn_00689efc(); extern undefined4 fn_0068ab44();
extern bool fn_006ba220(); extern undefined4 fn_006ba284(); extern undefined4 fn_006cb910();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00893a00; extern undefined4 DAT_008c7674; extern undefined4 PTR_FUN_00823720;
extern undefined4 PTR_LAB_00825f6c;
