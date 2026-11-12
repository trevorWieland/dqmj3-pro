#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_001f74d8(); extern undefined4 fn_0022f584();
extern undefined4 fn_0022f750(); extern undefined4 fn_002c29a0(); extern undefined4 fn_002c330c(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0068974c();
extern undefined4 fn_00689930(); extern int fn_006e8248();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004014b4; extern undefined4 DAT_004014d0; extern undefined4 DAT_008968cc; extern undefined4 DAT_008968d0;
extern undefined4 DAT_008968e0; extern undefined4 DAT_00896a84; extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4;
