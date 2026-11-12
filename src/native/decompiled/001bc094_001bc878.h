#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001580cc(); extern undefined8 fn_0017821c(); extern bool fn_00184c20(); extern int fn_0018501c(); extern undefined4 fn_001851bc(); extern bool fn_00191f08();
extern undefined4 fn_001920f4(); extern undefined4 fn_00192114(); extern undefined4 fn_00192124(); extern undefined4 fn_0019d684(); extern undefined4 fn_001af208(); extern undefined4 fn_001aff7c();
extern undefined4 fn_001affc4(); extern undefined4 fn_001bfa88(); extern undefined4 fn_0024d7ec(); extern undefined8 fn_00301a9c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001c0a04(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf518; extern undefined4 DAT_008bf51c; extern undefined4 DAT_008bf520;
