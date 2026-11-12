#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00189e18(); extern undefined4 fn_00193374(); extern undefined4 fn_00193380(); extern undefined4 fn_001942ec(); extern undefined4 fn_0019f00c(); extern int fn_001a379c();
extern int fn_001a3e8c(); extern undefined4 fn_001a3ec4(); extern uint fn_003035b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_008ef5bc; extern undefined4 uRam008f08da;
