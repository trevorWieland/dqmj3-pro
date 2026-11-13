#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 * fn_0015ecdc(); extern undefined4 fn_00455e10(); extern undefined4 fn_00479c98(); extern undefined4 fn_00479cd8(); extern undefined4 fn_0048e250();
extern undefined4 fn_004b8d4c(); extern undefined4 fn_004bdba4(); extern bool fn_0052c6ec();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern code *DAT_007d9270; extern code *DAT_00853500; extern code *DAT_00853ca0; extern code *DAT_008a6454;
extern code *DAT_008a6458;
