#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern longlong fn_004d5774(); extern undefined4 fn_0066eb80(); extern bool fn_00670598(); extern undefined4 fn_00673b84(); extern undefined4 fn_00673be8(); extern undefined4 fn_00673ce8();
extern bool fn_00673ff8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00898840; extern undefined4 DAT_00898844; extern undefined4 DAT_00898848; extern undefined4 DAT_0089884c;
extern undefined4 DAT_00898850; extern undefined4 DAT_008bf4f4;
