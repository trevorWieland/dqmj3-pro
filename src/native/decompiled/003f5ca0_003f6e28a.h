#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_001f74d8(); extern undefined1 fn_0025be70(); extern bool fn_0028bbd8();
extern undefined4 fn_002ff628(); extern undefined1 fn_0037c074(); extern undefined4 fn_003f59d0(); extern int fn_00660c48(); extern undefined4 fn_00689efc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00835388; extern undefined4 DAT_0089292c; extern undefined4 DAT_00892b1c;
extern undefined4 DAT_008c7674;
