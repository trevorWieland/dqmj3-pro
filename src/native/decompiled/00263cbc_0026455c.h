#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern uint fn_00101a50(); extern undefined4 * fn_00118290(); extern undefined4 fn_0011c184(); extern undefined4 * fn_001287b4();
extern undefined4 fn_0012d73c(); extern undefined4 fn_00145ac0(); extern uint fn_00179dc0(); extern undefined4 fn_001f835c(); extern int fn_00264f50(); extern undefined4 * fn_00301f50();
extern undefined4 fn_005f4484(); extern undefined4 * fn_005f44cc(); extern undefined4 * fn_005f4564(); extern undefined4 fn_0068c6ac(); extern int fn_006adb48(); extern undefined4 fn_006ec94c();
extern undefined4 fn_006ec970(); extern undefined4 fn_00785f5c(); extern undefined4 fn_00785fc4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e8; extern undefined4 s_H; extern undefined4 s_W;
