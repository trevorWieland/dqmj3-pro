#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004f0a20(); extern undefined4 fn_004f0b78(); extern undefined4 fn_004f0c04(); extern bool fn_0051c4bc(); extern undefined4 fn_0051cf38();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00857068; extern undefined4 DAT_008c067c; extern undefined4 DAT_008c0680; extern undefined4 DAT_008ed8e8;
extern undefined4 DAT_e0a14827;
