#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00124ffc(); extern void fn_00143b98(); extern void fn_00143d68(); extern undefined4 fn_0014e774(); extern int fn_0015289c(); extern int fn_00153ff0();
extern undefined4 fn_00154184(); extern bool fn_001541ec(); extern undefined4 fn_0015427c(); extern undefined4 fn_00157df4(); extern undefined4 fn_00157f58(); extern undefined4 fn_00157fb0();
extern int fn_00157ff4(); extern undefined4 fn_001580cc(); extern undefined4 fn_00158128(); extern undefined4 fn_00158268(); extern undefined4 fn_00166e14(); extern undefined4 fn_00173cb8();
extern undefined4 fn_00173d14();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00152888(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089a508;
