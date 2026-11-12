#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004edc34(); extern undefined4 fn_004edc70(); extern undefined4 fn_004f01f4(); extern undefined8 fn_00513e58(); extern undefined4 fn_00513f50(); extern undefined4 fn_00516cec();
extern int fn_00516db8(); extern int fn_00516dd8(); extern int fn_006d89ec(); extern undefined4 fn_006d8a04(); extern uint fn_006dae98();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf4d4; extern undefined4 DAT_008c0630; extern undefined4 DAT_e0a14827;
