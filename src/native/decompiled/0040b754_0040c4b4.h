#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001c7228(); extern undefined4 fn_001c72c0(); extern undefined4 fn_00214c4c(); extern undefined4 fn_00215b58(); extern undefined4 fn_00215d9c(); extern undefined4 fn_002171d4();
extern int fn_0023b858(); extern undefined4 fn_002fdea0(); extern undefined4 fn_002fdeac(); extern undefined4 fn_002fdebc(); extern undefined4 fn_002fdf94(); extern undefined4 fn_00303afc();
extern undefined4 * fn_003632b0(); extern void fn_0040c268(); extern bool fn_006aff38(); extern int fn_006b0d10(); extern undefined4 fn_006bb544(); extern undefined4 fn_006f7388();
extern undefined4 fn_006f7508(); extern undefined4 fn_006f7a84(); extern undefined4 fn_006f9cac(); extern undefined4 fn_006f9fb0(); extern undefined4 fn_006faec0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00837e30; extern undefined4 DAT_00837fb0; extern undefined4 DAT_008977e0; extern undefined4 DAT_008c62fc;
extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
