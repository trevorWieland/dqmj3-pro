#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00102c18(); extern undefined4 fn_00146590(); extern undefined4 fn_0019ba68(); extern undefined4 fn_001a1dc8(); extern undefined1 * fn_001a293c(); extern int fn_002fea64();
extern undefined4 fn_002fece8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0019add4; extern undefined4 DAT_0019ade8; extern undefined4 DAT_0019ae00; extern undefined4 DAT_0019ae1c;
extern undefined4 DAT_0019b244; extern undefined4 DAT_0019b258; extern undefined4 DAT_0080e0fc;
