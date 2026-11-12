#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00117074(); extern int * fn_0028aad0(); extern undefined4 fn_0028e264(); extern undefined4 fn_006e6e60(); extern undefined4 fn_006e6eb0(); extern char fn_006e6fa4();
extern char fn_006e7080();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00850818; extern undefined4 DAT_00897804; extern undefined4 DAT_00898eac;
