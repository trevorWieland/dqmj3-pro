#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_0018a618(); extern undefined4 fn_0031b78c(); extern undefined4 fn_00327a7c(); extern undefined4 fn_0058ce98(); extern undefined4 fn_005d27ac();
extern undefined4 fn_00689828(); extern undefined4 fn_0068ab44();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0058d5f0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0058cf84;
