#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern char * fn_001030bc(); extern undefined4 fn_00146590(); extern undefined4 fn_00157c74(); extern undefined4 fn_00157f58(); extern undefined4 fn_00157fb0(); extern int fn_00157ff4();
extern undefined4 fn_001580cc(); extern undefined4 fn_001581d0(); extern undefined4 * fn_00158f6c(); extern undefined4 fn_00166e14(); extern undefined4 fn_00173cb8(); extern undefined4 fn_00173d1c();
extern int fn_00173d40(); extern undefined4 fn_00192114(); extern uint * fn_0019e864(); extern undefined4 fn_006167ec(); extern undefined4 * fn_00665a44(); extern undefined4 fn_0074236c();
extern undefined4 fn_00742460();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001b3abc; extern undefined4 DAT_001b3acc; extern undefined4 DAT_001b3b28; extern undefined4 DAT_001b3c28;
extern undefined4 DAT_001b3da4;
