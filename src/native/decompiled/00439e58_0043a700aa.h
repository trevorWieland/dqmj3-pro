#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001f74d8(); extern undefined4 fn_002eb704(); extern undefined4 fn_002eb950(); extern undefined4 fn_00439948(); extern undefined4 fn_00439c20(); extern undefined4 fn_00439f9c();
extern undefined4 fn_00445fb8(); extern undefined4 fn_00689930(); extern undefined4 fn_006899f4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00895b24;
