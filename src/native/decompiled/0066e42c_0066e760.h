#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_0013d4ec(); extern int fn_005f3a9c(); extern undefined4 fn_00669e78(); extern undefined4 fn_0066ade0(); extern undefined4 fn_00670f84(); extern undefined4 fn_006729ac();
extern undefined4 fn_006729c8(); extern undefined4 fn_00674f58(); extern undefined4 fn_00675554(); extern undefined1 * fn_006d59a0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00898840; extern undefined4 DAT_008bf504;
