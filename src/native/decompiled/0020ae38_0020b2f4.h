#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_0011c134(); extern uint fn_00147e6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0020afa8; extern undefined4 DAT_007c35bc; extern undefined4 DAT_00892430; extern undefined4 DAT_00892432;
extern undefined4 DAT_00892434; extern undefined4 DAT_00892436; extern undefined4 DAT_00892438; extern undefined4 DAT_0089243c;
