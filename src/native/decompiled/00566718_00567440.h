#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00128744(); extern undefined4 fn_00145b00(); extern undefined4 fn_001482f4(); extern bool fn_00154a6c(); extern undefined4 fn_00159f34(); extern undefined4 fn_001638a0();
extern undefined4 fn_0016a43c(); extern bool fn_001d9a94(); extern undefined4 fn_001d9f6c(); extern undefined4 fn_001d9f9c(); extern undefined4 fn_001da39c(); extern undefined4 fn_001daac0();
extern undefined4 fn_001daaf8(); extern undefined4 fn_001db0b0(); extern undefined4 fn_001dbb48(); extern undefined4 * fn_001dc088(); extern undefined4 fn_001eac78(); extern undefined4 fn_002113c8();
extern undefined4 fn_0021197c(); extern undefined4 fn_00211c48(); extern undefined4 fn_0023d3f4(); extern undefined4 fn_0023dca4(); extern int fn_0023e194(); extern undefined4 fn_0023e2ac();
extern int fn_002a4648(); extern undefined4 fn_002feef8(); extern undefined4 * fn_005ab93c(); extern undefined4 * fn_0065fdf0(); extern undefined4 fn_0068869c(); extern undefined4 * fn_0068ab5c();
extern bool fn_006cc1e4(); extern undefined4 fn_006f72e0(); extern bool fn_006f7a20(); extern undefined4 fn_006f7a48(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0083f86c; extern undefined4 DAT_0083f9b4; extern undefined4 DAT_00890fec;
extern undefined4 DAT_00890ff0; extern undefined4 DAT_008977e0; extern undefined4 DAT_0089780c; extern undefined4 DAT_00897810;
extern undefined4 PTR_FUN_0083fc04;
