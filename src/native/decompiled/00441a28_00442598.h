#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001638a0(); extern undefined4 fn_00215d9c(); extern undefined4 fn_0021718c(); extern undefined4 fn_0023ddec(); extern undefined4 fn_002fdeac(); extern undefined4 fn_002fdf94();
extern void fn_00441c8c(); extern undefined4 fn_00683320(); extern uint fn_006aa2dc(); extern bool fn_006aff38(); extern int fn_006b0d10(); extern undefined4 fn_006b1300();
extern undefined4 fn_006bb544(); extern undefined4 fn_006bd414(); extern undefined4 fn_006f7508(); extern int fn_006f7770(); extern undefined4 fn_006f7a84(); extern undefined4 fn_006f9cac();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004420e4; extern undefined4 DAT_0083dd14; extern undefined4 DAT_0083dd78; extern undefined4 DAT_0083dda0;
extern undefined4 DAT_008977e0;
