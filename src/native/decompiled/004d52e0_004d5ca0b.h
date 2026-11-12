#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern bool fn_004ceb10(); extern undefined4 fn_004d49d0(); extern undefined1 * fn_004d540c(); extern undefined4 fn_004ecfd0(); extern undefined4 fn_004ed204(); extern undefined4 fn_004ed230();
extern int fn_004ed5b0(); extern undefined4 fn_00656b0c(); extern undefined4 fn_00656b7c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00859700; extern undefined4 DAT_008bf4f8; extern undefined4 DAT_008bf4f9; extern undefined4 DAT_008c0630;
extern undefined4 DAT_e0a14827; extern undefined4 DAT_e0a1482b;
