#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_001287d4(); extern undefined4 fn_0012d6a4(); extern undefined4 fn_00145b00(); extern int fn_0014e2f4(); extern undefined4 * fn_00158f6c();
extern undefined4 fn_0015e294(); extern undefined4 fn_0015e304(); extern undefined4 fn_00163890(); extern undefined4 fn_002feca8(); extern undefined4 fn_002feef8(); extern undefined4 * fn_00301f50();
extern undefined4 fn_00525bd0(); extern undefined4 fn_005260cc(); extern uint fn_005261a8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0074a124(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001b4004; extern undefined4 DAT_0074a1d0; extern undefined4 DAT_0074a27c; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_0081d0bc; extern undefined4 PTR_LAB_0081d0a4;
