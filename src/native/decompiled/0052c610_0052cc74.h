#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern bool fn_0052cb1c(); extern undefined4 fn_0052cb58(); extern undefined4 fn_0052cdd0(); extern int fn_0052d37c();
extern int fn_0052d3b8(); extern int fn_0052d414(); extern int fn_0052d464(); extern int fn_0052d4ac(); extern int fn_0052d570(); extern int fn_0052d5e0();
extern int fn_0052d6fc(); extern int fn_0052d734();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00110080; extern undefined4 DAT_0089a64c; extern undefined4 DAT_0089a650; extern undefined4 DAT_008bfbd0;
extern undefined4 DAT_008bfbd4; extern undefined4 DAT_008e32f8; extern undefined4 DAT_008e3304;
