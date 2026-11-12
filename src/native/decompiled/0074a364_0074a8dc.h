#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_0014df84(); extern undefined4 fn_0014e6e4(); extern undefined4 fn_0015e5c0(); extern undefined4 * fn_0015ece0(); extern undefined8 fn_00169f1c(); extern undefined4 fn_00170704();
extern undefined4 fn_001707b4(); extern undefined4 fn_001709d8(); extern undefined4 * fn_00170c3c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00852630; extern undefined4 DAT_008528bc;
