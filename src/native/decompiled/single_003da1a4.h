#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined8 fn_0017821c(); extern undefined4 fn_00366dbc(); extern undefined4 fn_00368ce8(); extern undefined4 fn_00368d34();
extern int fn_003b3780(); extern undefined4 fn_003da994(); extern undefined4 fn_006f7508(); extern undefined4 fn_00763d5c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0065c330(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
