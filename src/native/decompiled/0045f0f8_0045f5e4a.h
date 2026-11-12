#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern short * fn_0010313a(); extern undefined4 * fn_0015ece0(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0030233c(); extern void fn_0045f188();
extern undefined4 * fn_0045f2ec();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007dbc50; extern undefined4 DAT_00852ce0;
