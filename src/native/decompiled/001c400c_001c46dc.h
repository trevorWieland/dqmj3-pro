#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_0015e294(); extern undefined4 fn_0015e304(); extern undefined4 fn_0017484c(); extern undefined4 fn_00174858(); extern undefined4 fn_0017fde4();
extern undefined4 fn_00182e2c(); extern int fn_00191238(); extern undefined4 fn_00194408(); extern void fn_001c4304(); extern undefined4 fn_0026d2e8(); extern int * fn_0026e378();
extern int * fn_0026e410(); extern undefined4 fn_00303afc(); extern int fn_0044c9fc(); extern int fn_0044cc48(); extern int fn_0044fb14(); extern undefined4 fn_00525abc();
extern int fn_005ea4e8(); extern undefined4 fn_00655acc(); extern undefined4 fn_006f72e0(); extern undefined4 fn_006f7a5c(); extern undefined4 fn_0074a1f8();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0074a134(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001c41b8; extern undefined4 DAT_0074a280; extern undefined4 DAT_007ce550; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_0081b7dc; extern undefined4 DAT_0082023c; extern undefined4 DAT_008911e0; extern undefined4 DAT_008911e4;
extern undefined4 DAT_008977e0; extern undefined4 DAT_008977e4; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c;
extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
