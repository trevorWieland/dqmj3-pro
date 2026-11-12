#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern void fn_001c6d80(); extern undefined4 fn_001e6a50(); extern undefined4 fn_00278c50(); extern undefined4 fn_00289788(); extern undefined4 fn_002898fc();
extern undefined4 fn_002899cc(); extern undefined4 fn_002feef8(); extern undefined4 * fn_002ff0c8(); extern undefined8 fn_00301a9c(); extern undefined4 fn_003b6608(); extern undefined4 fn_003b6738();
extern undefined4 fn_003b675c(); extern undefined4 fn_00696764(); extern undefined4 fn_00698fb8(); extern undefined4 fn_0069c2c8(); extern undefined4 fn_006f7a84();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001c6f6c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081ba58; extern undefined4 DAT_0081ba94; extern undefined4 DAT_00858fe0;
extern undefined4 DAT_008977e0; extern undefined4 DAT_008f9cf8;
