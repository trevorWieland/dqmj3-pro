#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_0018a618();
extern undefined4 fn_00190d50(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0022ccb4(); extern undefined4 fn_002317d8(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c();
extern undefined4 * fn_003bc118(); extern undefined4 fn_003d4398(); extern undefined4 fn_003d454c(); extern undefined4 fn_00601670(); extern undefined4 fn_00604740(); extern undefined4 fn_006899f4();
extern undefined4 fn_0068ab44();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0059973c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00845a38; extern undefined4 DAT_00845b68; extern undefined4 DAT_00890afc;
extern undefined4 DAT_00890b08; extern undefined4 DAT_00890b20; extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4;
