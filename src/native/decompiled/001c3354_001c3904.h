#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00144df4(); extern undefined4 fn_0016947c(); extern undefined4 fn_00174828(); extern undefined4 fn_00174834(); extern undefined4 fn_00174858();
extern undefined8 fn_0017821c(); extern undefined4 fn_00182988(); extern int fn_0026a548(); extern int fn_0026a574(); extern int fn_0028a588(); extern undefined4 fn_0028a66c();
extern undefined4 fn_0028acf4(); extern int * fn_0028b0a0(); extern int * fn_0028b348(); extern bool fn_0028b3a0(); extern int fn_0028b7ac(); extern undefined4 fn_002d30dc();
extern undefined4 * fn_00301f50(); extern undefined4 fn_00339254(); extern bool fn_0033928c(); extern undefined4 fn_005a6f2c(); extern undefined4 fn_006b8538();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_002d3f0c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d6f20; extern undefined4 DAT_007d6f24; extern undefined4 DAT_007d6f28; extern undefined4 DAT_007d6f2c;
extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804;
