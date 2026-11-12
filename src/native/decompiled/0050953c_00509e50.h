#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_00169f1c(); extern undefined4 fn_004ecfd0(); extern undefined4 fn_004ecfe0(); extern undefined4 fn_004ed584(); extern undefined4 fn_004ed714(); extern int fn_004ed810();
extern undefined4 fn_004f0230(); extern undefined4 fn_004f045c(); extern undefined1 * fn_004f05cc(); extern undefined4 fn_00509204(); extern undefined4 fn_00509218(); extern int fn_0050922c();
extern undefined1 * fn_0050a490(); extern undefined4 fn_0050a718(); extern undefined1 * fn_0050a73c(); extern longlong fn_0050a9ac(); extern int fn_0050aad4(); extern undefined4 fn_0050ab4c();
extern uint fn_0050bd40(); extern undefined4 fn_00516cc8(); extern undefined4 fn_00517020();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00509d0c; extern undefined4 DAT_00509dac; extern undefined4 DAT_e0a14827;
