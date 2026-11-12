#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 fn_0014f1bc(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_002ff628(); extern undefined4 fn_00454da8();
extern undefined4 fn_0048cbf8(); extern int * fn_004b8dec(); extern undefined4 fn_0074a4c8(); extern undefined4 fn_0074a528(); extern undefined4 fn_0074a5fc(); extern undefined4 fn_00792b54();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_007552b4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0049b6e4; extern undefined4 DAT_008540d0; extern undefined4 DAT_008550b4;
