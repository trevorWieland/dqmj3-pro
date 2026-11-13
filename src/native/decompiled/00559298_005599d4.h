#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00126584(); extern undefined4 fn_001267cc(); extern undefined4 fn_001273b8(); extern int * fn_00140594(); extern undefined4 fn_001408ac(); extern uint fn_00140cb0();
extern int * fn_00140dd8(); extern undefined4 fn_0014580c(); extern undefined4 fn_0014594c(); extern undefined4 fn_00146594(); extern undefined4 fn_001522f0(); extern uint fn_00156328();
extern undefined4 fn_00156794(); extern undefined4 fn_0015cf8c(); extern int * fn_0017d948(); extern undefined4 fn_002feef8(); extern undefined8 fn_00301a9c(); extern undefined4 fn_00555970();
extern undefined4 fn_00558c50(); extern int fn_00559a28();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_005595cc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008581ec;
