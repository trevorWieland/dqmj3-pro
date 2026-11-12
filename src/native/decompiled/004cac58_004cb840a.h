#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00124e48(); extern undefined4 fn_0013d5c4(); extern undefined4 fn_0014f590(); extern undefined4 fn_0015f180(); extern undefined4 * fn_00301f50(); extern int fn_004c61bc();
extern undefined1 * fn_004ca178(); extern undefined4 fn_004d47c0(); extern undefined4 fn_004ed700(); extern int fn_004ed810(); extern int fn_0050d0fc(); extern int fn_0050d1a0();
extern int fn_005180d8(); extern undefined4 fn_006d6ce0(); extern undefined8 fn_006d6d3c(); extern undefined4 fn_006d6d58(); extern undefined4 fn_006d897c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00855f88; extern undefined4 DAT_00855fc4; extern undefined4 DAT_00855fd8; extern undefined4 DAT_00856d70;
extern undefined4 DAT_008bf4f4; extern undefined4 DAT_008c06c4; extern undefined4 DAT_e0a14827;
