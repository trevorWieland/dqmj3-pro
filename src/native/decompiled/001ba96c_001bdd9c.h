#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101ce8(); extern undefined4 fn_00102388(); extern undefined4 fn_0010239a(); extern undefined4 fn_0014d6cc(); extern undefined8 fn_0017821c(); extern bool fn_00184c20();
extern undefined4 fn_00184c6c(); extern undefined4 fn_001851bc(); extern bool fn_00191f08(); extern undefined4 fn_001920f4(); extern undefined4 fn_00192114(); extern undefined4 fn_00192124();
extern int fn_001930b8(); extern int fn_001ad654(); extern undefined4 fn_001af244(); extern undefined4 fn_001b85a0(); extern undefined4 fn_001bc064(); extern undefined4 fn_001be608();
extern undefined4 fn_001bec64(); extern undefined4 fn_001bf270(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0044d6e4(); extern undefined4 fn_0044d750();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001bd498(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001c0bcc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007e1250; extern undefined4 DAT_008bf514; extern undefined4 DAT_008bf51c;
