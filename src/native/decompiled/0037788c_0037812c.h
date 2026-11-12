#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 fn_001028d4(); extern undefined4 fn_0010fa20(); extern undefined4 fn_00117984(); extern undefined4 fn_00145b00();
extern undefined4 fn_0016a43c(); extern undefined4 fn_0017419c(); extern undefined4 fn_00174398(); extern undefined4 fn_00174834(); extern undefined4 fn_00182994(); extern uint fn_00190fe0();
extern undefined4 fn_00207650(); extern undefined4 fn_0026b74c(); extern undefined4 fn_0026bb64(); extern int fn_002febd8(); extern undefined4 fn_002feef8(); extern undefined4 fn_004218b4();
extern undefined4 fn_004221b0(); extern undefined4 fn_0042238c(); extern int fn_005e19a4(); extern undefined4 fn_005e42a8(); extern undefined4 fn_005e529c(); extern int fn_005eff2c();
extern undefined4 fn_005eff40(); extern undefined4 * fn_0068ab5c(); extern undefined4 * fn_0068ad5c(); extern int fn_006eb278(); extern undefined4 fn_006eb304();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004223b8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003782ec; extern undefined4 DAT_003782fc; extern undefined4 DAT_004223f0; extern undefined4 DAT_006c3da0;
extern undefined4 DAT_006c3dac; extern undefined4 DAT_006c3dc4; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008289ec;
extern undefined4 DAT_008347b4; extern undefined4 DAT_00890360; extern undefined4 DAT_008977e4;
