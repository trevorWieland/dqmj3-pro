#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004ed068(); extern undefined4 fn_004ed0e4(); extern undefined4 fn_004f3498(); extern uint fn_004f9f98(); extern uint fn_004fa138(); extern undefined4 fn_005059c0();
extern undefined4 fn_00505a04(); extern undefined4 fn_006d897c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004f9f4c; extern undefined4 DAT_008bf4e0;
