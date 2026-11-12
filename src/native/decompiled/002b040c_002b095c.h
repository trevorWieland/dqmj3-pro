#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0013a624(); extern undefined4 fn_0013af30(); extern undefined4 fn_00145b00(); extern undefined4 fn_001969a4(); extern undefined4 fn_00234454(); extern undefined4 fn_002d15e4();
extern undefined4 fn_0060b818(); extern bool fn_006ebf84(); extern undefined4 fn_0079868c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977d4;
