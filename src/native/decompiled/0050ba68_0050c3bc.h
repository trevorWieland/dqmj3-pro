#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00102cc8(); extern undefined4 fn_004ecfd0(); extern undefined4 fn_004ed2e8(); extern undefined4 fn_004edc34(); extern undefined4 fn_004edc70(); extern undefined4 fn_004f01f4();
extern undefined4 fn_004f06f4(); extern undefined4 * fn_004f0700(); extern int fn_004f0788(); extern undefined4 * fn_004f0ce8(); extern undefined4 fn_00656e14(); extern uint fn_006575c0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf4cc; extern undefined4 DAT_008c0630; extern undefined4 DAT_008c0670; extern code *DAT_008c3610;
extern undefined4 DAT_008f2b30; extern undefined4 DAT_e0a14821; extern undefined4 DAT_e0a14827; extern undefined4 DAT_e0a1482b;
