#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00154ac8(); extern undefined4 fn_0022f584(); extern undefined4 fn_0043d370(); extern undefined4 fn_005f6270(); extern undefined4 fn_0068ab44(); extern undefined4 fn_00748808();
extern undefined4 fn_00748c18(); extern undefined4 fn_00748e14();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00570490; extern undefined4 DAT_00840904; extern undefined4 DAT_008963ac;
