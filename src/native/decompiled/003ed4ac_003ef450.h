#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern undefined4 fn_001482f4(); extern undefined4 fn_00159f34(); extern undefined4 fn_001638a0(); extern undefined4 fn_0016a43c();
extern undefined4 fn_00190cdc(); extern undefined4 fn_00190e00(); extern undefined4 fn_001f74d8(); extern undefined4 fn_003cfd6c(); extern undefined4 * fn_00404020(); extern undefined4 fn_00404164();
extern undefined4 fn_0043d350(); extern undefined1 fn_0066e158(); extern undefined4 * fn_0068ab5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003ef074; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008340d8; extern undefined4 DAT_00834208;
extern undefined4 DAT_00834374; extern undefined4 DAT_00890360; extern undefined4 DAT_00892cf0; extern unsigned char *DAT_00892df8;
extern unsigned char *DAT_00892dfc; extern undefined4 DAT_008963ac; extern undefined4 DAT_00898840;
