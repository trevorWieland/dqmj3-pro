#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001006de(); extern undefined4 fn_001008c4(); extern int fn_001659c0(); extern undefined4 * fn_00168a24(); extern undefined4 fn_00174828(); extern undefined4 fn_0017484c();
extern int fn_00177c88(); extern undefined4 fn_001794fc(); extern undefined4 fn_00179990(); extern undefined4 fn_00182994(); extern undefined4 fn_00182e2c(); extern int fn_00192cb4();
extern undefined4 fn_001a1dc8(); extern undefined4 fn_002ff628();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00690068(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00188948; extern undefined4 DAT_006f006e; extern undefined4 DAT_00892844; extern undefined4 DAT_008977e4;
extern undefined4 DAT_00897800; extern undefined4 DAT_00897804; extern undefined4 DAT_008c75f8; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4; extern undefined4 DAT_ffffffff;
