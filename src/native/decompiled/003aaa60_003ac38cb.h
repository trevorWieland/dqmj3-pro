#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern bool fn_0020ccb0(); extern int * fn_0028aad0(); extern undefined4 fn_002feef8(); extern undefined4 fn_00315b0c(); extern undefined4 fn_00315bb4();
extern undefined4 fn_00315e18(); extern undefined4 fn_00315f18(); extern undefined4 fn_00315fd0(); extern undefined4 * fn_003ac02c(); extern undefined1 * fn_003d308c(); extern undefined4 fn_003d31b0();
extern undefined4 fn_003d35c0(); extern undefined4 fn_004231f0(); extern undefined4 fn_00441974();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082e0ec; extern undefined4 DAT_00897804; extern undefined4 PTR_s_color_mon_list_00_00890c30;
