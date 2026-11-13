#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00159f34(); extern undefined4 fn_00176d68(); extern undefined4 fn_00178f9c(); extern undefined4 fn_0018d060(); extern undefined4 fn_001c9278(); extern undefined4 fn_001c9330();
extern undefined4 fn_001f7d54(); extern undefined4 fn_0023dd30(); extern int fn_0023e194(); extern undefined4 fn_002b1588(); extern undefined4 fn_002b1a28(); extern undefined4 fn_005456f4();
extern undefined4 fn_0058e3fc(); extern void fn_00590d30(); extern undefined4 fn_0069e82c(); extern undefined4 fn_0069ef00(); extern undefined4 fn_006ad868();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 PTR_s_monster_icon_in_0089648c;
