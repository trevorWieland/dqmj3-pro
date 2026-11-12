#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern uint * fn_00120ec8(); extern undefined4 fn_00174828(); extern int fn_00176dc0(); extern int fn_00176e70(); extern undefined4 fn_00182988();
extern int fn_0026a548(); extern void fn_0026a990(); extern undefined1 * fn_0026abe0(); extern int * fn_0028b0a0(); extern int * fn_0028b348(); extern undefined4 fn_002a1aa8();
extern undefined4 fn_002d3124(); extern undefined4 fn_002feef8(); extern undefined4 * fn_00301f50(); extern undefined4 fn_0042e8d0(); extern undefined4 fn_0042e9bc(); extern undefined4 fn_0042e9d4();
extern undefined4 fn_0042ec28(); extern undefined4 fn_0042ec74(); extern undefined1 fn_00661714(); extern undefined4 fn_006f2fa8(); extern undefined4 fn_006f3bdc(); extern undefined4 fn_006f3f7c();
extern undefined4 fn_006f4044(); extern int fn_006f4520();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_002d3f0c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081dfd0; extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804;
