#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0013ae4c(); extern undefined4 fn_00145b00(); extern undefined4 fn_002b4f00(); extern undefined4 fn_002feef8();
extern undefined4 fn_00305898(); extern undefined4 fn_0069e7cc(); extern undefined4 fn_0069e808();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081ed38; extern undefined4 DAT_00893760; extern undefined4 PTR_s_tab_icon_00_00893770;
