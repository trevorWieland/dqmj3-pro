#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00117604(); extern undefined4 fn_00117984(); extern undefined4 * fn_00118290(); extern undefined4 fn_00145b00(); extern undefined4 fn_00183654();
extern undefined4 fn_002feef8(); extern longlong fn_00300f74(); extern undefined4 fn_005e1b70(); extern undefined4 fn_005e2a6c(); extern undefined4 fn_005e5770(); extern undefined4 fn_005e5e5c();
extern undefined4 fn_005e5f50(); extern undefined4 fn_005e6088(); extern undefined4 fn_005e783c(); extern undefined4 fn_005e7d48(); extern undefined4 fn_005e8b70(); extern undefined4 fn_005e8b80();
extern undefined4 fn_005e8e30(); extern undefined4 fn_005e8e44(); extern undefined4 fn_005e8e60(); extern void fn_005e9a40(); extern undefined4 fn_005ea270(); extern undefined4 fn_005ea2ac();
extern undefined4 fn_005ea348(); extern undefined4 fn_005ea654(); extern undefined4 fn_005ec4fc(); extern int * fn_005eec4c(); extern undefined4 fn_005eece8(); extern undefined4 fn_005efee0();
extern int fn_006eb278(); extern undefined4 fn_006eb610(); extern undefined4 fn_006eb61c(); extern int fn_006eba9c(); extern undefined1 * fn_006ec068(); extern undefined4 fn_006ec11c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_005e98b8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00858d14; extern undefined4 DAT_00858d28;
