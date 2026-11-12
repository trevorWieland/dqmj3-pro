#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001f74d8(); extern undefined4 fn_0022f584(); extern undefined4 fn_0028e264(); extern int fn_0057481c(); extern undefined4 fn_0058c9a8(); extern undefined4 fn_00689efc();
extern undefined2 fn_006b6494();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0060e848; extern undefined4 DAT_0060e864; extern undefined4 DAT_0085026c; extern undefined4 DAT_00897804;
extern undefined4 DAT_00898ce0; extern undefined4 DAT_00898eac;
