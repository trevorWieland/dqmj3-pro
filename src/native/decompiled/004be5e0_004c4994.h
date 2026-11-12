#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern int fn_00100b58(); extern int * fn_0015e6f0(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0030233c(); extern int fn_0045f0f8();
extern int fn_0045f3dc(); extern int fn_0045f42c(); extern undefined4 fn_004be9cc(); extern undefined4 fn_00779a60(); extern undefined4 fn_0077a0bc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004be9c4; extern undefined4 DAT_007db524; extern undefined4 DAT_00855a94; extern undefined4 DAT_00855e00;
