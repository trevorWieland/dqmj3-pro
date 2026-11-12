#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_001010c8(); extern int fn_00129d4c(); extern undefined4 fn_001db0c0(); extern undefined4 fn_002113c8();
extern undefined4 fn_002fbf50(); extern int fn_002febd8(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_00699b18(); extern undefined4 fn_00763c50();
extern undefined4 fn_0078d3dc(); extern undefined4 fn_0078d69c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0065c314(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003d7344; extern undefined4 DAT_003d7354; extern undefined4 DAT_003d7660; extern undefined4 DAT_008977e0;
extern undefined4 DAT_008c75fb; extern undefined4 DAT_008c7615; extern undefined4 DAT_008c7616; extern undefined4 DAT_008f9cf8;
extern undefined4 DAT_008f9d04;
