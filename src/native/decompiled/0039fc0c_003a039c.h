#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 * fn_001f7e18(); extern undefined4 fn_0028e434(); extern undefined4 fn_002feef8(); extern void fn_0039fc0c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c9188; extern undefined4 DAT_007c9214; extern undefined4 DAT_007c9584; extern undefined4 DAT_007c95d4;
extern undefined4 DAT_0082d544; extern undefined4 DAT_0082d554;
