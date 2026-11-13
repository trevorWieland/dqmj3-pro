#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004efcf4(); extern undefined4 fn_004f0ab4(); extern undefined4 fn_004f0c04(); extern undefined4 fn_00500fb0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf4e0; extern undefined4 DAT_008bf4e6; extern undefined4 DAT_008bf4e8; extern undefined4 DAT_008c0630;
extern undefined4 DAT_e0a14827;
