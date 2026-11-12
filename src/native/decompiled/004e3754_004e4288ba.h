#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_004e3754(); extern undefined4 fn_004e4288(); extern uint fn_004e42fc(); extern undefined4 fn_004ed098(); extern undefined4 fn_004ed0e4(); extern undefined4 fn_004ed158();
extern undefined4 fn_004f01f4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004e3dbc; extern undefined4 DAT_0080df88; extern undefined4 DAT_008bf504; extern undefined4 DAT_e0a14827;
