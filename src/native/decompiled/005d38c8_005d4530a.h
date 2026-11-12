#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined8 fn_0017821c();
extern undefined4 fn_0025dbc4(); extern undefined4 fn_00290734(); extern undefined4 fn_002e8c7c(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0036e354();
extern void fn_005d3a6c(); extern void fn_005d3db8(); extern undefined4 fn_006896fc(); extern undefined4 fn_006b64f8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c71f4; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0084c748; extern undefined4 DAT_00894d28;
extern undefined4 DAT_00894ea4; extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
