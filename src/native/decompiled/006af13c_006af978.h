#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern uint fn_00147e6c(); extern undefined4 fn_00154ac8(); extern uint fn_003035b0(); extern int fn_005fdd14();
extern int fn_00661308(); extern int fn_00661550(); extern int fn_00661560(); extern int fn_006615d4(); extern undefined1 fn_00661714(); extern int * fn_006b8390();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
