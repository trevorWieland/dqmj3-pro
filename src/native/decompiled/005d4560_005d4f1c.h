#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00177c88(); extern undefined8 fn_0017821c(); extern undefined4 fn_001f74d8(); extern undefined4 fn_002c3d68();
extern undefined4 fn_002c3de4(); extern undefined4 fn_002c3e78(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0031b78c(); extern undefined4 fn_00397618();
extern int fn_00397a0c(); extern undefined4 fn_003ca138(); extern undefined4 fn_0043f144(); extern int * fn_005d4e34(); extern undefined4 fn_00689930(); extern undefined4 fn_006ba250();
extern int fn_006ba274(); extern undefined4 fn_006ba284(); extern int * fn_007854f8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0084c9a0; extern undefined4 DAT_0089715c; extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4; extern undefined4 PTR_LAB_0084c9b8;
