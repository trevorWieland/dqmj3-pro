#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern bool fn_002cb154(); extern undefined4 fn_002cbcb8(); extern undefined4 fn_0038eae8(); extern undefined4 fn_0038ee34(); extern undefined1 * fn_0038ee98(); extern undefined1 * fn_003d2fa4();
extern undefined4 fn_003d31b0(); extern undefined4 fn_004231f0(); extern bool fn_006b5db4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890c60; extern undefined4 PTR_s_color_box_child_00_00890c70;
