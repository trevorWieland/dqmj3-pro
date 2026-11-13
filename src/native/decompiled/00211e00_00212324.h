#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern uint fn_00147e6c(); extern undefined4 fn_002feef8(); extern uint fn_003035b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008912f0; extern undefined4 DAT_008912f4; extern undefined4 DAT_008912f8; extern undefined4 DAT_008912fc;
extern undefined4 DAT_00891300; extern undefined4 DAT_00891304; extern undefined4 DAT_00891308; extern undefined4 DAT_0089130c;
extern undefined4 DAT_00891310; extern undefined4 DAT_00891314;
