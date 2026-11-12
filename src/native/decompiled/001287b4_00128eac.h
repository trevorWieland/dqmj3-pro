#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0012b6ec(); extern undefined4 fn_00143e3c(); extern undefined4 fn_00143ed8(); extern undefined4 fn_00143f98();
extern undefined4 fn_002feef8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00128edc; extern undefined4 DAT_00859430; extern undefined4 DAT_0089a508; extern undefined4 DAT_0089a509;
extern undefined4 DAT_0089a510; extern undefined4 DAT_008bf77c;
