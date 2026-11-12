#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_001150b0(); extern int fn_001152bc(); extern int fn_00115a44(); extern int fn_00115d78(); extern int fn_0011c134();
extern uint fn_00147e6c(); extern undefined4 fn_001638a0(); extern undefined4 fn_002ff628(); extern undefined4 fn_006896e0(); extern undefined4 fn_00689b38(); extern undefined4 fn_0069e8c8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00660a44; extern undefined4 DAT_007d5ea2; extern undefined4 DAT_00850c74; extern undefined4 DAT_00896d60;
extern undefined4 DAT_008994b0; extern undefined4 DAT_008994b4; extern undefined4 DAT_008994b8; extern undefined4 DAT_0089a54c;
extern undefined4 DAT_0089a558; extern undefined4 DAT_0089a55c; extern undefined4 DAT_008c7663;
