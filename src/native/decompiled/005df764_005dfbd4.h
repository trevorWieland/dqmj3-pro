#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_00146594(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628();
extern int fn_0044fd18(); extern int fn_004500e4(); extern undefined4 * fn_00452528(); extern undefined4 * fn_004525ec(); extern undefined2 fn_006ec9f8(); extern undefined4 fn_00764478();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ce528; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00859470; extern undefined4 DAT_00898140;
extern undefined4 DAT_00898144; extern undefined4 DAT_008c763a; extern undefined4 DAT_008f9cf8; extern undefined4 DAT_008f9d04;
