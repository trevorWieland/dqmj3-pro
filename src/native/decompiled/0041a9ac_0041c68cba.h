#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0022f584(); extern undefined4 * fn_0025dea8(); extern int fn_0036c140(); extern undefined4 fn_0036c5f4();
extern undefined4 fn_0036c648(); extern void fn_0041c0d4(); extern undefined4 fn_006899f4(); extern undefined4 fn_00689bd0(); extern undefined4 fn_0068ab44(); extern bool fn_006ba220();
extern bool fn_006e8b04(); extern bool fn_006e8b18();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0041bd80; extern undefined4 DAT_0041bd98; extern undefined4 DAT_007c7468; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00839d08; extern undefined4 DAT_00894eb0;
