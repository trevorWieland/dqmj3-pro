#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern undefined4 fn_00146590(); extern undefined4 fn_002feef8(); extern int fn_00561a34(); extern int fn_0067d3d8();
extern undefined4 fn_0067fb7c(); extern undefined4 fn_0067fcd0(); extern undefined4 fn_0067ffdc(); extern undefined4 fn_006805e8(); extern void fn_0068095c(); extern undefined4 fn_0068177c();
extern uint * fn_006818c4(); extern undefined4 fn_00774f8c(); extern undefined4 fn_007852d4(); extern undefined4 fn_00787ae4(); extern undefined4 fn_00794e34(); extern undefined4 fn_00799c30();
extern undefined4 fn_0079cac8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c;
