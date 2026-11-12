#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00102908(); extern undefined4 fn_0010c3d0(); extern undefined4 fn_0010c3ec(); extern undefined4 fn_0010c414();
extern undefined4 fn_0011705c(); extern undefined4 fn_00143a58(); extern undefined4 fn_00143b48(); extern undefined4 fn_00146590(); extern undefined4 fn_00152880(); extern undefined8 fn_00169f1c();
extern int fn_002febd8(); extern undefined4 fn_002feca8(); extern undefined4 fn_002fecec(); extern undefined4 fn_002feef8(); extern undefined4 fn_0030233c(); extern int fn_007321e0();
extern undefined4 fn_00733bac(); extern int fn_00733bfc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005f5c44; extern undefined4 DAT_005f5c48; extern undefined4 DAT_005f5e90; extern undefined4 DAT_00858f5c;
extern undefined4 DAT_00899ec8; extern undefined4 DAT_008d28ac;
