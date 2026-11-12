#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined8 fn_0017821c(); extern undefined4 fn_001f74d8(); extern undefined4 * fn_0025dea8(); extern undefined4 fn_002c4694(); extern undefined4 fn_002d66fc();
extern undefined4 fn_002d6810(); extern undefined4 fn_002d691c(); extern undefined4 fn_002feef8(); extern undefined4 fn_0039536c(); extern void fn_005a2e8c(); extern undefined4 fn_006899f4();
extern bool fn_006ba220();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00846868; extern undefined4 DAT_008469a8; extern undefined4 DAT_00895244;
extern undefined4 DAT_00896ad4;
