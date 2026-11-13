#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0017ea58(); extern undefined4 fn_0018b010(); extern undefined4 fn_001a82f4(); extern undefined4 fn_001a834c(); extern undefined4 fn_001a83d0(); extern undefined4 fn_001a8754();
extern longlong fn_00300f74();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00892804; extern undefined4 DAT_00892808;
