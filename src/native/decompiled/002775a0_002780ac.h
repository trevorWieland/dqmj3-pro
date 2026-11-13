#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 * fn_00118290(); extern undefined4 fn_0011c184(); extern undefined4 * fn_001287b0(); extern undefined4 fn_0012d6b0(); extern undefined4 fn_00145ac0();
extern bool fn_0014a614(); extern uint fn_00179dc0(); extern uint fn_00179fc4(); extern undefined4 fn_001c6d44(); extern undefined4 fn_002775a0(); extern undefined4 fn_00278c50();
extern undefined4 fn_00279ae4(); extern undefined4 fn_00279cb4(); extern bool fn_005f5cac(); extern undefined4 * fn_005f5cd8(); extern undefined4 * fn_005f5d3c(); extern int fn_006afaf4();
extern int fn_006edd88(); extern bool fn_006eddec(); extern int fn_006f7a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 s_GT_W; extern undefined4 s_RAIL; extern undefined4 s_W;
