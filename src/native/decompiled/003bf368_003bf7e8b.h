#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_0018a618(); extern undefined4 fn_00190d50(); extern undefined4 fn_0022cdf0(); extern undefined4 fn_0022cf0c();
extern undefined4 fn_002ff628(); extern undefined4 fn_0039b5d8(); extern undefined1 * fn_003bed3c(); extern void fn_003bf608(); extern undefined4 fn_006890bc(); extern undefined4 * fn_00689144();
extern undefined4 fn_006b6244();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00897804; extern undefined4 DAT_008c7667; extern undefined4 PTR_FUN_0082f898;
