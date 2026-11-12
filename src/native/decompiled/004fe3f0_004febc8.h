#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00158f40(); extern undefined4 fn_004ed068(); extern undefined4 fn_004ed13c(); extern uint fn_004edb98(); extern undefined4 fn_004fbcec(); extern uint fn_004fc71c();
extern undefined4 fn_004fc840(); extern uint fn_004fca40(); extern undefined4 fn_004fcef0(); extern undefined4 fn_004fd258(); extern uint fn_004fd5d8(); extern uint fn_004fdf90();
extern undefined4 fn_005044fc(); extern undefined4 fn_00505974();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf49c; extern undefined4 DAT_008bf4e0;
