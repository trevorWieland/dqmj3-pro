#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_0012d73c(); extern undefined4 fn_0012f208(); extern undefined1 fn_00145aac(); extern undefined4 fn_00145ac0(); extern bool fn_0014a614();
extern uint fn_00179dc0(); extern uint fn_00179fc4(); extern undefined4 fn_001c6c38(); extern undefined4 fn_002775a0(); extern void fn_002782e4(); extern int fn_00278784();
extern undefined4 fn_00279ae4(); extern undefined4 fn_00279bd4(); extern char * fn_00340484(); extern int fn_006afaf4(); extern int fn_006f7a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 s_F; extern undefined4 s_GT_F; extern undefined4 s_GT_S;
extern undefined4 s_S; extern undefined4 s_W; extern undefined4 s_null;
