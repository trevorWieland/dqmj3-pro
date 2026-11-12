#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int * fn_001008cc(); extern int fn_00100fc6(); extern int fn_0010167c(); extern int fn_00101a3e(); extern int fn_0010217c(); extern undefined4 fn_002ff600();
extern undefined4 fn_002ff628(); extern int * fn_002ff688(); extern undefined8 fn_00301a9c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00102a50_1(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_002fef40_1(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002ff0a0; extern undefined4 DAT_002ff0a4; extern undefined4 DAT_008c3dac; extern undefined4 DAT_008c3db0;
extern undefined4 DAT_008c3db4; extern undefined4 DAT_008c7615; extern undefined4 DAT_008f9cf8;
