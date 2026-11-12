#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_0011c1b4(); extern undefined4 fn_001287dc(); extern undefined4 fn_0012d73c(); extern undefined4 fn_00145b00(); extern undefined4 * fn_00205414();
extern undefined4 fn_0020adac(); extern uint fn_005f5c50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008228d8; extern undefined4 DAT_008923b4; extern undefined4 DAT_008923b8;
