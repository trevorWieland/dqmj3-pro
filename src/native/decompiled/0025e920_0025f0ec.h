#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_001c9ba0(); extern undefined4 fn_001c9dc0(); extern undefined4 fn_001c9f78(); extern undefined4 fn_001caa80(); extern undefined4 fn_002ff628();
extern longlong fn_00300f74(); extern undefined4 fn_00303afc(); extern int fn_00689c48(); extern undefined4 fn_0068af70(); extern undefined4 fn_0069e8c8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081dbdc; extern undefined4 DAT_0081dc08; extern undefined4 DAT_008c62ec; extern undefined4 DAT_008c62f0;
extern undefined4 DAT_008c62f4; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008c7663; extern undefined4 DAT_008f9e2c;
extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
