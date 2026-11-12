#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_002fb61c(); extern undefined4 fn_00341260(); extern undefined4 fn_0035dbd0(); extern undefined4 fn_0035e60c(); extern undefined4 fn_0035ee00(); extern undefined4 fn_0035f064();
extern undefined4 fn_0035f234(); extern undefined4 fn_0035fd50(); extern undefined4 fn_003603b8(); extern undefined4 fn_00360bac(); extern undefined4 fn_00361280(); extern undefined4 fn_003613ec();
extern undefined4 fn_003615e0(); extern undefined4 fn_003617b8(); extern undefined4 fn_00361a44(); extern int fn_006c89fc(); extern uint fn_006f6434(); extern undefined4 fn_006f6fc4();
extern undefined4 fn_006f7a0c(); extern bool fn_006f7a20(); extern int * fn_00789b34();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
