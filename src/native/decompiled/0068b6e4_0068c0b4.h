#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00144810(); extern undefined4 fn_0014481c(); extern undefined4 fn_00145b00(); extern undefined4 fn_00162d44(); extern undefined4 fn_00162d54();
extern int fn_00179ac8(); extern undefined4 fn_0017fc3c(); extern undefined4 fn_0017fd38(); extern undefined4 fn_0017fde4(); extern undefined4 fn_0018367c(); extern undefined4 fn_001969a4();
extern undefined4 fn_001cc890(); extern undefined4 fn_001ccc2c(); extern undefined4 fn_0023dd30(); extern undefined4 fn_0023e640(); extern undefined4 fn_00263814(); extern undefined4 fn_00543c54();
extern undefined4 * fn_005efdbc(); extern undefined4 fn_00660790(); extern undefined4 fn_0068c694(); extern undefined4 fn_0068c6a0(); extern undefined4 fn_0068c7e8(); extern undefined4 fn_0068eb0c();
extern undefined4 fn_0068eb24(); extern undefined4 fn_0068eb30(); extern bool fn_0069ee40(); extern int fn_006a88b8(); extern int fn_006a8a10(); extern undefined4 fn_006ada88();
extern undefined4 fn_006b4cd0(); extern bool fn_006eb3a4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0068b7e0; extern undefined4 DAT_0068c02c; extern undefined4 DAT_0068c038; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_008977e8; extern undefined4 PTR_FUN_00851160;
