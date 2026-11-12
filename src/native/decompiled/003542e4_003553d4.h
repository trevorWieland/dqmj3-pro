#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00174828(); extern bool fn_00313870(); extern undefined4 fn_0035491c(); extern undefined4 fn_003553e0(); extern undefined4 fn_003555a0();
extern undefined4 fn_003569f0(); extern undefined4 fn_00689828(); extern undefined4 fn_0068ab44(); extern undefined4 fn_006a7b78(); extern int fn_006a833c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0035490c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4;
