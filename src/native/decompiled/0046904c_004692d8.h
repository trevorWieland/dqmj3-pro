#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00170c9c(); extern int fn_0017d82c(); extern int fn_0017fe44(); extern int fn_0045f058(); extern undefined4 fn_0045f228(); extern int fn_0045f3dc();
extern bool fn_0046904c(); extern bool fn_00469190();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008528bc; extern undefined4 DAT_008b64c4; extern undefined4 DAT_008b64c8;
