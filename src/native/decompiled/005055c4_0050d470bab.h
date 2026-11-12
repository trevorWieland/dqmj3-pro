#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00124e48(); extern int fn_0050935c(); extern int fn_0050b144(); extern undefined4 fn_00516cc8(); extern undefined4 fn_00516cec(); extern int fn_0051811c();
extern undefined4 fn_006db908(); extern undefined4 fn_006dba50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf4cc; extern undefined4 DAT_008c0680; extern undefined4 DAT_008c06a0;
