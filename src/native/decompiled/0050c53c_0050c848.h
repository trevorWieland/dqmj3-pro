#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004edc34(); extern undefined4 fn_004edc70(); extern undefined4 * fn_004edc74(); extern undefined4 fn_004f01f4(); extern undefined4 fn_004f06f4(); extern undefined4 * fn_004f0700();
extern int fn_004f0788(); extern undefined4 fn_004f0c1c(); extern undefined4 * fn_004f0ce8(); extern undefined4 fn_0050c2e8(); extern undefined4 fn_0051c4e4(); extern undefined4 fn_00656b0c();
extern undefined4 fn_00656b7c(); extern undefined4 fn_0065754c(); extern uint fn_006575c0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c0630; extern undefined4 DAT_008c0680; extern undefined4 DAT_e0a14827;
