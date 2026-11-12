#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0019b390(); extern undefined4 fn_0019b728(); extern undefined4 fn_0019e2e8(); extern undefined4 fn_0019e8c4(); extern undefined4 fn_001a2b2c(); extern undefined4 fn_002fece8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00561590(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00850dac; extern undefined4 DAT_ffffffff;
