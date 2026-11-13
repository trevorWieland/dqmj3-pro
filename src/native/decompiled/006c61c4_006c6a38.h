#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0020abb4(); extern undefined4 fn_0020aca8(); extern uint fn_0020ace0(); extern undefined4 fn_0020adac();
extern int fn_0020b248(); extern uint fn_002395a4(); extern uint fn_00239658(); extern int fn_002396e0(); extern undefined4 fn_00239700(); extern int fn_002d6b60();
extern int fn_006c5de0(); extern undefined4 fn_0079e460(); extern undefined4 fn_007b2af0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000020;
