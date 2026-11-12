#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern char * fn_001030bc(); extern undefined4 fn_00145b00(); extern undefined4 fn_00183660(); extern undefined4 fn_002feef8(); extern undefined4 fn_005df880(); extern undefined4 fn_005ea480();
extern uint * fn_006dcfbc(); extern uint * fn_006dd2a0(); extern uint * fn_006dd2dc(); extern uint * fn_006dd340(); extern uint * fn_006dd37c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005e903c; extern undefined4 DAT_007e1ae0; extern undefined4 DAT_00812c8c; extern undefined4 PTR_FUN_00858ae8;
