#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00154ac8(); extern undefined4 fn_00166824(); extern longlong fn_00300f74(); extern undefined1 fn_00660e2c(); extern undefined1 fn_006b51cc(); extern int fn_006b7aa8();
extern int fn_006b7aec(); extern int fn_006b7b7c(); extern int fn_006b7bc4(); extern int fn_006b7f9c(); extern int fn_006b8068(); extern int fn_006b8328();
extern int fn_006b86f4(); extern int fn_006b8718(); extern int fn_006b873c(); extern int fn_006cb760();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893d54; extern undefined4 DAT_00897804;
