#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001a46f4(); extern undefined4 fn_001cab7c(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_0022f2b0(); extern undefined4 fn_0022f750(); extern undefined4 fn_0022f818();
extern undefined4 fn_00231ca0(); extern int fn_002999a0(); extern undefined4 fn_002b415c(); extern undefined4 fn_002c37e0(); extern undefined4 fn_002c3e78(); extern undefined4 fn_0031b78c();
extern undefined4 fn_0031c02c(); extern undefined4 fn_0031c7bc(); extern undefined4 fn_0031ca48(); extern undefined4 fn_00321118(); extern undefined1 * fn_0036e68c(); extern undefined4 fn_0036e8fc();
extern int * fn_0036e9e4(); extern int * fn_0036eaa8(); extern undefined4 fn_0039bcf8(); extern undefined4 fn_0039bdb0(); extern undefined4 fn_0039bf58(); extern undefined4 fn_0039c39c();
extern undefined4 fn_0039c438(); extern undefined4 fn_003e5550(); extern undefined4 fn_003e5b40(); extern undefined4 fn_003fe7ac(); extern undefined4 fn_00689210(); extern undefined4 fn_00689bd0();
extern undefined4 fn_00689efc(); extern uint fn_006aed20(); extern int fn_006ba274(); extern undefined4 fn_006ba284(); extern undefined4 fn_006bfe90();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_003c14e8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00894e24; extern undefined4 DAT_00894e28; extern undefined4 DAT_00894fd4; extern undefined4 DAT_008959c4;
extern undefined4 DAT_008959cc;
