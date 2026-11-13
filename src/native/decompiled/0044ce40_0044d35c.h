#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined8 fn_00301a9c(); extern undefined1 * fn_0044de48(); extern int fn_0044e2a4(); extern int fn_0044e304();
extern undefined4 fn_006ceaf4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0085251c; extern undefined4 DAT_0089a670;
