#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101ce8(); extern undefined4 fn_00102388(); extern undefined4 fn_0010239a(); extern undefined4 fn_00146590(); extern undefined4 fn_0014d6cc(); extern int fn_0018388c();
extern undefined4 fn_0019828c(); extern undefined4 fn_00198578(); extern uint * fn_0019e864(); extern undefined4 fn_0019e8c4(); extern undefined4 fn_002fece8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_008516d0; extern undefined4 DAT_008c06e8; extern undefined4 DAT_008c06ec;
