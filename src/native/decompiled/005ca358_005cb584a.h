#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00190d50(); extern undefined4 fn_00215aec(); extern undefined4 fn_00215d9c(); extern undefined4 fn_0021718c(); extern undefined4 fn_00217988(); extern undefined4 fn_0022ccb4();
extern undefined4 fn_0022f584(); extern undefined4 fn_0023ddec(); extern int * fn_002fdd54(); extern undefined4 * fn_003bc118(); extern int fn_006b0d10();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005ca910; extern undefined4 DAT_008977e0; extern undefined4 PTR_LAB_0084b2b4;
