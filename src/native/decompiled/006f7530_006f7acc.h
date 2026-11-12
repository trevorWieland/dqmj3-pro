#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00129d4c(); extern undefined4 fn_00145b00(); extern undefined4 fn_00154ac8(); extern undefined4 fn_00178f9c(); extern undefined4 fn_00223f40(); extern undefined4 fn_002426a8();
extern undefined4 fn_002ea880(); extern int fn_0036a4c0(); extern undefined4 fn_006af668(); extern bool fn_006af880(); extern undefined4 fn_006afa24();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006f7564; extern undefined4 DAT_006f766c; extern undefined4 DAT_007bfc54; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00860cb4; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804; extern undefined4 DAT_00897808;
extern undefined4 DAT_0089780c; extern undefined4 DAT_00897848;
