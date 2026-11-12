#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001c9c44(); extern undefined4 fn_001cab7c(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_0025e378(); extern undefined4 fn_0025e3d4(); extern undefined4 fn_0025e7cc();
extern int * fn_0028aad0(); extern int * fn_0028b0a0(); extern int * fn_0028b348(); extern undefined4 fn_00354b70(); extern undefined4 fn_00356378(); extern undefined4 fn_0036ee88();
extern undefined4 fn_0036fb68(); extern undefined4 fn_00688ff8(); extern undefined4 fn_0068ab44(); extern int fn_006a833c(); extern undefined4 fn_006bfe90(); extern undefined4 fn_006f6ac0();
extern undefined4 fn_006f6acc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804; extern undefined4 DAT_008c7c28; extern undefined4 DAT_008c7c2c; extern undefined4 DAT_008c7c30;
