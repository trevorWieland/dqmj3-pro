#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_002043cc(); extern undefined4 fn_002ff628(); extern bool fn_0066e510(); extern undefined4 fn_0066e530(); extern int fn_006c58ac();
extern undefined4 fn_00790084(); extern undefined4 fn_007902c0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897840; extern undefined4 DAT_00897850; extern undefined4 DAT_008c762c;
