#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0014f1bc(); extern undefined4 fn_0030233c(); extern undefined4 fn_004b890c(); extern undefined4 fn_004b8a68();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007dba44; extern undefined4 DAT_00853740; extern undefined4 DAT_00855ba4; extern undefined4 DAT_80010001;
