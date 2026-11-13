#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00116114(); extern undefined2 fn_00176970(); extern undefined4 fn_0017d8f8(); extern undefined4 * fn_0018a6d4(); extern undefined4 fn_00194ee4();
extern undefined4 fn_0019fb94(); extern undefined4 * fn_0054d158(); extern undefined4 fn_00553bf8(); extern undefined4 fn_005548fc(); extern undefined4 fn_005549f0(); extern int fn_00555604();
extern bool fn_00557f44(); extern bool fn_006e1e4c(); extern bool fn_006e1e60();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00857ed8; extern undefined4 PTR_FUN_00857d6c;
