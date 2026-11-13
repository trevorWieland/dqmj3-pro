#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001481c8(); extern undefined4 fn_001482f4(); extern undefined4 fn_00148348(); extern undefined4 fn_001c8888(); extern undefined4 fn_001c8c60();
extern undefined4 fn_001c9700(); extern undefined4 * fn_001c99cc(); extern void fn_0022d3d4(); extern void fn_0022d58c(); extern int fn_00242930(); extern undefined4 * fn_00301f50();
extern undefined4 fn_00552f04(); extern undefined4 fn_0068aeac(); extern undefined4 fn_0068afd8(); extern undefined4 fn_0068b06c(); extern undefined4 fn_006e1ee4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0022d944; extern undefined4 DAT_00812c8c;
