#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern int * fn_001588d4(); extern int fn_00177c88();
extern undefined4 fn_001f74d8(); extern undefined4 fn_0022f750(); extern longlong fn_00300f74(); extern undefined4 fn_0031f3f4(); extern undefined4 fn_0031f8fc(); extern undefined4 fn_00397618();
extern int fn_00397774();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00894d28; extern undefined4 DAT_008965b0; extern undefined4 DAT_008965b4; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4;
