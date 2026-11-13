#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_00231700(); extern undefined4 fn_0028a68c(); extern int * fn_0028aad0(); extern undefined4 fn_002b1f0c();
extern undefined4 fn_002b1f48(); extern undefined4 fn_002c07c0(); extern int fn_002c11d0(); extern undefined4 fn_002e3e9c(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628();
extern undefined4 fn_00413b2c(); extern undefined4 fn_00414d6c(); extern undefined4 fn_0042fb68();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00413d2c; extern undefined4 DAT_00413d48; extern undefined4 DAT_00413dd0; extern undefined4 DAT_00897804;
extern undefined4 DAT_008c7672;
