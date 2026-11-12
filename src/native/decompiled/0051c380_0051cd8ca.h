#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_00301a9c(); extern undefined4 fn_004ecfd0(); extern undefined4 fn_004ed068(); extern undefined4 fn_004edc34(); extern undefined4 fn_004edc70(); extern undefined4 fn_004ede4c();
extern undefined4 fn_0050faac(); extern undefined4 fn_0051557c(); extern undefined1 * fn_00517050(); extern undefined4 fn_0051c11c(); extern undefined4 fn_00656b7c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008572d8; extern undefined4 DAT_008c0630; extern undefined4 DAT_008c0674; extern undefined4 DAT_008c0680;
extern undefined4 DAT_e0a14827;
