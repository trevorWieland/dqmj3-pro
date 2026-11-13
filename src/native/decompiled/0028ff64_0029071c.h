#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001482f4(); extern undefined4 fn_00151954(); extern undefined4 fn_00154ac8(); extern undefined4 fn_00159f34();
extern undefined4 fn_0016a43c(); extern uint fn_00259f7c(); extern undefined4 fn_002e2d98(); extern bool fn_002e2dc8(); extern undefined4 fn_002e2e20(); extern uint fn_002e2e44();
extern undefined4 fn_002e2ea4(); extern undefined4 fn_002feef8(); extern undefined4 fn_003199a0(); extern undefined4 fn_00660458(); extern undefined4 fn_006896f4(); extern undefined4 fn_0068af3c();
extern ushort fn_006bc590(); extern uint fn_006bc5bc(); extern uint fn_006bc5dc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081e3b0; extern undefined4 DAT_0081e3dc; extern undefined4 DAT_00895f14; extern undefined4 DAT_00897804;
