#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_001028d4(); extern undefined4 fn_001088e0(); extern undefined4 fn_0011050c(); extern undefined4 fn_00145b00(); extern undefined4 fn_001480d0();
extern undefined4 fn_001481c8(); extern undefined4 fn_001482f4(); extern bool fn_00154a6c(); extern undefined4 fn_00159f34(); extern undefined4 fn_0016a43c(); extern uint * fn_001782b8();
extern undefined4 fn_001c93c8(); extern undefined4 fn_00259a80(); extern undefined4 fn_00259b30(); extern undefined4 fn_0025a550(); extern undefined4 fn_002feef8(); extern undefined4 fn_003b6608();
extern undefined4 fn_003b6738(); extern undefined4 fn_003b675c(); extern undefined4 fn_0058c9a0(); extern undefined4 fn_0058c9a8(); extern undefined * fn_00607c4c(); extern undefined4 fn_00683224();
extern undefined4 fn_00699014(); extern undefined4 fn_006b64b0(); extern bool fn_006c76e4(); extern undefined4 fn_006f7a0c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0025a340; extern undefined4 DAT_0025a344; extern undefined4 DAT_0025a348; extern undefined4 DAT_0025a34c;
extern undefined4 DAT_0025a420; extern undefined4 DAT_0025a428; extern undefined4 DAT_0025a4d8; extern undefined4 DAT_0025a4dc;
extern undefined4 DAT_0025a4e0; extern undefined4 DAT_007c31f4; extern undefined4 DAT_007c3234; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_0081d800; extern undefined4 DAT_00859020; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804;
