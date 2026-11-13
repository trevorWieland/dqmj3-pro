#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern int fn_0016ba34(); extern undefined4 fn_0022f584(); extern undefined4 * fn_0025dea8(); extern undefined4 fn_00321118(); extern void fn_003871cc();
extern undefined4 fn_003979d0(); extern undefined4 fn_00689bd0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c747c; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082a330; extern undefined4 DAT_00895aa8;
extern undefined4 DAT_00897800; extern undefined4 DAT_00898230; extern undefined4 PTR_s_HelpMessage0001_00895ac0;
