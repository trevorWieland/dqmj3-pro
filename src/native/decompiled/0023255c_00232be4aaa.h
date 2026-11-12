#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern int fn_00100b58(); extern undefined4 fn_00144810(); extern undefined4 fn_0014481c(); extern undefined4 fn_001638a0(); extern undefined4 fn_0016ba84();
extern int * fn_001827b0(); extern undefined4 fn_001828f0(); extern undefined4 fn_00190d50(); extern undefined4 fn_002323e8(); extern int fn_0025f988(); extern undefined4 fn_00688d44();
extern undefined4 fn_0068eb18(); extern undefined4 fn_006a873c(); extern undefined4 fn_006b71a8(); extern int fn_006f83f4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002328ac; extern undefined4 DAT_002328b8; extern undefined4 DAT_002328bc; extern undefined4 DAT_00232a2c;
extern undefined4 DAT_00232a44; extern undefined4 DAT_008977e8; extern undefined4 PTR_s_race_announce_last_60sec_00896d78;
