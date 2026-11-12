#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 * fn_0013d40c(); extern undefined4 * fn_0014f480(); extern undefined4 fn_0015ef58(); extern undefined8 fn_00169f1c();
extern undefined4 * fn_00170f54(); extern undefined4 fn_00454da8(); extern undefined4 fn_0045f7f0(); extern undefined4 fn_0046d70c(); extern undefined4 fn_0047f300(); extern int * fn_0048892c();
extern undefined4 fn_00488a7c(); extern undefined4 fn_0048cbf8(); extern undefined4 fn_00493490(); extern undefined4 * fn_004b54dc(); extern int fn_004b5540(); extern undefined4 fn_004b5f90();
extern undefined4 fn_004b6080(); extern undefined4 fn_004b72d8(); extern undefined4 fn_004b8d6c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0047f3b0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008528bc;
