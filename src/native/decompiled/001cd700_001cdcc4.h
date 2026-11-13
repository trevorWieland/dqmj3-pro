#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern undefined4 fn_0019d680(); extern uint * fn_0019e864(); extern undefined4 fn_0019e8c4(); extern undefined4 fn_001a2d50(); extern undefined4 fn_001a6fac();
extern undefined4 fn_001a7040(); extern int fn_001a72b0(); extern undefined4 fn_001a759c(); extern int fn_001a9704(); extern uint fn_001a9c90(); extern void fn_001cd700();
extern void fn_001cd91c(); extern void fn_001cd968(); extern uint * fn_00202f7c(); extern undefined4 fn_0024d73c(); extern undefined4 fn_0024d77c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081bd48; extern undefined4 DAT_0081d020; extern undefined4 DAT_008c06e8;
