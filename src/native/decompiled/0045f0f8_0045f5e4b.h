#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern int fn_00100b58(); extern uint fn_00101a50(); extern int fn_00101d80(); extern short * fn_0010313a(); extern undefined4 * fn_00170f54();
extern undefined4 fn_0030233c(); extern undefined4 fn_00455590(); extern undefined4 fn_0045f188(); extern undefined4 fn_004b626c(); extern undefined4 fn_006d0734(); extern undefined4 fn_006d0810();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007db524; extern undefined4 DAT_007dbc50;
