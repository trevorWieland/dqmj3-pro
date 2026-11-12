#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern int fn_0044bc3c(); extern bool fn_0052cb1c(); extern undefined4 fn_0052cd04(); extern int fn_0052d624();
extern int fn_0052d818(); extern int fn_0052d868(); extern int fn_0052d8ec(); extern int fn_0052d92c(); extern int fn_0052d97c(); extern int fn_0052da0c();
extern int fn_0052da4c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00100040; extern undefined4 DAT_0089a64c; extern undefined4 DAT_008bfbd4; extern undefined4 DAT_008e3304;
