#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern bool fn_001296d0(); extern bool fn_00251dd8(); extern int fn_00251ec8(); extern undefined4 fn_002feef8(); extern undefined4 * fn_00301f50(); extern undefined4 fn_0040f564();
extern undefined4 fn_0066de6c(); extern undefined4 fn_0066e620(); extern undefined4 fn_0066e6f0(); extern undefined4 fn_00675cc4(); extern undefined4 fn_00749820(); extern undefined4 fn_00763700();
extern undefined4 fn_00763b10();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0084ea6c; extern undefined4 DAT_00897850; extern undefined4 DAT_00898840; extern undefined4 PTR_FUN_00844298;
