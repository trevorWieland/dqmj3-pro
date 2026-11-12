#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00113c58(); extern undefined4 fn_00124be8(); extern undefined4 fn_0014f510(); extern undefined4 fn_00255cd0(); extern int fn_0026cda4();
extern int fn_0026cdd0(); extern undefined4 fn_0026cdec(); extern undefined4 * fn_0036c968(); extern undefined4 fn_0037cac0(); extern undefined4 fn_0037cad0(); extern undefined4 fn_0037cae0();
extern undefined4 fn_0037cb0c(); extern undefined4 fn_0037cb1c(); extern undefined4 fn_0037cb40(); extern undefined4 fn_0037cb50(); extern undefined4 fn_0037cb60(); extern undefined4 fn_0037cbbc();
extern undefined4 fn_0037cbe0(); extern undefined4 fn_0037cbf0();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0020c1dc(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00256038(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0084ec68; extern undefined4 DAT_008b64f8;
