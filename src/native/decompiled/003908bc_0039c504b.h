#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001028d4(); extern undefined4 fn_00145b00(); extern int * fn_00147974(); extern int * fn_001588d4(); extern int fn_0016ba34();
extern undefined4 fn_0016ba84(); extern undefined4 fn_001f7510(); extern undefined4 fn_0022eefc(); extern undefined4 fn_0022f750(); extern int fn_0025f9d8(); extern undefined4 fn_00290ba4();
extern undefined4 fn_00321118(); extern undefined4 fn_00385b88(); extern undefined4 fn_00397618(); extern int fn_00397774(); extern undefined4 fn_00410384(); extern undefined1 fn_004103d8();
extern undefined1 fn_00410428(); extern undefined4 fn_00689bd0(); extern undefined4 fn_006ba284();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059e0e0(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003986e4; extern undefined4 DAT_00398700; extern undefined4 DAT_00398714; extern undefined4 DAT_00398734;
extern undefined4 DAT_003989c0; extern undefined4 DAT_003989cc; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008942dc;
extern undefined4 DAT_00897800; extern undefined4 PTR_FUN_0082c924;
