#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 fn_00145b00(); extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8();
extern undefined4 fn_001482f4(); extern undefined4 fn_00159f34(); extern undefined4 fn_0016a43c(); extern undefined8 fn_0017821c(); extern undefined4 fn_00178f9c(); extern undefined4 fn_0017d96c();
extern undefined4 fn_001853ec(); extern undefined4 fn_001854ac(); extern undefined4 * fn_00301f50(); extern undefined4 fn_0039536c(); extern undefined4 fn_005b4f54(); extern undefined4 * fn_006065ec();
extern int * fn_00689220(); extern undefined4 * fn_0068ab5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006070c0; extern undefined4 DAT_006070c8; extern undefined4 DAT_006070d0; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_0084f56c; extern undefined4 DAT_00865e98; extern undefined4 DAT_0086da7c; extern undefined4 DAT_00898ec4;
extern undefined4 DAT_00898ec8; extern undefined4 DAT_00898ecc;
