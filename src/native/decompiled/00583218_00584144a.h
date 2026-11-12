#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_001f74d8(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0025dac8(); extern undefined4 * fn_0025dea8();
extern undefined4 fn_0039c4c8(); extern undefined4 * fn_0039c504(); extern undefined4 fn_003dd5a4(); extern void fn_00583ef0(); extern undefined4 fn_00689efc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c7464; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00827f4c; extern undefined4 DAT_00842820;
extern undefined4 DAT_00842ce4; extern undefined4 DAT_00894454; extern undefined4 DAT_00894d28;
