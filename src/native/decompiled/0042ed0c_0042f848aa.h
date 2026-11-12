#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 * fn_00158f6c(); extern undefined4 fn_002ff628();
extern undefined8 fn_00301a9c(); extern undefined4 * fn_00301f50(); extern undefined4 fn_003492e4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0042f0bc; extern undefined4 DAT_0083bd88; extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4;
