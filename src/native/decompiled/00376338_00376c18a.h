#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0016a888(); extern undefined4 fn_00182988(); extern undefined4 fn_0018a618(); extern undefined4 fn_00190d50(); extern undefined4 fn_00688c04(); extern int * fn_00746fd4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00376450; extern undefined4 DAT_0085ddec; extern undefined4 DAT_008977e4; extern undefined4 DAT_0089a924;
