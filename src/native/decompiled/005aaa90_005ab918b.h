#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00142e38(); extern undefined4 fn_00145b00(); extern undefined4 fn_001f74d8(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0022f750(); extern undefined4 fn_00321118();
extern int fn_0036c140(); extern undefined4 fn_0036c648(); extern undefined4 fn_003979d0(); extern undefined4 fn_005e0fb4(); extern undefined4 * fn_005e1058(); extern undefined4 fn_00689bd0();
extern undefined4 fn_0068ab44();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005ab7ac; extern undefined4 DAT_007bd6d4; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00890c80;
extern undefined4 DAT_008951dc;
