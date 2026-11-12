#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001287d4(); extern undefined4 fn_00145b00(); extern undefined4 * fn_00158f6c(); extern undefined4 fn_001be790(); extern undefined4 fn_001be988(); extern undefined4 fn_0022f584();
extern uint fn_00234d10(); extern ushort fn_00234d38(); extern undefined4 fn_0025e31c(); extern bool fn_00313870(); extern undefined4 fn_0038ce2c(); extern undefined4 fn_0038d5e8();
extern undefined4 * fn_003cf788(); extern undefined4 fn_003d0ae8(); extern undefined4 fn_003d0b80(); extern undefined4 fn_0068974c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d077a; extern undefined4 DAT_00812c8c;
