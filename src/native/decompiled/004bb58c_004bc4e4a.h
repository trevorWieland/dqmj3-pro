#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 * fn_0015ecdc(); extern undefined4 fn_00455e10(); extern undefined4 fn_004565fc(); extern undefined4 fn_0045b4d0(); extern undefined4 fn_00479c98();
extern undefined4 fn_00479cd8(); extern undefined4 fn_004bdba4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d94a0; extern undefined4 DAT_00852ae8; extern undefined4 DAT_00853500;
