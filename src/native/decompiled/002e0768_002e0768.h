#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00212a24(); extern undefined4 fn_0021472c(); extern int fn_00365890(); extern undefined4 fn_00366d90(); extern undefined4 fn_00369238(); extern bool fn_0036959c();
extern undefined4 fn_003f2d04(); extern undefined4 fn_003f2dd0(); extern undefined4 fn_00683320(); extern undefined4 fn_006c328c(); extern undefined4 fn_006c32a8(); extern bool fn_006c3400();
extern undefined4 fn_006c393c(); extern bool fn_006c3a84(); extern undefined4 fn_006f7508(); extern undefined4 fn_006f7a0c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
