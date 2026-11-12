#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_001010c8(); extern undefined4 fn_001218d4(); extern undefined4 fn_00122c48(); extern undefined4 fn_0012f254(); extern undefined4 fn_0013a624();
extern undefined4 fn_0013ae4c(); extern undefined4 fn_0013af30(); extern undefined4 fn_0013ef80(); extern undefined4 fn_001482f4(); extern undefined4 fn_00151954(); extern undefined4 fn_00159f34();
extern undefined4 fn_0016a43c(); extern undefined8 fn_0017821c(); extern undefined4 fn_002feef8(); extern undefined8 fn_00301a9c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00147d74(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c44f4; extern undefined4 DAT_00820984; extern undefined4 DAT_0088fcb8; extern undefined4 DAT_008977d4;
extern undefined4 DAT_00897800; extern undefined4 DAT_00897804; extern undefined4 DAT_00898780;
