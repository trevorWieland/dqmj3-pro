#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00144810(); extern undefined4 fn_00145b00(); extern undefined4 fn_00162d44(); extern undefined4 fn_00162d54();
extern undefined4 fn_0017fc28(); extern undefined4 fn_0017fde4(); extern undefined4 fn_001969a4(); extern undefined4 fn_001cac80(); extern undefined4 fn_001cc250(); extern int fn_001cc600();
extern undefined4 fn_002cd59c(); extern undefined4 fn_002feef8(); extern undefined4 * fn_005e846c(); extern undefined4 fn_0068bea4(); extern undefined4 fn_0068c694(); extern undefined4 fn_0068c7e8();
extern undefined4 fn_0068eb30(); extern float fn_0068f384(); extern undefined4 fn_0069eb10(); extern bool fn_0069ee40(); extern undefined4 fn_006a8708(); extern int fn_006a8858();
extern bool fn_006ebf84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e8;
