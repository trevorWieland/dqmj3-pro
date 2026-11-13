#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0013add0(); extern undefined4 fn_001a46f4(); extern undefined4 fn_001c6c38(); extern undefined4 fn_001c6d34();
extern undefined4 fn_00278ec8(); extern undefined4 fn_002dfa58(); extern undefined4 fn_002e0708(); extern undefined4 fn_002e9f54(); extern int fn_002ea524(); extern void fn_00364e7c();
extern int fn_003b1ab8(); extern int fn_003b2730(); extern undefined4 fn_006cdec0(); extern int fn_006f7a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_ffffffff;
