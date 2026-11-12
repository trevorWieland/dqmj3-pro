#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined8 fn_0017821c(); extern undefined4 fn_00182988(); extern int fn_0026a548(); extern undefined4 fn_00359fdc(); extern undefined4 fn_0035a0cc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_002d3f0c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00359f20; extern undefined4 DAT_00359f84; extern undefined4 DAT_00826a7c; extern undefined4 DAT_00826a90;
extern undefined4 DAT_008977e4;
