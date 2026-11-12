#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 * fn_00301f50();
extern int fn_00445f18(); extern undefined4 * fn_0058cc04();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00445d4c; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0083e628; extern undefined4 DAT_008c7611;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
