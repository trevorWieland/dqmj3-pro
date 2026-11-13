#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001638a0(); extern undefined4 fn_001c72c0(); extern undefined4 fn_00214c4c(); extern undefined4 fn_00215e38(); extern undefined4 fn_002161d4(); extern undefined4 fn_00216938();
extern undefined4 fn_0021718c(); extern undefined4 fn_00226f48(); extern undefined4 fn_002fe008(); extern undefined4 fn_002fe164(); extern undefined4 fn_002fe2c0(); extern undefined4 fn_002feef8();
extern undefined4 fn_00683320(); extern undefined4 fn_0069eed8(); extern undefined4 fn_006aab48(); extern bool fn_006aff38(); extern int fn_006b4d08(); extern undefined4 fn_006bb544();
extern undefined4 fn_006f7508(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008319c8; extern undefined4 DAT_008913ac; extern undefined4 DAT_008913b0; extern undefined4 DAT_008913b4;
extern undefined4 DAT_008913b8; extern undefined4 DAT_008977e0;
