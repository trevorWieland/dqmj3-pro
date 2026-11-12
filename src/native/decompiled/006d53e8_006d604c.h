#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_001694e4(); extern undefined4 fn_004edc34(); extern undefined4 fn_004edc70(); extern bool fn_006d589c(); extern undefined4 fn_006d685c(); extern bool fn_006d6880();
extern undefined1 fn_006dc220();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf500; extern undefined4 DAT_008bf504; extern undefined4 DAT_008c0630; extern undefined4 DAT_e0a14827;
extern undefined4 DAT_e0a1482b; extern undefined4 DAT_e10113fd;
