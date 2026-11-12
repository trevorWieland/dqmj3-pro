#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8(); extern undefined4 fn_00178f9c(); extern undefined4 fn_001828f0(); extern undefined4 fn_001ca2b8();
extern undefined4 fn_001caa80(); extern undefined4 fn_0022f584(); extern undefined4 fn_0031ef00(); extern undefined4 fn_0031f8fc(); extern undefined4 fn_0031f954(); extern undefined4 fn_0031fe38();
extern undefined4 * fn_0031fee0(); extern undefined4 fn_003f7cdc(); extern undefined4 fn_0056a198(); extern int * fn_006888c0(); extern undefined4 fn_00689210(); extern int * fn_00689220();
extern int fn_006c3c2c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00569ee4; extern undefined4 DAT_00569eec; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00890a10;
extern undefined4 DAT_00890a14; extern undefined4 DAT_00890a18; extern undefined4 DAT_00890a1c; extern undefined4 DAT_00890a20;
extern undefined4 DAT_00890a24; extern undefined4 DAT_00890a34; extern undefined4 PTR_s_MenuMessageChangeColorParts000_007bd07c; extern undefined4 PTR_s_color_box_00_00890a64;
