#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00110aa8(); extern undefined1 fn_00145aac(); extern undefined4 fn_00145b00(); extern undefined4 fn_00148b94(); extern undefined4 fn_00163988();
extern undefined4 fn_001c9360(); extern undefined4 fn_002e2130(); extern undefined4 fn_002e25f4(); extern undefined4 fn_002e2658(); extern undefined4 * fn_002e2788(); extern undefined4 fn_002feef8();
extern undefined4 fn_0031a468(); extern undefined4 * fn_0031a690(); extern undefined4 * fn_003db900(); extern undefined4 fn_0069c2c8(); extern int fn_006bc184(); extern byte fn_006bc18c();
extern undefined4 fn_006f7a48(); extern undefined4 fn_006f7ad0();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001f642c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081c1a4; extern undefined4 DAT_0081c1b4; extern undefined4 DAT_00858ff0;
extern undefined4 DAT_008977e0; extern undefined4 DAT_00897808; extern undefined4 DAT_0089780c; extern undefined4 PTR_FUN_0081c168;
