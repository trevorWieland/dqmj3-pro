#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00158f6c(); extern undefined4 fn_0015e294(); extern undefined4 fn_0015e304(); extern undefined4 fn_0030233c(); extern undefined4 * fn_004745d8(); extern undefined4 fn_0048029c();
extern int fn_00480c5c(); extern undefined4 fn_00488564(); extern undefined4 fn_005248c4(); extern undefined4 fn_00524920(); extern undefined4 fn_005249cc(); extern undefined4 * fn_005249e8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007dba44; extern undefined4 DAT_008530bc; extern undefined4 DAT_0085319c; extern undefined4 DAT_008b64a4;
extern undefined4 PTR_FUN_008537d4; extern undefined4 PTR_LAB_008533fc; extern undefined4 PTR_LAB_00854110;
