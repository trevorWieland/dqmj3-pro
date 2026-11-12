#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00151954(); extern undefined4 fn_0016a43c(); extern undefined4 fn_00190cdc(); extern undefined4 fn_00190d50(); extern undefined4 fn_00190e00();
extern undefined4 fn_002309d8(); extern undefined4 fn_00246824(); extern bool fn_00246924(); extern undefined4 fn_002cd49c(); extern undefined4 fn_002feef8(); extern undefined4 fn_003d1030();
extern undefined4 fn_003d10c4(); extern undefined4 * fn_003d2038(); extern undefined4 fn_00688aa0(); extern undefined4 fn_00688c04(); extern undefined4 fn_00688d44(); extern undefined4 fn_006896e0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008311cc; extern undefined4 DAT_008903d4;
