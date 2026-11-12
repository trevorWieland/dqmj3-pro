#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0010706c(); extern undefined4 fn_0011dda8(); extern undefined4 fn_00615ee4(); extern undefined4 fn_00693168(); extern undefined4 fn_00697d48(); extern undefined1 fn_006f6e40();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001b5788(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern unsigned char *DAT_00897808; extern unsigned char *DAT_0089780c;
