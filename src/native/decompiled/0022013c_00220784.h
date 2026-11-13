#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 fn_00143ac8(); extern int fn_0015fa88();
extern undefined4 fn_00178f9c(); extern undefined4 fn_0019501c(); extern undefined4 fn_0021c9f8(); extern undefined4 fn_0021e484(); extern undefined4 fn_0021e66c(); extern undefined4 * fn_00301f50();
extern uint fn_003035b0(); extern undefined4 fn_0069c2c8(); extern int fn_006afe90(); extern int fn_006b5298(); extern undefined4 fn_006e1ee8(); extern undefined4 fn_006e2630();
extern int * fn_0079edbc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad7c0(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0021b634(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00860ad4; extern undefined4 DAT_00860adc; extern undefined4 DAT_00860afc; extern undefined4 DAT_00860c8c;
extern undefined4 DAT_00860c94; extern undefined4 DAT_00860c9c; extern undefined4 DAT_00860ca4; extern undefined4 DAT_00860cac;
extern undefined4 DAT_00860d8c; extern undefined4 DAT_00891764; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804;
extern undefined4 DAT_008c8cb0; extern undefined4 PTR_FUN_0081c8b0;
