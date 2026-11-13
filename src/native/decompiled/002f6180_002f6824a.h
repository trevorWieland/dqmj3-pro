#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001f74f8(); extern int * fn_002f8364(); extern undefined4 fn_0036a810(); extern undefined4 fn_003e93d0(); extern undefined4 fn_005f3b74(); extern int fn_006c3ab0();
extern undefined4 fn_006c3acc(); extern int fn_006cd660(); extern int fn_006cd894();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00896fe0; extern undefined4 DAT_008977ec; extern undefined4 DAT_00897804; extern undefined4 DAT_00898840;
