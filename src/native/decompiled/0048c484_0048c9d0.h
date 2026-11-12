#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_0015ece0(); extern undefined4 fn_004a2158(); extern undefined4 * fn_004b637c(); extern undefined4 fn_004b8d90(); extern undefined4 fn_004b9b4c(); extern undefined4 fn_00767bd4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00853388; extern undefined4 DAT_00853688; extern undefined4 PTR_FUN_00853b40; extern undefined4 PTR_FUN_00854c0c;
