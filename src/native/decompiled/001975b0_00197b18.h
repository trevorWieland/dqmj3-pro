#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0018d4fc(); extern char * fn_00191f20(); extern undefined4 fn_0019813c(); extern undefined4 fn_00198578(); extern undefined4 fn_0019e378(); extern uint * fn_0019e864();
extern int fn_001a178c(); extern undefined4 fn_001a1dc8(); extern int fn_001a1eec(); extern undefined4 fn_001a2b2c(); extern int fn_001a8604();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00197ad4; extern undefined4 DAT_00197af4; extern undefined4 DAT_00197b04;
