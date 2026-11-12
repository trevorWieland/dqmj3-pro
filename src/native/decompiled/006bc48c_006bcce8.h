#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00163868(); extern undefined4 fn_0018367c(); extern int fn_0024222c(); extern bool fn_0036bb20(); extern bool fn_0036bb48(); extern int fn_006b4f84();
extern int fn_006b4fb8(); extern bool fn_006ba220(); extern int fn_006bc1dc(); extern undefined4 fn_006ec21c(); extern undefined4 fn_006ec290(); extern undefined4 fn_006ec29c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c44f4; extern undefined4 DAT_00897804; extern undefined4 PTR_s_wgroup_joker_008925e0;
