#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_001694e4(); extern longlong fn_00301bb0(); extern undefined4 fn_004d83d0(); extern undefined1 * fn_004ed8ac(); extern undefined4 fn_004ed950(); extern undefined4 fn_004ed96c();
extern undefined1 * fn_004ed9ec(); extern int fn_006d45c4(); extern int fn_006d9934();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c0630;
