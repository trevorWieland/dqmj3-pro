#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0013d0fc(); extern undefined4 * fn_0013d3e8(); extern undefined4 * fn_0015ecdc(); extern undefined4 * fn_00170f54(); extern undefined4 * fn_0047a4a4();
extern undefined4 fn_004951a0(); extern undefined4 fn_00495244(); extern undefined4 fn_004952a0(); extern int fn_0049f8dc(); extern int fn_004b2f20(); extern undefined4 fn_004b8d4c();
extern undefined4 fn_004b8d90(); extern undefined4 fn_004bdba4(); extern undefined4 fn_006d09b8(); extern uint fn_006d0c7c(); extern undefined4 fn_006d1a94(); extern undefined4 fn_006d29ec();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007dba44; extern undefined4 DAT_008532a0;
