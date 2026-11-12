#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_001694e4(); extern int fn_006d58dc(); extern uint fn_006d6700(); extern void fn_006d690c(); extern undefined2 fn_006d6aa8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf504; extern undefined4 DAT_e0a14827; extern undefined4 DAT_e10113fd;
