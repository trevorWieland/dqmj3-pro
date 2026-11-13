#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_0011c134(); extern uint fn_00147e6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00660e00; extern undefined4 DAT_008994b0; extern undefined4 DAT_008994b4; extern undefined4 DAT_008994b8;
extern undefined4 DAT_008994c4; extern undefined4 DAT_008994c8; extern undefined4 UNK_007d5e7a;
