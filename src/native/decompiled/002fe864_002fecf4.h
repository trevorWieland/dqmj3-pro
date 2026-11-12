#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00100b6c(); extern undefined4 fn_00124ffc(); extern undefined4 fn_0014e774(); extern int fn_002fea64(); extern undefined4 fn_002fec38(); extern void fn_002feca8();
extern undefined * fn_00300190(); extern undefined4 fn_00423e58(); extern undefined4 fn_006f7508();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_0089a508;
