#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00124ffc(); extern undefined4 * fn_0014c5e4(); extern undefined4 fn_0014e774(); extern undefined4 fn_00192114(); extern undefined4 fn_0019e8c4();
extern undefined4 fn_001a3530(); extern int fn_001a72b0(); extern undefined4 fn_001a759c(); extern undefined4 fn_001a7908(); extern int fn_001a9704(); extern uint fn_001a9c90();
extern undefined4 fn_00666384();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001a36c0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081bd48; extern undefined4 DAT_0089a508;
