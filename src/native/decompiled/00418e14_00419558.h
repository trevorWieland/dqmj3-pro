#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_001638a0(); extern undefined4 fn_001f74d8(); extern int fn_002422fc();
extern undefined4 fn_002ff628(); extern undefined4 fn_0036baa0(); extern undefined4 fn_00396280(); extern void fn_004192bc(); extern undefined4 fn_0043c608(); extern undefined4 fn_0043ccd8();
extern undefined4 fn_006896fc(); extern undefined4 fn_00689930(); extern undefined4 fn_006899f4(); extern undefined4 fn_00689efc(); extern undefined4 fn_0068ab44(); extern int fn_006b4fb8();
extern undefined4 fn_00747f28(); extern bool fn_00747fd0(); extern undefined4 fn_0074824c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004191d0; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0083956c; extern undefined4 DAT_00893a0c;
extern undefined4 DAT_008963ac; extern undefined4 DAT_008965d0; extern undefined4 DAT_00897804; extern undefined4 DAT_00898214;
extern undefined4 DAT_008c7624;
