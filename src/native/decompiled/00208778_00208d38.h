#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int fn_00101a1c(); extern undefined4 fn_00164a34(); extern undefined4 fn_00174834(); extern undefined4 fn_002062d8();
extern undefined4 fn_00209634(); extern undefined4 fn_0023d3e8(); extern undefined4 fn_002d6388(); extern undefined4 fn_002d6440(); extern undefined4 fn_002d658c(); extern undefined4 fn_002d6598();
extern undefined4 fn_002ff628(); extern undefined1 fn_00660d20(); extern undefined4 fn_00796494(); extern uint * fn_00796694();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad798(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4; extern undefined4 DAT_008c7607; extern undefined4 DAT_008c760c; extern undefined4 DAT_008c763b;
