#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00128744(); extern undefined4 fn_00145b00(); extern uint fn_001759d0(); extern undefined4 fn_0017a18c(); extern undefined4 fn_0017a1d4(); extern undefined4 fn_00245df0();
extern undefined4 fn_00246494(); extern undefined4 fn_00698fb8(); extern undefined4 fn_0069c2c8(); extern undefined4 fn_006b53cc(); extern undefined4 fn_006f7a48();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082b098; extern undefined4 DAT_008977e0;
