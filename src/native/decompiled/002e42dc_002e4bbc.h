#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 fn_00145b00(); extern undefined4 fn_0017d96c();
extern undefined4 fn_002454a4(); extern undefined4 fn_0025e31c(); extern undefined4 fn_0025e7cc(); extern undefined4 * fn_0025e920(); extern undefined4 fn_002c3d68(); extern undefined4 * fn_002e511c();
extern undefined4 fn_002feef8(); extern undefined4 fn_0037cf4c(); extern undefined4 * fn_0037cf68(); extern undefined4 fn_00688ff8(); extern undefined4 fn_00689878(); extern undefined4 fn_006899f4();
extern undefined4 fn_00689d04(); extern undefined4 fn_0068ab44(); extern undefined4 fn_0069e748(); extern undefined4 fn_0069e7cc(); extern undefined4 fn_0069e808(); extern int * fn_0079ede4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001ad800(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002e4738; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008209c8; extern undefined4 DAT_00820a0c;
extern undefined4 DAT_0089a928; extern undefined4 PTR_LAB_0010414a_1_00820994;
