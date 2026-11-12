#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern int * fn_001588d4(); extern undefined4 fn_002317d8(); extern undefined4 fn_005ab918(); extern undefined4 fn_005ab930(); extern undefined4 fn_005ab934();
extern undefined4 fn_006094f8(); extern undefined4 fn_00609ad8(); extern undefined4 fn_0060a098(); extern undefined4 fn_0060a288(); extern undefined4 fn_00689824();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c;
