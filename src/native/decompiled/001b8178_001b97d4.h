#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00169f4c(); extern int fn_0018501c(); extern undefined4 fn_001851bc(); extern bool fn_00191f08(); extern undefined4 fn_00192114(); extern undefined4 fn_001af1c8();
extern undefined4 fn_001af244(); extern undefined1 fn_001afe88(); extern undefined1 fn_001aff20(); extern int fn_001b01a4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf5fc; extern undefined4 DAT_008bf604;
