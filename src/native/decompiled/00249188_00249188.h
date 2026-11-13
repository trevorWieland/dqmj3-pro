#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001028d4(); extern undefined4 fn_00183718(); extern undefined4 fn_00248f44(); extern undefined4 fn_002ff628();
extern uint fn_003035b0(); extern undefined4 fn_0068c384(); extern int fn_006f6e30(); extern undefined4 fn_0079c770();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0000001f; extern undefined4 DAT_002494b0; extern undefined4 DAT_002494b8; extern undefined4 DAT_002494d8;
extern undefined4 DAT_008c766f; extern undefined4 DAT_008cd57c; extern undefined4 DAT_008cd580; extern undefined4 DAT_008cd588;
extern undefined4 DAT_008cd58c;
