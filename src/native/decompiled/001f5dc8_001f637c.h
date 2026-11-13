#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 fn_0012d73c(); extern undefined4 fn_00145b00(); extern undefined4 fn_001484b4();
extern undefined4 fn_001638a0(); extern undefined4 fn_00178eec(); extern undefined4 * fn_001cf0d8(); extern undefined4 fn_001f4d24(); extern undefined4 * fn_0025a63c(); extern undefined4 fn_0028943c();
extern undefined4 fn_002dbe64(); extern undefined4 fn_002dbf44(); extern undefined4 fn_00303afc(); extern undefined4 fn_00319e58(); extern undefined4 fn_00692eac(); extern byte fn_006bc18c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001f1568(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001f642c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001c6d30; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081bd80; extern undefined4 DAT_008977e0;
extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
extern undefined4 PTR_FUN_0081c0e8;
