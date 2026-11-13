#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00190d50(); extern int fn_002298d8(); extern undefined4 fn_0022cd58(); extern int * fn_00242324(); extern undefined4 fn_0034d1e8();
extern undefined4 fn_00385b60(); extern undefined4 fn_00385b88(); extern undefined4 fn_003e5aa8(); extern undefined4 fn_003fed04(); extern undefined4 fn_00445f00(); extern int fn_00445f0c();
extern int * fn_0068897c(); extern undefined4 fn_006ba284();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0034c784(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00825a94; extern undefined4 DAT_00825bb8; extern undefined4 DAT_00860454;
extern undefined4 DAT_00861108; extern undefined4 DAT_00861110; extern undefined4 DAT_008951e8; extern undefined4 DAT_00897804;
