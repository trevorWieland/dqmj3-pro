#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_00178eec(); extern undefined4 fn_0025e378(); extern undefined4 fn_0025e4dc();
extern undefined4 fn_0025e7cc(); extern undefined4 fn_0025e868(); extern undefined4 fn_002ff628(); extern undefined4 fn_00328a70(); extern undefined4 * fn_00328ad4(); extern int fn_00353250();
extern undefined4 fn_00353a38(); extern undefined4 fn_0036c340(); extern undefined4 fn_003a6d3c(); extern undefined4 fn_003a755c(); extern undefined4 fn_003a7f50(); extern undefined4 fn_003cfd6c();
extern undefined4 fn_00588d98(); extern undefined4 fn_00588e54(); extern undefined4 fn_005f6270(); extern undefined4 * fn_0068ab5c();
extern undefined4 func_0x002043d8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c670c; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082db88; extern undefined4 DAT_00890360;
extern undefined4 DAT_00897840; extern undefined4 DAT_008c762d; extern undefined4 DAT_008c764d; extern undefined4 DAT_008c7660;
extern undefined4 DAT_008c7671; extern undefined4 PTR_FUN_0082da78;
