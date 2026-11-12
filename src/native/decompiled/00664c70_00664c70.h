#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_00162d44(); extern undefined4 fn_0017fd4c(); extern undefined4 fn_0017fde4();
extern undefined4 fn_001969a4(); extern int fn_0023a04c(); extern int fn_0023a524(); extern undefined4 fn_00265604(); extern undefined4 fn_00338014(); extern undefined4 * fn_0034f2fc();
extern int fn_005eb0c4(); extern int fn_005ef124(); extern undefined4 fn_005ef16c(); extern undefined4 * fn_005efdbc(); extern undefined4 fn_0068c694(); extern undefined4 fn_0068eb0c();
extern undefined4 fn_0068eb30(); extern bool fn_0069ee40();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e8; extern undefined4 DAT_008c6d86; extern undefined4 DAT_008c6d91;
extern undefined4 s_BG_ground_008c6d69; extern undefined4 s_BG_wall_008c6d73; extern undefined4 s_cloud_fine_008c6d7b; extern undefined4 s_galaxy_008c6d8a;
