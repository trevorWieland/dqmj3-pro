#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00159f34(); extern undefined2 fn_00176970(); extern undefined4 fn_001854ac(); extern undefined4 fn_0021b654();
extern void fn_0021e3f4(); extern undefined4 fn_002feef8(); extern uint fn_003035b0(); extern int fn_006afe90(); extern int fn_006f7b58(); extern int fn_006f7b9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0021dd98; extern undefined4 DAT_00891768; extern undefined4 DAT_008977e0; extern undefined4 DAT_ffffffff;
