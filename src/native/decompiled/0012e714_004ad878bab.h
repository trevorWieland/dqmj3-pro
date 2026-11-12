#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00158f6c(); extern undefined4 fn_002273f0(); extern undefined4 fn_002279b4(); extern undefined4 fn_00522220(); extern uint fn_005222ac(); extern undefined4 fn_00522550();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0086a0bc; extern unsigned char *DAT_00897894; extern undefined4 DAT_008978a0; extern undefined4 DAT_008cddb4;
