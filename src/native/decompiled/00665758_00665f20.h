#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00144298(); extern undefined4 fn_00145b00(); extern int fn_0018388c(); extern undefined4 fn_0019d320(); extern undefined4 fn_0019d680(); extern uint * fn_0019e864();
extern undefined4 fn_0019e8c4(); extern undefined4 fn_001a1dc8(); extern undefined4 fn_001a51e0(); extern undefined4 fn_0024d73c(); extern undefined4 fn_0024d77c(); extern undefined4 fn_002fece8();
extern int fn_00664c70();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00850d74; extern undefined4 DAT_008c06e8;
