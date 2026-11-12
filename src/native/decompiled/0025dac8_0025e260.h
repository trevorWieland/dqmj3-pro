#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern bool fn_0022ca98(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628(); extern undefined1 fn_003492a8();
extern undefined4 fn_003492d0(); extern undefined4 fn_006896fc(); extern undefined4 fn_00689818(); extern undefined4 fn_0068993c(); extern undefined4 fn_0068ab44(); extern undefined4 * fn_0068ab5c();
extern undefined4 * fn_0068ad5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008951bc; extern undefined4 DAT_00895318; extern undefined4 DAT_008c7671; extern undefined4 PTR_FUN_0081dac4;
