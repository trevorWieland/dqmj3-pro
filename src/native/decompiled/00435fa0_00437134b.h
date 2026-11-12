#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern char * fn_001f84ac(); extern undefined4 fn_0022ccb4(); extern undefined4 fn_0022cdb4(); extern undefined4 fn_0022cdf0(); extern undefined4 fn_0022cecc();
extern undefined4 fn_002b427c(); extern undefined4 fn_002ff628(); extern undefined1 fn_003492bc(); extern undefined4 fn_003bbdc0(); extern undefined4 fn_003bbde0(); extern undefined4 * fn_003bc118();
extern undefined4 fn_004358cc(); extern undefined4 fn_00435cf4(); extern undefined4 fn_00435fa0();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004358b4(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004365c8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0083c244; extern undefined4 DAT_008c7651;
