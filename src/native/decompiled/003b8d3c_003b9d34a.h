#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8(); extern undefined4 fn_001482f4(); extern undefined4 * fn_00168a24(); extern undefined4 fn_0016a43c(); extern undefined4 fn_00176d68();
extern undefined4 fn_00178f9c(); extern undefined4 fn_0022f750(); extern undefined4 fn_002b1810(); extern undefined4 fn_002c3de4(); extern undefined4 fn_003b98b0(); extern undefined4 fn_0040f564();
extern undefined4 fn_0043cd80(); extern undefined4 fn_005456f4(); extern bool fn_00580fac(); extern undefined4 fn_00689210(); extern int * fn_00689220(); extern undefined4 fn_006896fc();
extern undefined4 fn_00689930(); extern undefined4 fn_0068993c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_003b8f24(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_003b9a10(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003b9a08; extern undefined4 DAT_00890a94; extern undefined4 DAT_00890a98; extern undefined4 DAT_00890a9c;
extern undefined4 DAT_00890aa0; extern undefined4 DAT_00893d28; extern undefined4 DAT_008963ac; extern undefined4 DAT_008c7ffc;
extern undefined4 DAT_008c8008; extern undefined4 DAT_008c800c; extern undefined4 DAT_008c8010;
