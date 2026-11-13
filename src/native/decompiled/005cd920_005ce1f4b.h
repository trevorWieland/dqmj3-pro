#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00124ffc(); extern undefined4 fn_0014e774(); extern undefined4 fn_0015e5c0(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4();
extern undefined4 fn_00252280(); extern undefined8 fn_00301a9c(); extern undefined4 fn_00338248(); extern undefined4 fn_003dccb4(); extern undefined4 fn_003dcd3c(); extern undefined4 fn_003ed4ac();
extern undefined4 fn_003ed51c(); extern uint fn_00443e84(); extern undefined4 fn_005a740c(); extern int fn_00615e64(); extern undefined1 fn_0066e158(); extern undefined4 fn_0066eb80();
extern undefined4 * fn_0067408c(); extern undefined4 fn_00674f6c(); extern undefined4 fn_006b6530(); extern int fn_006cb164(); extern int fn_006cb1d0(); extern undefined4 fn_006ce5b8();
extern undefined4 fn_0077f778();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0084be80; extern undefined4 DAT_0084be90; extern undefined4 DAT_00897840; extern undefined4 DAT_00898840;
extern undefined4 DAT_0089a508; extern undefined4 DAT_0089a509; extern undefined4 DAT_008e3000; extern undefined4 DAT_008e3058;
