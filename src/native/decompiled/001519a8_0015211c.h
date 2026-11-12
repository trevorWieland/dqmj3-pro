#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00152464(); extern undefined * fn_001524d0(); extern uint fn_001562d0(); extern undefined4 fn_00156818(); extern undefined4 fn_0016184c();
extern undefined4 fn_00161898(); extern undefined4 fn_001618cc(); extern bool fn_00161b80(); extern undefined4 fn_00161bac(); extern undefined4 fn_00161be0(); extern undefined4 fn_00161c88();
extern int fn_00161d0c(); extern undefined4 fn_001625e4(); extern int fn_00162750(); extern undefined4 fn_00168948(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4();
extern undefined * fn_00172e2c(); extern undefined * fn_00172fc4(); extern int * fn_0017d948(); extern undefined4 fn_0017de8c(); extern undefined4 * fn_0017e758();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00172f3c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008582c8; extern undefined4 DAT_008583e8;
