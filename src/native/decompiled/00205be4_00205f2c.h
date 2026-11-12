#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern uint fn_00101a50(); extern undefined4 fn_001028d4(); extern undefined4 fn_0011c1b4(); extern undefined4 fn_0011d1bc(); extern undefined4 fn_0011e6e4();
extern undefined4 fn_00128ee0(); extern undefined4 * fn_00128f40(); extern undefined4 fn_00129014(); extern undefined4 fn_0012a26c(); extern undefined4 fn_0012d73c(); extern undefined1 fn_00145aac();
extern undefined4 fn_00145ac0(); extern undefined4 fn_00145b00(); extern undefined4 fn_00166824(); extern undefined4 fn_001ce928(); extern undefined4 fn_001cf08c(); extern undefined4 fn_00207c98();
extern undefined4 fn_002083b4(); extern undefined4 fn_00238fec(); extern undefined4 fn_002feef8(); extern undefined4 fn_00303afc(); extern undefined4 fn_005f6644(); extern undefined4 fn_00692eac();
extern undefined4 fn_006a7b6c(); extern undefined4 fn_006a8cbc(); extern undefined4 fn_006adef0(); extern undefined4 fn_006ba918();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0020623c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00206200; extern undefined4 DAT_0020620c; extern undefined4 DAT_0020621c; extern undefined4 DAT_00206224;
extern undefined4 DAT_00206230; extern undefined4 DAT_0020623c; extern undefined4 DAT_002062cc; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_0081c3ec; extern undefined4 DAT_008977e4; extern undefined4 DAT_008c62f8; extern undefined4 DAT_008c62fc;
extern undefined4 DAT_008f9e20; extern undefined4 DAT_008f9e24; extern undefined4 DAT_008f9e28; extern undefined4 DAT_008f9e2c;
extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
