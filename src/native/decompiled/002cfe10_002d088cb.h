#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00162d44(); extern undefined4 fn_00162d54(); extern undefined4 fn_0017fde4(); extern undefined4 fn_001cc890(); extern int fn_0023b858();
extern undefined4 fn_002cfa2c(); extern undefined4 fn_002cfe10(); extern undefined4 fn_002d0060(); extern undefined4 fn_00664c4c(); extern undefined4 fn_0068c694(); extern undefined4 fn_0068c7e8();
extern undefined4 fn_0068e960(); extern undefined4 fn_006b4cd0(); extern bool fn_006ebf84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e8;
