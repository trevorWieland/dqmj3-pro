#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern uint fn_0010288c(); extern int fn_00116284(); extern undefined4 fn_00116988(); extern int fn_00116ea0(); extern undefined4 fn_00125150();
extern undefined4 fn_00145b00(); extern undefined4 fn_00146594(); extern undefined4 fn_0014d6cc(); extern undefined4 * fn_00153bfc(); extern int fn_001560d8(); extern undefined4 fn_0015cf8c();
extern longlong fn_0015cfa4(); extern undefined4 fn_0015e590(); extern int fn_00193178(); extern undefined4 fn_002feef8(); extern undefined4 fn_0052c424(); extern undefined4 fn_005f11cc();
extern undefined4 * fn_005f1264();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008523fc; extern undefined4 DAT_00858eec; extern undefined4 DAT_00858f10;
extern undefined4 DAT_0089a4d1; extern undefined4 DAT_0089a4d4; extern undefined4 DAT_0089a4d8; extern undefined4 DAT_008d192c;
extern undefined4 DAT_008d1930; extern undefined4 DAT_008d1934; extern undefined4 DAT_008d1936; extern undefined4 DAT_008d1938;
extern undefined4 DAT_008d2810; extern undefined4 DAT_008d2811; extern undefined4 DAT_008d2812;
