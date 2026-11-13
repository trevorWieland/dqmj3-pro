#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_001694e4(); extern longlong fn_00300f74(); extern undefined4 fn_0053138c(); extern undefined4 fn_005340d8(); extern undefined4 fn_00534ca4(); extern undefined4 fn_0053c158();
extern undefined4 fn_0053dea0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c3450; extern undefined4 DAT_008c3454; extern undefined4 DAT_008c3458; extern undefined4 DAT_008c3474;
