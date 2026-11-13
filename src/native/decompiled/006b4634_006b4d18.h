#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00182d34(); extern undefined4 fn_002ff628(); extern undefined4 fn_005f07fc(); extern undefined4 fn_006036a0(); extern undefined4 fn_00603814(); extern bool fn_00692ec8();
extern int fn_006dc71c(); extern undefined4 fn_006ed01c(); extern int fn_006ed054(); extern undefined4 fn_006ed088(); extern int fn_006ed0e0(); extern undefined4 fn_006edd70();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c7600;
